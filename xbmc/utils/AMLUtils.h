#pragma once
/*
 *      Copyright (C) 2011-2013 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

enum AML_DEVICE_TYPE
{
  AML_DEVICE_TYPE_UNINIT   = -2,
  AML_DEVICE_TYPE_UNKNOWN  = -1,
  AML_DEVICE_TYPE_M1,
  AML_DEVICE_TYPE_M3,
  AML_DEVICE_TYPE_M6,
  AML_DEVICE_TYPE_M8
};

int aml_set_sysfs_str(const char *path, const char *val);
int aml_get_sysfs_str(const char *path, char *valstr, const int size);
int aml_set_sysfs_int(const char *path, const int val);
int aml_get_sysfs_int(const char *path);

bool aml_present();
void aml_permissions();
bool aml_hw3d_present();
bool aml_wired_present();
enum AML_DEVICE_TYPE aml_get_device_type();
void aml_cpufreq_min(bool limit);
void aml_cpufreq_max(bool limit);
void aml_set_audio_passthrough(bool passthrough);
