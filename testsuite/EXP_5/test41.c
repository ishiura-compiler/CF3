#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -10;
uint16_t x15 = 28364U;
static int16_t x16 = -1;
uint16_t x23 = 30490U;
volatile int32_t t6 = -42199;
int32_t x30 = -130753565;
volatile int16_t x36 = 10;
volatile uint64_t t9 = 79720995963LLU;
int64_t t10 = 9664953LL;
uint8_t x47 = 7U;
volatile int32_t t11 = 17;
volatile int8_t x56 = INT8_MIN;
int32_t x59 = -497826;
static int16_t x70 = -1;
uint64_t x75 = UINT64_MAX;
uint32_t x78 = 13U;
volatile int64_t t20 = 72LL;
volatile int32_t x91 = INT32_MIN;
uint64_t x93 = 44LLU;
uint8_t x95 = UINT8_MAX;
static uint64_t t22 = 53LLU;
int32_t x98 = INT32_MIN;
int32_t x103 = 440621464;
int32_t t25 = 6137160;
int64_t x111 = INT64_MAX;
static int16_t x114 = -4371;
volatile int32_t t27 = -26995313;
static uint64_t x128 = 526246LLU;
volatile int32_t x146 = -2702;
int16_t x147 = -1;
int32_t x159 = -1;
int64_t x160 = -7716216882605566LL;
volatile int64_t t31 = -404LL;
int16_t x174 = INT16_MAX;
int32_t t36 = -22790;
int16_t x181 = 7;
uint32_t x182 = 177431412U;
int32_t t38 = 968;
int16_t x193 = INT16_MAX;
uint32_t x196 = 2U;
uint32_t t41 = 29510U;
int32_t x204 = -48817311;
static uint32_t x205 = UINT32_MAX;
int8_t x208 = -1;
volatile int16_t x213 = 1;
int32_t x225 = INT32_MIN;
volatile int64_t x228 = INT64_MIN;
volatile int64_t t46 = 18LL;
int8_t x235 = INT8_MAX;
static volatile uint64_t t48 = 1240129LLU;
static volatile int64_t x239 = INT64_MIN;
int8_t x247 = INT8_MIN;
static volatile int64_t t52 = -163332638833810LL;
static int16_t x257 = -1;
int16_t x260 = -1;
int64_t x265 = -2LL;
int32_t x267 = INT32_MIN;
int64_t t56 = 944038248094327583LL;
int64_t x272 = 61735368307375LL;
int32_t x279 = INT32_MIN;
uint8_t x283 = 47U;
int64_t t61 = -22LL;
int32_t x293 = -12049051;
int8_t x298 = -1;
int32_t x299 = 42662114;
int16_t x304 = INT16_MIN;
uint8_t x305 = 86U;
int32_t x313 = INT32_MIN;
volatile uint64_t t69 = 150563605322LLU;
uint32_t x328 = 3U;
int64_t x337 = 1594LL;
int16_t x339 = INT16_MAX;
static uint16_t x346 = 22U;
int32_t x347 = 152;
static uint64_t x356 = 275LLU;
int32_t x358 = INT32_MIN;
int32_t x359 = INT32_MAX;
volatile int8_t x373 = 1;
uint64_t x391 = 6015LLU;
volatile int32_t x392 = -1;
volatile uint8_t x393 = 54U;
int32_t x401 = -1;
int32_t x404 = INT32_MIN;
uint64_t t86 = 123846366LLU;
uint64_t x428 = 258324037822866LLU;
static uint64_t t89 = 78592293535LLU;
uint32_t x433 = 85629319U;
uint8_t x434 = 2U;
int8_t x437 = -21;
volatile uint32_t x442 = UINT32_MAX;
uint32_t x443 = 109U;
int64_t x446 = -2522327703233LL;
int16_t x457 = INT16_MAX;
int32_t x463 = 9644986;
uint32_t x466 = 217667736U;
static int32_t x470 = 28169;
volatile int16_t x472 = INT16_MIN;
static int8_t x473 = 1;
int64_t t99 = -984LL;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	int8_t x2 = -1;
	uint32_t x3 = 351839221U;
	uint32_t t0 = 6U;

	t0 = (x1-((x2+x3)/x4));

	if (t0 != 255U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int32_t x6 = -5250050;
	static int16_t x7 = -1;
	uint16_t x8 = 685U;
	int32_t t1 = -16674891;

	t1 = (x5-((x6+x7)/x8));

	if (t1 != 40431) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = INT8_MIN;
	volatile uint8_t x10 = 113U;
	uint64_t x11 = 264591012310554LLU;
	int64_t x12 = INT64_MAX;
	uint64_t t2 = 122279255314715LLU;

	t2 = (x9-((x10+x11)/x12));

	if (t2 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 3171386263478LLU;
	int64_t x14 = 517737400722578713LL;
	uint64_t t3 = 13833451877LLU;

	t3 = (x13-((x14+x15)/x16));

	if (t3 != 517740572108870555LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 22155499012LLU;
	static int16_t x18 = INT16_MIN;
	int32_t x19 = 275968;
	static int64_t x20 = INT64_MIN;
	uint64_t t4 = 7507839931385996LLU;

	t4 = (x17-((x18+x19)/x20));

	if (t4 != 22155499012LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -6076;
	volatile int8_t x22 = INT8_MIN;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = -3660;

	t5 = (x21-((x22+x23)/x24));

	if (t5 != -6315) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 507;
	uint16_t x26 = 15U;
	uint16_t x27 = 15807U;
	int32_t x28 = INT32_MIN;

	t6 = (x25-((x26+x27)/x28));

	if (t6 != 507) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	int8_t x31 = INT8_MAX;
	static int64_t x32 = INT64_MIN;
	volatile int64_t t7 = -655806956314LL;

	t7 = (x29-((x30+x31)/x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MAX;
	int64_t x34 = INT64_MIN;
	volatile uint64_t x35 = 14191LLU;
	volatile uint64_t t8 = 10091423728LLU;

	t8 = (x33-((x34+x35)/x36));

	if (t8 != 17524406870024105384LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int8_t x38 = -5;
	static uint64_t x39 = UINT64_MAX;
	int32_t x40 = -60;

	t9 = (x37-((x38+x39)/x40));

	if (t9 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x41 = 1086U;
	int16_t x42 = INT16_MIN;
	int64_t x43 = -1LL;
	uint16_t x44 = UINT16_MAX;

	t10 = (x41-((x42+x43)/x44));

	if (t10 != 1086LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	volatile int16_t x46 = INT16_MIN;
	int32_t x48 = INT32_MIN;

	t11 = (x45-((x46+x47)/x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 1136LL;
	int16_t x50 = INT16_MIN;
	uint64_t x51 = UINT64_MAX;
	int64_t x52 = -1LL;
	static uint64_t t12 = 136969737165508820LLU;

	t12 = (x49-((x50+x51)/x52));

	if (t12 != 1136LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = -1;
	int32_t x54 = INT32_MAX;
	static volatile int64_t x55 = INT64_MIN;
	volatile int64_t t13 = 434LL;

	t13 = (x53-((x54+x55)/x56));

	if (t13 != -72057594021150721LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	int32_t x58 = INT32_MAX;
	uint16_t x60 = 942U;
	volatile int32_t t14 = 3729;

	t14 = (x57-((x58+x59)/x60));

	if (t14 != -2279179) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 2102477U;
	uint16_t x66 = 8383U;
	int8_t x67 = INT8_MIN;
	uint16_t x68 = 12U;
	volatile uint32_t t15 = 47U;

	t15 = (x65-((x66+x67)/x68));

	if (t15 != 2101790U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MAX;
	int8_t x71 = -1;
	volatile uint16_t x72 = UINT16_MAX;
	volatile int32_t t16 = 998;

	t16 = (x69-((x70+x71)/x72));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = INT8_MAX;
	int32_t x74 = INT32_MIN;
	static uint8_t x76 = 45U;
	volatile uint64_t t17 = 56952676712LLU;

	t17 = (x73-((x74+x75)/x76));

	if (t17 != 18036816427674839122LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x77 = INT32_MIN;
	static uint8_t x79 = UINT8_MAX;
	volatile int64_t x80 = INT64_MIN;
	volatile int64_t t18 = -26379318234513LL;

	t18 = (x77-((x78+x79)/x80));

	if (t18 != -2147483648LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x81 = UINT16_MAX;
	uint32_t x82 = 218U;
	volatile uint64_t x83 = 1466992LLU;
	uint64_t x84 = 4128157319LLU;
	static uint64_t t19 = 373LLU;

	t19 = (x81-((x82+x83)/x84));

	if (t19 != 65535LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = 6U;
	int8_t x86 = -1;
	int32_t x87 = 1;
	int64_t x88 = INT64_MIN;

	t20 = (x85-((x86+x87)/x88));

	if (t20 != 6LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x89 = 95656921LLU;
	int64_t x90 = INT64_MAX;
	int8_t x92 = -48;
	volatile uint64_t t21 = 83231913LLU;

	t21 = (x89-((x90+x91)/x92));

	if (t21 != 192153584152058840LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x94 = INT64_MIN;
	int16_t x96 = INT16_MIN;

	t22 = (x93-((x94+x95)/x96));

	if (t22 != 18446462598732841005LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -1LL;
	volatile uint32_t x99 = 690448U;
	uint64_t x100 = UINT64_MAX;
	uint64_t t23 = UINT64_MAX;

	t23 = (x97-((x98+x99)/x100));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MIN;
	int64_t x102 = -1LL;
	uint64_t x104 = 754840498299241LLU;
	uint64_t t24 = 14LLU;

	t24 = (x101-((x102+x103)/x104));

	if (t24 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x105 = UINT16_MAX;
	int32_t x106 = -1;
	int16_t x107 = INT16_MAX;
	int32_t x108 = -5238382;

	t25 = (x105-((x106+x107)/x108));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x109 = 363391287U;
	int16_t x110 = INT16_MIN;
	uint32_t x112 = UINT32_MAX;
	volatile int64_t t26 = -17610LL;

	t26 = (x109-((x110+x111)/x112));

	if (t26 != -1784092361LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 11U;
	static volatile uint16_t x115 = UINT16_MAX;
	volatile int8_t x116 = INT8_MIN;

	t27 = (x113-((x114+x115)/x116));

	if (t27 != 488) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 432006LLU;
	int16_t x118 = 15756;
	uint64_t x119 = UINT64_MAX;
	int64_t x120 = -264754459LL;
	uint64_t t28 = 556980241727300394LLU;

	t28 = (x117-((x118+x119)/x120));

	if (t28 != 432006LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MIN;
	uint32_t x126 = UINT32_MAX;
	static uint16_t x127 = 2U;
	uint64_t t29 = 4989978423LLU;

	t29 = (x125-((x126+x127)/x128));

	if (t29 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = INT8_MAX;
	volatile int32_t x148 = -240863304;
	volatile int32_t t30 = 2;

	t30 = (x145-((x146+x147)/x148));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x157 = INT32_MIN;
	uint16_t x158 = UINT16_MAX;

	t31 = (x157-((x158+x159)/x160));

	if (t31 != -2147483648LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x161 = -1;
	static volatile uint8_t x162 = 10U;
	int8_t x163 = INT8_MAX;
	static int64_t x164 = INT64_MIN;
	volatile int64_t t32 = -403000LL;

	t32 = (x161-((x162+x163)/x164));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x165 = 27242U;
	int32_t x166 = -1;
	uint16_t x167 = 45U;
	volatile int8_t x168 = INT8_MIN;
	int32_t t33 = 932;

	t33 = (x165-((x166+x167)/x168));

	if (t33 != 27242) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x169 = UINT16_MAX;
	volatile uint8_t x170 = UINT8_MAX;
	int16_t x171 = INT16_MAX;
	volatile int64_t x172 = 10733LL;
	static volatile int64_t t34 = 1LL;

	t34 = (x169-((x170+x171)/x172));

	if (t34 != 65532LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x173 = UINT32_MAX;
	int8_t x175 = -1;
	int16_t x176 = -1;
	volatile uint32_t t35 = 13U;

	t35 = (x173-((x174+x175)/x176));

	if (t35 != 32765U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = -12;
	int16_t x178 = INT16_MIN;
	int8_t x179 = 2;
	volatile int8_t x180 = 1;

	t36 = (x177-((x178+x179)/x180));

	if (t36 != 32754) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x183 = 10U;
	static int64_t x184 = INT64_MIN;
	volatile int64_t t37 = -345878677262LL;

	t37 = (x181-((x182+x183)/x184));

	if (t37 != 7LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x185 = INT16_MIN;
	uint16_t x186 = 5395U;
	static int8_t x187 = INT8_MAX;
	int16_t x188 = INT16_MIN;

	t38 = (x185-((x186+x187)/x188));

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x189 = 19U;
	uint32_t x190 = 40U;
	uint8_t x191 = UINT8_MAX;
	static int16_t x192 = -143;
	volatile uint32_t t39 = 29304U;

	t39 = (x189-((x190+x191)/x192));

	if (t39 != 19U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x194 = INT8_MIN;
	int16_t x195 = INT16_MIN;
	uint32_t t40 = 3000U;

	t40 = (x193-((x194+x195)/x196));

	if (t40 != 2147532863U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x197 = INT32_MIN;
	static int32_t x198 = -1;
	int16_t x199 = 0;
	static uint32_t x200 = UINT32_MAX;

	t41 = (x197-((x198+x199)/x200));

	if (t41 != 2147483647U) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x201 = 8286474127159970LLU;
	int32_t x202 = -12737;
	int16_t x203 = -985;
	uint64_t t42 = 7398100976847166LLU;

	t42 = (x201-((x202+x203)/x204));

	if (t42 != 8286474127159970LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x206 = -78401;
	int32_t x207 = 6239266;
	uint32_t t43 = 284U;

	t43 = (x205-((x206+x207)/x208));

	if (t43 != 6160864U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x214 = 14U;
	uint32_t x215 = 3U;
	uint8_t x216 = UINT8_MAX;
	uint32_t t44 = 55U;

	t44 = (x213-((x214+x215)/x216));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x217 = -1LL;
	int64_t x218 = 12376574LL;
	int8_t x219 = 1;
	int32_t x220 = INT32_MIN;
	volatile int64_t t45 = -1719089LL;

	t45 = (x217-((x218+x219)/x220));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x226 = 564U;
	uint16_t x227 = UINT16_MAX;

	t46 = (x225-((x226+x227)/x228));

	if (t46 != -2147483648LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x229 = UINT8_MAX;
	static uint32_t x230 = UINT32_MAX;
	static volatile uint32_t x231 = UINT32_MAX;
	int16_t x232 = INT16_MIN;
	volatile uint32_t t47 = 4U;

	t47 = (x229-((x230+x231)/x232));

	if (t47 != 254U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x233 = 0LLU;
	int16_t x234 = INT16_MAX;
	static volatile uint32_t x236 = 484991U;

	t48 = (x233-((x234+x235)/x236));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x237 = 734415U;
	int16_t x238 = INT16_MAX;
	int8_t x240 = INT8_MIN;
	int64_t t49 = 215184713LL;

	t49 = (x237-((x238+x239)/x240));

	if (t49 != -72057594037193265LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x241 = INT16_MIN;
	static uint16_t x242 = 247U;
	int64_t x243 = -1LL;
	int32_t x244 = INT32_MIN;
	static int64_t t50 = 484955983080932667LL;

	t50 = (x241-((x242+x243)/x244));

	if (t50 != -32768LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x245 = UINT16_MAX;
	uint16_t x246 = UINT16_MAX;
	volatile int32_t x248 = INT32_MIN;
	static volatile int32_t t51 = -18410;

	t51 = (x245-((x246+x247)/x248));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x249 = UINT8_MAX;
	uint32_t x250 = UINT32_MAX;
	int64_t x251 = -55578742621LL;
	static volatile int16_t x252 = INT16_MAX;

	t52 = (x249-((x250+x251)/x252));

	if (t52 != 1565359LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x253 = INT32_MIN;
	static volatile uint32_t x254 = 294U;
	int8_t x255 = INT8_MIN;
	volatile uint8_t x256 = 63U;
	volatile uint32_t t53 = 637U;

	t53 = (x253-((x254+x255)/x256));

	if (t53 != 2147483646U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x258 = INT32_MIN;
	uint16_t x259 = UINT16_MAX;
	int32_t t54 = -1674405;

	t54 = (x257-((x258+x259)/x260));

	if (t54 != -2147418114) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x261 = 1358321060U;
	uint8_t x262 = 3U;
	static int16_t x263 = -1;
	int64_t x264 = INT64_MIN;
	static volatile int64_t t55 = 17LL;

	t55 = (x261-((x262+x263)/x264));

	if (t55 != 1358321060LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x266 = 0;
	volatile uint8_t x268 = 1U;

	t56 = (x265-((x266+x267)/x268));

	if (t56 != 2147483646LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x269 = 1280;
	volatile uint16_t x270 = 301U;
	int8_t x271 = INT8_MIN;
	static int64_t t57 = -52184728583472908LL;

	t57 = (x269-((x270+x271)/x272));

	if (t57 != 1280LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x273 = INT16_MIN;
	volatile uint64_t x274 = UINT64_MAX;
	volatile int16_t x275 = INT16_MIN;
	uint16_t x276 = 11U;
	volatile uint64_t t58 = 14003517929LLU;

	t58 = (x273-((x274+x275)/x276));

	if (t58 != 16769767339735926226LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = -12558LL;
	int64_t x278 = 80849073LL;
	int32_t x280 = INT32_MIN;
	volatile int64_t t59 = -1LL;

	t59 = (x277-((x278+x279)/x280));

	if (t59 != -12558LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x281 = 3496;
	int16_t x282 = INT16_MIN;
	volatile int64_t x284 = INT64_MIN;
	volatile int64_t t60 = -112650237628024LL;

	t60 = (x281-((x282+x283)/x284));

	if (t60 != 3496LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x285 = 38;
	int64_t x286 = INT64_MAX;
	static int8_t x287 = -1;
	uint8_t x288 = UINT8_MAX;

	t61 = (x285-((x286+x287)/x288));

	if (t61 != -36170086419038298LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x289 = -1;
	uint8_t x290 = 12U;
	int8_t x291 = -1;
	uint64_t x292 = 212LLU;
	volatile uint64_t t62 = UINT64_MAX;

	t62 = (x289-((x290+x291)/x292));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x294 = -1;
	volatile uint32_t x295 = UINT32_MAX;
	static int16_t x296 = 12587;
	volatile uint32_t t63 = 4448U;

	t63 = (x293-((x294+x295)/x296));

	if (t63 != 4282577023U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x297 = -1LL;
	int8_t x300 = INT8_MIN;
	int64_t t64 = 66293271104823092LL;

	t64 = (x297-((x298+x299)/x300));

	if (t64 != 333296LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = INT64_MAX;
	int64_t x302 = 30339258LL;
	uint64_t x303 = 6478LLU;
	volatile uint64_t t65 = 258637792910LLU;

	t65 = (x301-((x302+x303)/x304));

	if (t65 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x306 = INT16_MIN;
	uint8_t x307 = UINT8_MAX;
	static volatile int16_t x308 = -1;
	int32_t t66 = 114;

	t66 = (x305-((x306+x307)/x308));

	if (t66 != -32427) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x314 = 0LL;
	int64_t x315 = INT64_MAX;
	static int64_t x316 = INT64_MIN;
	volatile int64_t t67 = 511179728986155LL;

	t67 = (x313-((x314+x315)/x316));

	if (t67 != -2147483648LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x317 = INT32_MIN;
	int64_t x318 = -1LL;
	volatile int32_t x319 = -1;
	uint16_t x320 = 33U;
	int64_t t68 = 66164504LL;

	t68 = (x317-((x318+x319)/x320));

	if (t68 != -2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x321 = INT8_MIN;
	uint64_t x322 = UINT64_MAX;
	uint32_t x323 = UINT32_MAX;
	int8_t x324 = INT8_MAX;

	t69 = (x321-((x322+x323)/x324));

	if (t69 != 18446744073675732848LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x325 = INT16_MIN;
	int16_t x326 = -200;
	int64_t x327 = -1LL;
	volatile int64_t t70 = -26LL;

	t70 = (x325-((x326+x327)/x328));

	if (t70 != -32701LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = 0;
	int8_t x330 = -15;
	static volatile uint16_t x331 = 6820U;
	int64_t x332 = INT64_MIN;
	volatile int64_t t71 = -162629889680LL;

	t71 = (x329-((x330+x331)/x332));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x338 = 1U;
	int8_t x340 = INT8_MAX;
	volatile int64_t t72 = -210493883279913818LL;

	t72 = (x337-((x338+x339)/x340));

	if (t72 != 1336LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x345 = 1567U;
	int8_t x348 = -1;
	static int32_t t73 = 24489;

	t73 = (x345-((x346+x347)/x348));

	if (t73 != 1741) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x349 = 17389U;
	uint64_t x350 = 8216685462312263LLU;
	int16_t x351 = -5356;
	uint64_t x352 = 114024LLU;
	uint64_t t74 = 2524999253611891226LLU;

	t74 = (x349-((x350+x351)/x352));

	if (t74 != 18446744001648551480LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x353 = UINT64_MAX;
	int32_t x354 = -1;
	int32_t x355 = INT32_MAX;
	static volatile uint64_t t75 = 105LLU;

	t75 = (x353-((x354+x355)/x356));

	if (t75 != 18446744073701742584LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x357 = 30LLU;
	int16_t x360 = INT16_MAX;
	volatile uint64_t t76 = 19565LLU;

	t76 = (x357-((x358+x359)/x360));

	if (t76 != 30LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x361 = INT8_MIN;
	int16_t x362 = -637;
	uint8_t x363 = 111U;
	int16_t x364 = INT16_MIN;
	volatile int32_t t77 = -938277023;

	t77 = (x361-((x362+x363)/x364));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x365 = 42U;
	int8_t x366 = 1;
	int8_t x367 = INT8_MIN;
	int32_t x368 = INT32_MIN;
	volatile int32_t t78 = 1;

	t78 = (x365-((x366+x367)/x368));

	if (t78 != 42) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x369 = 34907699LLU;
	int16_t x370 = INT16_MAX;
	uint32_t x371 = UINT32_MAX;
	int8_t x372 = 2;
	volatile uint64_t t79 = 29500729LLU;

	t79 = (x369-((x370+x371)/x372));

	if (t79 != 34891316LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x374 = -1LL;
	int16_t x375 = INT16_MIN;
	int8_t x376 = 57;
	static volatile int64_t t80 = -118602790LL;

	t80 = (x373-((x374+x375)/x376));

	if (t80 != 575LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x381 = INT16_MAX;
	int64_t x382 = -2522683LL;
	int16_t x383 = -1;
	uint16_t x384 = 95U;
	int64_t t81 = 191759877392068LL;

	t81 = (x381-((x382+x383)/x384));

	if (t81 != 59321LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x385 = UINT64_MAX;
	int16_t x386 = INT16_MAX;
	volatile int16_t x387 = -1;
	int16_t x388 = -1;
	uint64_t t82 = 21LLU;

	t82 = (x385-((x386+x387)/x388));

	if (t82 != 32765LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x389 = 0U;
	int32_t x390 = -1;
	uint64_t t83 = 0LLU;

	t83 = (x389-((x390+x391)/x392));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x394 = INT32_MIN;
	volatile int32_t x395 = 895;
	volatile int16_t x396 = -3246;
	int32_t t84 = 232095053;

	t84 = (x393-((x394+x395)/x396));

	if (t84 != -661524) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x402 = INT64_MAX;
	uint8_t x403 = 0U;
	volatile int64_t t85 = 271462592195029195LL;

	t85 = (x401-((x402+x403)/x404));

	if (t85 != 4294967294LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x405 = INT8_MIN;
	volatile uint64_t x406 = 263444LLU;
	volatile int16_t x407 = INT16_MAX;
	int64_t x408 = INT64_MIN;

	t86 = (x405-((x406+x407)/x408));

	if (t86 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x413 = -1;
	int8_t x414 = -1;
	static int32_t x415 = INT32_MAX;
	uint32_t x416 = 6U;
	uint32_t t87 = 123U;

	t87 = (x413-((x414+x415)/x416));

	if (t87 != 3937053354U) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x425 = INT8_MIN;
	static volatile int16_t x426 = INT16_MAX;
	volatile int16_t x427 = INT16_MAX;
	volatile uint64_t t88 = 5082369753995LLU;

	t88 = (x425-((x426+x427)/x428));

	if (t88 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x429 = INT32_MIN;
	volatile uint64_t x430 = 3203418923LLU;
	int32_t x431 = -1;
	volatile int32_t x432 = INT32_MIN;

	t89 = (x429-((x430+x431)/x432));

	if (t89 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x435 = INT16_MIN;
	static volatile int32_t x436 = INT32_MIN;
	volatile uint32_t t90 = 6U;

	t90 = (x433-((x434+x435)/x436));

	if (t90 != 85629319U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x438 = 65530LLU;
	volatile int32_t x439 = 67652584;
	int8_t x440 = 1;
	static uint64_t t91 = 1316LLU;

	t91 = (x437-((x438+x439)/x440));

	if (t91 != 18446744073641833481LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x441 = INT8_MIN;
	uint64_t x444 = 19734919818978600LLU;
	static volatile uint64_t t92 = 7059424477LLU;

	t92 = (x441-((x442+x443)/x444));

	if (t92 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x445 = 82U;
	int16_t x447 = INT16_MIN;
	static int64_t x448 = 1823512571LL;
	int64_t t93 = 25229LL;

	t93 = (x445-((x446+x447)/x448));

	if (t93 != 1465LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x449 = -8;
	static uint32_t x450 = 15145U;
	int32_t x451 = -1;
	uint8_t x452 = UINT8_MAX;
	static volatile uint32_t t94 = 1271U;

	t94 = (x449-((x450+x451)/x452));

	if (t94 != 4294967229U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x458 = 200741LLU;
	int8_t x459 = INT8_MAX;
	int16_t x460 = INT16_MAX;
	uint64_t t95 = 2160387695238369431LLU;

	t95 = (x457-((x458+x459)/x460));

	if (t95 != 32761LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x461 = 1;
	int8_t x462 = INT8_MIN;
	static int64_t x464 = -19LL;
	volatile int64_t t96 = 144072806590LL;

	t96 = (x461-((x462+x463)/x464));

	if (t96 != 507625LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x465 = 939550251U;
	uint8_t x467 = UINT8_MAX;
	uint16_t x468 = UINT16_MAX;
	volatile uint32_t t97 = 495069335U;

	t97 = (x465-((x466+x467)/x468));

	if (t97 != 939546930U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x469 = INT16_MAX;
	uint8_t x471 = 20U;
	int32_t t98 = -100761;

	t98 = (x469-((x470+x471)/x472));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x474 = -1;
	uint8_t x475 = UINT8_MAX;
	volatile int64_t x476 = INT64_MIN;

	t99 = (x473-((x474+x475)/x476));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

