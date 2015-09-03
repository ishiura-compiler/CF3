#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 96846938LLU;
int8_t x12 = -1;
volatile uint32_t x20 = 1458U;
int8_t x24 = -6;
int64_t t7 = -362705660128498533LL;
static uint16_t x57 = 131U;
uint16_t x62 = 0U;
uint16_t x66 = UINT16_MAX;
volatile int64_t t11 = -91637747897768574LL;
static uint32_t x74 = UINT32_MAX;
int32_t x75 = 87242;
int16_t x76 = -121;
static volatile int64_t x80 = -660153565327587LL;
int8_t x81 = INT8_MAX;
static uint8_t x83 = UINT8_MAX;
int32_t t14 = -113802048;
static uint32_t x87 = 0U;
int8_t x93 = INT8_MAX;
uint8_t x96 = UINT8_MAX;
static int64_t x101 = -1776434292021256904LL;
int32_t x105 = -1;
static int16_t x122 = INT16_MIN;
static volatile uint64_t t24 = 217730307782866639LLU;
uint64_t x127 = 121506556LLU;
volatile uint64_t t25 = 1303LLU;
int16_t x134 = INT16_MIN;
static volatile int32_t x136 = INT32_MIN;
int32_t x137 = INT32_MAX;
volatile int16_t x159 = -1996;
volatile int64_t t31 = -90528LL;
static int16_t x172 = INT16_MAX;
int16_t x173 = -1;
int32_t x174 = -1;
int32_t x183 = -1;
volatile int8_t x190 = INT8_MAX;
int32_t x196 = INT32_MIN;
volatile uint32_t x206 = 1294156U;
static uint32_t x210 = UINT32_MAX;
uint32_t t41 = 475U;
static int16_t x213 = 36;
int64_t t42 = 931LL;
int64_t x219 = -1LL;
int64_t x223 = 93193213LL;
static uint8_t x224 = 7U;
volatile int64_t x225 = -7095LL;
uint64_t x231 = UINT64_MAX;
uint32_t x232 = 109U;
uint16_t x236 = 1U;
volatile int32_t t47 = 3;
static int8_t x239 = INT8_MIN;
volatile int64_t x240 = -1LL;
int16_t x242 = 9017;
int32_t x244 = -1;
volatile int16_t x251 = -1;
uint64_t t51 = 208LLU;
int32_t x257 = INT32_MIN;
static volatile uint64_t x260 = 4LLU;
static int32_t x275 = 235;
volatile int64_t t56 = 4731348774445204LL;
volatile uint64_t x300 = 19601290LLU;
int64_t t61 = -214223329814886881LL;
int32_t x307 = INT32_MIN;
volatile int64_t t62 = -343278LL;
int16_t x316 = INT16_MIN;
uint32_t t65 = 2145U;
uint32_t x325 = UINT32_MAX;
static volatile int8_t x326 = -17;
volatile uint16_t x327 = 25U;
int32_t x328 = INT32_MAX;
int32_t x346 = 309;
volatile int32_t x349 = INT32_MIN;
uint32_t x351 = 95U;
uint64_t x355 = 4573397193436666LLU;
static int32_t x362 = INT32_MAX;
static int16_t x366 = INT16_MIN;
static uint64_t x393 = 475LLU;
static volatile int64_t x399 = INT64_MIN;
int32_t x402 = -1;
uint32_t x403 = UINT32_MAX;
volatile int16_t x406 = INT16_MIN;
static int32_t x409 = -1;
volatile int64_t x412 = INT64_MIN;
int64_t x413 = -1LL;
int16_t x414 = INT16_MIN;
static int64_t x428 = -1LL;
int32_t x446 = -1;
uint64_t x449 = UINT64_MAX;
uint32_t x450 = 11829814U;
int8_t x453 = INT8_MIN;
volatile int16_t x462 = 35;
int16_t x465 = INT16_MAX;
int64_t x468 = INT64_MIN;
int8_t x475 = INT8_MIN;
volatile int32_t x476 = -1;
int32_t t98 = 99250544;
int16_t x479 = INT16_MAX;


void f0(void) {
	volatile int64_t x5 = -12LL;
	int16_t x6 = INT16_MAX;
	int16_t x7 = -1;
	uint64_t x8 = 2917571425827LLU;

	t0 = (x5^(x6^(x7-x8)));

	if (t0 != 2917571398103LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = INT16_MIN;
	int64_t x10 = 13021LL;
	int16_t x11 = INT16_MIN;
	static int64_t t1 = 1095801871316875LL;

	t1 = (x9^(x10^(x11-x12)));

	if (t1 != 13020LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x13 = 9U;
	uint16_t x14 = 453U;
	uint32_t x15 = 1800844U;
	uint8_t x16 = UINT8_MAX;
	volatile uint32_t t2 = 11U;

	t2 = (x13^(x14^(x15-x16)));

	if (t2 != 1800257U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	uint32_t x18 = UINT32_MAX;
	uint16_t x19 = 392U;
	uint32_t t3 = 33536638U;

	t3 = (x17^(x18^(x19-x20)));

	if (t3 != 2147484713U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x21 = 345U;
	static uint64_t x22 = 1308LLU;
	int8_t x23 = 0;
	volatile uint64_t t4 = 324544966373LLU;

	t4 = (x21^(x22^(x23-x24)));

	if (t4 != 1091LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -1;
	uint16_t x30 = 1231U;
	int16_t x31 = -4778;
	volatile int16_t x32 = -1;
	volatile int32_t t5 = -624765;

	t5 = (x29^(x30^(x31-x32)));

	if (t5 != 5735) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x45 = 0U;
	volatile int16_t x46 = 146;
	int32_t x47 = -1;
	uint64_t x48 = 6393LLU;
	volatile uint64_t t6 = 1924648920822LLU;

	t6 = (x45^(x46^(x47-x48)));

	if (t6 != 18446744073709545364LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x53 = INT64_MAX;
	volatile int8_t x54 = -1;
	volatile int32_t x55 = 12841301;
	int32_t x56 = -20554897;

	t7 = (x53^(x54^(x55-x56)));

	if (t7 != -9223372036821379610LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x58 = 247228334U;
	int32_t x59 = -1;
	volatile int32_t x60 = -12624927;
	volatile uint32_t t8 = 27U;

	t8 = (x57^(x58^(x59-x60)));

	if (t8 != 243057459U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x61 = UINT64_MAX;
	int8_t x63 = INT8_MIN;
	uint16_t x64 = 0U;
	volatile uint64_t t9 = 16235764082LLU;

	t9 = (x61^(x62^(x63-x64)));

	if (t9 != 127LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x65 = 14191U;
	volatile int8_t x67 = 0;
	uint64_t x68 = 20169746391025786LLU;
	static volatile uint64_t t10 = 461547202882146379LLU;

	t10 = (x65^(x66^(x67-x68)));

	if (t10 != 18426574327318576918LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x69 = -41;
	int64_t x70 = INT64_MIN;
	int32_t x71 = INT32_MIN;
	int8_t x72 = -1;

	t11 = (x69^(x70^(x71-x72)));

	if (t11 != -9223372034707292202LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x73 = -25229597551666LL;
	volatile int64_t t12 = -10820LL;

	t12 = (x73^(x74^(x75-x76)));

	if (t12 != -25231973254798LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = 3;
	uint64_t x78 = UINT64_MAX;
	int8_t x79 = INT8_MIN;
	uint64_t t13 = 212386355952075838LLU;

	t13 = (x77^(x78^(x79-x80)));

	if (t13 != 18446083920144224159LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x82 = 5155U;
	volatile int16_t x84 = -1;

	t14 = (x81^(x82^(x83-x84)));

	if (t14 != 5468) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x85 = -1;
	int8_t x86 = INT8_MIN;
	uint8_t x88 = 41U;
	uint32_t t15 = 102062954U;

	t15 = (x85^(x86^(x87-x88)));

	if (t15 != 4294967208U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = -1;
	int32_t x90 = INT32_MIN;
	static uint16_t x91 = 37U;
	volatile uint32_t x92 = UINT32_MAX;
	uint32_t t16 = 1689878U;

	t16 = (x89^(x90^(x91-x92)));

	if (t16 != 2147483609U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x94 = -124717865LL;
	static volatile uint64_t x95 = 1LLU;
	volatile uint64_t t17 = 15085972280498LLU;

	t17 = (x93^(x94^(x95-x96)));

	if (t17 != 124717994LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x97 = UINT64_MAX;
	int32_t x98 = -1;
	volatile uint64_t x99 = 804LLU;
	int64_t x100 = -911LL;
	volatile uint64_t t18 = 2LLU;

	t18 = (x97^(x98^(x99-x100)));

	if (t18 != 1715LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x102 = -1;
	static int64_t x103 = -18163662LL;
	static uint16_t x104 = 50U;
	volatile int64_t t19 = -913LL;

	t19 = (x101^(x102^(x103-x104)));

	if (t19 != -1776434292036650297LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x106 = 4153104785466067408LLU;
	int64_t x107 = INT64_MIN;
	volatile int16_t x108 = -1;
	static uint64_t t20 = 960864LLU;

	t20 = (x105^(x106^(x107-x108)));

	if (t20 != 5070267251388708398LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x109 = INT64_MIN;
	int16_t x110 = INT16_MAX;
	static int8_t x111 = INT8_MIN;
	uint16_t x112 = UINT16_MAX;
	volatile int64_t t21 = -128787196LL;

	t21 = (x109^(x110^(x111-x112)));

	if (t21 != 9223372036854677630LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x113 = 11044U;
	uint8_t x114 = 1U;
	static int8_t x115 = -1;
	uint8_t x116 = 3U;
	int32_t t22 = -4;

	t22 = (x113^(x114^(x115-x116)));

	if (t22 != -11047) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x117 = 10744;
	int32_t x118 = INT32_MIN;
	volatile uint16_t x119 = 32465U;
	static int16_t x120 = -1;
	int32_t t23 = 118592;

	t23 = (x117^(x118^(x119-x120)));

	if (t23 != -2147461334) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x121 = 232431497LL;
	volatile uint16_t x123 = UINT16_MAX;
	uint64_t x124 = UINT64_MAX;

	t24 = (x121^(x122^(x123-x124)));

	if (t24 != 18446744073477037961LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x125 = UINT16_MAX;
	volatile int64_t x126 = INT64_MAX;
	static int8_t x128 = INT8_MAX;

	t25 = (x125^(x126^(x127-x128)));

	if (t25 != 9223372036733209213LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = INT8_MIN;
	int64_t x130 = INT64_MIN;
	static int32_t x131 = INT32_MIN;
	volatile uint64_t x132 = 0LLU;
	volatile uint64_t t26 = 94840LLU;

	t26 = (x129^(x130^(x131-x132)));

	if (t26 != 9223372039002259328LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x133 = UINT32_MAX;
	int32_t x135 = -1;
	uint32_t t27 = 452677U;

	t27 = (x133^(x134^(x135-x136)));

	if (t27 != 2147450880U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x138 = UINT64_MAX;
	static int16_t x139 = INT16_MIN;
	int64_t x140 = -27LL;
	uint64_t t28 = 35306510LLU;

	t28 = (x137^(x138^(x139-x140)));

	if (t28 != 2147450907LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x141 = INT16_MIN;
	int16_t x142 = INT16_MAX;
	int64_t x143 = INT64_MIN;
	int8_t x144 = -2;
	volatile int64_t t29 = -81259LL;

	t29 = (x141^(x142^(x143-x144)));

	if (t29 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x153 = 6640U;
	int8_t x154 = -1;
	static int16_t x155 = INT16_MIN;
	uint8_t x156 = 107U;
	static volatile int32_t t30 = 525965;

	t30 = (x153^(x154^(x155-x156)));

	if (t30 != 39322) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x157 = INT32_MAX;
	int8_t x158 = 1;
	int64_t x160 = INT64_MIN;

	t31 = (x157^(x158^(x159-x160)));

	if (t31 != 9223372034707294154LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x165 = -1LL;
	int32_t x166 = 27396;
	static volatile int64_t x167 = INT64_MAX;
	static int8_t x168 = INT8_MAX;
	static volatile int64_t t32 = -521953LL;

	t32 = (x165^(x166^(x167-x168)));

	if (t32 != -9223372036854748293LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x169 = 1U;
	static int16_t x170 = INT16_MIN;
	int8_t x171 = -1;
	int32_t t33 = 13678;

	t33 = (x169^(x170^(x171-x172)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x175 = UINT8_MAX;
	int16_t x176 = INT16_MIN;
	int32_t t34 = 0;

	t34 = (x173^(x174^(x175-x176)));

	if (t34 != 33023) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x177 = -1;
	static uint8_t x178 = 1U;
	int64_t x179 = 1LL;
	uint8_t x180 = 3U;
	int64_t t35 = -4LL;

	t35 = (x177^(x178^(x179-x180)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x181 = -1;
	static uint16_t x182 = 158U;
	volatile int8_t x184 = INT8_MIN;
	int32_t t36 = 908;

	t36 = (x181^(x182^(x183-x184)));

	if (t36 != -226) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x185 = -1LL;
	uint16_t x186 = UINT16_MAX;
	static volatile int32_t x187 = 1679;
	uint8_t x188 = 0U;
	static volatile int64_t t37 = -71898794972213761LL;

	t37 = (x185^(x186^(x187-x188)));

	if (t37 != -63857LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x189 = 11U;
	volatile int8_t x191 = 15;
	static uint32_t x192 = 5645U;
	volatile uint32_t t38 = 409431391U;

	t38 = (x189^(x190^(x191-x192)));

	if (t38 != 4294961782U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x193 = UINT16_MAX;
	int32_t x194 = INT32_MIN;
	int64_t x195 = INT64_MIN;
	volatile int64_t t39 = -3831095364160LL;

	t39 = (x193^(x194^(x195-x196)));

	if (t39 != 9223372032559874047LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x205 = 0U;
	int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MIN;
	static uint32_t t40 = 35U;

	t40 = (x205^(x206^(x207-x208)));

	if (t40 != 1294156U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x209 = 4U;
	uint16_t x211 = 740U;
	static int8_t x212 = -1;

	t41 = (x209^(x210^(x211-x212)));

	if (t41 != 4294966558U) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x214 = 1090412220809640LL;
	volatile int32_t x215 = -12;
	int16_t x216 = -1;

	t42 = (x213^(x214^(x215-x216)));

	if (t42 != -1090412220809607LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x217 = 107;
	int16_t x218 = -1;
	volatile uint16_t x220 = UINT16_MAX;
	volatile int64_t t43 = 8687117146447806LL;

	t43 = (x217^(x218^(x219-x220)));

	if (t43 != 65428LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x221 = 207U;
	uint8_t x222 = 10U;
	int64_t t44 = -3LL;

	t44 = (x221^(x222^(x223-x224)));

	if (t44 != 93193011LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x226 = UINT64_MAX;
	int64_t x227 = INT64_MIN;
	int64_t x228 = INT64_MIN;
	uint64_t t45 = 45LLU;

	t45 = (x225^(x226^(x227-x228)));

	if (t45 != 7094LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x229 = 1;
	int32_t x230 = INT32_MIN;
	volatile uint64_t t46 = 3051069043LLU;

	t46 = (x229^(x230^(x231-x232)));

	if (t46 != 2147483539LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x233 = -5;
	int8_t x234 = -13;
	int32_t x235 = -1;

	t47 = (x233^(x234^(x235-x236)));

	if (t47 != -10) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x237 = -1;
	volatile int32_t x238 = -1;
	volatile int64_t t48 = -14884LL;

	t48 = (x237^(x238^(x239-x240)));

	if (t48 != -127LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x241 = INT64_MIN;
	uint32_t x243 = UINT32_MAX;
	static volatile int64_t t49 = 459634777426735495LL;

	t49 = (x241^(x242^(x243-x244)));

	if (t49 != -9223372036854766791LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x249 = INT8_MIN;
	volatile int8_t x250 = INT8_MAX;
	uint8_t x252 = UINT8_MAX;
	volatile int32_t t50 = -450628561;

	t50 = (x249^(x250^(x251-x252)));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x253 = UINT64_MAX;
	int8_t x254 = INT8_MAX;
	int32_t x255 = -12246783;
	uint8_t x256 = 9U;

	t51 = (x253^(x254^(x255-x256)));

	if (t51 != 12246904LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x258 = -25LL;
	int8_t x259 = -6;
	uint64_t t52 = 271212199170182LLU;

	t52 = (x257^(x258^(x259-x260)));

	if (t52 != 18446744071562067985LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x261 = INT8_MAX;
	int64_t x262 = INT64_MIN;
	static volatile int16_t x263 = -1;
	uint64_t x264 = UINT64_MAX;
	uint64_t t53 = 14402LLU;

	t53 = (x261^(x262^(x263-x264)));

	if (t53 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x265 = 254472655027995LLU;
	int8_t x266 = -14;
	static int16_t x267 = 6309;
	uint16_t x268 = 2849U;
	static volatile uint64_t t54 = 5131249LLU;

	t54 = (x265^(x266^(x267-x268)));

	if (t54 != 18446489601054526829LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x273 = 8363;
	int64_t x274 = INT64_MAX;
	volatile uint32_t x276 = 1274787U;
	int64_t t55 = 10296759855LL;

	t55 = (x273^(x274^(x275-x276)));

	if (t55 != 9223372032561074716LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x277 = 0;
	int64_t x278 = -110693LL;
	int64_t x279 = -1LL;
	int16_t x280 = INT16_MIN;

	t56 = (x277^(x278^(x279-x280)));

	if (t56 != -118684LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x281 = INT16_MAX;
	static uint16_t x282 = 23U;
	int64_t x283 = -1LL;
	int8_t x284 = INT8_MAX;
	int64_t t57 = -438805160538884367LL;

	t57 = (x281^(x282^(x283-x284)));

	if (t57 != -32664LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x285 = INT32_MIN;
	int16_t x286 = INT16_MIN;
	volatile int32_t x287 = INT32_MAX;
	uint64_t x288 = UINT64_MAX;
	uint64_t t58 = 10427833968181962LLU;

	t58 = (x285^(x286^(x287-x288)));

	if (t58 != 4294934528LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x289 = -83479200090826162LL;
	int16_t x290 = INT16_MIN;
	uint16_t x291 = UINT16_MAX;
	volatile int8_t x292 = INT8_MAX;
	volatile int64_t t59 = 11045995851628LL;

	t59 = (x289^(x290^(x291-x292)));

	if (t59 != 83479200090858958LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x297 = 3;
	int8_t x298 = INT8_MIN;
	int16_t x299 = 3267;
	volatile uint64_t t60 = 6366011637233496LLU;

	t60 = (x297^(x298^(x299-x300)));

	if (t60 != 19598010LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x301 = -12549906LL;
	static int64_t x302 = 859949041413LL;
	volatile int8_t x303 = 0;
	uint8_t x304 = UINT8_MAX;

	t61 = (x301^(x302^(x303-x304)));

	if (t61 != 859937863914LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x305 = 5540;
	volatile int8_t x306 = INT8_MAX;
	int64_t x308 = INT64_MIN;

	t62 = (x305^(x306^(x307-x308)));

	if (t62 != 9223372034707297755LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x313 = -1;
	uint32_t x314 = UINT32_MAX;
	volatile uint16_t x315 = 5237U;
	volatile uint32_t t63 = 187115755U;

	t63 = (x313^(x314^(x315-x316)));

	if (t63 != 38005U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x317 = INT32_MIN;
	int64_t x318 = INT64_MIN;
	static int64_t x319 = INT64_MIN;
	volatile uint64_t x320 = UINT64_MAX;
	volatile uint64_t t64 = 42528456899LLU;

	t64 = (x317^(x318^(x319-x320)));

	if (t64 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x321 = 18U;
	uint8_t x322 = 1U;
	uint32_t x323 = 458797U;
	int32_t x324 = INT32_MIN;

	t65 = (x321^(x322^(x323-x324)));

	if (t65 != 2147942462U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t t66 = 29U;

	t66 = (x325^(x326^(x327-x328)));

	if (t66 != 2147483658U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x329 = 30922LLU;
	uint16_t x330 = UINT16_MAX;
	int16_t x331 = -1;
	int16_t x332 = INT16_MIN;
	uint64_t t67 = 13590468LLU;

	t67 = (x329^(x330^(x331-x332)));

	if (t67 != 63690LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x333 = UINT8_MAX;
	int8_t x334 = -1;
	int32_t x335 = 494;
	int16_t x336 = INT16_MIN;
	volatile int32_t t68 = -2035440;

	t68 = (x333^(x334^(x335-x336)));

	if (t68 != -33042) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x337 = 11;
	static int8_t x338 = INT8_MAX;
	static uint8_t x339 = 55U;
	int16_t x340 = 0;
	int32_t t69 = -69682784;

	t69 = (x337^(x338^(x339-x340)));

	if (t69 != 67) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x341 = 14553U;
	volatile int64_t x342 = -1LL;
	uint16_t x343 = UINT16_MAX;
	uint16_t x344 = 7U;
	int64_t t70 = -33762LL;

	t70 = (x341^(x342^(x343-x344)));

	if (t70 != -50978LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x345 = -1;
	uint8_t x347 = UINT8_MAX;
	int32_t x348 = -1;
	volatile int32_t t71 = -2;

	t71 = (x345^(x346^(x347-x348)));

	if (t71 != -54) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x350 = 24300LLU;
	volatile int16_t x352 = INT16_MIN;
	static volatile uint64_t t72 = 470219521231LLU;

	t72 = (x349^(x350^(x351-x352)));

	if (t72 != 18446744071562124979LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x353 = 274231855511LLU;
	int8_t x354 = INT8_MIN;
	static int8_t x356 = -15;
	uint64_t t73 = 8087951428986372LLU;

	t73 = (x353^(x354^(x355-x356)));

	if (t73 != 18442170909128153118LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x357 = INT8_MAX;
	int64_t x358 = -1LL;
	int64_t x359 = INT64_MAX;
	int8_t x360 = INT8_MAX;
	volatile int64_t t74 = INT64_MIN;

	t74 = (x357^(x358^(x359-x360)));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x361 = UINT16_MAX;
	int16_t x363 = INT16_MAX;
	int32_t x364 = 422758;
	volatile int32_t t75 = 3;

	t75 = (x361^(x362^(x363-x364)));

	if (t75 != -2147152743) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x365 = 11979485686854223LLU;
	int64_t x367 = -123401015880503643LL;
	uint32_t x368 = 10U;
	uint64_t t76 = 79781035492835LLU;

	t76 = (x365^(x366^(x367-x368)));

	if (t76 != 116222599541710036LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x369 = INT32_MIN;
	static uint32_t x370 = 880U;
	int32_t x371 = INT32_MIN;
	volatile int64_t x372 = -424591898400LL;
	volatile int64_t t77 = 195407419120LL;

	t77 = (x369^(x370^(x371-x372)));

	if (t77 != -421516659632LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x377 = 135411079527373840LLU;
	int8_t x378 = INT8_MAX;
	volatile uint32_t x379 = UINT32_MAX;
	static uint32_t x380 = UINT32_MAX;
	uint64_t t78 = 515347066085LLU;

	t78 = (x377^(x378^(x379-x380)));

	if (t78 != 135411079527373935LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x381 = UINT64_MAX;
	static int8_t x382 = -1;
	static int8_t x383 = 1;
	uint32_t x384 = 1024352030U;
	uint64_t t79 = 1606688228880LLU;

	t79 = (x381^(x382^(x383-x384)));

	if (t79 != 18446744072685199587LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x385 = INT32_MIN;
	static uint16_t x386 = 4U;
	int8_t x387 = 3;
	uint32_t x388 = 497U;
	volatile uint32_t t80 = 838628141U;

	t80 = (x385^(x386^(x387-x388)));

	if (t80 != 2147483158U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MIN;
	int8_t x396 = INT8_MIN;
	uint64_t t81 = 5737284284237LLU;

	t81 = (x393^(x394^(x395-x396)));

	if (t81 != 2147451227LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x397 = UINT16_MAX;
	volatile int16_t x398 = INT16_MAX;
	static int8_t x400 = -1;
	static volatile int64_t t82 = -188307LL;

	t82 = (x397^(x398^(x399-x400)));

	if (t82 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x401 = INT64_MAX;
	uint64_t x404 = 26118480LLU;
	volatile uint64_t t83 = 389700208LLU;

	t83 = (x401^(x402^(x403-x404)));

	if (t83 != 9223372041123624623LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x405 = 24502U;
	uint64_t x407 = 1371674321LLU;
	int32_t x408 = INT32_MIN;
	uint64_t t84 = 63666961949526LLU;

	t84 = (x405^(x406^(x407-x408)));

	if (t84 != 18446744070190385511LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x410 = -1LL;
	static int16_t x411 = INT16_MIN;
	volatile int64_t t85 = -218245407LL;

	t85 = (x409^(x410^(x411-x412)));

	if (t85 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x415 = 26;
	int16_t x416 = -65;
	volatile int64_t t86 = 283624LL;

	t86 = (x413^(x414^(x415-x416)));

	if (t86 != 32676LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x417 = 15;
	uint64_t x418 = UINT64_MAX;
	volatile int8_t x419 = -3;
	int32_t x420 = 2233099;
	uint64_t t87 = 585599LLU;

	t87 = (x417^(x418^(x419-x420)));

	if (t87 != 2233090LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x425 = UINT32_MAX;
	static uint64_t x426 = 106LLU;
	int64_t x427 = -1LL;
	volatile uint64_t t88 = 7457590059031LLU;

	t88 = (x425^(x426^(x427-x428)));

	if (t88 != 4294967189LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x437 = 322496592LLU;
	uint32_t x438 = UINT32_MAX;
	static volatile uint64_t x439 = 9197029LLU;
	int16_t x440 = -1626;
	uint64_t t89 = 25462898701116LLU;

	t89 = (x437^(x438^(x439-x440)));

	if (t89 != 3964357520LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x441 = 4149755231657LLU;
	int8_t x442 = INT8_MAX;
	int8_t x443 = -1;
	int32_t x444 = INT32_MAX;
	static uint64_t t90 = 79LLU;

	t90 = (x441^(x442^(x443-x444)));

	if (t90 != 18446739923440483798LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x445 = INT16_MIN;
	static int16_t x447 = INT16_MIN;
	static uint64_t x448 = UINT64_MAX;
	volatile uint64_t t91 = 3137176217LLU;

	t91 = (x445^(x446^(x447-x448)));

	if (t91 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x451 = 71U;
	static int64_t x452 = -1LL;
	uint64_t t92 = 2114429182171460019LLU;

	t92 = (x449^(x450^(x451-x452)));

	if (t92 != 18446744073697721729LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x454 = INT64_MAX;
	int16_t x455 = -1;
	uint32_t x456 = 4920U;
	int64_t t93 = -263LL;

	t93 = (x453^(x454^(x455-x456)));

	if (t93 != -9223372032559813448LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x457 = UINT64_MAX;
	int32_t x458 = INT32_MIN;
	uint16_t x459 = 787U;
	volatile int8_t x460 = -2;
	volatile uint64_t t94 = 2LLU;

	t94 = (x457^(x458^(x459-x460)));

	if (t94 != 2147482858LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x461 = 107831003873052893LL;
	uint8_t x463 = 0U;
	int16_t x464 = INT16_MAX;
	int64_t t95 = -176LL;

	t95 = (x461^(x462^(x463-x464)));

	if (t95 != -107831003873081089LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x466 = -1;
	static int64_t x467 = -406662LL;
	int64_t t96 = -30225413215334903LL;

	t96 = (x465^(x466^(x467-x468)));

	if (t96 != -9223372036854363270LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x469 = 0LLU;
	volatile uint16_t x470 = 22U;
	static uint32_t x471 = 12900449U;
	int8_t x472 = -1;
	volatile uint64_t t97 = 95348167051LLU;

	t97 = (x469^(x470^(x471-x472)));

	if (t97 != 12900468LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x473 = UINT8_MAX;
	int16_t x474 = INT16_MIN;

	t98 = (x473^(x474^(x475-x476)));

	if (t98 != 32638) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x477 = INT64_MIN;
	uint32_t x478 = 7514U;
	int8_t x480 = -1;
	static int64_t t99 = 137671157565453385LL;

	t99 = (x477^(x478^(x479-x480)));

	if (t99 != -9223372036854735526LL) { NG(); } else { ; }
	
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

