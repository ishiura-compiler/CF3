#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
int32_t t0 = -421141;
static int32_t t1 = -2735;
int64_t x9 = 45204443584967LL;
int64_t x10 = INT64_MIN;
int16_t x12 = INT16_MIN;
static int32_t t4 = 8038;
volatile int16_t x21 = 12;
int32_t x22 = -302;
int32_t x23 = INT32_MAX;
volatile int8_t x24 = 6;
int32_t t5 = -131995;
static int16_t x27 = -38;
uint16_t x30 = 6U;
volatile int8_t x46 = -3;
uint8_t x48 = 4U;
int8_t x56 = -1;
volatile int32_t t11 = 35750;
volatile int8_t x63 = INT8_MIN;
volatile int32_t x64 = INT32_MIN;
static int32_t t12 = -150155679;
int64_t x79 = -4LL;
int8_t x102 = -1;
static uint32_t x106 = 2017648727U;
int32_t x109 = INT32_MIN;
int64_t x111 = 266LL;
volatile int32_t t22 = -15;
uint64_t x114 = 656213186964LLU;
uint8_t x119 = 4U;
volatile int64_t x121 = -1LL;
int32_t x132 = -6840;
int32_t t26 = 89404545;
volatile uint8_t x142 = UINT8_MAX;
int32_t t30 = -27448555;
int16_t x172 = INT16_MIN;
volatile int32_t t32 = 6440432;
int8_t x177 = 63;
int8_t x184 = -1;
int32_t t37 = -122586;
static volatile int16_t x212 = -285;
volatile uint8_t x213 = 3U;
int64_t x223 = -27725LL;
int16_t x224 = -162;
uint64_t x226 = 1LLU;
int32_t x233 = INT32_MIN;
int16_t x242 = -9491;
static volatile int32_t t45 = 12;
static volatile int32_t t46 = 3983;
uint16_t x249 = 12358U;
uint32_t x255 = 5263U;
int32_t t48 = 6;
volatile int64_t x257 = -54546635248531333LL;
int32_t x258 = -202892;
int32_t x260 = 6;
int16_t x262 = -1;
uint16_t x265 = 5921U;
volatile uint64_t x270 = 12LLU;
volatile int16_t x271 = INT16_MIN;
static volatile uint8_t x273 = UINT8_MAX;
volatile uint64_t x278 = 103569306LLU;
uint64_t x279 = UINT64_MAX;
static uint8_t x285 = 21U;
int8_t x286 = INT8_MIN;
volatile int8_t x287 = -1;
static int32_t x288 = -94;
int8_t x289 = INT8_MAX;
volatile int64_t x290 = -2052368785797806831LL;
int32_t t57 = -773868865;
volatile int8_t x305 = -1;
static uint64_t x308 = 835284LLU;
uint64_t x316 = UINT64_MAX;
int64_t x321 = -993915LL;
uint16_t x322 = 158U;
volatile int32_t t66 = -1;
uint64_t x331 = UINT64_MAX;
int8_t x342 = -53;
int64_t x343 = 1284532359647LL;
static int32_t t72 = -6;
uint32_t x358 = UINT32_MAX;
static int32_t t73 = -7717283;
volatile uint16_t x364 = UINT16_MAX;
volatile int32_t x368 = INT32_MIN;
int8_t x377 = INT8_MIN;
int32_t t79 = 27360;
int8_t x385 = -1;
volatile int32_t t80 = -40304;
static int16_t x389 = 63;
volatile int8_t x392 = INT8_MIN;
uint32_t x393 = 58U;
volatile int32_t x405 = INT32_MIN;
volatile int64_t x411 = INT64_MIN;
static int32_t x417 = -2341833;
uint64_t x422 = 725803818162677LLU;
int64_t x430 = INT64_MAX;
int16_t x431 = -214;
int64_t x436 = INT64_MIN;
volatile int32_t t91 = 46066;
volatile int32_t t94 = 1532434;
int32_t t98 = 81;
uint8_t x465 = 1U;
uint32_t x467 = UINT32_MAX;
uint64_t x468 = UINT64_MAX;


void f0(void) {
	int16_t x2 = 0;
	int8_t x3 = INT8_MIN;
	int32_t x4 = INT32_MIN;

	t0 = (x1<=((x2+x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	volatile uint16_t x6 = UINT16_MAX;
	static int8_t x7 = 12;
	volatile int16_t x8 = INT16_MIN;

	t1 = (x5<=((x6+x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x11 = 0U;
	volatile int32_t t2 = -687;

	t2 = (x9<=((x10+x11)/x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -7571LL;
	int64_t x14 = 28674195888550041LL;
	static int8_t x15 = INT8_MIN;
	uint16_t x16 = 107U;
	volatile int32_t t3 = -521765730;

	t3 = (x13<=((x14+x15)/x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static int32_t x18 = INT32_MAX;
	volatile int32_t x19 = -1;
	uint32_t x20 = 7U;

	t4 = (x17<=((x18+x19)/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {


	t5 = (x21<=((x22+x23)/x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 93134U;
	static uint8_t x26 = 7U;
	static int8_t x28 = -1;
	int32_t t6 = 626366840;

	t6 = (x25<=((x26+x27)/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 1U;
	volatile int64_t x31 = INT64_MIN;
	int64_t x32 = 49LL;
	int32_t t7 = -644;

	t7 = (x29<=((x30+x31)/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int16_t x34 = -1;
	int8_t x35 = INT8_MIN;
	uint8_t x36 = 1U;
	volatile int32_t t8 = 716115979;

	t8 = (x33<=((x34+x35)/x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = UINT32_MAX;
	int32_t x42 = INT32_MIN;
	int64_t x43 = -1LL;
	uint64_t x44 = UINT64_MAX;
	static int32_t t9 = 718477;

	t9 = (x41<=((x42+x43)/x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -1;
	volatile uint16_t x47 = UINT16_MAX;
	int32_t t10 = -1393396;

	t10 = (x45<=((x46+x47)/x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -65;
	static volatile int16_t x54 = -12;
	int64_t x55 = -1LL;

	t11 = (x53<=((x54+x55)/x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x61 = INT32_MIN;
	int16_t x62 = -1;

	t12 = (x61<=((x62+x63)/x64));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x65 = 5158338U;
	static uint8_t x66 = UINT8_MAX;
	uint32_t x67 = UINT32_MAX;
	int16_t x68 = 1;
	static int32_t t13 = 9883;

	t13 = (x65<=((x66+x67)/x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x69 = 0U;
	static uint64_t x70 = 1611518LLU;
	static uint64_t x71 = UINT64_MAX;
	int8_t x72 = -1;
	volatile int32_t t14 = 0;

	t14 = (x69<=((x70+x71)/x72));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x73 = -5;
	volatile uint8_t x74 = 6U;
	int16_t x75 = INT16_MIN;
	uint32_t x76 = UINT32_MAX;
	volatile int32_t t15 = -14;

	t15 = (x73<=((x74+x75)/x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = UINT16_MAX;
	static int8_t x78 = 1;
	volatile int16_t x80 = INT16_MIN;
	volatile int32_t t16 = 13;

	t16 = (x77<=((x78+x79)/x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x85 = 6999;
	static uint32_t x86 = 2005U;
	int32_t x87 = -41631;
	static int32_t x88 = -30;
	volatile int32_t t17 = 12496459;

	t17 = (x85<=((x86+x87)/x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x89 = 24U;
	int16_t x90 = INT16_MIN;
	static int16_t x91 = INT16_MIN;
	int32_t x92 = INT32_MAX;
	int32_t t18 = -2923;

	t18 = (x89<=((x90+x91)/x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = 48617245;
	static int8_t x98 = INT8_MIN;
	int64_t x99 = -1LL;
	volatile int8_t x100 = 8;
	volatile int32_t t19 = -362;

	t19 = (x97<=((x98+x99)/x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = INT16_MIN;
	int32_t x103 = -1;
	uint32_t x104 = UINT32_MAX;
	volatile int32_t t20 = 474881450;

	t20 = (x101<=((x102+x103)/x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x105 = 241889014453491LL;
	int8_t x107 = 1;
	uint16_t x108 = UINT16_MAX;
	int32_t t21 = 155;

	t21 = (x105<=((x106+x107)/x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x110 = UINT32_MAX;
	volatile int16_t x112 = 8931;

	t22 = (x109<=((x110+x111)/x112));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x113 = UINT16_MAX;
	int8_t x115 = 1;
	volatile int8_t x116 = 48;
	static volatile int32_t t23 = -1;

	t23 = (x113<=((x114+x115)/x116));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = 15447094452519LL;
	uint64_t x118 = 110357188532765719LLU;
	int8_t x120 = INT8_MAX;
	static volatile int32_t t24 = -18736872;

	t24 = (x117<=((x118+x119)/x120));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x122 = INT64_MIN;
	int16_t x123 = 47;
	int32_t x124 = INT32_MAX;
	volatile int32_t t25 = -3157158;

	t25 = (x121<=((x122+x123)/x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = 1;
	int64_t x130 = -1LL;
	int32_t x131 = 1010;

	t26 = (x129<=((x130+x131)/x132));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x137 = INT64_MIN;
	uint8_t x138 = 1U;
	static int32_t x139 = -463;
	volatile uint32_t x140 = 14312756U;
	volatile int32_t t27 = -236806716;

	t27 = (x137<=((x138+x139)/x140));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = 9;
	static uint8_t x143 = 2U;
	uint16_t x144 = 59U;
	static int32_t t28 = 269027814;

	t28 = (x141<=((x142+x143)/x144));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x145 = -1;
	int32_t x146 = INT32_MAX;
	static int16_t x147 = 0;
	static uint64_t x148 = UINT64_MAX;
	static int32_t t29 = -213081856;

	t29 = (x145<=((x146+x147)/x148));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x153 = -1;
	uint64_t x154 = 124LLU;
	static volatile int8_t x155 = INT8_MAX;
	uint64_t x156 = UINT64_MAX;

	t30 = (x153<=((x154+x155)/x156));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x161 = 98934211048352LLU;
	volatile int8_t x162 = INT8_MAX;
	int64_t x163 = INT64_MIN;
	uint32_t x164 = UINT32_MAX;
	volatile int32_t t31 = 69954;

	t31 = (x161<=((x162+x163)/x164));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x169 = 537317773557306LLU;
	int8_t x170 = INT8_MAX;
	int8_t x171 = -1;

	t32 = (x169<=((x170+x171)/x172));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x178 = INT16_MIN;
	volatile uint16_t x179 = 32183U;
	int8_t x180 = INT8_MIN;
	static int32_t t33 = 124100079;

	t33 = (x177<=((x178+x179)/x180));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x181 = 2039U;
	static int32_t x182 = INT32_MIN;
	int64_t x183 = 1414LL;
	volatile int32_t t34 = 112;

	t34 = (x181<=((x182+x183)/x184));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x185 = -1LL;
	int16_t x186 = -522;
	int64_t x187 = 15106739081650LL;
	static int32_t x188 = -3;
	static volatile int32_t t35 = 1;

	t35 = (x185<=((x186+x187)/x188));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x193 = INT32_MIN;
	int64_t x194 = INT64_MIN;
	uint8_t x195 = 6U;
	int16_t x196 = -1;
	static volatile int32_t t36 = 5;

	t36 = (x193<=((x194+x195)/x196));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x197 = 377366U;
	int16_t x198 = -9;
	int8_t x199 = INT8_MAX;
	int16_t x200 = INT16_MAX;

	t37 = (x197<=((x198+x199)/x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x201 = 0;
	static volatile int64_t x202 = -5LL;
	uint32_t x203 = 24U;
	int8_t x204 = INT8_MAX;
	int32_t t38 = -52789;

	t38 = (x201<=((x202+x203)/x204));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x209 = 252;
	int8_t x210 = INT8_MIN;
	uint16_t x211 = 229U;
	int32_t t39 = -284532;

	t39 = (x209<=((x210+x211)/x212));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x214 = UINT64_MAX;
	static int8_t x215 = INT8_MIN;
	volatile int8_t x216 = INT8_MAX;
	volatile int32_t t40 = -8030303;

	t40 = (x213<=((x214+x215)/x216));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x221 = INT8_MIN;
	static int32_t x222 = 890881;
	volatile int32_t t41 = 164;

	t41 = (x221<=((x222+x223)/x224));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x225 = INT64_MIN;
	int64_t x227 = -1LL;
	int64_t x228 = -1LL;
	static int32_t t42 = -45444;

	t42 = (x225<=((x226+x227)/x228));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x229 = INT8_MIN;
	int16_t x230 = -1;
	uint64_t x231 = UINT64_MAX;
	int32_t x232 = INT32_MAX;
	volatile int32_t t43 = -219912;

	t43 = (x229<=((x230+x231)/x232));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x234 = 124918640U;
	uint8_t x235 = 113U;
	int64_t x236 = 4029LL;
	volatile int32_t t44 = -668643507;

	t44 = (x233<=((x234+x235)/x236));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x241 = 5U;
	static uint64_t x243 = 218086799938948379LLU;
	int16_t x244 = 861;

	t45 = (x241<=((x242+x243)/x244));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x245 = UINT8_MAX;
	static int64_t x246 = INT64_MAX;
	volatile uint64_t x247 = 482711034438LLU;
	volatile int64_t x248 = -523499934093736433LL;

	t46 = (x245<=((x246+x247)/x248));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x250 = INT32_MAX;
	volatile int8_t x251 = -1;
	int16_t x252 = 461;
	static volatile int32_t t47 = 899491;

	t47 = (x249<=((x250+x251)/x252));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x253 = INT64_MAX;
	int16_t x254 = -5969;
	int32_t x256 = INT32_MIN;

	t48 = (x253<=((x254+x255)/x256));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x259 = 1U;
	volatile int32_t t49 = 22753693;

	t49 = (x257<=((x258+x259)/x260));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x261 = UINT64_MAX;
	static int8_t x263 = 0;
	volatile uint64_t x264 = 18191LLU;
	volatile int32_t t50 = 34353;

	t50 = (x261<=((x262+x263)/x264));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x266 = 4182798;
	static int32_t x267 = -39783849;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t51 = 327853307;

	t51 = (x265<=((x266+x267)/x268));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x269 = -1LL;
	uint32_t x272 = 128010U;
	volatile int32_t t52 = -3;

	t52 = (x269<=((x270+x271)/x272));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x274 = INT8_MAX;
	uint8_t x275 = UINT8_MAX;
	int64_t x276 = INT64_MIN;
	static volatile int32_t t53 = -6058052;

	t53 = (x273<=((x274+x275)/x276));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x277 = UINT8_MAX;
	int8_t x280 = INT8_MIN;
	volatile int32_t t54 = 15521846;

	t54 = (x277<=((x278+x279)/x280));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x281 = UINT16_MAX;
	int64_t x282 = INT64_MAX;
	volatile int32_t x283 = 0;
	volatile uint16_t x284 = UINT16_MAX;
	int32_t t55 = -3;

	t55 = (x281<=((x282+x283)/x284));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t t56 = 43876897;

	t56 = (x285<=((x286+x287)/x288));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x291 = 5U;
	volatile int64_t x292 = 5LL;

	t57 = (x289<=((x290+x291)/x292));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x293 = -1;
	static int32_t x294 = INT32_MAX;
	volatile uint64_t x295 = 32591342LLU;
	static volatile uint8_t x296 = UINT8_MAX;
	static int32_t t58 = 21;

	t58 = (x293<=((x294+x295)/x296));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x297 = INT8_MIN;
	uint64_t x298 = UINT64_MAX;
	int16_t x299 = -1;
	static uint16_t x300 = 58U;
	int32_t t59 = 0;

	t59 = (x297<=((x298+x299)/x300));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x301 = 735081661037296LLU;
	static int16_t x302 = INT16_MAX;
	int8_t x303 = INT8_MIN;
	int16_t x304 = 11151;
	volatile int32_t t60 = -86572561;

	t60 = (x301<=((x302+x303)/x304));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x306 = 551206566744LL;
	int16_t x307 = -1;
	volatile int32_t t61 = -381631;

	t61 = (x305<=((x306+x307)/x308));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x309 = -1LL;
	int8_t x310 = 55;
	static volatile int64_t x311 = INT64_MIN;
	volatile int32_t x312 = 136613;
	volatile int32_t t62 = -9134112;

	t62 = (x309<=((x310+x311)/x312));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x313 = -39;
	static uint8_t x314 = 0U;
	uint32_t x315 = UINT32_MAX;
	volatile int32_t t63 = 19;

	t63 = (x313<=((x314+x315)/x316));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x317 = 956939508LLU;
	static int16_t x318 = INT16_MIN;
	volatile int64_t x319 = -1LL;
	int8_t x320 = INT8_MIN;
	int32_t t64 = 223272;

	t64 = (x317<=((x318+x319)/x320));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x323 = -1;
	int64_t x324 = INT64_MIN;
	static volatile int32_t t65 = 32;

	t65 = (x321<=((x322+x323)/x324));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x325 = INT64_MIN;
	int8_t x326 = INT8_MIN;
	int8_t x327 = 1;
	static uint8_t x328 = UINT8_MAX;

	t66 = (x325<=((x326+x327)/x328));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x329 = INT8_MIN;
	volatile uint32_t x330 = UINT32_MAX;
	int8_t x332 = INT8_MIN;
	int32_t t67 = -7514187;

	t67 = (x329<=((x330+x331)/x332));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x333 = -1;
	static int8_t x334 = INT8_MIN;
	uint64_t x335 = UINT64_MAX;
	uint32_t x336 = 2U;
	static int32_t t68 = 3;

	t68 = (x333<=((x334+x335)/x336));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x337 = 14768U;
	volatile uint16_t x338 = 1U;
	int64_t x339 = INT64_MIN;
	uint32_t x340 = 520433U;
	static int32_t t69 = 1826;

	t69 = (x337<=((x338+x339)/x340));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x341 = UINT16_MAX;
	int64_t x344 = -1LL;
	volatile int32_t t70 = -868;

	t70 = (x341<=((x342+x343)/x344));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x349 = 1036155U;
	volatile uint32_t x350 = 198566U;
	volatile uint32_t x351 = UINT32_MAX;
	int16_t x352 = -44;
	int32_t t71 = 318333132;

	t71 = (x349<=((x350+x351)/x352));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x353 = -9148825;
	int8_t x354 = 1;
	uint16_t x355 = 0U;
	uint16_t x356 = 1U;

	t72 = (x353<=((x354+x355)/x356));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x357 = UINT32_MAX;
	volatile uint64_t x359 = UINT64_MAX;
	int8_t x360 = -1;

	t73 = (x357<=((x358+x359)/x360));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x361 = UINT32_MAX;
	int16_t x362 = INT16_MIN;
	uint64_t x363 = UINT64_MAX;
	volatile int32_t t74 = -19191785;

	t74 = (x361<=((x362+x363)/x364));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x365 = UINT8_MAX;
	int8_t x366 = INT8_MIN;
	static volatile uint32_t x367 = 1012135314U;
	volatile int32_t t75 = 47;

	t75 = (x365<=((x366+x367)/x368));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x369 = UINT16_MAX;
	uint32_t x370 = 1699U;
	int16_t x371 = INT16_MIN;
	int16_t x372 = INT16_MIN;
	int32_t t76 = 64612;

	t76 = (x369<=((x370+x371)/x372));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x373 = -1;
	int8_t x374 = INT8_MAX;
	uint8_t x375 = 2U;
	int8_t x376 = INT8_MIN;
	volatile int32_t t77 = 69;

	t77 = (x373<=((x374+x375)/x376));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x378 = 14U;
	volatile uint8_t x379 = UINT8_MAX;
	volatile uint16_t x380 = 3U;
	volatile int32_t t78 = -26984178;

	t78 = (x377<=((x378+x379)/x380));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x381 = UINT32_MAX;
	int16_t x382 = -1;
	uint32_t x383 = UINT32_MAX;
	volatile uint8_t x384 = UINT8_MAX;

	t79 = (x381<=((x382+x383)/x384));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x386 = INT8_MIN;
	static int32_t x387 = -1;
	int16_t x388 = 11;

	t80 = (x385<=((x386+x387)/x388));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x390 = INT8_MIN;
	int16_t x391 = 11;
	volatile int32_t t81 = -5;

	t81 = (x389<=((x390+x391)/x392));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x394 = UINT64_MAX;
	int64_t x395 = INT64_MIN;
	int32_t x396 = 22;
	int32_t t82 = -500385;

	t82 = (x393<=((x394+x395)/x396));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x397 = -59756LL;
	static uint8_t x398 = UINT8_MAX;
	uint16_t x399 = 15U;
	volatile uint8_t x400 = 115U;
	int32_t t83 = 1025471;

	t83 = (x397<=((x398+x399)/x400));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x401 = UINT8_MAX;
	static int32_t x402 = -1;
	int16_t x403 = INT16_MAX;
	int64_t x404 = 4624104019458541LL;
	volatile int32_t t84 = 0;

	t84 = (x401<=((x402+x403)/x404));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x406 = -94;
	int8_t x407 = INT8_MAX;
	volatile int64_t x408 = INT64_MIN;
	int32_t t85 = -26430;

	t85 = (x405<=((x406+x407)/x408));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x409 = UINT32_MAX;
	static int64_t x410 = INT64_MAX;
	static volatile int64_t x412 = -1LL;
	static volatile int32_t t86 = 0;

	t86 = (x409<=((x410+x411)/x412));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x413 = INT16_MAX;
	int16_t x414 = INT16_MIN;
	static int64_t x415 = -1LL;
	int8_t x416 = INT8_MIN;
	int32_t t87 = 82;

	t87 = (x413<=((x414+x415)/x416));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x418 = INT32_MIN;
	int64_t x419 = -1LL;
	int64_t x420 = INT64_MAX;
	volatile int32_t t88 = 50;

	t88 = (x417<=((x418+x419)/x420));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x421 = 1838943128726LL;
	int64_t x423 = -1LL;
	uint32_t x424 = UINT32_MAX;
	volatile int32_t t89 = -204812862;

	t89 = (x421<=((x422+x423)/x424));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x429 = INT8_MIN;
	static volatile uint32_t x432 = 31700383U;
	int32_t t90 = 1;

	t90 = (x429<=((x430+x431)/x432));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x433 = 249338787784LLU;
	uint8_t x434 = 33U;
	volatile int64_t x435 = 0LL;

	t91 = (x433<=((x434+x435)/x436));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x437 = UINT64_MAX;
	int32_t x438 = -4673818;
	static volatile uint64_t x439 = 90479871642380LLU;
	uint32_t x440 = 1U;
	int32_t t92 = 787;

	t92 = (x437<=((x438+x439)/x440));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x441 = INT16_MIN;
	volatile uint32_t x442 = 5301U;
	int16_t x443 = INT16_MIN;
	int64_t x444 = INT64_MIN;
	volatile int32_t t93 = 838177;

	t93 = (x441<=((x442+x443)/x444));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x445 = 1;
	volatile int64_t x446 = -1468434179753LL;
	static volatile uint16_t x447 = 283U;
	int8_t x448 = INT8_MIN;

	t94 = (x445<=((x446+x447)/x448));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x449 = INT64_MAX;
	volatile uint64_t x450 = 2577352169LLU;
	static uint8_t x451 = 2U;
	volatile int8_t x452 = INT8_MAX;
	static int32_t t95 = -109;

	t95 = (x449<=((x450+x451)/x452));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x453 = -222;
	static int32_t x454 = -39;
	static uint32_t x455 = 1U;
	volatile int64_t x456 = INT64_MIN;
	volatile int32_t t96 = -2109;

	t96 = (x453<=((x454+x455)/x456));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x457 = 87911248565350LLU;
	int32_t x458 = -51084279;
	static uint16_t x459 = 11U;
	static int16_t x460 = INT16_MIN;
	int32_t t97 = 3197;

	t97 = (x457<=((x458+x459)/x460));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x461 = INT8_MIN;
	int32_t x462 = 3;
	uint16_t x463 = UINT16_MAX;
	volatile int64_t x464 = INT64_MIN;

	t98 = (x461<=((x462+x463)/x464));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x466 = 73003123U;
	int32_t t99 = 1427709;

	t99 = (x465<=((x466+x467)/x468));

	if (t99 != 0) { NG(); } else { ; }
	
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

