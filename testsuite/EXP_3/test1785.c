#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x5 = INT8_MIN;
int64_t x10 = INT64_MIN;
int8_t x18 = -1;
volatile int32_t t4 = -39576;
int8_t x34 = -1;
uint64_t t5 = 449092521928091093LLU;
int16_t x40 = 626;
uint16_t x41 = 31752U;
uint16_t x42 = 9191U;
int64_t x45 = 72613220275LL;
int16_t x48 = -1;
uint16_t x49 = 5U;
int32_t x51 = -953117578;
uint32_t x53 = 12026U;
static int16_t x54 = -1;
static int64_t x56 = INT64_MIN;
int8_t x65 = -1;
int32_t x69 = -1;
int64_t x70 = INT64_MIN;
volatile int32_t x71 = INT32_MIN;
static int16_t x74 = -1;
int8_t x86 = -1;
volatile int32_t x96 = INT32_MIN;
static volatile uint8_t x101 = 63U;
static int8_t x104 = INT8_MAX;
static int32_t x119 = -377;
uint16_t x121 = UINT16_MAX;
int32_t x128 = -1809;
int32_t x139 = INT32_MAX;
int8_t x143 = INT8_MIN;
volatile int32_t t28 = -11;
uint16_t x152 = 2990U;
static int64_t x155 = -2999LL;
static int16_t x164 = 156;
int64_t t33 = 563271425350563397LL;
uint32_t x198 = 6735U;
int16_t x200 = -1767;
volatile int32_t x203 = INT32_MAX;
uint64_t x207 = 244964LLU;
static int16_t x212 = -1;
int64_t x215 = INT64_MAX;
int64_t t40 = 1153497478LL;
int16_t x227 = -1;
static int32_t t42 = 1;
static int64_t x239 = -14885153455989973LL;
volatile uint32_t x241 = 295199874U;
static volatile uint32_t t44 = 5060U;
volatile int8_t x255 = INT8_MIN;
int64_t x279 = INT64_MIN;
static uint64_t x284 = 13547345LLU;
int8_t x303 = -1;
uint64_t x307 = 35770151021710LLU;
static volatile int64_t x308 = -9064LL;
volatile int32_t x310 = -42;
int8_t x321 = -1;
static int8_t x327 = 13;
volatile int64_t t66 = -4LL;
static volatile int32_t t67 = 41153;
volatile int32_t t71 = 20;
volatile int32_t t72 = -857376527;
volatile int32_t x398 = -336;
int64_t x400 = INT64_MIN;
int16_t x405 = 205;
uint64_t t78 = 2975430302209835LLU;
int64_t x410 = 385735152901302366LL;
int32_t x415 = 7;
volatile int16_t x422 = INT16_MIN;
volatile int16_t x424 = -13215;
uint64_t t81 = 3793945124822804429LLU;
int16_t x437 = -13384;
uint8_t x438 = UINT8_MAX;
static int64_t x439 = INT64_MIN;
uint16_t x456 = 21347U;
static int32_t t89 = -641;
static uint64_t x469 = 1276623658731989LLU;
static int8_t x470 = INT8_MAX;
int16_t x479 = INT16_MIN;
int64_t x480 = INT64_MIN;
static int16_t x481 = 1;
uint16_t x484 = UINT16_MAX;
volatile int32_t t94 = -25435976;
uint16_t x489 = 2U;
static volatile uint16_t x493 = 0U;
static int32_t t96 = -97;
int64_t t97 = -21871LL;
int64_t x504 = INT64_MIN;


void f0(void) {
	static uint8_t x6 = 116U;
	int64_t x7 = -1339LL;
	static volatile int16_t x8 = 2228;
	int64_t t0 = 4279461222476384LL;

	t0 = ((x5==x6)/(x7&x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	static int8_t x11 = INT8_MIN;
	volatile uint8_t x12 = UINT8_MAX;
	int32_t t1 = 10098291;

	t1 = ((x9==x10)/(x11&x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 554502LLU;
	static uint32_t x14 = 20U;
	int8_t x15 = INT8_MIN;
	int8_t x16 = -1;
	static volatile int32_t t2 = -7;

	t2 = ((x13==x14)/(x15&x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 286U;
	uint8_t x19 = 5U;
	uint16_t x20 = 6357U;
	volatile int32_t t3 = -1;

	t3 = ((x17==x18)/(x19&x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = 2145;
	uint16_t x22 = 7149U;
	volatile uint8_t x23 = UINT8_MAX;
	int8_t x24 = INT8_MAX;

	t4 = ((x21==x22)/(x23&x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = INT16_MIN;
	uint64_t x35 = 5LLU;
	uint32_t x36 = UINT32_MAX;

	t5 = ((x33==x34)/(x35&x36));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = -3513;
	uint32_t x38 = 29146U;
	int16_t x39 = -1;
	int32_t t6 = 2685;

	t6 = ((x37==x38)/(x39&x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x43 = INT8_MIN;
	int32_t x44 = -499841204;
	int32_t t7 = -45029;

	t7 = ((x41==x42)/(x43&x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x46 = 348LL;
	int16_t x47 = INT16_MIN;
	volatile int32_t t8 = 250023692;

	t8 = ((x45==x46)/(x47&x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x50 = -1;
	volatile uint64_t x52 = UINT64_MAX;
	static uint64_t t9 = 35638LLU;

	t9 = ((x49==x50)/(x51&x52));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x55 = -1LL;
	int64_t t10 = -4LL;

	t10 = ((x53==x54)/(x55&x56));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = -2;
	int64_t x58 = -63242828997181LL;
	static int64_t x59 = -621745509295580064LL;
	int16_t x60 = INT16_MIN;
	int64_t t11 = -10181368427944024LL;

	t11 = ((x57==x58)/(x59&x60));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = INT8_MAX;
	int64_t x62 = INT64_MIN;
	uint32_t x63 = UINT32_MAX;
	int8_t x64 = INT8_MIN;
	uint32_t t12 = 75645U;

	t12 = ((x61==x62)/(x63&x64));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x66 = 14;
	static uint32_t x67 = 311502364U;
	volatile uint64_t x68 = 593LLU;
	uint64_t t13 = 4092484093411LLU;

	t13 = ((x65==x66)/(x67&x68));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x72 = INT64_MAX;
	static int64_t t14 = -440494484641LL;

	t14 = ((x69==x70)/(x71&x72));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 242031451U;
	uint8_t x75 = UINT8_MAX;
	int8_t x76 = INT8_MAX;
	int32_t t15 = 44;

	t15 = ((x73==x74)/(x75&x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x85 = 10U;
	volatile int64_t x87 = -1LL;
	int8_t x88 = -1;
	int64_t t16 = 113839049499192LL;

	t16 = ((x85==x86)/(x87&x88));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x89 = 50343651187236038LLU;
	uint8_t x90 = UINT8_MAX;
	int16_t x91 = INT16_MAX;
	int16_t x92 = -13;
	volatile int32_t t17 = 22464;

	t17 = ((x89==x90)/(x91&x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = -1;
	volatile uint16_t x94 = 449U;
	int32_t x95 = INT32_MIN;
	int32_t t18 = -7401;

	t18 = ((x93==x94)/(x95&x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x97 = 94;
	int64_t x98 = INT64_MAX;
	volatile uint32_t x99 = 6525622U;
	int16_t x100 = -2179;
	volatile uint32_t t19 = 26127568U;

	t19 = ((x97==x98)/(x99&x100));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x102 = INT32_MAX;
	uint32_t x103 = 135U;
	uint32_t t20 = 0U;

	t20 = ((x101==x102)/(x103&x104));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x117 = INT64_MIN;
	static volatile int16_t x118 = INT16_MIN;
	int8_t x120 = -1;
	volatile int32_t t21 = 691864;

	t21 = ((x117==x118)/(x119&x120));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x122 = 139374U;
	static uint32_t x123 = 198844U;
	uint8_t x124 = UINT8_MAX;
	static uint32_t t22 = 593610U;

	t22 = ((x121==x122)/(x123&x124));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x125 = 1396;
	uint32_t x126 = UINT32_MAX;
	volatile int16_t x127 = 179;
	static int32_t t23 = -16668359;

	t23 = ((x125==x126)/(x127&x128));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x129 = UINT8_MAX;
	static volatile int64_t x130 = INT64_MAX;
	int8_t x131 = INT8_MIN;
	volatile int32_t x132 = -255;
	int32_t t24 = 7486332;

	t24 = ((x129==x130)/(x131&x132));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x133 = INT64_MIN;
	uint8_t x134 = UINT8_MAX;
	uint16_t x135 = UINT16_MAX;
	int64_t x136 = -1749924866794717LL;
	volatile int64_t t25 = 12293115211LL;

	t25 = ((x133==x134)/(x135&x136));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x137 = INT8_MIN;
	static int64_t x138 = INT64_MIN;
	int8_t x140 = 24;
	volatile int32_t t26 = -17;

	t26 = ((x137==x138)/(x139&x140));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x141 = INT64_MIN;
	uint32_t x142 = 3244597U;
	int32_t x144 = INT32_MAX;
	volatile int32_t t27 = -4;

	t27 = ((x141==x142)/(x143&x144));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x145 = 5U;
	volatile int16_t x146 = -1;
	static int16_t x147 = 1643;
	int16_t x148 = INT16_MAX;

	t28 = ((x145==x146)/(x147&x148));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x149 = 16U;
	int16_t x150 = -133;
	static uint64_t x151 = 96125195322LLU;
	static uint64_t t29 = 32LLU;

	t29 = ((x149==x150)/(x151&x152));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x153 = INT32_MAX;
	int16_t x154 = -1;
	int8_t x156 = INT8_MIN;
	int64_t t30 = -125016047LL;

	t30 = ((x153==x154)/(x155&x156));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x157 = 2U;
	int32_t x158 = -1;
	static volatile uint64_t x159 = UINT64_MAX;
	int64_t x160 = INT64_MIN;
	volatile uint64_t t31 = 4625LLU;

	t31 = ((x157==x158)/(x159&x160));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x161 = -35;
	volatile int16_t x162 = -12;
	volatile int8_t x163 = INT8_MIN;
	volatile int32_t t32 = 930940209;

	t32 = ((x161==x162)/(x163&x164));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x173 = 399127431U;
	int8_t x174 = INT8_MIN;
	int64_t x175 = INT64_MAX;
	int8_t x176 = INT8_MIN;

	t33 = ((x173==x174)/(x175&x176));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x185 = INT64_MIN;
	int16_t x186 = 1;
	int16_t x187 = -1;
	int8_t x188 = 1;
	static int32_t t34 = -6936;

	t34 = ((x185==x186)/(x187&x188));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x193 = 7U;
	uint64_t x194 = 10LLU;
	uint8_t x195 = 2U;
	int32_t x196 = -1957997;
	int32_t t35 = -765900027;

	t35 = ((x193==x194)/(x195&x196));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x197 = -1;
	static int32_t x199 = INT32_MAX;
	volatile int32_t t36 = 166651;

	t36 = ((x197==x198)/(x199&x200));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x201 = 4;
	int8_t x202 = -1;
	static int16_t x204 = INT16_MIN;
	volatile int32_t t37 = -1;

	t37 = ((x201==x202)/(x203&x204));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x205 = 8;
	int16_t x206 = -1;
	uint16_t x208 = 3322U;
	static volatile uint64_t t38 = 506300341LLU;

	t38 = ((x205==x206)/(x207&x208));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x209 = -1;
	int8_t x210 = INT8_MIN;
	int64_t x211 = INT64_MIN;
	int64_t t39 = 1079052805030767408LL;

	t39 = ((x209==x210)/(x211&x212));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x213 = 1;
	int64_t x214 = INT64_MAX;
	int32_t x216 = -1;

	t40 = ((x213==x214)/(x215&x216));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x217 = UINT16_MAX;
	uint64_t x218 = UINT64_MAX;
	uint64_t x219 = 226372520LLU;
	int8_t x220 = INT8_MIN;
	volatile uint64_t t41 = 31398329798985490LLU;

	t41 = ((x217==x218)/(x219&x220));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x225 = UINT64_MAX;
	static int64_t x226 = INT64_MIN;
	int8_t x228 = -2;

	t42 = ((x225==x226)/(x227&x228));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x237 = INT64_MIN;
	int8_t x238 = -4;
	uint32_t x240 = 11454U;
	int64_t t43 = -913952146017404163LL;

	t43 = ((x237==x238)/(x239&x240));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x242 = -1;
	uint32_t x243 = UINT32_MAX;
	static uint32_t x244 = 1394U;

	t44 = ((x241==x242)/(x243&x244));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x245 = 11003U;
	static uint32_t x246 = 1907U;
	int64_t x247 = 168569LL;
	uint32_t x248 = 32232U;
	volatile int64_t t45 = 118293487LL;

	t45 = ((x245==x246)/(x247&x248));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x253 = UINT64_MAX;
	uint32_t x254 = UINT32_MAX;
	uint16_t x256 = 3874U;
	int32_t t46 = -414670547;

	t46 = ((x253==x254)/(x255&x256));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x257 = INT64_MIN;
	int32_t x258 = INT32_MAX;
	uint64_t x259 = 992754460LLU;
	uint32_t x260 = UINT32_MAX;
	volatile uint64_t t47 = 163392LLU;

	t47 = ((x257==x258)/(x259&x260));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x265 = 58372685826338959LL;
	volatile uint32_t x266 = 2849U;
	int8_t x267 = INT8_MIN;
	int32_t x268 = INT32_MIN;
	int32_t t48 = 404;

	t48 = ((x265==x266)/(x267&x268));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x273 = INT32_MAX;
	volatile int8_t x274 = INT8_MIN;
	int32_t x275 = -1;
	int64_t x276 = -5975LL;
	static int64_t t49 = 180021LL;

	t49 = ((x273==x274)/(x275&x276));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x277 = 3029U;
	int8_t x278 = INT8_MIN;
	int8_t x280 = INT8_MIN;
	volatile int64_t t50 = -153777LL;

	t50 = ((x277==x278)/(x279&x280));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x281 = INT8_MAX;
	static int16_t x282 = -1;
	uint32_t x283 = 3U;
	volatile uint64_t t51 = 2086665874513LLU;

	t51 = ((x281==x282)/(x283&x284));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x285 = 50603LLU;
	int16_t x286 = INT16_MIN;
	static volatile int16_t x287 = -711;
	int64_t x288 = INT64_MAX;
	volatile int64_t t52 = -37369786218LL;

	t52 = ((x285==x286)/(x287&x288));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x289 = UINT64_MAX;
	uint32_t x290 = UINT32_MAX;
	volatile uint32_t x291 = UINT32_MAX;
	uint16_t x292 = UINT16_MAX;
	uint32_t t53 = 23144U;

	t53 = ((x289==x290)/(x291&x292));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x293 = 14598;
	int8_t x294 = INT8_MIN;
	uint32_t x295 = 32532972U;
	volatile int32_t x296 = 81456;
	uint32_t t54 = 599U;

	t54 = ((x293==x294)/(x295&x296));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x297 = 33U;
	int64_t x298 = INT64_MIN;
	int32_t x299 = -174225;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t55 = 29308;

	t55 = ((x297==x298)/(x299&x300));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x301 = 1U;
	volatile int16_t x302 = 11;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t56 = 5;

	t56 = ((x301==x302)/(x303&x304));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x305 = -18;
	static uint32_t x306 = 5448U;
	uint64_t t57 = 16913903LLU;

	t57 = ((x305==x306)/(x307&x308));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x309 = 5U;
	int8_t x311 = INT8_MIN;
	int64_t x312 = INT64_MIN;
	volatile int64_t t58 = -2742490160483075366LL;

	t58 = ((x309==x310)/(x311&x312));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x313 = -1;
	uint32_t x314 = 398381611U;
	int64_t x315 = 259543166104LL;
	int64_t x316 = 3976173LL;
	int64_t t59 = -15876635807376104LL;

	t59 = ((x313==x314)/(x315&x316));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x322 = 83661719U;
	int8_t x323 = INT8_MIN;
	static int64_t x324 = -1LL;
	int64_t t60 = 14898373541857440LL;

	t60 = ((x321==x322)/(x323&x324));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x325 = 19;
	static uint16_t x326 = 3336U;
	volatile int64_t x328 = INT64_MAX;
	static volatile int64_t t61 = 89LL;

	t61 = ((x325==x326)/(x327&x328));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x341 = 21;
	int8_t x342 = -1;
	int16_t x343 = -5;
	int8_t x344 = -1;
	volatile int32_t t62 = 41134734;

	t62 = ((x341==x342)/(x343&x344));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x345 = INT16_MIN;
	static int16_t x346 = 4119;
	int32_t x347 = INT32_MIN;
	volatile int8_t x348 = INT8_MIN;
	volatile int32_t t63 = 3503;

	t63 = ((x345==x346)/(x347&x348));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x349 = -1LL;
	uint16_t x350 = UINT16_MAX;
	int64_t x351 = -36796841549182LL;
	static uint64_t x352 = 431526854273331LLU;
	static uint64_t t64 = 25085754049443325LLU;

	t64 = ((x349==x350)/(x351&x352));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x353 = INT16_MAX;
	int32_t x354 = INT32_MIN;
	static volatile int32_t x355 = INT32_MAX;
	static int16_t x356 = 392;
	static int32_t t65 = -8;

	t65 = ((x353==x354)/(x355&x356));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x357 = 812U;
	int64_t x358 = -1LL;
	int64_t x359 = INT64_MIN;
	int32_t x360 = -1;

	t66 = ((x357==x358)/(x359&x360));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x361 = 7449383U;
	static int16_t x362 = -3;
	volatile uint16_t x363 = 27188U;
	uint16_t x364 = UINT16_MAX;

	t67 = ((x361==x362)/(x363&x364));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x365 = -23168;
	static int8_t x366 = 5;
	static uint64_t x367 = UINT64_MAX;
	uint32_t x368 = 10U;
	uint64_t t68 = 137588755LLU;

	t68 = ((x365==x366)/(x367&x368));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x369 = 1;
	uint16_t x370 = UINT16_MAX;
	static int8_t x371 = -1;
	int32_t x372 = 112301;
	volatile int32_t t69 = -834609;

	t69 = ((x369==x370)/(x371&x372));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x373 = 1U;
	static int64_t x374 = 100LL;
	int16_t x375 = -1;
	int64_t x376 = -181577644LL;
	static int64_t t70 = -1488695810583LL;

	t70 = ((x373==x374)/(x375&x376));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x377 = -1LL;
	uint32_t x378 = UINT32_MAX;
	static int8_t x379 = 3;
	int8_t x380 = 15;

	t71 = ((x377==x378)/(x379&x380));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x381 = INT8_MAX;
	int32_t x382 = INT32_MIN;
	uint16_t x383 = 50U;
	int8_t x384 = -8;

	t72 = ((x381==x382)/(x383&x384));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x385 = 1723;
	uint64_t x386 = 401021275828LLU;
	uint8_t x387 = UINT8_MAX;
	volatile uint32_t x388 = UINT32_MAX;
	static uint32_t t73 = 985895U;

	t73 = ((x385==x386)/(x387&x388));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x389 = INT8_MIN;
	uint64_t x390 = 1847902465050850LLU;
	volatile uint64_t x391 = 4273928784490963855LLU;
	uint32_t x392 = 3U;
	uint64_t t74 = 1589834081484124610LLU;

	t74 = ((x389==x390)/(x391&x392));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x393 = INT8_MIN;
	uint8_t x394 = UINT8_MAX;
	uint32_t x395 = 228U;
	uint16_t x396 = UINT16_MAX;
	uint32_t t75 = 60312U;

	t75 = ((x393==x394)/(x395&x396));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x397 = 32336619593LLU;
	int16_t x399 = -1;
	volatile int64_t t76 = 555930056878277LL;

	t76 = ((x397==x398)/(x399&x400));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x401 = 9U;
	int32_t x402 = 7576;
	static uint16_t x403 = UINT16_MAX;
	static int32_t x404 = INT32_MAX;
	int32_t t77 = -11920;

	t77 = ((x401==x402)/(x403&x404));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x406 = 343U;
	uint64_t x407 = UINT64_MAX;
	int8_t x408 = INT8_MIN;

	t78 = ((x405==x406)/(x407&x408));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x409 = 0U;
	int32_t x411 = 5308;
	int32_t x412 = 9681;
	int32_t t79 = 43;

	t79 = ((x409==x410)/(x411&x412));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x413 = 43U;
	int32_t x414 = INT32_MIN;
	uint64_t x416 = 404262LLU;
	volatile uint64_t t80 = 9578LLU;

	t80 = ((x413==x414)/(x415&x416));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x421 = 9273617094014LLU;
	static uint64_t x423 = 203045003135LLU;

	t81 = ((x421==x422)/(x423&x424));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x429 = 1114012320998924LLU;
	int32_t x430 = INT32_MAX;
	volatile uint64_t x431 = UINT64_MAX;
	uint32_t x432 = UINT32_MAX;
	uint64_t t82 = 32569208603226LLU;

	t82 = ((x429==x430)/(x431&x432));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x433 = 28623404;
	int16_t x434 = INT16_MIN;
	uint32_t x435 = UINT32_MAX;
	int32_t x436 = INT32_MIN;
	volatile uint32_t t83 = 70292U;

	t83 = ((x433==x434)/(x435&x436));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x440 = -4409;
	static int64_t t84 = -61158957360520987LL;

	t84 = ((x437==x438)/(x439&x440));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x441 = INT16_MAX;
	int16_t x442 = INT16_MAX;
	int32_t x443 = INT32_MIN;
	int32_t x444 = -1;
	volatile int32_t t85 = 1;

	t85 = ((x441==x442)/(x443&x444));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x445 = 15563735LL;
	int32_t x446 = INT32_MAX;
	int8_t x447 = -1;
	volatile int8_t x448 = INT8_MAX;
	static volatile int32_t t86 = 144009816;

	t86 = ((x445==x446)/(x447&x448));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x449 = INT32_MIN;
	uint8_t x450 = 0U;
	uint8_t x451 = UINT8_MAX;
	int32_t x452 = 5597314;
	volatile int32_t t87 = 2;

	t87 = ((x449==x450)/(x451&x452));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x453 = INT8_MAX;
	volatile int32_t x454 = -1;
	int64_t x455 = -1LL;
	static int64_t t88 = -689534LL;

	t88 = ((x453==x454)/(x455&x456));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x457 = 1385U;
	int32_t x458 = 151178;
	volatile uint8_t x459 = 121U;
	uint8_t x460 = UINT8_MAX;

	t89 = ((x457==x458)/(x459&x460));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x465 = 2;
	uint16_t x466 = UINT16_MAX;
	volatile int8_t x467 = INT8_MIN;
	static int16_t x468 = INT16_MIN;
	volatile int32_t t90 = 512;

	t90 = ((x465==x466)/(x467&x468));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x471 = 105U;
	uint8_t x472 = UINT8_MAX;
	volatile int32_t t91 = -976689;

	t91 = ((x469==x470)/(x471&x472));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x473 = INT64_MIN;
	volatile int32_t x474 = INT32_MIN;
	volatile uint64_t x475 = 221963008885855245LLU;
	int32_t x476 = INT32_MAX;
	uint64_t t92 = 1563259064796218LLU;

	t92 = ((x473==x474)/(x475&x476));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x477 = 1U;
	static int64_t x478 = -24988536589LL;
	volatile int64_t t93 = 15363651375978LL;

	t93 = ((x477==x478)/(x479&x480));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x482 = 2133193296389447144LL;
	uint16_t x483 = UINT16_MAX;

	t94 = ((x481==x482)/(x483&x484));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x490 = 0U;
	static uint32_t x491 = UINT32_MAX;
	int64_t x492 = -2058515002LL;
	volatile int64_t t95 = 216486138973LL;

	t95 = ((x489==x490)/(x491&x492));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x494 = INT16_MAX;
	uint16_t x495 = 3U;
	static uint8_t x496 = UINT8_MAX;

	t96 = ((x493==x494)/(x495&x496));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x497 = -17753LL;
	static int64_t x498 = INT64_MIN;
	uint16_t x499 = UINT16_MAX;
	static int64_t x500 = 46282643200897450LL;

	t97 = ((x497==x498)/(x499&x500));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x501 = -1;
	static int8_t x502 = INT8_MAX;
	static volatile int64_t x503 = INT64_MIN;
	int64_t t98 = -527LL;

	t98 = ((x501==x502)/(x503&x504));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x505 = INT32_MAX;
	int16_t x506 = INT16_MIN;
	volatile uint32_t x507 = UINT32_MAX;
	uint16_t x508 = UINT16_MAX;
	volatile uint32_t t99 = 1586U;

	t99 = ((x505==x506)/(x507&x508));

	if (t99 != 0U) { NG(); } else { ; }
	
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

