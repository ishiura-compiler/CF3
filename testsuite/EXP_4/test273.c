#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x6 = -10;
static uint8_t x25 = 9U;
uint8_t x28 = 9U;
int32_t t4 = 3059;
static volatile int32_t x30 = 21021;
uint16_t x31 = 3U;
uint16_t x32 = 11993U;
uint64_t t5 = 786053188707LLU;
int32_t t6 = -1290354;
static uint64_t x37 = UINT64_MAX;
int32_t x38 = -1;
int8_t x51 = INT8_MIN;
static int64_t x52 = -303817550LL;
uint64_t t9 = 664779569142LLU;
static int32_t t12 = -23409721;
uint32_t x73 = 32U;
uint8_t x78 = 19U;
int16_t x79 = INT16_MIN;
volatile int32_t t14 = 0;
int64_t x85 = INT64_MIN;
int8_t x90 = INT8_MAX;
uint64_t x100 = 1055LLU;
uint16_t x115 = 3319U;
uint8_t x117 = 0U;
volatile int64_t x127 = -1LL;
volatile int32_t t22 = -1711560;
volatile int32_t t25 = 689;
uint32_t x141 = UINT32_MAX;
volatile int16_t x143 = INT16_MIN;
static volatile int32_t x162 = -3784;
int16_t x165 = INT16_MIN;
uint32_t x166 = 3266U;
uint8_t x179 = 5U;
static volatile int32_t t35 = -209812468;
int32_t x187 = -9670;
volatile int8_t x193 = INT8_MIN;
static int16_t x199 = 2;
volatile int64_t x206 = -3061230914476837471LL;
int32_t x207 = INT32_MIN;
uint64_t x224 = 195LLU;
int64_t x225 = INT64_MAX;
int8_t x231 = INT8_MAX;
volatile uint64_t t45 = UINT64_MAX;
int64_t x243 = INT64_MIN;
static uint16_t x250 = UINT16_MAX;
volatile int64_t t47 = 1246LL;
int16_t x256 = INT16_MIN;
volatile int32_t t49 = 10;
volatile int64_t t50 = INT64_MIN;
static int64_t x274 = -489023942917LL;
volatile int32_t t53 = -34546575;
int32_t x292 = 31895;
int8_t x297 = INT8_MAX;
uint32_t x302 = 1169439U;
int32_t t58 = 16;
int16_t x313 = INT16_MIN;
int32_t x316 = -18;
volatile int8_t x325 = INT8_MAX;
volatile int32_t x327 = -1;
volatile int32_t t60 = 603;
volatile int32_t t61 = -122662896;
volatile uint8_t x339 = 21U;
volatile uint32_t x340 = 44462U;
static int64_t x349 = INT64_MIN;
volatile int32_t x352 = -1;
uint8_t x359 = 1U;
uint16_t x360 = UINT16_MAX;
uint64_t x361 = 130488299335LLU;
int8_t x362 = -5;
int8_t x365 = INT8_MIN;
int8_t x377 = INT8_MIN;
volatile int32_t t70 = 5;
int64_t x383 = -1LL;
volatile int32_t t72 = 6;
int64_t x390 = INT64_MIN;
int8_t x391 = INT8_MIN;
static int16_t x394 = -3334;
int32_t t74 = 1;
volatile int32_t x402 = INT32_MIN;
uint32_t x413 = UINT32_MAX;
uint64_t x415 = UINT64_MAX;
static int32_t x418 = INT32_MIN;
uint32_t x421 = 111960U;
volatile uint32_t t81 = 21717372U;
int32_t t86 = -32498813;
static uint16_t x462 = 18636U;
int32_t t90 = -588785545;
volatile int32_t t92 = 23;
int64_t x485 = -44LL;
int16_t x487 = INT16_MIN;
int64_t x494 = INT64_MIN;
uint8_t x500 = UINT8_MAX;
uint16_t x507 = UINT16_MAX;


void f0(void) {
	int32_t x5 = INT32_MIN;
	uint8_t x7 = 5U;
	uint16_t x8 = 826U;
	volatile int32_t t0 = INT32_MIN;

	t0 = (x5^(x6==(x7-x8)));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MAX;
	int16_t x10 = INT16_MAX;
	static int64_t x11 = 954069500045395041LL;
	uint16_t x12 = UINT16_MAX;
	volatile int32_t t1 = 154056;

	t1 = (x9^(x10==(x11-x12)));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	int64_t x14 = -1LL;
	int8_t x15 = INT8_MIN;
	volatile int16_t x16 = -11453;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = (x13^(x14==(x15-x16)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x21 = INT32_MAX;
	static int8_t x22 = INT8_MAX;
	volatile int8_t x23 = -1;
	uint64_t x24 = 7LLU;
	int32_t t3 = INT32_MAX;

	t3 = (x21^(x22==(x23-x24)));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x26 = INT16_MAX;
	int64_t x27 = -597779539330919313LL;

	t4 = (x25^(x26==(x27-x28)));

	if (t4 != 9) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x29 = 2285465LLU;

	t5 = (x29^(x30==(x31-x32)));

	if (t5 != 2285465LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x33 = 3099U;
	uint32_t x34 = UINT32_MAX;
	static int8_t x35 = INT8_MIN;
	uint32_t x36 = 650456621U;

	t6 = (x33^(x34==(x35-x36)));

	if (t6 != 3099) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x39 = 0;
	volatile int16_t x40 = -1;
	uint64_t t7 = UINT64_MAX;

	t7 = (x37^(x38==(x39-x40)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = -8;
	static uint8_t x42 = 10U;
	volatile uint16_t x43 = UINT16_MAX;
	static int64_t x44 = INT64_MAX;
	volatile int32_t t8 = -20;

	t8 = (x41^(x42==(x43-x44)));

	if (t8 != -8) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x49 = 707LLU;
	int32_t x50 = INT32_MIN;

	t9 = (x49^(x50==(x51-x52)));

	if (t9 != 707LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = 187312289076015LL;
	int16_t x54 = -1;
	int64_t x55 = -62LL;
	int16_t x56 = INT16_MIN;
	volatile int64_t t10 = -75LL;

	t10 = (x53^(x54==(x55-x56)));

	if (t10 != 187312289076015LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x61 = INT64_MIN;
	static int16_t x62 = INT16_MIN;
	int16_t x63 = INT16_MAX;
	uint16_t x64 = 14161U;
	volatile int64_t t11 = INT64_MIN;

	t11 = (x61^(x62==(x63-x64)));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = 11417;
	static uint64_t x70 = 0LLU;
	static int8_t x71 = INT8_MIN;
	int64_t x72 = INT64_MIN;

	t12 = (x69^(x70==(x71-x72)));

	if (t12 != 11417) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x74 = 14467U;
	uint16_t x75 = 6U;
	volatile int16_t x76 = INT16_MIN;
	static uint32_t t13 = 147U;

	t13 = (x73^(x74==(x75-x76)));

	if (t13 != 32U) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x77 = 0;
	int16_t x80 = -1;

	t14 = (x77^(x78==(x79-x80)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x81 = -3274;
	int8_t x82 = INT8_MIN;
	uint64_t x83 = 197036113LLU;
	uint8_t x84 = 12U;
	int32_t t15 = -68500355;

	t15 = (x81^(x82==(x83-x84)));

	if (t15 != -3274) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x86 = INT8_MIN;
	int8_t x87 = INT8_MIN;
	volatile uint16_t x88 = 1U;
	int64_t t16 = INT64_MIN;

	t16 = (x85^(x86==(x87-x88)));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x89 = 4002040983635452537LLU;
	volatile int32_t x91 = INT32_MAX;
	uint32_t x92 = 20U;
	volatile uint64_t t17 = 2174737406819LLU;

	t17 = (x89^(x90==(x91-x92)));

	if (t17 != 4002040983635452537LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x97 = UINT64_MAX;
	int32_t x98 = -1;
	volatile int16_t x99 = INT16_MIN;
	static volatile uint64_t t18 = UINT64_MAX;

	t18 = (x97^(x98==(x99-x100)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x109 = INT16_MIN;
	uint8_t x110 = 0U;
	uint64_t x111 = 599247525302800435LLU;
	static volatile int64_t x112 = INT64_MIN;
	int32_t t19 = 968285;

	t19 = (x109^(x110==(x111-x112)));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = 37;
	volatile int32_t x114 = INT32_MIN;
	uint8_t x116 = 8U;
	static int32_t t20 = -821382;

	t20 = (x113^(x114==(x115-x116)));

	if (t20 != 37) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x118 = 26656333;
	static int16_t x119 = 312;
	uint8_t x120 = UINT8_MAX;
	static int32_t t21 = 814;

	t21 = (x117^(x118==(x119-x120)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x125 = 31;
	volatile int8_t x126 = 4;
	int8_t x128 = INT8_MAX;

	t22 = (x125^(x126==(x127-x128)));

	if (t22 != 31) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x129 = -1LL;
	int32_t x130 = -21080;
	static int32_t x131 = INT32_MAX;
	volatile int64_t x132 = INT64_MAX;
	volatile int64_t t23 = -301LL;

	t23 = (x129^(x130==(x131-x132)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x133 = UINT32_MAX;
	int8_t x134 = -12;
	static uint16_t x135 = 9606U;
	int16_t x136 = INT16_MIN;
	uint32_t t24 = UINT32_MAX;

	t24 = (x133^(x134==(x135-x136)));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x137 = 9;
	volatile int8_t x138 = INT8_MIN;
	int64_t x139 = 36LL;
	int8_t x140 = INT8_MAX;

	t25 = (x137^(x138==(x139-x140)));

	if (t25 != 9) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x142 = 23853582401LLU;
	int16_t x144 = INT16_MIN;
	uint32_t t26 = UINT32_MAX;

	t26 = (x141^(x142==(x143-x144)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x145 = INT16_MIN;
	volatile int64_t x146 = 27LL;
	int64_t x147 = INT64_MIN;
	static int32_t x148 = INT32_MIN;
	int32_t t27 = -128747067;

	t27 = (x145^(x146==(x147-x148)));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x149 = INT64_MIN;
	uint8_t x150 = UINT8_MAX;
	int8_t x151 = -1;
	static int32_t x152 = -132459878;
	int64_t t28 = INT64_MIN;

	t28 = (x149^(x150==(x151-x152)));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x157 = 921189723U;
	int16_t x158 = INT16_MIN;
	int8_t x159 = INT8_MIN;
	static int8_t x160 = 6;
	volatile uint32_t t29 = 3U;

	t29 = (x157^(x158==(x159-x160)));

	if (t29 != 921189723U) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x161 = UINT64_MAX;
	int16_t x163 = INT16_MIN;
	volatile int32_t x164 = INT32_MIN;
	volatile uint64_t t30 = UINT64_MAX;

	t30 = (x161^(x162==(x163-x164)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x167 = INT16_MIN;
	int8_t x168 = INT8_MIN;
	int32_t t31 = 0;

	t31 = (x165^(x166==(x167-x168)));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x169 = -1243;
	int16_t x170 = -1;
	int16_t x171 = 338;
	int16_t x172 = INT16_MAX;
	volatile int32_t t32 = -1;

	t32 = (x169^(x170==(x171-x172)));

	if (t32 != -1243) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x173 = -1;
	int64_t x174 = INT64_MAX;
	static int16_t x175 = INT16_MIN;
	static int32_t x176 = -1;
	volatile int32_t t33 = 11401;

	t33 = (x173^(x174==(x175-x176)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x177 = 1055;
	volatile int8_t x178 = INT8_MAX;
	uint64_t x180 = 126026LLU;
	int32_t t34 = 0;

	t34 = (x177^(x178==(x179-x180)));

	if (t34 != 1055) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x181 = INT8_MAX;
	int32_t x182 = -1;
	int64_t x183 = INT64_MIN;
	int16_t x184 = INT16_MIN;

	t35 = (x181^(x182==(x183-x184)));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x185 = 40U;
	static int64_t x186 = INT64_MAX;
	int64_t x188 = INT64_MIN;
	int32_t t36 = -105;

	t36 = (x185^(x186==(x187-x188)));

	if (t36 != 40) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x194 = 1U;
	int16_t x195 = INT16_MIN;
	uint64_t x196 = 1241095LLU;
	int32_t t37 = 2;

	t37 = (x193^(x194==(x195-x196)));

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x197 = INT64_MIN;
	int64_t x198 = INT64_MAX;
	uint64_t x200 = 6948691861958LLU;
	volatile int64_t t38 = INT64_MIN;

	t38 = (x197^(x198==(x199-x200)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x205 = 3;
	static uint64_t x208 = 170LLU;
	int32_t t39 = 25611755;

	t39 = (x205^(x206==(x207-x208)));

	if (t39 != 3) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x209 = -335251516;
	volatile int64_t x210 = -1LL;
	uint32_t x211 = UINT32_MAX;
	volatile int64_t x212 = -2053026746543032LL;
	int32_t t40 = 20163907;

	t40 = (x209^(x210==(x211-x212)));

	if (t40 != -335251516) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x217 = INT16_MIN;
	int16_t x218 = INT16_MAX;
	int32_t x219 = INT32_MIN;
	int8_t x220 = INT8_MIN;
	volatile int32_t t41 = 13;

	t41 = (x217^(x218==(x219-x220)));

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x221 = -1;
	volatile int16_t x222 = INT16_MAX;
	volatile int8_t x223 = -49;
	int32_t t42 = 1156;

	t42 = (x221^(x222==(x223-x224)));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x226 = -1LL;
	int64_t x227 = INT64_MIN;
	int16_t x228 = -1960;
	int64_t t43 = INT64_MAX;

	t43 = (x225^(x226==(x227-x228)));

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x229 = INT16_MIN;
	int32_t x230 = 1;
	static int16_t x232 = INT16_MIN;
	static int32_t t44 = 834009710;

	t44 = (x229^(x230==(x231-x232)));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x237 = UINT64_MAX;
	int8_t x238 = -2;
	uint32_t x239 = 490987U;
	static volatile int32_t x240 = INT32_MIN;

	t45 = (x237^(x238==(x239-x240)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x241 = INT16_MAX;
	volatile int64_t x242 = -395425020076394LL;
	static int32_t x244 = -1;
	int32_t t46 = -29;

	t46 = (x241^(x242==(x243-x244)));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x249 = -1LL;
	int8_t x251 = INT8_MIN;
	int16_t x252 = INT16_MIN;

	t47 = (x249^(x250==(x251-x252)));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x253 = -1;
	static uint16_t x254 = UINT16_MAX;
	int8_t x255 = INT8_MIN;
	volatile int32_t t48 = -6;

	t48 = (x253^(x254==(x255-x256)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x257 = 2U;
	int16_t x258 = INT16_MIN;
	int32_t x259 = INT32_MIN;
	int16_t x260 = INT16_MIN;

	t49 = (x257^(x258==(x259-x260)));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x261 = INT64_MIN;
	volatile int8_t x262 = INT8_MAX;
	int16_t x263 = INT16_MIN;
	static uint64_t x264 = 1799694055608534LLU;

	t50 = (x261^(x262==(x263-x264)));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x265 = UINT64_MAX;
	int8_t x266 = INT8_MIN;
	static int64_t x267 = 1004555043829395LL;
	int8_t x268 = INT8_MIN;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (x265^(x266==(x267-x268)));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x269 = INT64_MIN;
	volatile uint16_t x270 = 42U;
	volatile int8_t x271 = -1;
	static int64_t x272 = INT64_MIN;
	static int64_t t52 = INT64_MIN;

	t52 = (x269^(x270==(x271-x272)));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x273 = 323639;
	static int64_t x275 = INT64_MIN;
	int64_t x276 = INT64_MIN;

	t53 = (x273^(x274==(x275-x276)));

	if (t53 != 323639) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x277 = 194;
	int32_t x278 = INT32_MAX;
	uint8_t x279 = 0U;
	int32_t x280 = -417656;
	int32_t t54 = -39;

	t54 = (x277^(x278==(x279-x280)));

	if (t54 != 194) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x289 = UINT8_MAX;
	int64_t x290 = 1540LL;
	int64_t x291 = 0LL;
	static int32_t t55 = 7272;

	t55 = (x289^(x290==(x291-x292)));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x298 = -215LL;
	static int32_t x299 = INT32_MIN;
	int64_t x300 = 2911135697514456LL;
	volatile int32_t t56 = -92;

	t56 = (x297^(x298==(x299-x300)));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x301 = -1;
	volatile uint32_t x303 = 141766U;
	volatile uint8_t x304 = 0U;
	volatile int32_t t57 = 1569;

	t57 = (x301^(x302==(x303-x304)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x305 = 96U;
	static uint8_t x306 = UINT8_MAX;
	int8_t x307 = INT8_MAX;
	int8_t x308 = 2;

	t58 = (x305^(x306==(x307-x308)));

	if (t58 != 96) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x314 = UINT32_MAX;
	volatile int16_t x315 = 11560;
	int32_t t59 = -6839;

	t59 = (x313^(x314==(x315-x316)));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x326 = INT64_MIN;
	static uint64_t x328 = 651177323691948338LLU;

	t60 = (x325^(x326==(x327-x328)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x329 = UINT16_MAX;
	static int32_t x330 = INT32_MIN;
	static int64_t x331 = -1009568791818292LL;
	int8_t x332 = INT8_MIN;

	t61 = (x329^(x330==(x331-x332)));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x337 = 16958725;
	int16_t x338 = -1;
	volatile int32_t t62 = 1;

	t62 = (x337^(x338==(x339-x340)));

	if (t62 != 16958725) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x341 = UINT16_MAX;
	volatile uint8_t x342 = 0U;
	int8_t x343 = -2;
	volatile uint64_t x344 = 68220364LLU;
	int32_t t63 = 168;

	t63 = (x341^(x342==(x343-x344)));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x350 = INT64_MIN;
	static volatile int64_t x351 = -14971306248LL;
	volatile int64_t t64 = INT64_MIN;

	t64 = (x349^(x350==(x351-x352)));

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x353 = INT8_MAX;
	int16_t x354 = INT16_MIN;
	int8_t x355 = INT8_MIN;
	volatile int8_t x356 = INT8_MIN;
	volatile int32_t t65 = -149;

	t65 = (x353^(x354==(x355-x356)));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x357 = INT16_MIN;
	uint64_t x358 = UINT64_MAX;
	volatile int32_t t66 = 4269490;

	t66 = (x357^(x358==(x359-x360)));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x363 = -1;
	uint64_t x364 = 822487LLU;
	static uint64_t t67 = 2075543008844256LLU;

	t67 = (x361^(x362==(x363-x364)));

	if (t67 != 130488299335LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x366 = INT64_MAX;
	volatile uint8_t x367 = 59U;
	volatile uint16_t x368 = 4U;
	int32_t t68 = 198320;

	t68 = (x365^(x366==(x367-x368)));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x369 = INT32_MAX;
	int16_t x370 = INT16_MIN;
	int16_t x371 = INT16_MIN;
	int64_t x372 = INT64_MIN;
	int32_t t69 = INT32_MAX;

	t69 = (x369^(x370==(x371-x372)));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x378 = 72560U;
	static int8_t x379 = -1;
	static uint32_t x380 = 832751U;

	t70 = (x377^(x378==(x379-x380)));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x381 = 131671U;
	int16_t x382 = INT16_MIN;
	volatile uint8_t x384 = 8U;
	volatile uint32_t t71 = 121683797U;

	t71 = (x381^(x382==(x383-x384)));

	if (t71 != 131671U) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x385 = INT16_MIN;
	int16_t x386 = -1;
	static int16_t x387 = INT16_MIN;
	int64_t x388 = 1056625LL;

	t72 = (x385^(x386==(x387-x388)));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x389 = INT16_MAX;
	volatile uint64_t x392 = 805766LLU;
	static int32_t t73 = -267;

	t73 = (x389^(x390==(x391-x392)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x393 = -21;
	int64_t x395 = -3486015LL;
	int16_t x396 = INT16_MIN;

	t74 = (x393^(x394==(x395-x396)));

	if (t74 != -21) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x397 = -1LL;
	uint32_t x398 = UINT32_MAX;
	static uint16_t x399 = 21990U;
	int16_t x400 = -2740;
	int64_t t75 = 15144268376758LL;

	t75 = (x397^(x398==(x399-x400)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x401 = UINT64_MAX;
	uint16_t x403 = UINT16_MAX;
	int16_t x404 = INT16_MIN;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x401^(x402==(x403-x404)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x405 = INT16_MIN;
	static int8_t x406 = INT8_MIN;
	volatile uint16_t x407 = UINT16_MAX;
	uint32_t x408 = 502267773U;
	volatile int32_t t77 = -158490285;

	t77 = (x405^(x406==(x407-x408)));

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x409 = INT8_MIN;
	static int16_t x410 = -60;
	volatile uint16_t x411 = UINT16_MAX;
	uint32_t x412 = 517105530U;
	volatile int32_t t78 = 1;

	t78 = (x409^(x410==(x411-x412)));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x414 = 3U;
	uint64_t x416 = UINT64_MAX;
	uint32_t t79 = UINT32_MAX;

	t79 = (x413^(x414==(x415-x416)));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x417 = 419057647427229511LLU;
	uint8_t x419 = 25U;
	volatile int64_t x420 = -819457859790LL;
	uint64_t t80 = 3LLU;

	t80 = (x417^(x418==(x419-x420)));

	if (t80 != 419057647427229511LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x422 = -1LL;
	uint32_t x423 = UINT32_MAX;
	uint64_t x424 = UINT64_MAX;

	t81 = (x421^(x422==(x423-x424)));

	if (t81 != 111960U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x429 = 35U;
	int16_t x430 = INT16_MAX;
	uint32_t x431 = 4U;
	uint64_t x432 = 76522642383532627LLU;
	static uint32_t t82 = 485U;

	t82 = (x429^(x430==(x431-x432)));

	if (t82 != 35U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x433 = INT8_MIN;
	int8_t x434 = 35;
	int32_t x435 = -570711961;
	uint16_t x436 = 6U;
	static volatile int32_t t83 = 179513375;

	t83 = (x433^(x434==(x435-x436)));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x437 = 484U;
	int16_t x438 = -1;
	uint16_t x439 = 7596U;
	int16_t x440 = -1;
	static volatile int32_t t84 = -1;

	t84 = (x437^(x438==(x439-x440)));

	if (t84 != 484) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x449 = -1;
	uint64_t x450 = 29LLU;
	static volatile int64_t x451 = -612784026463LL;
	uint16_t x452 = UINT16_MAX;
	static int32_t t85 = 74;

	t85 = (x449^(x450==(x451-x452)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x453 = 14U;
	uint16_t x454 = 55U;
	int32_t x455 = -1;
	static int64_t x456 = -84669914095591500LL;

	t86 = (x453^(x454==(x455-x456)));

	if (t86 != 14) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x457 = INT8_MIN;
	volatile uint64_t x458 = 96LLU;
	uint32_t x459 = UINT32_MAX;
	int8_t x460 = -3;
	volatile int32_t t87 = 738;

	t87 = (x457^(x458==(x459-x460)));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x461 = UINT32_MAX;
	uint32_t x463 = UINT32_MAX;
	int64_t x464 = -10452166LL;
	static uint32_t t88 = UINT32_MAX;

	t88 = (x461^(x462==(x463-x464)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x465 = -1;
	int64_t x466 = INT64_MIN;
	static uint8_t x467 = UINT8_MAX;
	volatile uint32_t x468 = 732U;
	int32_t t89 = 6;

	t89 = (x465^(x466==(x467-x468)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x469 = INT8_MIN;
	uint32_t x470 = UINT32_MAX;
	int32_t x471 = INT32_MAX;
	uint64_t x472 = 15878801LLU;

	t90 = (x469^(x470==(x471-x472)));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x473 = -1;
	int8_t x474 = -1;
	uint64_t x475 = 365644377640524308LLU;
	int32_t x476 = -1;
	volatile int32_t t91 = -217706608;

	t91 = (x473^(x474==(x475-x476)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x477 = 1638;
	volatile int32_t x478 = INT32_MIN;
	int32_t x479 = 42;
	int32_t x480 = -1;

	t92 = (x477^(x478==(x479-x480)));

	if (t92 != 1638) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x481 = INT64_MIN;
	uint64_t x482 = 538613143330334LLU;
	static uint16_t x483 = UINT16_MAX;
	uint8_t x484 = 6U;
	int64_t t93 = INT64_MIN;

	t93 = (x481^(x482==(x483-x484)));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x486 = INT64_MAX;
	static int16_t x488 = INT16_MIN;
	int64_t t94 = -3287863882729LL;

	t94 = (x485^(x486==(x487-x488)));

	if (t94 != -44LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x489 = -1;
	int16_t x490 = -1;
	uint64_t x491 = 228473686986LLU;
	int16_t x492 = INT16_MAX;
	static volatile int32_t t95 = 80;

	t95 = (x489^(x490==(x491-x492)));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x493 = 13668LLU;
	int64_t x495 = -3LL;
	static int16_t x496 = INT16_MAX;
	static volatile uint64_t t96 = 830LLU;

	t96 = (x493^(x494==(x495-x496)));

	if (t96 != 13668LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x497 = 1U;
	uint16_t x498 = UINT16_MAX;
	static uint64_t x499 = 107572314453LLU;
	volatile int32_t t97 = 2;

	t97 = (x497^(x498==(x499-x500)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x505 = 6555;
	static uint8_t x506 = UINT8_MAX;
	uint16_t x508 = 0U;
	static volatile int32_t t98 = -6916631;

	t98 = (x505^(x506==(x507-x508)));

	if (t98 != 6555) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x509 = INT64_MIN;
	uint8_t x510 = 31U;
	static volatile uint32_t x511 = 824U;
	static int16_t x512 = -1;
	volatile int64_t t99 = INT64_MIN;

	t99 = (x509^(x510==(x511-x512)));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

