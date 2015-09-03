#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x14 = INT16_MIN;
volatile int32_t t2 = -78368;
uint16_t x32 = UINT16_MAX;
uint16_t x34 = UINT16_MAX;
uint32_t x40 = UINT32_MAX;
volatile uint32_t t6 = UINT32_MAX;
int32_t t8 = -5;
int8_t x57 = INT8_MAX;
volatile int32_t t9 = 38871;
volatile int32_t t10 = INT32_MAX;
int32_t t11 = 8;
int16_t x82 = INT16_MIN;
uint8_t x106 = 2U;
volatile int32_t t15 = -37;
static volatile int16_t x124 = INT16_MAX;
int64_t x134 = -1LL;
volatile uint16_t x137 = 17U;
int16_t x138 = 1946;
int16_t x142 = INT16_MIN;
static uint32_t x143 = 831U;
static uint8_t x144 = 31U;
int16_t x151 = -385;
static int32_t x154 = 86;
static int8_t x180 = 1;
int64_t x190 = 183329249LL;
volatile int32_t t33 = 39891930;
int32_t x208 = INT32_MIN;
int16_t x212 = 847;
int16_t x217 = -456;
uint64_t x226 = UINT64_MAX;
uint64_t x237 = UINT64_MAX;
uint8_t x242 = 1U;
static int8_t x244 = -1;
static volatile int32_t t39 = 5222;
volatile uint64_t t40 = UINT64_MAX;
volatile int64_t t46 = INT64_MAX;
int8_t x284 = 1;
volatile int16_t x290 = INT16_MAX;
uint32_t x295 = UINT32_MAX;
static int16_t x303 = INT16_MIN;
volatile int8_t x308 = INT8_MIN;
volatile uint32_t x312 = 228543U;
int64_t x317 = INT64_MIN;
volatile int8_t x318 = -10;
uint32_t x336 = 379U;
uint8_t x346 = 12U;
static int16_t x347 = INT16_MAX;
static uint16_t x350 = UINT16_MAX;
int64_t x356 = INT64_MAX;
int16_t x372 = -1;
int64_t x376 = 251LL;
static int8_t x377 = INT8_MIN;
static int32_t x378 = -1;
volatile int32_t t67 = -14291;
int16_t x382 = -1;
int64_t x383 = 595620064442LL;
int32_t t68 = 100;
int8_t x386 = 38;
uint8_t x387 = 109U;
volatile uint32_t x391 = UINT32_MAX;
uint64_t x403 = 69663800685632LLU;
int16_t x407 = INT16_MAX;
volatile int8_t x408 = 8;
static int8_t x409 = -1;
int16_t x424 = 1271;
static int16_t x431 = INT16_MIN;
uint8_t x434 = 1U;
int64_t x435 = INT64_MIN;
static int64_t x436 = 447845047837903843LL;
int32_t x438 = -1;
static uint32_t t78 = 3266U;
int16_t x442 = -1;
int16_t x447 = INT16_MIN;
uint16_t x450 = UINT16_MAX;
volatile int64_t t81 = INT64_MIN;
int8_t x455 = INT8_MAX;
static volatile uint16_t x467 = 332U;
volatile int64_t t83 = INT64_MAX;
int64_t x469 = INT64_MAX;
static int64_t x477 = INT64_MIN;
volatile int32_t t86 = 1571418;
uint32_t x489 = UINT32_MAX;
static int8_t x491 = 1;
int8_t x523 = INT8_MIN;
int32_t x525 = INT32_MIN;
static volatile int32_t x529 = 5497;
int8_t x534 = INT8_MAX;
volatile int32_t t97 = -9;
volatile int16_t x550 = INT16_MIN;
int8_t x552 = INT8_MAX;


void f0(void) {
	int16_t x9 = INT16_MIN;
	static int32_t x10 = 17714866;
	static uint32_t x11 = 0U;
	static int32_t x12 = INT32_MAX;
	static volatile int32_t t0 = INT32_MAX;

	t0 = ((x9==(x10*x11))|x12);

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x13 = INT8_MIN;
	uint16_t x15 = 3635U;
	uint32_t x16 = UINT32_MAX;
	uint32_t t1 = UINT32_MAX;

	t1 = ((x13==(x14*x15))|x16);

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x21 = -518846702627736LL;
	uint64_t x22 = UINT64_MAX;
	uint8_t x23 = 36U;
	static volatile int16_t x24 = INT16_MIN;

	t2 = ((x21==(x22*x23))|x24);

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = INT64_MIN;
	int8_t x26 = INT8_MIN;
	int64_t x27 = -126666626778024LL;
	int32_t x28 = -1;
	static int32_t t3 = 324;

	t3 = ((x25==(x26*x27))|x28);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x29 = UINT8_MAX;
	int64_t x30 = 3239147939581LL;
	static int16_t x31 = INT16_MIN;
	int32_t t4 = -1;

	t4 = ((x29==(x30*x31))|x32);

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x33 = UINT8_MAX;
	int16_t x35 = 1;
	static int64_t x36 = -1LL;
	volatile int64_t t5 = 14982391138088LL;

	t5 = ((x33==(x34*x35))|x36);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x37 = INT32_MIN;
	int32_t x38 = -7059572;
	int32_t x39 = -1;

	t6 = ((x37==(x38*x39))|x40);

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x45 = INT64_MAX;
	int8_t x46 = -55;
	int16_t x47 = 7538;
	static int32_t x48 = -28;
	int32_t t7 = 3;

	t7 = ((x45==(x46*x47))|x48);

	if (t7 != -28) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x53 = INT8_MIN;
	volatile uint32_t x54 = 12U;
	int8_t x55 = INT8_MIN;
	int16_t x56 = INT16_MIN;

	t8 = ((x53==(x54*x55))|x56);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x58 = 58060993314LLU;
	int64_t x59 = 11LL;
	int16_t x60 = INT16_MIN;

	t9 = ((x57==(x58*x59))|x60);

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x61 = 3U;
	static volatile int16_t x62 = -1528;
	static uint32_t x63 = UINT32_MAX;
	int32_t x64 = INT32_MAX;

	t10 = ((x61==(x62*x63))|x64);

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x73 = 51U;
	volatile uint16_t x74 = 3U;
	int64_t x75 = 97858001416098528LL;
	int32_t x76 = -1;

	t11 = ((x73==(x74*x75))|x76);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x81 = 626U;
	static volatile int8_t x83 = INT8_MIN;
	int64_t x84 = -1329883563746377LL;
	static volatile int64_t t12 = -8163LL;

	t12 = ((x81==(x82*x83))|x84);

	if (t12 != -1329883563746377LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x85 = -1;
	int64_t x86 = INT64_MIN;
	uint64_t x87 = UINT64_MAX;
	volatile int64_t x88 = INT64_MIN;
	int64_t t13 = INT64_MIN;

	t13 = ((x85==(x86*x87))|x88);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x89 = -1;
	int64_t x90 = -1LL;
	static volatile int32_t x91 = -1;
	static int32_t x92 = -47352132;
	volatile int32_t t14 = 5919;

	t14 = ((x89==(x90*x91))|x92);

	if (t14 != -47352132) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x105 = -1;
	static uint32_t x107 = 7U;
	volatile int8_t x108 = INT8_MIN;

	t15 = ((x105==(x106*x107))|x108);

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x109 = 2;
	volatile int8_t x110 = INT8_MIN;
	static uint32_t x111 = 14U;
	int8_t x112 = INT8_MIN;
	volatile int32_t t16 = -313485;

	t16 = ((x109==(x110*x111))|x112);

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x113 = INT32_MIN;
	volatile uint64_t x114 = UINT64_MAX;
	uint8_t x115 = 34U;
	static int32_t x116 = -1;
	volatile int32_t t17 = 831201;

	t17 = ((x113==(x114*x115))|x116);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x121 = -1;
	static uint32_t x122 = 1959798729U;
	int8_t x123 = INT8_MIN;
	static int32_t t18 = -9714;

	t18 = ((x121==(x122*x123))|x124);

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x129 = 6LLU;
	int16_t x130 = -2029;
	uint16_t x131 = UINT16_MAX;
	uint32_t x132 = 114141U;
	volatile uint32_t t19 = 9271U;

	t19 = ((x129==(x130*x131))|x132);

	if (t19 != 114141U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x133 = -1;
	int64_t x135 = -1LL;
	static uint16_t x136 = 139U;
	volatile int32_t t20 = 2;

	t20 = ((x133==(x134*x135))|x136);

	if (t20 != 139) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x139 = 1;
	int32_t x140 = INT32_MIN;
	volatile int32_t t21 = INT32_MIN;

	t21 = ((x137==(x138*x139))|x140);

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x141 = -44000839046LL;
	int32_t t22 = -4313;

	t22 = ((x141==(x142*x143))|x144);

	if (t22 != 31) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x149 = 1;
	int32_t x150 = -1;
	int32_t x152 = INT32_MIN;
	int32_t t23 = INT32_MIN;

	t23 = ((x149==(x150*x151))|x152);

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x153 = -1LL;
	uint32_t x155 = 61U;
	int32_t x156 = INT32_MAX;
	static int32_t t24 = INT32_MAX;

	t24 = ((x153==(x154*x155))|x156);

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x157 = -1LL;
	uint16_t x158 = 3U;
	static uint64_t x159 = 1065209425610LLU;
	int8_t x160 = INT8_MIN;
	volatile int32_t t25 = -346;

	t25 = ((x157==(x158*x159))|x160);

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x165 = INT8_MAX;
	int16_t x166 = INT16_MIN;
	uint32_t x167 = 3U;
	uint64_t x168 = 68063LLU;
	volatile uint64_t t26 = 985004485417360LLU;

	t26 = ((x165==(x166*x167))|x168);

	if (t26 != 68063LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x169 = 1838U;
	static int16_t x170 = INT16_MIN;
	static volatile int16_t x171 = INT16_MAX;
	static volatile int8_t x172 = -1;
	static int32_t t27 = 438;

	t27 = ((x169==(x170*x171))|x172);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x173 = 177U;
	uint32_t x174 = 2323U;
	static volatile int32_t x175 = INT32_MAX;
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = ((x173==(x174*x175))|x176);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x177 = INT8_MAX;
	int64_t x178 = INT64_MAX;
	static uint16_t x179 = 0U;
	int32_t t29 = -956;

	t29 = ((x177==(x178*x179))|x180);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MIN;
	int8_t x183 = -2;
	static int16_t x184 = INT16_MIN;
	volatile int32_t t30 = 279;

	t30 = ((x181==(x182*x183))|x184);

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x189 = INT32_MAX;
	volatile int32_t x191 = -1;
	int16_t x192 = -1;
	int32_t t31 = -6610;

	t31 = ((x189==(x190*x191))|x192);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x197 = INT16_MAX;
	volatile int64_t x198 = -1LL;
	volatile int16_t x199 = -1;
	volatile int32_t x200 = -789;
	volatile int32_t t32 = -32579298;

	t32 = ((x197==(x198*x199))|x200);

	if (t32 != -789) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x201 = 5;
	uint64_t x202 = 8364LLU;
	int16_t x203 = INT16_MIN;
	volatile uint8_t x204 = 59U;

	t33 = ((x201==(x202*x203))|x204);

	if (t33 != 59) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x205 = 651911819;
	uint8_t x206 = UINT8_MAX;
	volatile int16_t x207 = INT16_MIN;
	volatile int32_t t34 = INT32_MIN;

	t34 = ((x205==(x206*x207))|x208);

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x209 = -2890;
	int64_t x210 = 225LL;
	int16_t x211 = -1;
	int32_t t35 = 12016;

	t35 = ((x209==(x210*x211))|x212);

	if (t35 != 847) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x218 = 2;
	uint8_t x219 = 27U;
	static int16_t x220 = -8404;
	static volatile int32_t t36 = 8839;

	t36 = ((x217==(x218*x219))|x220);

	if (t36 != -8404) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x225 = 26U;
	uint32_t x227 = 1970U;
	int16_t x228 = INT16_MAX;
	int32_t t37 = 0;

	t37 = ((x225==(x226*x227))|x228);

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x238 = INT16_MAX;
	int8_t x239 = -1;
	volatile uint64_t x240 = 79799607LLU;
	uint64_t t38 = 30790LLU;

	t38 = ((x237==(x238*x239))|x240);

	if (t38 != 79799607LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x241 = -1;
	volatile uint64_t x243 = 3143LLU;

	t39 = ((x241==(x242*x243))|x244);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x249 = 1;
	uint8_t x250 = 39U;
	uint32_t x251 = UINT32_MAX;
	static volatile uint64_t x252 = UINT64_MAX;

	t40 = ((x249==(x250*x251))|x252);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x253 = -1LL;
	int16_t x254 = -1;
	static uint32_t x255 = UINT32_MAX;
	volatile int8_t x256 = INT8_MAX;
	int32_t t41 = 2272;

	t41 = ((x253==(x254*x255))|x256);

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x257 = 669U;
	int64_t x258 = -51630632LL;
	static uint16_t x259 = UINT16_MAX;
	int16_t x260 = INT16_MIN;
	static volatile int32_t t42 = -1;

	t42 = ((x257==(x258*x259))|x260);

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x261 = UINT16_MAX;
	static uint8_t x262 = UINT8_MAX;
	int32_t x263 = -1;
	uint16_t x264 = 2839U;
	volatile int32_t t43 = 3887;

	t43 = ((x261==(x262*x263))|x264);

	if (t43 != 2839) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x265 = -1;
	static uint8_t x266 = 109U;
	uint64_t x267 = 1749548LLU;
	int8_t x268 = -1;
	volatile int32_t t44 = -228;

	t44 = ((x265==(x266*x267))|x268);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x269 = 576100U;
	static uint8_t x270 = 16U;
	static volatile int8_t x271 = -22;
	int8_t x272 = -1;
	static int32_t t45 = 17824;

	t45 = ((x269==(x270*x271))|x272);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x273 = -1;
	static int32_t x274 = -1;
	int64_t x275 = -1LL;
	int64_t x276 = INT64_MAX;

	t46 = ((x273==(x274*x275))|x276);

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MIN;
	static int8_t x283 = INT8_MIN;
	int32_t t47 = -117658;

	t47 = ((x281==(x282*x283))|x284);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x285 = 946290273LLU;
	static volatile uint64_t x286 = 3711040509084362130LLU;
	uint64_t x287 = UINT64_MAX;
	uint8_t x288 = UINT8_MAX;
	int32_t t48 = 3;

	t48 = ((x285==(x286*x287))|x288);

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x289 = INT8_MIN;
	static uint16_t x291 = 1U;
	int32_t x292 = -1;
	int32_t t49 = -2;

	t49 = ((x289==(x290*x291))|x292);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x293 = -7511548;
	uint16_t x294 = 7924U;
	int8_t x296 = INT8_MIN;
	static volatile int32_t t50 = 2127444;

	t50 = ((x293==(x294*x295))|x296);

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x297 = 7U;
	volatile uint8_t x298 = 10U;
	uint8_t x299 = UINT8_MAX;
	int8_t x300 = -2;
	volatile int32_t t51 = -837417;

	t51 = ((x297==(x298*x299))|x300);

	if (t51 != -2) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x301 = 9039;
	volatile uint16_t x302 = UINT16_MAX;
	volatile uint8_t x304 = 1U;
	volatile int32_t t52 = -70;

	t52 = ((x301==(x302*x303))|x304);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x305 = INT32_MIN;
	int16_t x306 = 0;
	int16_t x307 = INT16_MIN;
	volatile int32_t t53 = -2052976;

	t53 = ((x305==(x306*x307))|x308);

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x309 = 3;
	int8_t x310 = 0;
	volatile int64_t x311 = INT64_MIN;
	uint32_t t54 = 7801572U;

	t54 = ((x309==(x310*x311))|x312);

	if (t54 != 228543U) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x319 = -11;
	static uint32_t x320 = UINT32_MAX;
	volatile uint32_t t55 = UINT32_MAX;

	t55 = ((x317==(x318*x319))|x320);

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x321 = 11385302357LL;
	static int64_t x322 = -68278022088LL;
	int32_t x323 = -1;
	static int8_t x324 = INT8_MAX;
	int32_t t56 = -8;

	t56 = ((x321==(x322*x323))|x324);

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x325 = INT64_MIN;
	int8_t x326 = INT8_MIN;
	static int16_t x327 = -185;
	int32_t x328 = INT32_MIN;
	int32_t t57 = INT32_MIN;

	t57 = ((x325==(x326*x327))|x328);

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x333 = INT32_MAX;
	int8_t x334 = INT8_MIN;
	int16_t x335 = INT16_MIN;
	uint32_t t58 = 55U;

	t58 = ((x333==(x334*x335))|x336);

	if (t58 != 379U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x337 = UINT16_MAX;
	volatile uint8_t x338 = UINT8_MAX;
	int64_t x339 = 5571536780261500LL;
	static int8_t x340 = -1;
	static int32_t t59 = -379;

	t59 = ((x337==(x338*x339))|x340);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x345 = 31;
	int64_t x348 = -27145830443994LL;
	volatile int64_t t60 = 0LL;

	t60 = ((x345==(x346*x347))|x348);

	if (t60 != -27145830443994LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x349 = INT64_MAX;
	int8_t x351 = INT8_MAX;
	static int64_t x352 = -1LL;
	static volatile int64_t t61 = 0LL;

	t61 = ((x349==(x350*x351))|x352);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x353 = INT32_MIN;
	int16_t x354 = -1;
	int8_t x355 = INT8_MAX;
	volatile int64_t t62 = INT64_MAX;

	t62 = ((x353==(x354*x355))|x356);

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x361 = INT16_MAX;
	volatile int64_t x362 = -9066LL;
	uint8_t x363 = 6U;
	static int8_t x364 = -1;
	static int32_t t63 = -172054;

	t63 = ((x361==(x362*x363))|x364);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x365 = INT8_MIN;
	int8_t x366 = INT8_MIN;
	static volatile uint16_t x367 = 4U;
	uint8_t x368 = 26U;
	int32_t t64 = -166162656;

	t64 = ((x365==(x366*x367))|x368);

	if (t64 != 26) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x369 = 901;
	volatile int8_t x370 = INT8_MIN;
	uint16_t x371 = 505U;
	int32_t t65 = -500;

	t65 = ((x369==(x370*x371))|x372);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x373 = 6U;
	volatile int64_t x374 = -1LL;
	uint8_t x375 = 2U;
	volatile int64_t t66 = -30824308514LL;

	t66 = ((x373==(x374*x375))|x376);

	if (t66 != 251LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x379 = 21393U;
	int8_t x380 = -1;

	t67 = ((x377==(x378*x379))|x380);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x381 = UINT16_MAX;
	uint16_t x384 = UINT16_MAX;

	t68 = ((x381==(x382*x383))|x384);

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x385 = -1;
	int16_t x388 = -1;
	int32_t t69 = -325742968;

	t69 = ((x385==(x386*x387))|x388);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x389 = -4;
	int8_t x390 = 10;
	uint32_t x392 = UINT32_MAX;
	volatile uint32_t t70 = UINT32_MAX;

	t70 = ((x389==(x390*x391))|x392);

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x393 = -1;
	uint64_t x394 = 4308189049883LLU;
	int16_t x395 = INT16_MAX;
	int16_t x396 = INT16_MIN;
	int32_t t71 = -814;

	t71 = ((x393==(x394*x395))|x396);

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x401 = 457196747221LL;
	volatile int16_t x402 = -1;
	volatile int8_t x404 = INT8_MAX;
	int32_t t72 = -57;

	t72 = ((x401==(x402*x403))|x404);

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x405 = INT64_MIN;
	static int16_t x406 = INT16_MIN;
	int32_t t73 = 1672019;

	t73 = ((x405==(x406*x407))|x408);

	if (t73 != 8) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x410 = INT16_MIN;
	uint32_t x411 = 220542U;
	int8_t x412 = -1;
	static volatile int32_t t74 = 26;

	t74 = ((x409==(x410*x411))|x412);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x421 = -1315;
	uint8_t x422 = 16U;
	volatile int32_t x423 = -128;
	volatile int32_t t75 = -198;

	t75 = ((x421==(x422*x423))|x424);

	if (t75 != 1271) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x429 = -38;
	uint8_t x430 = UINT8_MAX;
	int8_t x432 = 0;
	static int32_t t76 = -54;

	t76 = ((x429==(x430*x431))|x432);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x433 = UINT16_MAX;
	volatile int64_t t77 = -16931450814625515LL;

	t77 = ((x433==(x434*x435))|x436);

	if (t77 != 447845047837903843LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x437 = UINT8_MAX;
	uint64_t x439 = 45LLU;
	uint32_t x440 = 124029163U;

	t78 = ((x437==(x438*x439))|x440);

	if (t78 != 124029163U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x441 = INT64_MIN;
	volatile int32_t x443 = -45070381;
	int16_t x444 = -1;
	int32_t t79 = -317835;

	t79 = ((x441==(x442*x443))|x444);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x445 = 25825066;
	static int8_t x446 = -15;
	int16_t x448 = INT16_MIN;
	int32_t t80 = -602278767;

	t80 = ((x445==(x446*x447))|x448);

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x449 = 18U;
	int8_t x451 = 4;
	int64_t x452 = INT64_MIN;

	t81 = ((x449==(x450*x451))|x452);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x453 = 2;
	volatile int16_t x454 = -1;
	int32_t x456 = 0;
	static volatile int32_t t82 = 0;

	t82 = ((x453==(x454*x455))|x456);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x465 = 29;
	static volatile uint64_t x466 = 11LLU;
	int64_t x468 = INT64_MAX;

	t83 = ((x465==(x466*x467))|x468);

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x470 = 202042938LL;
	volatile uint32_t x471 = 111U;
	static int16_t x472 = INT16_MAX;
	volatile int32_t t84 = 218357;

	t84 = ((x469==(x470*x471))|x472);

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x478 = -1LL;
	volatile uint64_t x479 = 621LLU;
	uint16_t x480 = 3589U;
	static int32_t t85 = 14860;

	t85 = ((x477==(x478*x479))|x480);

	if (t85 != 3589) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x481 = INT16_MIN;
	int8_t x482 = 0;
	int64_t x483 = 14LL;
	int16_t x484 = 3613;

	t86 = ((x481==(x482*x483))|x484);

	if (t86 != 3613) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x490 = 478842285U;
	int32_t x492 = -5255;
	volatile int32_t t87 = 1038355555;

	t87 = ((x489==(x490*x491))|x492);

	if (t87 != -5255) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x493 = 1;
	uint16_t x494 = UINT16_MAX;
	uint16_t x495 = 1U;
	volatile int32_t x496 = INT32_MIN;
	int32_t t88 = INT32_MIN;

	t88 = ((x493==(x494*x495))|x496);

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x497 = INT16_MIN;
	uint32_t x498 = UINT32_MAX;
	volatile int8_t x499 = INT8_MIN;
	int64_t x500 = INT64_MIN;
	int64_t t89 = INT64_MIN;

	t89 = ((x497==(x498*x499))|x500);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x501 = INT32_MIN;
	int8_t x502 = INT8_MIN;
	uint32_t x503 = UINT32_MAX;
	int64_t x504 = INT64_MIN;
	volatile int64_t t90 = INT64_MIN;

	t90 = ((x501==(x502*x503))|x504);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x505 = 369LL;
	volatile int8_t x506 = INT8_MIN;
	static int8_t x507 = 7;
	volatile uint16_t x508 = UINT16_MAX;
	int32_t t91 = 240;

	t91 = ((x505==(x506*x507))|x508);

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x513 = INT8_MAX;
	static volatile int8_t x514 = INT8_MIN;
	static int8_t x515 = -1;
	int16_t x516 = INT16_MIN;
	static volatile int32_t t92 = -92;

	t92 = ((x513==(x514*x515))|x516);

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x521 = INT8_MIN;
	uint16_t x522 = 13U;
	int32_t x524 = INT32_MIN;
	int32_t t93 = INT32_MIN;

	t93 = ((x521==(x522*x523))|x524);

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x526 = -114;
	uint32_t x527 = 1575699U;
	int32_t x528 = INT32_MIN;
	int32_t t94 = INT32_MIN;

	t94 = ((x525==(x526*x527))|x528);

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x530 = 1U;
	static int8_t x531 = INT8_MIN;
	int16_t x532 = 1380;
	int32_t t95 = 5;

	t95 = ((x529==(x530*x531))|x532);

	if (t95 != 1380) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x533 = -40775;
	volatile int8_t x535 = INT8_MAX;
	uint32_t x536 = UINT32_MAX;
	static uint32_t t96 = UINT32_MAX;

	t96 = ((x533==(x534*x535))|x536);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x541 = INT8_MAX;
	volatile int32_t x542 = INT32_MAX;
	volatile uint32_t x543 = 751443U;
	int16_t x544 = 0;

	t97 = ((x541==(x542*x543))|x544);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x549 = 228598LL;
	volatile uint16_t x551 = UINT16_MAX;
	static int32_t t98 = 7;

	t98 = ((x549==(x550*x551))|x552);

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x553 = 60916U;
	int16_t x554 = 8127;
	int64_t x555 = -1LL;
	int16_t x556 = INT16_MIN;
	int32_t t99 = 30;

	t99 = ((x553==(x554*x555))|x556);

	if (t99 != -32768) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

