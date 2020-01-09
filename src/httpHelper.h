#ifndef _HTTPHELPER_H
#define _HTTPHELPER_H

/**
 * Access point SSID & Password  
 */
 const char* ssid = "CNS-Guest";
// const char* ssid = "CNS-1";
const char* password =  "sgi19!2021";
// const char* ssid = "DiepNguyen2";
// const char* password = "13091972";
// const char* ssid = "C-316";
// const char* password =  "tumotdenchin";

/**
 * BACKEND COMMUNICATION
 */
// MCP HTTPS Certificate
const char* root_ca= \
"-----BEGIN CERTIFICATE-----\n" \
"MIIFWjCCBEKgAwIBAgISAzPyTsBVGz3oF9irg8jlqIJrMA0GCSqGSIb3DQEBCwUA\n" \
"MEoxCzAJBgNVBAYTAlVTMRYwFAYDVQQKEw1MZXQncyBFbmNyeXB0MSMwIQYDVQQD\n" \
"ExpMZXQncyBFbmNyeXB0IEF1dGhvcml0eSBYMzAeFw0xOTA1MjcwNTQwNTFaFw0x\n" \
"OTA4MjUwNTQwNTFaMBwxGjAYBgNVBAMTEXVhdC1hcGkudmluYWlkLnZuMIIBIjAN\n" \
"BgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAtsnKwpuroUO7qTPO+9gLgpbRQA3k\n" \
"wSPVkq3LhcpSL/KyMGdkipieOreQDTy8jsDKuGbjZ5dKiOwDRUkX0ZWMS110WLSm\n" \
"KZb5T9QixiZ5jEjmuU/FnuGN7s/l/UtrK3Bn1I/zcPEzqGuEhXFLr6t2/bG2jkZ5\n" \
"dl6EalGTHrK6XhChoalX3IqaQVfGNi+LJcoSyNFLucXMS+D2oPI+7NV126zIeoAM\n" \
"ZH2XMQdwwZ/RdHprr+0fQhDYyD1pwSXS8gpiHKpabmZZTgFDdl+FVFAdiCPiFna6\n" \
"7P8kpJoekYybQD8hxkWjulxjKupaVsatVFrIJlS/LKFuKU4RX8SaLtBV3wIDAQAB\n" \
"o4ICZjCCAmIwDgYDVR0PAQH/BAQDAgWgMB0GA1UdJQQWMBQGCCsGAQUFBwMBBggr\n" \
"BgEFBQcDAjAMBgNVHRMBAf8EAjAAMB0GA1UdDgQWBBSp+hadanoXyTd4e2K8CshS\n" \
"oqVfVjAfBgNVHSMEGDAWgBSoSmpjBH3duubRObemRWXv86jsoTBvBggrBgEFBQcB\n" \
"AQRjMGEwLgYIKwYBBQUHMAGGImh0dHA6Ly9vY3NwLmludC14My5sZXRzZW5jcnlw\n" \
"dC5vcmcwLwYIKwYBBQUHMAKGI2h0dHA6Ly9jZXJ0LmludC14My5sZXRzZW5jcnlw\n" \
"dC5vcmcvMBwGA1UdEQQVMBOCEXVhdC1hcGkudmluYWlkLnZuMEwGA1UdIARFMEMw\n" \
"CAYGZ4EMAQIBMDcGCysGAQQBgt8TAQEBMCgwJgYIKwYBBQUHAgEWGmh0dHA6Ly9j\n" \
"cHMubGV0c2VuY3J5cHQub3JnMIIBBAYKKwYBBAHWeQIEAgSB9QSB8gDwAHUAdH7a\n" \
"gzGtMxCRIZzOJU9CcMK//V5CIAjGNzV55hB7zFYAAAFq+AU01QAABAMARjBEAiB7\n" \
"jGOxOrYKmRVN5rSUcELjODI+SZyzI9csPGKxsn5a3AIgdGh+rhB9IwZsbMRbKzAn\n" \
"WfeSISHOVShNuPNUm7oaFc4AdwBj8tvN6DvMLM8LcoQnV2szpI1hd4+9daY4scdo\n" \
"VEvYjQAAAWr4BTbGAAAEAwBIMEYCIQDKH0e8CNPoOKX0sOLq8ucFwt8bIcZwhDXy\n" \
"s9ZhxTdcCQIhAIG2ag3ypFyo4s3jg00tSCTqQeaed6kR4JAgUu0hHtcQMA0GCSqG\n" \
"SIb3DQEBCwUAA4IBAQBcoRc88Fcm7VglRyZnlKqaqTjU8ntm+ft4ss+4zxwUJcGr\n" \
"eDeoOaKq5QEac4ksP59wWuA+2+NmWUnqRlYgMyaMbIXaFM/v6XYCOljYCiDnG/+L\n" \
"sxv3nG8jP10PdCVxVinFccPJ12jUX+q3LrxduHZc/6Hz2hAngaQZmwq9D0TuCj2J\n" \
"AGC3MLJ5kXuDBOiJPLWD/1d9hUeJUQ60y6EPrrgbxQ97IR09iyhhSvQKy9wzkeAO\n" \
"54ik6AGlqtzC0L9/B8hpZKgtlmneyWDzBt+EjcaA2OJK26GpoYs8g8Igku0n9ssr\n" \
"bNxeJ4F2IH4QdjhQuUXIo9Zilqltc7EGof+Mv70c\n" \
"-----END CERTIFICATE-----\n";
// Header type
const char* nameHeader = "Authorization";

// const char* token = "Bearer eyJhbGciOiJIUzUxMiJ9.eyJzdWIiOiJkZXZpY2VAMiIsImV4cCI6MTYwNTEwNTY1NH0.SipEN2HwDQ8H7GokGFBQxHgtREUEem-SHXayeAXEtOJ9aqvDpSGfuneWgYXCt0RCPvCDWc-y95TE8memYTWiOg";
const char* token = "Bearer eyJhbGciOiJIUzUxMiJ9.eyJzdWIiOiJkZXZpY2VAMiIsImV4cCI6MTYwNTEwODIzMn0.DYpbeZzwtPpiixmAR94HEhb0vOV_usJZ-bvFBWihBfzDaIiok-BYsGL20gSkvDlHT1KotKuSRDIbsbCNsnSIPA";
const char* whiteListURL = "https://api.vinaid.vn:1443/api/attendance/white-list/00000047";
// const char* whiteListURL  = "https://uat-api.vinaid.vn:1443/api/attendance/white-list/00100001";
#endif