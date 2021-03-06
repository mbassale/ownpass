//
// Created by Marco Bassaletti on 30-03-21.
//

#ifndef OWNPASS_SAMPLESTORAGEFIXTURE_H
#define OWNPASS_SAMPLESTORAGEFIXTURE_H

#include "catch.hpp"
#include "../src/NSPass.h"
#include "../src/Application.h"
#include "../src/Category.h"
#include "../src/Group.h"
#include "../src/Password.h"

class SampleStorageFixture {
public:
	SampleStorageFixture();
	~SampleStorageFixture();

	void reset_sample_storage();
	NSPass::CategoryPtr get_random_category();
	static NSPass::GroupPtr get_random_group(const NSPass::CategoryPtr& category);
	static NSPass::PasswordPtr get_random_password(const NSPass::GroupPtr& group);
	[[nodiscard]] NSPass::Signals::SignalContext& get_signal_context() { return app.get_signal_context(); }
	[[nodiscard]] NSPass::Storage::Storage& get_storage() { return app.get_storage(); }
protected:
	static constexpr auto DefaultMasterPassword = "test1234";
	NSPass::Application& app;

	static std::string get_master_password();
	static std::string get_storage_location();
};

#endif //OWNPASS_SAMPLESTORAGEFIXTURE_H
