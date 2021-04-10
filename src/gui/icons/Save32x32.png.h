#ifndef SAVE32X32_PNG_H
#define SAVE32X32_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char Save32x32_png[] =
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x20, 
	0x00, 0x00, 0x00, 0x20, 0x08, 0x06, 0x00, 0x00, 0x00, 0x73, 
	0x7A, 0x7A, 0xF4, 0x00, 0x00, 0x00, 0x04, 0x73, 0x42, 0x49, 
	0x54, 0x08, 0x08, 0x08, 0x08, 0x7C, 0x08, 0x64, 0x88, 0x00, 
	0x00, 0x07, 0x6A, 0x49, 0x44, 0x41, 0x54, 0x58, 0x85, 0xC5, 
	0x97, 0x7D, 0x70, 0x54, 0xD5, 0x15, 0xC0, 0x7F, 0xF7, 0xBE, 
	0xB7, 0xBB, 0xC9, 0x6E, 0x36, 0x6B, 0xD6, 0x40, 0x30, 0x1F, 
	0x10, 0x8C, 0x0D, 0x21, 0xA1, 0x94, 0x9A, 0x1A, 0x14, 0x90, 
	0x22, 0xC8, 0xE7, 0x10, 0x68, 0x85, 0x58, 0xEB, 0xA0, 0x0E, 
	0xA3, 0xA5, 0x63, 0xFF, 0xB1, 0x33, 0xB5, 0x03, 0xAD, 0xFD, 
	0xA0, 0x1D, 0xA7, 0xD6, 0x91, 0x71, 0xC6, 0x3F, 0xDA, 0x99, 
	0x52, 0x67, 0xFA, 0x87, 0xD3, 0x4E, 0x75, 0xB0, 0x8E, 0x2D, 
	0x2D, 0x95, 0x0E, 0xD1, 0x42, 0x8B, 0x3A, 0x68, 0x95, 0xA0, 
	0x1D, 0x20, 0xA0, 0x01, 0x03, 0xA4, 0x8B, 0x26, 0x9B, 0xCD, 
	0xBE, 0x97, 0xDD, 0xF7, 0xDE, 0xBD, 0xB7, 0x7F, 0x84, 0x7D, 
	0x4D, 0x02, 0x48, 0x1D, 0xE9, 0xF4, 0xCC, 0x9C, 0x79, 0xF7, 
	0xEB, 0xDD, 0xF3, 0xDB, 0x73, 0xCE, 0x3D, 0x77, 0x1F, 0xFC, 
	0x9F, 0x45, 0x5C, 0x69, 0xC1, 0xCC, 0xB5, 0x8F, 0x77, 0x68, 
	0x23, 0x36, 0x49, 0x61, 0x16, 0x83, 0x88, 0x22, 0x70, 0x8C, 
	0xD2, 0x07, 0x30, 0xE2, 0xB9, 0xBE, 0x3D, 0x5B, 0x5F, 0xFB, 
	0x9F, 0x01, 0xD4, 0xAF, 0x7C, 0x32, 0x6D, 0xDB, 0xDE, 0x6F, 
	0x12, 0xF1, 0xD8, 0x82, 0x79, 0x6D, 0x8D, 0x89, 0xE9, 0xD3, 
	0xAA, 0xE4, 0x35, 0x95, 0xE5, 0x04, 0x81, 0xA2, 0x7F, 0x60, 
	0x48, 0xBF, 0x71, 0xA4, 0xAF, 0x90, 0x19, 0xCA, 0xBF, 0xAD, 
	0xF0, 0xEF, 0xEC, 0xDF, 0xFD, 0xBD, 0x33, 0x57, 0x15, 0xA0, 
	0x6E, 0xF5, 0xE3, 0xF5, 0x11, 0x69, 0xF6, 0xB7, 0xCF, 0x99, 
	0x91, 0x9B, 0x3F, 0xB7, 0xA9, 0x4A, 0x48, 0x31, 0x3D, 0x62, 
	0x5B, 0x58, 0x12, 0x2C, 0x29, 0x91, 0x52, 0x20, 0x04, 0x1C, 
	0x39, 0x7E, 0x46, 0xED, 0xD9, 0x7F, 0x24, 0x5F, 0x0C, 0xCC, 
	0xAD, 0xFD, 0x7F, 0xDA, 0x76, 0xE4, 0xAA, 0x00, 0xB4, 0x75, 
	0x6D, 0x8F, 0xE6, 0xF3, 0xB1, 0x57, 0x16, 0xB5, 0x37, 0x9D, 
	0x03, 0x51, 0x7F, 0x36, 0x33, 0x3C, 0xCD, 0x8A, 0xD8, 0x95, 
	0xD3, 0xA7, 0xA5, 0x2B, 0xE7, 0xB6, 0xD4, 0x49, 0x4B, 0x4A, 
	0x8A, 0x9E, 0x42, 0x1B, 0x43, 0x3C, 0x66, 0x33, 0xF0, 0x61, 
	0x8E, 0x5F, 0xEF, 0x7E, 0x3D, 0xA3, 0x3D, 0x7F, 0xDE, 0xA9, 
	0x97, 0x1E, 0x39, 0xF7, 0x49, 0x01, 0xAC, 0xC9, 0x03, 0xF1, 
	0xC6, 0x15, 0x0F, 0x5D, 0x5B, 0x95, 0x58, 0x78, 0x2E, 0x93, 
	0x6B, 0xE9, 0xED, 0xCF, 0xEC, 0x1F, 0xCA, 0xBA, 0x8F, 0x0E, 
	0x0D, 0x3B, 0x2F, 0xF4, 0x9D, 0x39, 0x5F, 0x7E, 0xEC, 0xE4, 
	0xB9, 0x99, 0x37, 0x34, 0xD6, 0x44, 0xEC, 0x88, 0x45, 0xD1, 
	0x53, 0xE4, 0x0B, 0x3E, 0xE9, 0x54, 0x9C, 0x64, 0xA2, 0xAC, 
	0xFC, 0xBD, 0xFE, 0xA1, 0xEB, 0xB3, 0xBD, 0x7F, 0x79, 0xEE, 
	0x53, 0x79, 0xA0, 0xBE, 0xEB, 0xC9, 0x72, 0x2B, 0x5F, 0xEC, 
	0xB6, 0x2C, 0x31, 0xC7, 0x37, 0x7A, 0xCD, 0x07, 0x7F, 0xFC, 
	0xEE, 0x81, 0xF1, 0xF3, 0x8D, 0xAB, 0x7E, 0x7A, 0x57, 0xBA, 
	0x3A, 0xF1, 0xCB, 0x7B, 0xD7, 0x2F, 0xA8, 0x18, 0x1A, 0x29, 
	0x12, 0x28, 0x8D, 0x31, 0x86, 0x9A, 0x74, 0x82, 0x5F, 0x3D, 
	0x7F, 0x20, 0xF7, 0xE1, 0xF0, 0xE8, 0xA2, 0x4F, 0x1A, 0x0A, 
	0x39, 0xBE, 0x63, 0x8D, 0x14, 0xE6, 0x19, 0x61, 0x4E, 0x07, 
	0x5A, 0xDD, 0x31, 0xD9, 0x38, 0x40, 0xDF, 0x9F, 0xB7, 0xFD, 
	0x76, 0x70, 0x70, 0xF4, 0xF7, 0xC7, 0xFB, 0x32, 0xCA, 0xB6, 
	0x24, 0x7E, 0xA0, 0x29, 0xFA, 0x1A, 0x67, 0xD4, 0xE7, 0xF3, 
	0xAD, 0x8D, 0x09, 0x0B, 0xB3, 0xF9, 0x93, 0x18, 0x87, 0x49, 
	0x1E, 0x98, 0xB1, 0xE6, 0xD1, 0x0D, 0xDA, 0x88, 0x96, 0x9B, 
	0x2B, 0xDE, 0x7E, 0xD6, 0x18, 0xF3, 0x8B, 0x48, 0x24, 0xB2, 
	0xC4, 0xB2, 0xAC, 0x09, 0x90, 0xC3, 0x7E, 0x9C, 0xD1, 0x6B, 
	0x6E, 0x64, 0xF9, 0xE2, 0x76, 0x06, 0x06, 0xF3, 0x04, 0x6A, 
	0x2C, 0x17, 0xCA, 0xA2, 0x92, 0x67, 0x5F, 0x7C, 0x99, 0x2F, 
	0x54, 0x1E, 0xC3, 0x18, 0x13, 0xAE, 0x57, 0x4A, 0x29, 0xDF, 
	0xF7, 0x9F, 0x77, 0x5D, 0xF7, 0xDE, 0x3D, 0x7B, 0xF6, 0x14, 
	0x27, 0x03, 0xD8, 0xE3, 0x3B, 0x5A, 0x5B, 0xA7, 0xA5, 0x0E, 
	0xFE, 0xA1, 0xB5, 0xFE, 0xD9, 0xA6, 0x4D, 0x9B, 0x96, 0x76, 
	0x76, 0x76, 0x22, 0xA5, 0x0C, 0x37, 0x34, 0xC6, 0x90, 0x77, 
	0x8B, 0xDC, 0xB6, 0xE5, 0x69, 0xA4, 0x04, 0x2F, 0xD0, 0x68, 
	0x6D, 0x18, 0x19, 0xF5, 0xA9, 0x49, 0xA7, 0x90, 0x76, 0x9C, 
	0x9D, 0x3B, 0x77, 0x62, 0x8C, 0x19, 0xAF, 0xD6, 0x33, 0xCF, 
	0x3C, 0x73, 0x67, 0x77, 0x77, 0xF7, 0x1B, 0xC0, 0x13, 0x1F, 
	0x0B, 0x50, 0xF4, 0xF5, 0xE9, 0xF9, 0x4D, 0x1F, 0x8C, 0x88, 
	0x41, 0x31, 0x7F, 0xC5, 0x8A, 0x15, 0xFC, 0xE1, 0x95, 0x1E, 
	0xBE, 0xF9, 0xE4, 0x4B, 0x17, 0xB9, 0xCD, 0xB6, 0x25, 0x42, 
	0x08, 0x3C, 0x5F, 0xA1, 0xB5, 0x41, 0x1B, 0x43, 0x2C, 0x62, 
	0xE1, 0x14, 0x3C, 0x66, 0x6F, 0x7C, 0x6A, 0xC2, 0xDA, 0x2F, 
	0x7D, 0xB1, 0x99, 0x87, 0xBA, 0x56, 0xD3, 0xDD, 0xDD, 0xFD, 
	0x00, 0xB0, 0x03, 0x30, 0x13, 0xF6, 0x1A, 0xDF, 0xC9, 0xEC, 
	0x7B, 0xE4, 0x5F, 0xD1, 0x6B, 0x36, 0x7C, 0x75, 0xD9, 0xED, 
	0xB7, 0xA7, 0x2D, 0xCB, 0xA2, 0x63, 0x76, 0x0D, 0xDF, 0xBF, 
	0x7F, 0x11, 0x4F, 0xBF, 0xD8, 0xC3, 0xD2, 0x85, 0x9F, 0xA5, 
	0xBC, 0x2C, 0x8A, 0x25, 0x05, 0xB6, 0x25, 0x11, 0x80, 0xE7, 
	0x6B, 0xB4, 0x31, 0x68, 0x6D, 0x30, 0x02, 0xB6, 0x6D, 0x59, 
	0x8D, 0x94, 0x02, 0x63, 0xE0, 0xF5, 0xC3, 0xEF, 0x73, 0x6E, 
	0xE0, 0x3C, 0xDF, 0xF8, 0xF2, 0x5C, 0x52, 0xA9, 0x14, 0x6D, 
	0x6D, 0x6D, 0xCD, 0x42, 0x88, 0xA5, 0xBB, 0x76, 0xED, 0xDA, 
	0x77, 0x59, 0x80, 0x0B, 0x72, 0xFF, 0xAA, 0x55, 0xAB, 0xC8, 
	0xE7, 0xF3, 0xF8, 0xBE, 0xCF, 0xCA, 0x8E, 0x46, 0x32, 0x83, 
	0x2E, 0xBB, 0x0F, 0xFE, 0x93, 0xDB, 0x6E, 0x69, 0x23, 0x93, 
	0x1D, 0xC5, 0x2D, 0x04, 0x18, 0x0C, 0xC6, 0x8C, 0x85, 0xC5, 
	0x2D, 0x06, 0xBC, 0xF0, 0xD7, 0x13, 0xB8, 0xC5, 0x80, 0xF6, 
	0xE6, 0x1A, 0x02, 0xAF, 0xC0, 0x91, 0xA3, 0x7D, 0xFC, 0xFC, 
	0x5B, 0x4B, 0xD1, 0x2A, 0xC0, 0x71, 0x1C, 0x96, 0x2F, 0x5F, 
	0xCE, 0xBB, 0xEF, 0xBE, 0xFB, 0x75, 0x60, 0x02, 0xC0, 0x84, 
	0x04, 0xDB, 0xB0, 0x61, 0xC3, 0xF5, 0x53, 0xA7, 0x4E, 0x5D, 
	0x5A, 0x57, 0x57, 0x87, 0xE3, 0x38, 0xD8, 0xB6, 0x8D, 0x6D, 
	0xDB, 0x6C, 0x5E, 0x3B, 0x97, 0x1B, 0x9B, 0xAB, 0x79, 0xF5, 
	0xAD, 0x63, 0x4C, 0xAD, 0x2A, 0x47, 0x19, 0x43, 0x36, 0x5F, 
	0x64, 0xE0, 0x23, 0x87, 0xF7, 0xCE, 0x0E, 0x73, 0xE6, 0x7C, 
	0x9E, 0x6C, 0xBE, 0x48, 0x53, 0x6D, 0x8A, 0x32, 0x1B, 0xFE, 
	0xFE, 0xE6, 0x31, 0x1E, 0x7B, 0x70, 0x31, 0xE9, 0x54, 0x1C, 
	0x29, 0x25, 0xA3, 0xA3, 0xA3, 0x34, 0x37, 0x37, 0x53, 0x51, 
	0x51, 0xB1, 0x7E, 0xDD, 0xBA, 0x75, 0x35, 0x97, 0x05, 0x10, 
	0x42, 0x3C, 0xB0, 0x71, 0xE3, 0x46, 0xE1, 0xBA, 0x6E, 0xA9, 
	0x8F, 0xD6, 0x1A, 0xA5, 0x14, 0x0F, 0xDF, 0xDD, 0xC1, 0xB4, 
	0x54, 0x8C, 0x57, 0xDF, 0x3A, 0x41, 0x3A, 0x59, 0x46, 0x76, 
	0xA4, 0x48, 0xCE, 0xF5, 0x50, 0x7A, 0x2C, 0xA4, 0xB5, 0xD5, 
	0x15, 0xCC, 0xBC, 0xAE, 0x92, 0x7D, 0x07, 0xDF, 0xE1, 0xDB, 
	0x77, 0xB7, 0x33, 0xF3, 0xBA, 0x4A, 0x8C, 0x31, 0x08, 0x21, 
	0x30, 0xC6, 0xE0, 0xFB, 0x3E, 0xCB, 0x96, 0x2D, 0x8B, 0x46, 
	0x22, 0x91, 0xCD, 0x97, 0x04, 0x58, 0xB2, 0x64, 0x89, 0x2D, 
	0x84, 0xB8, 0xAF, 0xBD, 0xBD, 0x9D, 0x7C, 0x3E, 0x8F, 0x6D, 
	0xDB, 0x18, 0x63, 0x50, 0x4A, 0x11, 0x04, 0x01, 0x2A, 0xF0, 
	0xF9, 0xC1, 0xE6, 0xF9, 0x44, 0xF1, 0x39, 0xD9, 0x77, 0x86, 
	0x9B, 0x66, 0x4F, 0x23, 0x1A, 0x19, 0x2B, 0xA4, 0x95, 0x89, 
	0x28, 0x37, 0xB5, 0xD4, 0xF0, 0xF2, 0xC1, 0x77, 0xE8, 0x5C, 
	0x30, 0x83, 0x8E, 0x96, 0xA9, 0x28, 0xA5, 0xC2, 0xD3, 0x23, 
	0xA5, 0xC4, 0x75, 0x5D, 0x3A, 0x3A, 0x3A, 0x00, 0xB6, 0x6C, 
	0xDF, 0xBE, 0x5D, 0x5E, 0x04, 0x90, 0x4E, 0xA7, 0xD7, 0x2C, 
	0x5A, 0xB4, 0xA8, 0x36, 0x12, 0x89, 0x50, 0x28, 0x14, 0x90, 
	0x52, 0x12, 0x04, 0x01, 0x9E, 0xE7, 0x51, 0x2C, 0x16, 0x29, 
	0x16, 0x8B, 0x68, 0x15, 0xF0, 0xE8, 0x03, 0x37, 0x93, 0xCB, 
	0x0E, 0x73, 0x76, 0xE0, 0x23, 0xE6, 0xCF, 0x9E, 0x46, 0xBC, 
	0x2C, 0xC2, 0xAD, 0x73, 0xEB, 0x79, 0xED, 0xED, 0x5E, 0xEA, 
	0xAB, 0x63, 0xDC, 0x71, 0xEB, 0x8C, 0x70, 0xBD, 0xE7, 0x79, 
	0x04, 0x41, 0x80, 0x6D, 0xDB, 0x78, 0x9E, 0x47, 0x32, 0x99, 
	0x64, 0xCE, 0x9C, 0x39, 0x33, 0x0F, 0x1F, 0x3E, 0xBC, 0xE2, 
	0x22, 0x00, 0x21, 0xC4, 0xD7, 0x56, 0xAE, 0x5C, 0x49, 0x2E, 
	0x97, 0x03, 0x20, 0x08, 0x02, 0x8C, 0x31, 0xE1, 0x26, 0xC6, 
	0x18, 0xB4, 0xD6, 0x44, 0x2C, 0xC3, 0x8F, 0x36, 0xB7, 0x73, 
	0xFC, 0xE4, 0x69, 0x06, 0xB3, 0x39, 0xD6, 0xDE, 0x32, 0x93, 
	0xDE, 0xF7, 0xCF, 0x91, 0xCB, 0x0E, 0xF3, 0x60, 0x67, 0x33, 
	0x9E, 0xE7, 0xE1, 0xFB, 0x3E, 0xBE, 0xEF, 0x13, 0x04, 0x01, 
	0x52, 0x4A, 0x94, 0x52, 0x68, 0xAD, 0x71, 0x5D, 0x97, 0xC5, 
	0x8B, 0x17, 0x63, 0x59, 0xD6, 0x96, 0x09, 0x00, 0xEB, 0xD6, 
	0xAD, 0xAB, 0xAD, 0xAE, 0xAE, 0x5E, 0xD5, 0xD0, 0xD0, 0x80, 
	0xE3, 0x38, 0x28, 0xA5, 0xC8, 0xE7, 0xF3, 0x00, 0x94, 0x97, 
	0x97, 0x87, 0xC5, 0x48, 0x29, 0x85, 0x52, 0x8A, 0xCA, 0x72, 
	0xC9, 0x0F, 0xEF, 0xF9, 0x1C, 0x6F, 0x1E, 0xEE, 0xE5, 0x6F, 
	0x6F, 0x9E, 0xA0, 0xE7, 0x68, 0x1F, 0x0F, 0x77, 0xB5, 0x60, 
	0x09, 0x43, 0x10, 0x04, 0x68, 0xAD, 0x01, 0x28, 0x2B, 0x2B, 
	0x43, 0x08, 0x41, 0x2E, 0x97, 0x43, 0x6B, 0x4D, 0xA1, 0x50, 
	0xA0, 0xA9, 0xA9, 0x89, 0xCA, 0xCA, 0xCA, 0xCE, 0xAE, 0xAE, 
	0xAE, 0xBA, 0x10, 0xC0, 0xB6, 0xED, 0xFB, 0xD6, 0xAF, 0x5F, 
	0x6F, 0xBB, 0xAE, 0x8B, 0x10, 0x22, 0xD4, 0xD1, 0xD1, 0x51, 
	0x7C, 0xDF, 0x27, 0x91, 0x48, 0x10, 0x8F, 0xC7, 0x89, 0x46, 
	0xA3, 0x08, 0x21, 0xB0, 0x2C, 0x8B, 0xDA, 0xEA, 0x04, 0x5B, 
	0xEF, 0x9A, 0x43, 0xCF, 0xD1, 0x53, 0x6C, 0xFD, 0x4A, 0x1B, 
	0x53, 0xAB, 0x12, 0x44, 0xA3, 0x51, 0xE2, 0xF1, 0x38, 0xC9, 
	0x64, 0x92, 0x64, 0x32, 0x89, 0xE7, 0x79, 0x38, 0x8E, 0x83, 
	0x94, 0x12, 0x29, 0x25, 0x91, 0x48, 0x04, 0xA5, 0x14, 0x0B, 
	0x17, 0x2E, 0xB4, 0xB5, 0xD6, 0xF7, 0xC3, 0x85, 0x3A, 0x20, 
	0x84, 0xB8, 0xBB, 0xBD, 0xBD, 0x1D, 0xD7, 0x75, 0xA9, 0xAD, 
	0xAD, 0x25, 0x9B, 0xCD, 0x32, 0x32, 0x32, 0x82, 0x10, 0x82, 
	0x20, 0x08, 0xC2, 0xB6, 0x65, 0x59, 0x24, 0x93, 0x49, 0x60, 
	0xEC, 0xFC, 0xDF, 0x9C, 0x4E, 0xF3, 0xBB, 0x9F, 0x34, 0x50, 
	0x51, 0x6E, 0x23, 0xA5, 0x44, 0x6B, 0x8D, 0xD6, 0x7A, 0x2C, 
	0x5F, 0xB4, 0x0E, 0xDF, 0x91, 0x52, 0x92, 0x4A, 0xA5, 0xA8, 
	0xAE, 0xAE, 0xA6, 0xBF, 0xBF, 0x9F, 0x8E, 0x8E, 0x0E, 0xF6, 
	0xEE, 0xDD, 0x7B, 0x0F, 0xF0, 0xE3, 0x52, 0x21, 0xFA, 0x4C, 
	0x32, 0x99, 0x64, 0x64, 0x64, 0x84, 0xB3, 0x67, 0xCF, 0xA2, 
	0xB5, 0x46, 0xCA, 0xB1, 0xF4, 0xB0, 0x2C, 0x2B, 0x34, 0xA8, 
	0xB5, 0x0E, 0xF3, 0xA1, 0xD4, 0x8F, 0xD9, 0xE0, 0xFB, 0xFE, 
	0x04, 0xCF, 0xC5, 0x62, 0x31, 0x84, 0xF8, 0xCF, 0x3D, 0x67, 
	0x8C, 0x21, 0x9F, 0xCF, 0xE3, 0x38, 0x0E, 0x5A, 0x6B, 0xA6, 
	0x4C, 0x99, 0x82, 0xD6, 0xFA, 0x86, 0xD0, 0x03, 0x40, 0xCC, 
	0xF3, 0x3C, 0x6C, 0xDB, 0x0E, 0x5F, 0x1C, 0x7F, 0x01, 0x95, 
	0x9E, 0x25, 0xA8, 0xCB, 0xCD, 0x8F, 0x9F, 0x2B, 0xE9, 0xF8, 
	0xB9, 0x52, 0x6E, 0x0C, 0x0C, 0x0C, 0x84, 0xED, 0xB0, 0x14, 
	0x07, 0x41, 0xC0, 0xF1, 0xE3, 0xC7, 0x2F, 0xDA, 0x40, 0x6B, 
	0x3D, 0xF9, 0x76, 0xBB, 0xE4, 0xD8, 0x7F, 0xBB, 0x16, 0xA0, 
	0xB6, 0xB6, 0x36, 0x84, 0x0D, 0x7F, 0x52, 0x89, 0x08, 0xE0, 
	0xD0, 0xA1, 0x43, 0xF4, 0xF4, 0xF4, 0xD0, 0xDB, 0xDB, 0x4B, 
	0x7F, 0x7F, 0x3F, 0x99, 0x4C, 0x86, 0x6C, 0x36, 0x8B, 0xE3, 
	0x38, 0x14, 0x8B, 0xC5, 0xB0, 0xC8, 0x94, 0xAA, 0x9C, 0x31, 
	0x86, 0xC1, 0xC1, 0x41, 0x1A, 0x1A, 0x1A, 0xC8, 0x66, 0xB3, 
	0x34, 0x34, 0x34, 0x30, 0x34, 0x34, 0xC4, 0xF4, 0xE9, 0xD3, 
	0xC9, 0x66, 0xB3, 0x34, 0x36, 0x36, 0x86, 0xCF, 0xC9, 0xB6, 
	0x42, 0x80, 0xF1, 0xEE, 0x2A, 0xC5, 0xFD, 0x72, 0x72, 0x29, 
	0xB7, 0x4F, 0x9E, 0xBB, 0x5C, 0x38, 0x00, 0x94, 0x52, 0x1F, 
	0xEF, 0x81, 0x58, 0x2C, 0x36, 0x21, 0xDE, 0x1F, 0x07, 0x32, 
	0x79, 0xF3, 0xC9, 0x73, 0x97, 0x92, 0xF1, 0xB6, 0xC2, 0x1C, 
	0x28, 0x51, 0x19, 0x63, 0x68, 0x6D, 0x6D, 0x45, 0x29, 0x15, 
	0x96, 0xD0, 0x92, 0xCB, 0x95, 0x52, 0x08, 0x21, 0x26, 0xD4, 
	0xF9, 0x2B, 0xC1, 0x4C, 0x1E, 0x2B, 0x1D, 0x6D, 0x40, 0x87, 
	0x00, 0xC6, 0x98, 0xBE, 0x53, 0xA7, 0x4E, 0x35, 0xCE, 0x9A, 
	0x35, 0x2B, 0x4C, 0x9C, 0x52, 0xF2, 0x94, 0xDA, 0x57, 0xD2, 
	0xBA, 0xBA, 0x3A, 0xB4, 0xD6, 0xB4, 0xB6, 0xB6, 0xE2, 0x79, 
	0x1E, 0x2D, 0x2D, 0x2D, 0x14, 0x0A, 0x05, 0x9A, 0x9B, 0x9B, 
	0x71, 0x1C, 0x87, 0xA6, 0xA6, 0x26, 0x72, 0xB9, 0x1C, 0xA9, 
	0x54, 0xAA, 0x74, 0xD4, 0x8F, 0x01, 0x65, 0x36, 0x80, 0xEB, 
	0xBA, 0xDF, 0xD9, 0xB1, 0x63, 0xC7, 0x13, 0x52, 0xCA, 0xFA, 
	0x2B, 0xFA, 0xFD, 0x2A, 0x88, 0x52, 0xAA, 0x3F, 0x93, 0xC9, 
	0x3C, 0x06, 0x44, 0x4B, 0xD5, 0xA2, 0x0C, 0xB8, 0x16, 0xA8, 
	0x02, 0x2A, 0x81, 0x28, 0x10, 0xB9, 0xCA, 0x76, 0x3D, 0xC6, 
	0x3E, 0x84, 0x0A, 0x40, 0x0E, 0x38, 0x0F, 0x9C, 0x1F, 0xFF, 
	0xB7, 0x5C, 0x00, 0x89, 0x0B, 0x5A, 0xC6, 0x25, 0xBE, 0x9A, 
	0x3E, 0xA5, 0x04, 0x17, 0xB4, 0x00, 0xE4, 0x2F, 0x00, 0xF1, 
	0x6F, 0x58, 0x9E, 0x5D, 0x7F, 0xFF, 0xA4, 0xDA, 0x78, 0x00, 
	0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 
	0x82, 
};

wxBitmap& Save32x32_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( Save32x32_png, sizeof( Save32x32_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
}


#endif //SAVE32X32_PNG_H
