#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = 0;
static volatile uint64_t t1 = 3212214897971LLU;
uint16_t x9 = 199U;
int32_t x11 = INT32_MIN;
static int64_t x12 = -1LL;
static int8_t x22 = 0;
int32_t x28 = 214;
uint64_t x33 = UINT64_MAX;
static int8_t x34 = -1;
static uint8_t x40 = 115U;
int32_t x43 = 41306;
volatile uint64_t t10 = 89438089LLU;
volatile uint64_t x51 = 8103579493740994546LLU;
static volatile int32_t t12 = -186402;
int64_t x53 = INT64_MAX;
int64_t t13 = 970164768420LL;
int32_t x64 = INT32_MAX;
uint32_t x65 = UINT32_MAX;
int64_t x73 = 1500701008197184LL;
static int16_t x80 = INT16_MAX;
int32_t t19 = 1;
static volatile int64_t x85 = INT64_MAX;
static uint8_t x89 = 9U;
volatile int32_t t21 = 316920;
uint32_t x98 = 6U;
uint32_t x114 = 110U;
uint64_t x125 = 194271307LLU;
volatile int32_t x126 = INT32_MAX;
uint8_t x128 = 4U;
volatile uint64_t t29 = 606LLU;
uint8_t x142 = UINT8_MAX;
volatile int16_t x144 = INT16_MIN;
uint64_t t33 = 55LLU;
int16_t x145 = INT16_MAX;
static uint16_t x146 = 27U;
volatile int32_t t34 = -17345;
int16_t x173 = -4;
int32_t x179 = -1;
int64_t x180 = -1LL;
static int32_t t40 = -931;
int16_t x188 = -1;
uint64_t x192 = 14027LLU;
static int16_t x199 = -1;
int16_t x200 = INT16_MIN;
static volatile uint32_t t44 = 15U;
uint8_t x202 = 0U;
int16_t x204 = INT16_MIN;
volatile int32_t t45 = -19;
static int16_t x207 = 15351;
uint64_t t46 = 13LLU;
static int16_t x209 = -1;
int32_t x210 = INT32_MAX;
int8_t x230 = INT8_MIN;
volatile int32_t t51 = -3932;
int8_t x237 = INT8_MAX;
int64_t x239 = INT64_MIN;
volatile int64_t x240 = INT64_MIN;
static uint8_t x245 = 3U;
int8_t x247 = INT8_MAX;
volatile uint32_t x248 = UINT32_MAX;
int32_t t54 = 1317979;
static uint8_t x250 = UINT8_MAX;
int32_t x253 = -10021314;
static volatile uint32_t x263 = UINT32_MAX;
uint32_t x267 = UINT32_MAX;
static volatile uint16_t x268 = 16055U;
int8_t x274 = -1;
volatile int16_t x275 = INT16_MAX;
int8_t x291 = INT8_MAX;
uint32_t x296 = UINT32_MAX;
static int32_t x298 = -132594;
int32_t t66 = 288438376;
volatile int32_t x303 = INT32_MIN;
int8_t x305 = INT8_MIN;
uint64_t x306 = UINT64_MAX;
uint8_t x307 = 52U;
static int8_t x324 = 7;
int8_t x333 = -4;
static int16_t x335 = INT16_MAX;
volatile int32_t t73 = 583;
int32_t x343 = INT32_MAX;
volatile int8_t x349 = -1;
int32_t t76 = -445642;
int64_t t80 = -1186122078414LL;
int8_t x370 = INT8_MIN;
uint64_t x371 = 29467LLU;
uint32_t x375 = 464U;
static uint16_t x376 = 1U;
static volatile uint8_t x381 = 54U;
volatile int64_t x391 = 3629955898109877124LL;
uint64_t x392 = UINT64_MAX;
static int64_t x394 = INT64_MIN;
int64_t x396 = INT64_MIN;
static volatile int32_t t88 = 127873;
uint8_t x402 = 38U;
uint8_t x406 = 47U;
int32_t x422 = 8545718;
int16_t x423 = 6;
int8_t x428 = INT8_MAX;
uint8_t x433 = 17U;
int32_t x436 = INT32_MAX;
int64_t t93 = -10490LL;
int16_t x440 = INT16_MIN;
volatile int32_t t94 = 15759;
uint64_t x444 = 1656952374LLU;
int32_t t96 = 14056;
static uint32_t x453 = 8U;
uint16_t x455 = 47U;
static volatile uint32_t x460 = 40264U;
static int32_t t98 = INT32_MAX;
int8_t x465 = INT8_MAX;


void f0(void) {
	uint16_t x1 = 7U;
	uint16_t x2 = 991U;
	int32_t x4 = 155;
	static volatile int32_t t0 = -992;

	t0 = ((x1&x2)<<(x3==x4));

	if (t0 != 7) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 6649U;
	static volatile uint64_t x6 = 920LLU;
	int16_t x7 = 0;
	uint64_t x8 = UINT64_MAX;

	t1 = ((x5&x6)<<(x7==x8));

	if (t1 != 408LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = 4;
	int32_t t2 = -34;

	t2 = ((x9&x10)<<(x11==x12));

	if (t2 != 4) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 4933U;
	uint32_t x14 = UINT32_MAX;
	uint64_t x15 = UINT64_MAX;
	int8_t x16 = -1;
	uint32_t t3 = 11725733U;

	t3 = ((x13&x14)<<(x15==x16));

	if (t3 != 9866U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	uint8_t x18 = 23U;
	static int8_t x19 = INT8_MIN;
	static int32_t x20 = INT32_MIN;
	static uint32_t t4 = 24248435U;

	t4 = ((x17&x18)<<(x19==x20));

	if (t4 != 23U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	volatile int64_t x23 = -4428361008850424613LL;
	int64_t x24 = INT64_MAX;
	volatile int64_t t5 = 106475077415636LL;

	t5 = ((x21&x22)<<(x23==x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	static volatile int32_t x26 = -1;
	int8_t x27 = -14;
	uint64_t t6 = UINT64_MAX;

	t6 = ((x25&x26)<<(x27==x28));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint8_t x29 = 0U;
	static int32_t x30 = INT32_MAX;
	static uint8_t x31 = 27U;
	int64_t x32 = INT64_MIN;
	volatile int32_t t7 = -76889;

	t7 = ((x29&x30)<<(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x35 = INT16_MIN;
	int16_t x36 = -990;
	uint64_t t8 = UINT64_MAX;

	t8 = ((x33&x34)<<(x35==x36));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = 1404;
	int64_t x38 = 1003LL;
	int64_t x39 = -1LL;
	volatile int64_t t9 = 23LL;

	t9 = ((x37&x38)<<(x39==x40));

	if (t9 != 360LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 28LLU;
	int8_t x42 = -1;
	int16_t x44 = -7;

	t10 = ((x41&x42)<<(x43==x44));

	if (t10 != 28LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 22U;
	int32_t x46 = INT32_MAX;
	uint16_t x47 = 23112U;
	uint64_t x48 = 4097266178LLU;
	static int32_t t11 = 92;

	t11 = ((x45&x46)<<(x47==x48));

	if (t11 != 22) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	int8_t x50 = -23;
	volatile int64_t x52 = 50LL;

	t12 = ((x49&x50)<<(x51==x52));

	if (t12 != 233) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = INT32_MAX;
	static uint64_t x55 = UINT64_MAX;
	static volatile uint16_t x56 = UINT16_MAX;

	t13 = ((x53&x54)<<(x55==x56));

	if (t13 != 2147483647LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 135U;
	volatile uint16_t x58 = UINT16_MAX;
	int64_t x59 = INT64_MAX;
	static volatile int64_t x60 = -1LL;
	static int32_t t14 = 7;

	t14 = ((x57&x58)<<(x59==x60));

	if (t14 != 135) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	uint8_t x62 = UINT8_MAX;
	uint16_t x63 = 17U;
	static int32_t t15 = -106289;

	t15 = ((x61&x62)<<(x63==x64));

	if (t15 != 128) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = -3918470180930355394LL;
	int64_t x67 = 0LL;
	int16_t x68 = 1444;
	volatile int64_t t16 = -1712360717048LL;

	t16 = ((x65&x66)<<(x67==x68));

	if (t16 != 2729410366LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = -680;
	uint32_t x70 = 1U;
	int64_t x71 = 90009027482LL;
	volatile int8_t x72 = -1;
	uint32_t t17 = 1966335U;

	t17 = ((x69&x70)<<(x71==x72));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MIN;
	volatile int64_t x75 = INT64_MIN;
	uint32_t x76 = UINT32_MAX;
	int64_t t18 = -120475034LL;

	t18 = ((x73&x74)<<(x75==x76));

	if (t18 != 1500700227928064LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 3U;
	static uint16_t x78 = 7U;
	int32_t x79 = INT32_MIN;

	t19 = ((x77&x78)<<(x79==x80));

	if (t19 != 3) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x86 = UINT32_MAX;
	int16_t x87 = INT16_MAX;
	uint16_t x88 = 1U;
	volatile int64_t t20 = 1745911021848265LL;

	t20 = ((x85&x86)<<(x87==x88));

	if (t20 != 4294967295LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x90 = INT8_MIN;
	static int64_t x91 = -568847314999020LL;
	int32_t x92 = -1225722;

	t21 = ((x89&x90)<<(x91==x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	volatile uint16_t x94 = UINT16_MAX;
	int8_t x95 = -1;
	static int32_t x96 = INT32_MIN;
	int32_t t22 = 3;

	t22 = ((x93&x94)<<(x95==x96));

	if (t22 != 32768) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 0U;
	static int32_t x99 = INT32_MIN;
	volatile int32_t x100 = -2565063;
	uint32_t t23 = 119111U;

	t23 = ((x97&x98)<<(x99==x100));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = 3;
	uint32_t x102 = UINT32_MAX;
	volatile int8_t x103 = INT8_MIN;
	static uint32_t x104 = 188860546U;
	static volatile uint32_t t24 = 6131U;

	t24 = ((x101&x102)<<(x103==x104));

	if (t24 != 3U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = UINT32_MAX;
	int16_t x106 = INT16_MIN;
	int32_t x107 = INT32_MIN;
	int8_t x108 = -1;
	static volatile uint32_t t25 = 50461U;

	t25 = ((x105&x106)<<(x107==x108));

	if (t25 != 4294934528U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = UINT16_MAX;
	volatile int16_t x110 = INT16_MAX;
	int32_t x111 = -1629;
	int64_t x112 = INT64_MAX;
	volatile int32_t t26 = 736061026;

	t26 = ((x109&x110)<<(x111==x112));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x113 = INT16_MIN;
	int32_t x115 = INT32_MIN;
	int64_t x116 = INT64_MIN;
	static uint32_t t27 = 83439U;

	t27 = ((x113&x114)<<(x115==x116));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = 2934454U;
	static int32_t x122 = 0;
	int8_t x123 = INT8_MAX;
	volatile uint8_t x124 = 28U;
	volatile uint32_t t28 = 3U;

	t28 = ((x121&x122)<<(x123==x124));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x127 = 0;

	t29 = ((x125&x126)<<(x127==x128));

	if (t29 != 194271307LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x129 = UINT64_MAX;
	static int32_t x130 = -1;
	volatile int32_t x131 = 5784096;
	int8_t x132 = -5;
	static volatile uint64_t t30 = UINT64_MAX;

	t30 = ((x129&x130)<<(x131==x132));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 740U;
	int16_t x134 = 1;
	int16_t x135 = INT16_MAX;
	volatile uint8_t x136 = UINT8_MAX;
	int32_t t31 = 159;

	t31 = ((x133&x134)<<(x135==x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = INT64_MIN;
	int32_t x138 = 1851170;
	int16_t x139 = INT16_MIN;
	static int64_t x140 = INT64_MIN;
	int64_t t32 = -5LL;

	t32 = ((x137&x138)<<(x139==x140));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = UINT64_MAX;
	static volatile int8_t x143 = INT8_MIN;

	t33 = ((x141&x142)<<(x143==x144));

	if (t33 != 255LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x147 = INT64_MIN;
	static int8_t x148 = -1;

	t34 = ((x145&x146)<<(x147==x148));

	if (t34 != 27) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x157 = INT64_MIN;
	int32_t x158 = INT32_MAX;
	uint16_t x159 = 1527U;
	int16_t x160 = INT16_MAX;
	int64_t t35 = 58362LL;

	t35 = ((x157&x158)<<(x159==x160));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x165 = 193476285152LLU;
	int8_t x166 = -1;
	int16_t x167 = -1;
	static int16_t x168 = INT16_MAX;
	volatile uint64_t t36 = 115084053LLU;

	t36 = ((x165&x166)<<(x167==x168));

	if (t36 != 193476285152LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x169 = -1;
	volatile int64_t x170 = INT64_MAX;
	uint32_t x171 = 47063449U;
	uint16_t x172 = UINT16_MAX;
	volatile int64_t t37 = INT64_MAX;

	t37 = ((x169&x170)<<(x171==x172));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x174 = INT32_MAX;
	int32_t x175 = INT32_MIN;
	int16_t x176 = INT16_MIN;
	int32_t t38 = 8157;

	t38 = ((x173&x174)<<(x175==x176));

	if (t38 != 2147483644) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x177 = UINT64_MAX;
	static int64_t x178 = INT64_MIN;
	static uint64_t t39 = 21323915354LLU;

	t39 = ((x177&x178)<<(x179==x180));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x181 = UINT8_MAX;
	volatile int32_t x182 = INT32_MAX;
	int64_t x183 = INT64_MIN;
	int8_t x184 = INT8_MIN;

	t40 = ((x181&x182)<<(x183==x184));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = INT64_MIN;
	uint64_t x186 = 361355352755483486LLU;
	int16_t x187 = 0;
	uint64_t t41 = 882716LLU;

	t41 = ((x185&x186)<<(x187==x188));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x189 = 1U;
	static int64_t x190 = INT64_MIN;
	uint8_t x191 = 26U;
	static int64_t t42 = 296480LL;

	t42 = ((x189&x190)<<(x191==x192));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x193 = 4044U;
	uint64_t x194 = 2662903LLU;
	uint16_t x195 = 26916U;
	int32_t x196 = -10989450;
	uint64_t t43 = 337393771192916594LLU;

	t43 = ((x193&x194)<<(x195==x196));

	if (t43 != 452LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x197 = INT16_MIN;
	uint32_t x198 = 2342567U;

	t44 = ((x197&x198)<<(x199==x200));

	if (t44 != 2326528U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = INT8_MIN;
	int16_t x203 = INT16_MAX;

	t45 = ((x201&x202)<<(x203==x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x205 = INT32_MIN;
	volatile uint64_t x206 = 1018197595443269LLU;
	int64_t x208 = -5080561841LL;

	t46 = ((x205&x206)<<(x207==x208));

	if (t46 != 1018197159444480LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x211 = 2LL;
	int32_t x212 = INT32_MAX;
	int32_t t47 = INT32_MAX;

	t47 = ((x209&x210)<<(x211==x212));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x217 = -1;
	static uint8_t x218 = 40U;
	static volatile uint8_t x219 = 13U;
	uint16_t x220 = 183U;
	int32_t t48 = -1;

	t48 = ((x217&x218)<<(x219==x220));

	if (t48 != 40) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x221 = 42LL;
	uint16_t x222 = 29U;
	int32_t x223 = -1;
	int8_t x224 = 50;
	static volatile int64_t t49 = -467174561014LL;

	t49 = ((x221&x222)<<(x223==x224));

	if (t49 != 8LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x225 = 679U;
	volatile int32_t x226 = INT32_MIN;
	uint8_t x227 = 11U;
	int16_t x228 = INT16_MIN;
	uint32_t t50 = 51U;

	t50 = ((x225&x226)<<(x227==x228));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = INT8_MAX;
	int64_t x231 = -27943776077LL;
	static int16_t x232 = INT16_MIN;

	t51 = ((x229&x230)<<(x231==x232));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x238 = INT32_MIN;
	volatile int32_t t52 = 1;

	t52 = ((x237&x238)<<(x239==x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x241 = 25817049U;
	int8_t x242 = INT8_MIN;
	int32_t x243 = INT32_MIN;
	uint8_t x244 = UINT8_MAX;
	static uint32_t t53 = 143U;

	t53 = ((x241&x242)<<(x243==x244));

	if (t53 != 25816960U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x246 = 3664U;

	t54 = ((x245&x246)<<(x247==x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x249 = 109276890787091LLU;
	static uint8_t x251 = 31U;
	uint16_t x252 = 15U;
	volatile uint64_t t55 = 20080214482846328LLU;

	t55 = ((x249&x250)<<(x251==x252));

	if (t55 != 19LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x254 = UINT32_MAX;
	uint8_t x255 = UINT8_MAX;
	int32_t x256 = INT32_MAX;
	uint32_t t56 = 2U;

	t56 = ((x253&x254)<<(x255==x256));

	if (t56 != 4284945982U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x257 = 240625527463908LLU;
	int32_t x258 = INT32_MIN;
	static uint64_t x259 = 24LLU;
	uint8_t x260 = UINT8_MAX;
	uint64_t t57 = 1875727636839LLU;

	t57 = ((x257&x258)<<(x259==x260));

	if (t57 != 240623395274752LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x261 = -1;
	static uint64_t x262 = 157478454791710LLU;
	static int16_t x264 = -1;
	volatile uint64_t t58 = 6427733441799037527LLU;

	t58 = ((x261&x262)<<(x263==x264));

	if (t58 != 314956909583420LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x265 = UINT32_MAX;
	volatile uint8_t x266 = UINT8_MAX;
	uint32_t t59 = 28U;

	t59 = ((x265&x266)<<(x267==x268));

	if (t59 != 255U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x269 = -48;
	uint32_t x270 = 111U;
	int8_t x271 = -3;
	int64_t x272 = INT64_MAX;
	static uint32_t t60 = 637140474U;

	t60 = ((x269&x270)<<(x271==x272));

	if (t60 != 64U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x273 = UINT64_MAX;
	int8_t x276 = -1;
	uint64_t t61 = UINT64_MAX;

	t61 = ((x273&x274)<<(x275==x276));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x277 = 11988U;
	static volatile int16_t x278 = -1;
	volatile int64_t x279 = INT64_MIN;
	uint32_t x280 = 102U;
	uint32_t t62 = 14230536U;

	t62 = ((x277&x278)<<(x279==x280));

	if (t62 != 11988U) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x281 = INT8_MIN;
	uint32_t x282 = 2089258U;
	static int8_t x283 = -8;
	static uint32_t x284 = UINT32_MAX;
	volatile uint32_t t63 = 1U;

	t63 = ((x281&x282)<<(x283==x284));

	if (t63 != 2089216U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = INT8_MIN;
	int16_t x290 = 6;
	int8_t x292 = -6;
	static volatile int32_t t64 = -431909821;

	t64 = ((x289&x290)<<(x291==x292));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x293 = INT16_MIN;
	int8_t x294 = 0;
	static int32_t x295 = INT32_MAX;
	volatile int32_t t65 = -10569794;

	t65 = ((x293&x294)<<(x295==x296));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x297 = INT8_MAX;
	volatile int32_t x299 = -1;
	volatile int64_t x300 = -541866600903728051LL;

	t66 = ((x297&x298)<<(x299==x300));

	if (t66 != 14) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = INT8_MAX;
	volatile int64_t x302 = INT64_MAX;
	volatile int16_t x304 = INT16_MIN;
	static int64_t t67 = 52LL;

	t67 = ((x301&x302)<<(x303==x304));

	if (t67 != 127LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x308 = INT32_MIN;
	uint64_t t68 = 257248444LLU;

	t68 = ((x305&x306)<<(x307==x308));

	if (t68 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x313 = 0;
	uint16_t x314 = 25U;
	int8_t x315 = 30;
	int16_t x316 = 1562;
	volatile int32_t t69 = -374039185;

	t69 = ((x313&x314)<<(x315==x316));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x321 = 1593LLU;
	volatile int64_t x322 = INT64_MIN;
	static volatile int8_t x323 = INT8_MAX;
	uint64_t t70 = 273308747614736LLU;

	t70 = ((x321&x322)<<(x323==x324));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x329 = 34;
	uint32_t x330 = UINT32_MAX;
	volatile int16_t x331 = INT16_MIN;
	int32_t x332 = INT32_MAX;
	volatile uint32_t t71 = 209740212U;

	t71 = ((x329&x330)<<(x331==x332));

	if (t71 != 34U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x334 = 246U;
	uint64_t x336 = UINT64_MAX;
	volatile int32_t t72 = 90971958;

	t72 = ((x333&x334)<<(x335==x336));

	if (t72 != 244) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x337 = INT16_MIN;
	int16_t x338 = 42;
	uint8_t x339 = 4U;
	uint64_t x340 = 2214624085112029LLU;

	t73 = ((x337&x338)<<(x339==x340));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x341 = 12235043U;
	uint32_t x342 = 25731869U;
	uint8_t x344 = UINT8_MAX;
	static volatile uint32_t t74 = 6U;

	t74 = ((x341&x342)<<(x343==x344));

	if (t74 != 8954113U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x345 = 14U;
	int64_t x346 = INT64_MIN;
	int8_t x347 = INT8_MIN;
	static volatile uint16_t x348 = UINT16_MAX;
	volatile int64_t t75 = -6865305550440460LL;

	t75 = ((x345&x346)<<(x347==x348));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x350 = 6;
	uint16_t x351 = 30U;
	int64_t x352 = INT64_MIN;

	t76 = ((x349&x350)<<(x351==x352));

	if (t76 != 6) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x353 = INT8_MAX;
	static int64_t x354 = INT64_MIN;
	uint16_t x355 = 5U;
	uint16_t x356 = UINT16_MAX;
	int64_t t77 = -43963695LL;

	t77 = ((x353&x354)<<(x355==x356));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x357 = UINT8_MAX;
	int32_t x358 = -1;
	static int64_t x359 = -1LL;
	volatile uint32_t x360 = 13U;
	volatile int32_t t78 = 27784;

	t78 = ((x357&x358)<<(x359==x360));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x361 = 1849U;
	uint8_t x362 = UINT8_MAX;
	int16_t x363 = INT16_MAX;
	uint32_t x364 = 13127U;
	int32_t t79 = 207;

	t79 = ((x361&x362)<<(x363==x364));

	if (t79 != 57) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x365 = -1LL;
	volatile uint32_t x366 = 21962934U;
	static int8_t x367 = INT8_MIN;
	uint16_t x368 = 51U;

	t80 = ((x365&x366)<<(x367==x368));

	if (t80 != 21962934LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x369 = UINT8_MAX;
	int64_t x372 = INT64_MIN;
	static int32_t t81 = -2;

	t81 = ((x369&x370)<<(x371==x372));

	if (t81 != 128) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x373 = 12198184500261658LL;
	int16_t x374 = INT16_MIN;
	int64_t t82 = -126725528555974LL;

	t82 = ((x373&x374)<<(x375==x376));

	if (t82 != 12198184500232192LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x377 = UINT16_MAX;
	int8_t x378 = INT8_MIN;
	volatile int32_t x379 = INT32_MAX;
	static int64_t x380 = INT64_MIN;
	static int32_t t83 = -601947369;

	t83 = ((x377&x378)<<(x379==x380));

	if (t83 != 65408) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x382 = INT8_MIN;
	int16_t x383 = INT16_MIN;
	volatile uint16_t x384 = 476U;
	int32_t t84 = 1194;

	t84 = ((x381&x382)<<(x383==x384));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x385 = INT16_MIN;
	volatile uint16_t x386 = UINT16_MAX;
	int8_t x387 = INT8_MIN;
	int64_t x388 = INT64_MIN;
	int32_t t85 = -1;

	t85 = ((x385&x386)<<(x387==x388));

	if (t85 != 32768) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x389 = -257206031955728187LL;
	volatile int64_t x390 = 4071847954LL;
	volatile int64_t t86 = -1LL;

	t86 = ((x389&x390)<<(x391==x392));

	if (t86 != 36726784LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x393 = 4U;
	uint64_t x395 = 514189LLU;
	volatile int64_t t87 = 42290716LL;

	t87 = ((x393&x394)<<(x395==x396));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x397 = -1;
	volatile uint8_t x398 = UINT8_MAX;
	volatile int32_t x399 = -1;
	uint8_t x400 = 122U;

	t88 = ((x397&x398)<<(x399==x400));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x401 = UINT8_MAX;
	static uint16_t x403 = 10605U;
	int16_t x404 = 57;
	int32_t t89 = -242691;

	t89 = ((x401&x402)<<(x403==x404));

	if (t89 != 38) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x405 = INT16_MIN;
	int64_t x407 = -45936LL;
	volatile int64_t x408 = 1LL;
	volatile int32_t t90 = -23780;

	t90 = ((x405&x406)<<(x407==x408));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x421 = -1LL;
	uint16_t x424 = UINT16_MAX;
	int64_t t91 = 72487LL;

	t91 = ((x421&x422)<<(x423==x424));

	if (t91 != 8545718LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x425 = 161;
	int8_t x426 = INT8_MAX;
	static uint64_t x427 = 29239159LLU;
	volatile int32_t t92 = -378135;

	t92 = ((x425&x426)<<(x427==x428));

	if (t92 != 33) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x434 = 3946396098406933LL;
	int32_t x435 = 38995;

	t93 = ((x433&x434)<<(x435==x436));

	if (t93 != 17LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x437 = INT8_MIN;
	volatile int8_t x438 = 0;
	static uint64_t x439 = 32747244692LLU;

	t94 = ((x437&x438)<<(x439==x440));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x441 = UINT64_MAX;
	int64_t x442 = -1LL;
	int8_t x443 = 41;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = ((x441&x442)<<(x443==x444));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x445 = 429U;
	int16_t x446 = -1;
	volatile int8_t x447 = INT8_MIN;
	int16_t x448 = INT16_MIN;

	t96 = ((x445&x446)<<(x447==x448));

	if (t96 != 429) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x454 = -1;
	uint32_t x456 = 123U;
	uint32_t t97 = 49019278U;

	t97 = ((x453&x454)<<(x455==x456));

	if (t97 != 8U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x457 = -1;
	int32_t x458 = INT32_MAX;
	volatile uint16_t x459 = 24U;

	t98 = ((x457&x458)<<(x459==x460));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x466 = 894U;
	int8_t x467 = INT8_MAX;
	int32_t x468 = INT32_MIN;
	static uint32_t t99 = 2U;

	t99 = ((x465&x466)<<(x467==x468));

	if (t99 != 126U) { NG(); } else { ; }
	
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

