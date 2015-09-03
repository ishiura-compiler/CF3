#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = -448LL;
static volatile int64_t t0 = -2501LL;
uint64_t x6 = 30291198438431LLU;
volatile int8_t x25 = 0;
uint16_t x29 = UINT16_MAX;
uint32_t t4 = 29372U;
uint32_t x43 = UINT32_MAX;
volatile int8_t x45 = 1;
uint8_t x46 = 106U;
static int16_t x48 = 13;
int8_t x51 = INT8_MIN;
int32_t x56 = INT32_MIN;
int64_t t10 = 35897555584758923LL;
uint64_t t11 = 3173LLU;
uint32_t x73 = UINT32_MAX;
int8_t x76 = -7;
uint64_t t13 = 2525915LLU;
int16_t x77 = -487;
int64_t x80 = INT64_MAX;
static volatile int8_t x81 = -1;
int8_t x82 = INT8_MIN;
volatile int32_t t15 = 3016;
static volatile int32_t t16 = 0;
static volatile int32_t x90 = INT32_MIN;
volatile int32_t x102 = -1;
volatile uint64_t t19 = 96895102641LLU;
volatile uint64_t x105 = 4005938144289713046LLU;
uint64_t x107 = 64059070105342589LLU;
static int8_t x109 = -1;
int16_t x117 = -74;
static int8_t x119 = INT8_MAX;
volatile uint64_t t23 = 4083852734516LLU;
static uint32_t x121 = 774157U;
int32_t x125 = INT32_MIN;
int64_t x134 = 127961892LL;
int16_t x136 = INT16_MAX;
int32_t x137 = INT32_MAX;
uint8_t x140 = UINT8_MAX;
uint64_t t28 = 15905LLU;
int16_t x163 = -1;
int8_t x178 = INT8_MIN;
volatile int16_t x181 = -1;
int64_t x183 = INT64_MIN;
int8_t x189 = INT8_MIN;
int8_t x190 = INT8_MIN;
int32_t t33 = 67;
int32_t x194 = -1;
int64_t x200 = -10019LL;
int32_t x208 = 450;
static volatile uint64_t t39 = 279012153617420LLU;
static uint64_t t43 = 1618940943LLU;
uint32_t x270 = 212565U;
static int64_t x273 = 44771469674LL;
uint64_t x276 = UINT64_MAX;
uint64_t t48 = 11957116174414488LLU;
uint8_t x295 = 0U;
int8_t x296 = -1;
uint8_t x299 = 114U;
static int8_t x302 = INT8_MIN;
int32_t x304 = 0;
volatile int32_t t52 = 1;
int64_t t53 = 17251723225348LL;
static uint8_t x323 = 101U;
uint32_t x330 = 198U;
uint8_t x331 = UINT8_MAX;
static int64_t t57 = 1165LL;
static int8_t x333 = -1;
volatile int32_t t58 = -4940;
static uint8_t x345 = 14U;
volatile int8_t x346 = INT8_MAX;
volatile int32_t x350 = INT32_MIN;
static volatile int8_t x351 = -1;
int64_t x354 = -1LL;
int32_t x358 = 16260766;
int16_t x360 = 12;
uint8_t x362 = 0U;
volatile int32_t t63 = -86548765;
uint64_t x386 = UINT64_MAX;
volatile uint64_t t66 = 1LLU;
volatile int8_t x395 = 0;
uint8_t x401 = 2U;
uint64_t x407 = 24LLU;
volatile uint64_t t71 = 2110633LLU;
uint64_t x414 = UINT64_MAX;
int16_t x415 = -1;
volatile uint64_t t72 = 0LLU;
int16_t x427 = INT16_MIN;
int16_t x428 = -7;
int32_t x434 = -1;
uint16_t x448 = UINT16_MAX;
uint64_t x460 = 2130371818010818LLU;
int16_t x461 = 200;
volatile int8_t x466 = INT8_MIN;
static volatile int32_t t80 = INT32_MIN;
volatile uint16_t x472 = 5171U;
static int16_t x480 = INT16_MIN;
int32_t t82 = 1;
int8_t x482 = 31;
volatile int32_t t83 = -6341;
uint8_t x488 = 29U;
int8_t x499 = INT8_MIN;
uint16_t x502 = 89U;
uint64_t x528 = UINT64_MAX;
static uint64_t t95 = 89LLU;
int8_t x563 = -1;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	int64_t x2 = -1LL;
	int8_t x3 = INT8_MAX;

	t0 = (x1&(x2*(x3-x4)));

	if (t0 != 2147483073LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x5 = 8U;
	int32_t x7 = -129906;
	static int32_t x8 = INT32_MIN;
	uint64_t t1 = 211820002162944LLU;

	t1 = (x5&(x6*(x7-x8)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x13 = 12985LLU;
	int16_t x14 = INT16_MAX;
	int16_t x15 = -6191;
	int64_t x16 = 1LL;
	uint64_t t2 = 618639412459310966LLU;

	t2 = (x13&(x14*(x15-x16)));

	if (t2 != 4144LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x26 = INT8_MIN;
	int16_t x27 = -111;
	static int8_t x28 = INT8_MAX;
	volatile int32_t t3 = 761160350;

	t3 = (x25&(x26*(x27-x28)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x30 = UINT32_MAX;
	static int32_t x31 = INT32_MAX;
	int32_t x32 = 488971;

	t4 = (x29&(x30*(x31-x32)));

	if (t4 != 30220U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x33 = -1LL;
	static int32_t x34 = INT32_MAX;
	uint64_t x35 = 18LLU;
	static int16_t x36 = INT16_MIN;
	volatile uint64_t t5 = 87615341236230078LLU;

	t5 = (x33&(x34*(x35-x36)));

	if (t5 != 70407398850542LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x41 = -1;
	int16_t x42 = -1;
	int64_t x44 = 55117997257948686LL;
	int64_t t6 = 10199156659541879LL;

	t6 = (x41&(x42*(x43-x44)));

	if (t6 != 55117992962981391LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x47 = -4LL;
	volatile int64_t t7 = 7881LL;

	t7 = (x45&(x46*(x47-x48)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MIN;
	static uint8_t x50 = 25U;
	int8_t x52 = -1;
	int32_t t8 = 3768;

	t8 = (x49&(x50*(x51-x52)));

	if (t8 != -3200) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x53 = -1;
	int64_t x54 = INT64_MAX;
	uint64_t x55 = 40318LLU;
	volatile uint64_t t9 = 1010120LLU;

	t9 = (x53&(x54*(x55-x56)));

	if (t9 != 18446744071562027650LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x61 = INT64_MIN;
	uint32_t x62 = UINT32_MAX;
	static int16_t x63 = -8;
	int8_t x64 = 1;

	t10 = (x61&(x62*(x63-x64)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x65 = INT32_MIN;
	uint64_t x66 = UINT64_MAX;
	volatile int64_t x67 = 6LL;
	int32_t x68 = 0;

	t11 = (x65&(x66*(x67-x68)));

	if (t11 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x69 = INT32_MAX;
	int32_t x70 = 387;
	int32_t x71 = -2924;
	int16_t x72 = INT16_MIN;
	static int32_t t12 = 258958;

	t12 = (x69&(x70*(x71-x72)));

	if (t12 != 11549628) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x74 = 3LLU;
	volatile uint16_t x75 = 52U;

	t13 = (x73&(x74*(x75-x76)));

	if (t13 != 177LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x78 = 1U;
	volatile uint8_t x79 = 36U;
	int64_t t14 = 718310LL;

	t14 = (x77&(x78*(x79-x80)));

	if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x83 = INT8_MAX;
	volatile int16_t x84 = INT16_MAX;

	t15 = (x81&(x82*(x83-x84)));

	if (t15 != 4177920) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x85 = -1;
	int8_t x86 = INT8_MAX;
	int8_t x87 = INT8_MAX;
	int32_t x88 = -3616340;

	t16 = (x85&(x86*(x87-x88)));

	if (t16 != 459291309) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x89 = INT64_MIN;
	static uint16_t x91 = UINT16_MAX;
	volatile uint64_t x92 = UINT64_MAX;
	uint64_t t17 = 0LLU;

	t17 = (x89&(x90*(x91-x92)));

	if (t17 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x93 = -1;
	static int8_t x94 = -1;
	int32_t x95 = INT32_MIN;
	uint64_t x96 = 84083LLU;
	volatile uint64_t t18 = 29342768538LLU;

	t18 = (x93&(x94*(x95-x96)));

	if (t18 != 2147567731LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x101 = -56;
	int64_t x103 = 29459760259403292LL;
	uint64_t x104 = UINT64_MAX;

	t19 = (x101&(x102*(x103-x104)));

	if (t19 != 18417284313450148288LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x106 = -1;
	int64_t x108 = -1LL;
	uint64_t t20 = 2LLU;

	t20 = (x105&(x106*(x107-x108)));

	if (t20 != 3968905490973469058LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x110 = 407U;
	int8_t x111 = INT8_MIN;
	volatile int64_t x112 = 12160803LL;
	volatile int64_t t21 = 1682926065LL;

	t21 = (x109&(x110*(x111-x112)));

	if (t21 != -4949498917LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = INT64_MIN;
	static volatile uint8_t x114 = UINT8_MAX;
	uint16_t x115 = 1341U;
	static int16_t x116 = -1;
	volatile int64_t t22 = 92830LL;

	t22 = (x113&(x114*(x115-x116)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x118 = UINT64_MAX;
	static int8_t x120 = 1;

	t23 = (x117&(x118*(x119-x120)));

	if (t23 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x122 = -1;
	static uint8_t x123 = UINT8_MAX;
	int16_t x124 = -1;
	volatile uint32_t t24 = 7252U;

	t24 = (x121&(x122*(x123-x124)));

	if (t24 != 774144U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x126 = 45712064454LLU;
	int16_t x127 = -1;
	uint32_t x128 = UINT32_MAX;
	volatile uint64_t t25 = 283064448275LLU;

	t25 = (x125&(x126*(x127-x128)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x133 = INT16_MIN;
	static uint32_t x135 = 3U;
	int64_t t26 = -6LL;

	t26 = (x133&(x134*(x135-x136)));

	if (t26 != 549587948730843136LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x138 = 29523LLU;
	int8_t x139 = 45;
	volatile uint64_t t27 = 0LLU;

	t27 = (x137&(x138*(x139-x140)));

	if (t27 != 2141283818LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x141 = 4;
	uint64_t x142 = 1123105709255516455LLU;
	int16_t x143 = -1;
	volatile int16_t x144 = INT16_MAX;

	t28 = (x141&(x142*(x143-x144)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x161 = 423068LLU;
	int16_t x162 = INT16_MIN;
	int16_t x164 = -34;
	static uint64_t t29 = 33LLU;

	t29 = (x161&(x162*(x163-x164)));

	if (t29 != 393216LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x169 = UINT32_MAX;
	uint64_t x170 = 2011507775LLU;
	volatile int8_t x171 = INT8_MIN;
	int64_t x172 = INT64_MIN;
	uint64_t t30 = 25773678223LLU;

	t30 = (x169&(x170*(x171-x172)));

	if (t30 != 225042560LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x177 = INT16_MAX;
	int8_t x179 = -12;
	int64_t x180 = 3821LL;
	static int64_t t31 = 0LL;

	t31 = (x177&(x178*(x179-x180)));

	if (t31 != 31872LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x182 = 24896873820LLU;
	uint8_t x184 = 0U;
	static volatile uint64_t t32 = 250866325723LLU;

	t32 = (x181&(x182*(x183-x184)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x191 = INT8_MIN;
	volatile int16_t x192 = -3;

	t33 = (x189&(x190*(x191-x192)));

	if (t33 != 16000) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x193 = INT8_MIN;
	int32_t x195 = INT32_MIN;
	int8_t x196 = -4;
	int32_t t34 = -1644;

	t34 = (x193&(x194*(x195-x196)));

	if (t34 != 2147483520) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x197 = INT8_MIN;
	int64_t x198 = -1LL;
	int32_t x199 = -1;
	volatile int64_t t35 = 360569LL;

	t35 = (x197&(x198*(x199-x200)));

	if (t35 != -10112LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x201 = INT16_MAX;
	static volatile int64_t x202 = -3983408082LL;
	volatile uint64_t x203 = 685LLU;
	volatile int8_t x204 = INT8_MAX;
	static uint64_t t36 = 408864LLU;

	t36 = (x201&(x202*(x203-x204)));

	if (t36 != 7236LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x205 = INT16_MIN;
	int32_t x206 = INT32_MAX;
	int64_t x207 = -1LL;
	int64_t t37 = -2665538828288LL;

	t37 = (x205&(x206*(x207-x208)));

	if (t37 != -968515125248LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x213 = INT32_MIN;
	volatile uint16_t x214 = 11182U;
	static int16_t x215 = INT16_MIN;
	int8_t x216 = INT8_MIN;
	int32_t t38 = INT32_MIN;

	t38 = (x213&(x214*(x215-x216)));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x221 = 22180403LLU;
	volatile uint8_t x222 = UINT8_MAX;
	static uint64_t x223 = 20874LLU;
	int8_t x224 = INT8_MIN;

	t39 = (x221&(x222*(x223-x224)));

	if (t39 != 5255730LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x225 = INT8_MAX;
	uint32_t x226 = 12108034U;
	uint8_t x227 = 10U;
	int8_t x228 = INT8_MIN;
	volatile uint32_t t40 = 23U;

	t40 = (x225&(x226*(x227-x228)));

	if (t40 != 20U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x237 = -479721527997LL;
	uint32_t x238 = 119U;
	int16_t x239 = -1;
	int32_t x240 = INT32_MAX;
	static volatile int64_t t41 = 32142721596LL;

	t41 = (x237&(x238*(x239-x240)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x241 = INT64_MAX;
	volatile int8_t x242 = INT8_MIN;
	int8_t x243 = -10;
	int16_t x244 = -1;
	int64_t t42 = 30335717553LL;

	t42 = (x241&(x242*(x243-x244)));

	if (t42 != 1152LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x245 = 328451721LLU;
	static uint8_t x246 = 10U;
	static volatile int16_t x247 = -1;
	int8_t x248 = -1;

	t43 = (x245&(x246*(x247-x248)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x257 = -1;
	static uint16_t x258 = UINT16_MAX;
	static volatile int8_t x259 = INT8_MIN;
	int8_t x260 = -1;
	int32_t t44 = -23;

	t44 = (x257&(x258*(x259-x260)));

	if (t44 != -8322945) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x261 = INT32_MAX;
	int16_t x262 = -1;
	uint16_t x263 = UINT16_MAX;
	uint32_t x264 = 1904098U;
	static uint32_t t45 = 0U;

	t45 = (x261&(x262*(x263-x264)));

	if (t45 != 1838563U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x265 = -222;
	static uint8_t x266 = 10U;
	uint16_t x267 = 28577U;
	uint64_t x268 = 117756499748295LLU;
	uint64_t t46 = 20LLU;

	t46 = (x265&(x266*(x267-x268)));

	if (t46 != 18445566508712354304LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x269 = 1;
	uint8_t x271 = 92U;
	volatile uint64_t x272 = 16217312LLU;
	uint64_t t47 = 29845406LLU;

	t47 = (x269&(x270*(x271-x272)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x274 = -4;
	int32_t x275 = INT32_MAX;

	t48 = (x273&(x274*(x275-x276)));

	if (t48 != 42949672960LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x281 = INT64_MAX;
	int8_t x282 = -1;
	int64_t x283 = 55568326LL;
	int16_t x284 = INT16_MAX;
	int64_t t49 = -128732216972LL;

	t49 = (x281&(x282*(x283-x284)));

	if (t49 != 9223372036799240249LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x293 = INT16_MIN;
	uint32_t x294 = UINT32_MAX;
	volatile uint32_t t50 = 24042322U;

	t50 = (x293&(x294*(x295-x296)));

	if (t50 != 4294934528U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x297 = INT8_MIN;
	uint8_t x298 = 39U;
	int16_t x300 = -1;
	static volatile int32_t t51 = -654264;

	t51 = (x297&(x298*(x299-x300)));

	if (t51 != 4480) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x301 = INT16_MAX;
	int16_t x303 = 1034;

	t52 = (x301&(x302*(x303-x304)));

	if (t52 != 31488) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x305 = INT8_MAX;
	int64_t x306 = INT64_MIN;
	volatile int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MIN;

	t53 = (x305&(x306*(x307-x308)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x317 = -1568399;
	int64_t x318 = INT64_MIN;
	static volatile uint64_t x319 = 12191616316LLU;
	uint8_t x320 = UINT8_MAX;
	volatile uint64_t t54 = 30763LLU;

	t54 = (x317&(x318*(x319-x320)));

	if (t54 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x321 = INT32_MIN;
	int8_t x322 = -1;
	uint8_t x324 = 8U;
	static volatile int32_t t55 = INT32_MIN;

	t55 = (x321&(x322*(x323-x324)));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x325 = UINT64_MAX;
	int32_t x326 = INT32_MIN;
	static uint32_t x327 = 6U;
	int8_t x328 = INT8_MAX;
	volatile uint64_t t56 = 34252142059614190LLU;

	t56 = (x325&(x326*(x327-x328)));

	if (t56 != 2147483648LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x329 = UINT16_MAX;
	static volatile int64_t x332 = 3596247601LL;

	t57 = (x329&(x330*(x331-x332)));

	if (t57 != 54100LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x334 = -1;
	int16_t x335 = INT16_MIN;
	volatile uint8_t x336 = 0U;

	t58 = (x333&(x334*(x335-x336)));

	if (t58 != 32768) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x347 = INT8_MIN;
	uint32_t x348 = UINT32_MAX;
	uint32_t t59 = 31315U;

	t59 = (x345&(x346*(x347-x348)));

	if (t59 != 14U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x349 = 0;
	volatile uint32_t x352 = 83141U;
	static volatile uint32_t t60 = 295U;

	t60 = (x349&(x350*(x351-x352)));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x353 = -474;
	int8_t x355 = INT8_MAX;
	static int16_t x356 = -10344;
	int64_t t61 = -523127999LL;

	t61 = (x353&(x354*(x355-x356)));

	if (t61 != -10752LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x357 = INT8_MIN;
	static int64_t x359 = 2LL;
	volatile int64_t t62 = -35479845LL;

	t62 = (x357&(x358*(x359-x360)));

	if (t62 != -162607744LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x361 = INT32_MAX;
	int32_t x363 = INT32_MIN;
	volatile int16_t x364 = INT16_MIN;

	t63 = (x361&(x362*(x363-x364)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x373 = INT64_MAX;
	int32_t x374 = INT32_MIN;
	int32_t x375 = INT32_MIN;
	int32_t x376 = INT32_MIN;
	volatile int64_t t64 = 1LL;

	t64 = (x373&(x374*(x375-x376)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x381 = -9217680;
	static uint64_t x382 = 5LLU;
	uint8_t x383 = UINT8_MAX;
	static volatile int16_t x384 = INT16_MAX;
	volatile uint64_t t65 = 54LLU;

	t65 = (x381&(x382*(x383-x384)));

	if (t65 != 18446744073700180224LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x385 = INT8_MAX;
	uint64_t x387 = UINT64_MAX;
	uint32_t x388 = 1424222393U;

	t66 = (x385&(x386*(x387-x388)));

	if (t66 != 58LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x393 = 13144U;
	uint8_t x394 = 7U;
	static int16_t x396 = 3;
	volatile uint32_t t67 = 36U;

	t67 = (x393&(x394*(x395-x396)));

	if (t67 != 13128U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x397 = -1;
	int8_t x398 = INT8_MIN;
	static volatile int8_t x399 = INT8_MIN;
	int32_t x400 = -1;
	volatile int32_t t68 = 24;

	t68 = (x397&(x398*(x399-x400)));

	if (t68 != 16256) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x402 = 43LLU;
	int32_t x403 = INT32_MIN;
	volatile int64_t x404 = INT64_MIN;
	volatile uint64_t t69 = 10574925LLU;

	t69 = (x401&(x402*(x403-x404)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x405 = INT64_MIN;
	static int16_t x406 = -1;
	static int8_t x408 = INT8_MAX;
	uint64_t t70 = 55461530LLU;

	t70 = (x405&(x406*(x407-x408)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x409 = 26422191;
	uint64_t x410 = UINT64_MAX;
	static int16_t x411 = 1006;
	uint16_t x412 = 6118U;

	t71 = (x409&(x410*(x411-x412)));

	if (t71 != 936LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x413 = INT64_MIN;
	uint16_t x416 = 0U;

	t72 = (x413&(x414*(x415-x416)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x421 = INT16_MAX;
	int8_t x422 = 3;
	uint32_t x423 = 1443597654U;
	int16_t x424 = -5295;
	uint32_t t73 = 9361U;

	t73 = (x421&(x422*(x423-x424)));

	if (t73 != 26127U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x425 = -1;
	int16_t x426 = 58;
	static int32_t t74 = 92;

	t74 = (x425&(x426*(x427-x428)));

	if (t74 != -1900138) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x433 = 3245860760LLU;
	static int16_t x435 = INT16_MIN;
	static uint8_t x436 = UINT8_MAX;
	uint64_t t75 = 106LLU;

	t75 = (x433&(x434*(x435-x436)));

	if (t75 != 32920LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x445 = UINT16_MAX;
	static volatile int8_t x446 = INT8_MIN;
	volatile uint64_t x447 = UINT64_MAX;
	uint64_t t76 = 19046484992LLU;

	t76 = (x445&(x446*(x447-x448)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x453 = -105;
	int8_t x454 = 3;
	uint64_t x455 = UINT64_MAX;
	static volatile uint16_t x456 = 1U;
	static uint64_t t77 = 2038722391LLU;

	t77 = (x453&(x454*(x455-x456)));

	if (t77 != 18446744073709551506LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x457 = UINT16_MAX;
	volatile int64_t x458 = INT64_MIN;
	int8_t x459 = 3;
	uint64_t t78 = 5739693684LLU;

	t78 = (x457&(x458*(x459-x460)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x462 = INT32_MAX;
	static volatile uint32_t x463 = UINT32_MAX;
	static uint64_t x464 = 5802317088974LLU;
	uint64_t t79 = 4823569959994LLU;

	t79 = (x461&(x462*(x463-x464)));

	if (t79 != 200LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x465 = INT32_MIN;
	static volatile uint8_t x467 = UINT8_MAX;
	uint8_t x468 = 6U;

	t80 = (x465&(x466*(x467-x468)));

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x469 = -1;
	uint8_t x470 = 1U;
	volatile int64_t x471 = INT64_MAX;
	volatile int64_t t81 = -1821LL;

	t81 = (x469&(x470*(x471-x472)));

	if (t81 != 9223372036854770636LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x477 = 403210;
	int16_t x478 = INT16_MAX;
	static uint8_t x479 = 0U;

	t82 = (x477&(x478*(x479-x480)));

	if (t82 != 393216) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x481 = -1;
	uint16_t x483 = UINT16_MAX;
	int16_t x484 = INT16_MAX;

	t83 = (x481&(x482*(x483-x484)));

	if (t83 != 1015808) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x485 = UINT32_MAX;
	static volatile uint64_t x486 = 548927125693777104LLU;
	uint16_t x487 = 25U;
	volatile uint64_t t84 = 4197333819631LLU;

	t84 = (x485&(x486*(x487-x488)));

	if (t84 != 97053888LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x489 = -1;
	volatile int32_t x490 = 874460271;
	uint8_t x491 = UINT8_MAX;
	uint64_t x492 = UINT64_MAX;
	volatile uint64_t t85 = 325432311715103398LLU;

	t85 = (x489&(x490*(x491-x492)));

	if (t85 != 223861829376LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x493 = INT64_MIN;
	uint8_t x494 = 2U;
	uint64_t x495 = 65672898LLU;
	volatile uint8_t x496 = 27U;
	static uint64_t t86 = 2030LLU;

	t86 = (x493&(x494*(x495-x496)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x497 = 0U;
	uint32_t x498 = UINT32_MAX;
	volatile int8_t x500 = INT8_MIN;
	volatile uint32_t t87 = 924U;

	t87 = (x497&(x498*(x499-x500)));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x501 = 34113494869154531LLU;
	int16_t x503 = INT16_MAX;
	int32_t x504 = -167830;
	uint64_t t88 = 455077949882426993LLU;

	t88 = (x501&(x502*(x503-x504)));

	if (t88 != 17828545LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x509 = 16251LL;
	uint16_t x510 = UINT16_MAX;
	volatile int64_t x511 = -26409455LL;
	int16_t x512 = INT16_MIN;
	int64_t t89 = 1306380162165825LL;

	t89 = (x509&(x510*(x511-x512)));

	if (t89 != 14699LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x513 = 146998559502501286LLU;
	int64_t x514 = -23LL;
	int32_t x515 = -1;
	int8_t x516 = 63;
	volatile uint64_t t90 = 13LLU;

	t90 = (x513&(x514*(x515-x516)));

	if (t90 != 1408LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x517 = 502;
	int8_t x518 = -1;
	int8_t x519 = 46;
	static int64_t x520 = -108806313021712424LL;
	volatile int64_t t91 = 1809744711706656LL;

	t91 = (x517&(x518*(x519-x520)));

	if (t91 != 418LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x525 = 1834U;
	static int16_t x526 = -14;
	int8_t x527 = -1;
	volatile uint64_t t92 = 168097041LLU;

	t92 = (x525&(x526*(x527-x528)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x529 = INT16_MIN;
	volatile int8_t x530 = INT8_MIN;
	int16_t x531 = 18;
	volatile int8_t x532 = INT8_MIN;
	volatile int32_t t93 = 2554;

	t93 = (x529&(x530*(x531-x532)));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x533 = 50;
	uint8_t x534 = 29U;
	static volatile int32_t x535 = 155;
	static int8_t x536 = INT8_MIN;
	volatile int32_t t94 = 100426806;

	t94 = (x533&(x534*(x535-x536)));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x537 = 1451136961398894LLU;
	static int16_t x538 = -5914;
	static int16_t x539 = -1;
	uint8_t x540 = UINT8_MAX;

	t95 = (x537&(x538*(x539-x540)));

	if (t95 != 1181696LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x545 = INT8_MAX;
	int64_t x546 = 206LL;
	int16_t x547 = 55;
	volatile int16_t x548 = 5;
	static int64_t t96 = 8744475873698719LL;

	t96 = (x545&(x546*(x547-x548)));

	if (t96 != 60LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x561 = -1594;
	volatile int16_t x562 = -1;
	volatile int64_t x564 = -228LL;
	int64_t t97 = -832507864LL;

	t97 = (x561&(x562*(x563-x564)));

	if (t97 != -1788LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x565 = INT32_MIN;
	int64_t x566 = -594083LL;
	int8_t x567 = -1;
	int32_t x568 = 175;
	volatile int64_t t98 = 19747027015LL;

	t98 = (x565&(x566*(x567-x568)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x569 = INT64_MIN;
	volatile uint16_t x570 = 5U;
	int8_t x571 = INT8_MAX;
	static uint32_t x572 = UINT32_MAX;
	static int64_t t99 = 77253195607LL;

	t99 = (x569&(x570*(x571-x572)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

