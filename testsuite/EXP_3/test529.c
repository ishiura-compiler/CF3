#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = -1;
static volatile uint64_t x2 = 3969504425270LLU;
volatile uint32_t x11 = UINT32_MAX;
int32_t x19 = INT32_MIN;
uint16_t x20 = 43U;
int32_t t3 = 0;
int16_t x21 = INT16_MIN;
volatile int8_t x22 = -2;
int32_t x32 = -1;
int32_t x35 = INT32_MAX;
int64_t x41 = -179LL;
static int16_t x44 = 467;
int32_t x45 = -2952885;
volatile int32_t t10 = 23652;
static int32_t x53 = INT32_MIN;
int32_t x58 = -39;
int16_t x62 = INT16_MAX;
int32_t t13 = -1656123;
int16_t x67 = -1;
int32_t x70 = -1;
volatile int32_t t16 = -583865552;
int8_t x81 = -1;
volatile int64_t x83 = INT64_MAX;
volatile int32_t t18 = -1563;
int16_t x85 = INT16_MAX;
int32_t t19 = 253;
uint64_t x90 = 12421547209764LLU;
int32_t x105 = -290;
int16_t x111 = -1;
int64_t x112 = -1LL;
volatile int32_t t24 = -6440055;
int64_t x124 = INT64_MIN;
volatile int32_t x145 = -1;
int32_t x148 = 9917;
int64_t x157 = INT64_MIN;
int32_t t32 = 7409;
int32_t x161 = -17937433;
int64_t x179 = -1LL;
int32_t x180 = INT32_MIN;
uint64_t x190 = UINT64_MAX;
int32_t t38 = -1821;
static int32_t x195 = -1;
volatile int32_t t39 = 393;
static int32_t x203 = 1;
uint32_t x208 = UINT32_MAX;
volatile int64_t x216 = 259044LL;
int8_t x222 = INT8_MIN;
int16_t x239 = 6467;
static int16_t x240 = INT16_MIN;
uint8_t x243 = 2U;
int16_t x247 = -1;
uint8_t x248 = 1U;
int32_t t50 = 200;
static int32_t x252 = -2;
static int32_t x264 = -1;
int32_t t54 = 241079;
static uint16_t x267 = 5U;
uint64_t x273 = 5292712359784848LLU;
static volatile uint8_t x274 = 2U;
int32_t t57 = 25602758;
uint32_t x291 = 1121U;
int8_t x294 = INT8_MAX;
static uint16_t x296 = 198U;
static volatile int32_t t60 = -299;
int32_t x303 = INT32_MIN;
static int32_t x305 = -456402077;
uint8_t x312 = 12U;
uint32_t x325 = UINT32_MAX;
uint64_t x329 = 3255170550938LLU;
int8_t x335 = INT8_MIN;
int64_t x339 = -30222753586877313LL;
volatile int32_t t72 = 8165720;
int16_t x345 = INT16_MIN;
uint8_t x347 = UINT8_MAX;
uint8_t x349 = 66U;
uint64_t x358 = 0LLU;
static volatile int8_t x361 = 38;
static int64_t x363 = -337820290971LL;
volatile int16_t x366 = -1;
volatile int32_t t79 = 3606942;
static int16_t x385 = 1;
volatile int32_t t80 = 32206;
static int64_t x391 = INT64_MAX;
uint64_t x400 = 571LLU;
static volatile int32_t t84 = 458995128;
static volatile int32_t t85 = -1024224;
volatile int8_t x409 = 48;
int16_t x412 = -13;
volatile int8_t x439 = 63;
static int8_t x444 = -1;
int64_t x448 = -1LL;
int32_t t93 = -168273;
volatile uint32_t x459 = UINT32_MAX;
int32_t x460 = INT32_MIN;
static int32_t t96 = -24;
volatile int8_t x465 = INT8_MIN;
static uint64_t x474 = 9058564306419LLU;


void f0(void) {
	int64_t x3 = INT64_MIN;
	volatile uint16_t x4 = 199U;
	volatile int32_t t0 = 6099;

	t0 = ((x1-x2)<(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 42337017304LL;
	uint64_t x10 = UINT64_MAX;
	uint64_t x12 = 64972391606997LLU;
	volatile int32_t t1 = -3975007;

	t1 = ((x9-x10)<(x11/x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x13 = UINT16_MAX;
	int8_t x14 = INT8_MAX;
	int32_t x15 = INT32_MIN;
	int64_t x16 = INT64_MIN;
	static int32_t t2 = -964449535;

	t2 = ((x13-x14)<(x15/x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 174;
	uint64_t x18 = UINT64_MAX;

	t3 = ((x17-x18)<(x19/x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x23 = INT16_MIN;
	static int32_t x24 = -8083162;
	int32_t t4 = 6;

	t4 = ((x21-x22)<(x23/x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -7;
	uint32_t x30 = UINT32_MAX;
	uint8_t x31 = 0U;
	volatile int32_t t5 = -9118;

	t5 = ((x29-x30)<(x31/x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x33 = 9344653361441LLU;
	int64_t x34 = -12476483991LL;
	int16_t x36 = INT16_MAX;
	static volatile int32_t t6 = -101396;

	t6 = ((x33-x34)<(x35/x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = INT32_MIN;
	static volatile int16_t x38 = -559;
	volatile int16_t x39 = 14;
	int8_t x40 = -1;
	int32_t t7 = -133;

	t7 = ((x37-x38)<(x39/x40));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x42 = INT32_MIN;
	int8_t x43 = -17;
	static int32_t t8 = 1918;

	t8 = ((x41-x42)<(x43/x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x46 = -55;
	static int64_t x47 = INT64_MIN;
	int16_t x48 = INT16_MAX;
	int32_t t9 = -6102460;

	t9 = ((x45-x46)<(x47/x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -1;
	int64_t x50 = 197584260308LL;
	static uint16_t x51 = 3U;
	int16_t x52 = INT16_MAX;

	t10 = ((x49-x50)<(x51/x52));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x54 = -536131696;
	int8_t x55 = INT8_MAX;
	int32_t x56 = -1;
	volatile int32_t t11 = -110828030;

	t11 = ((x53-x54)<(x55/x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MIN;
	static int8_t x59 = INT8_MIN;
	uint8_t x60 = 38U;
	volatile int32_t t12 = -64170;

	t12 = ((x57-x58)<(x59/x60));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = -1;
	int32_t x63 = -1;
	uint8_t x64 = 59U;

	t13 = ((x61-x62)<(x63/x64));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x65 = 29;
	int8_t x66 = INT8_MIN;
	uint32_t x68 = 1U;
	static int32_t t14 = -161802025;

	t14 = ((x65-x66)<(x67/x68));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x69 = -10294;
	int16_t x71 = INT16_MIN;
	static uint8_t x72 = UINT8_MAX;
	int32_t t15 = 913835;

	t15 = ((x69-x70)<(x71/x72));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x73 = 14U;
	uint64_t x74 = 176368LLU;
	int16_t x75 = INT16_MIN;
	int32_t x76 = -1;

	t16 = ((x73-x74)<(x75/x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x77 = -12;
	int16_t x78 = 864;
	int8_t x79 = INT8_MIN;
	volatile int16_t x80 = INT16_MIN;
	volatile int32_t t17 = 12820556;

	t17 = ((x77-x78)<(x79/x80));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x82 = INT16_MAX;
	static int32_t x84 = 342634;

	t18 = ((x81-x82)<(x83/x84));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x86 = 2063515337679897LLU;
	uint64_t x87 = 7051090LLU;
	static uint32_t x88 = UINT32_MAX;

	t19 = ((x85-x86)<(x87/x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = INT32_MAX;
	int32_t x91 = INT32_MIN;
	uint8_t x92 = 2U;
	int32_t t20 = 7;

	t20 = ((x89-x90)<(x91/x92));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = 688118U;
	uint64_t x98 = 122228LLU;
	static volatile int32_t x99 = INT32_MAX;
	static int8_t x100 = INT8_MIN;
	volatile int32_t t21 = -15371;

	t21 = ((x97-x98)<(x99/x100));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x106 = INT16_MIN;
	uint64_t x107 = 220320899410381LLU;
	static uint64_t x108 = UINT64_MAX;
	volatile int32_t t22 = 2180;

	t22 = ((x105-x106)<(x107/x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x109 = 6708967LL;
	volatile int16_t x110 = INT16_MAX;
	volatile int32_t t23 = -2878;

	t23 = ((x109-x110)<(x111/x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = 0;
	int8_t x118 = INT8_MIN;
	static int32_t x119 = -1;
	volatile int32_t x120 = INT32_MIN;

	t24 = ((x117-x118)<(x119/x120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x121 = -1017803459104033078LL;
	static uint64_t x122 = 1479657970720594LLU;
	volatile int8_t x123 = 45;
	int32_t t25 = 1;

	t25 = ((x121-x122)<(x123/x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x129 = INT64_MAX;
	int64_t x130 = INT64_MAX;
	int16_t x131 = INT16_MAX;
	static volatile int32_t x132 = 44;
	static volatile int32_t t26 = 149;

	t26 = ((x129-x130)<(x131/x132));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x133 = INT8_MAX;
	volatile int64_t x134 = -1LL;
	uint16_t x135 = 112U;
	uint32_t x136 = 6204120U;
	int32_t t27 = 2;

	t27 = ((x133-x134)<(x135/x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x137 = INT8_MIN;
	int8_t x138 = -1;
	static uint8_t x139 = 33U;
	uint8_t x140 = 1U;
	int32_t t28 = 12668;

	t28 = ((x137-x138)<(x139/x140));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x141 = UINT64_MAX;
	int8_t x142 = -1;
	volatile int8_t x143 = INT8_MIN;
	volatile uint16_t x144 = 100U;
	static volatile int32_t t29 = -23604;

	t29 = ((x141-x142)<(x143/x144));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x146 = INT32_MIN;
	uint64_t x147 = 4250256917LLU;
	volatile int32_t t30 = 24410;

	t30 = ((x145-x146)<(x147/x148));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x153 = 3U;
	static uint32_t x154 = 0U;
	volatile uint64_t x155 = UINT64_MAX;
	int64_t x156 = INT64_MIN;
	volatile int32_t t31 = 2;

	t31 = ((x153-x154)<(x155/x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x158 = -15439370726LL;
	uint8_t x159 = 1U;
	volatile int8_t x160 = INT8_MAX;

	t32 = ((x157-x158)<(x159/x160));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x162 = INT16_MIN;
	static int32_t x163 = INT32_MAX;
	uint32_t x164 = UINT32_MAX;
	int32_t t33 = 13580;

	t33 = ((x161-x162)<(x163/x164));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x165 = 232416U;
	static int64_t x166 = -1LL;
	int32_t x167 = -767069;
	volatile int64_t x168 = INT64_MIN;
	int32_t t34 = 213;

	t34 = ((x165-x166)<(x167/x168));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x177 = INT8_MIN;
	int8_t x178 = INT8_MIN;
	volatile int32_t t35 = 15;

	t35 = ((x177-x178)<(x179/x180));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x181 = 1U;
	static uint64_t x182 = UINT64_MAX;
	static int64_t x183 = INT64_MIN;
	int16_t x184 = INT16_MIN;
	static int32_t t36 = 521847;

	t36 = ((x181-x182)<(x183/x184));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x185 = 216242828308LLU;
	int64_t x186 = INT64_MIN;
	volatile uint16_t x187 = 127U;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t37 = 10012557;

	t37 = ((x185-x186)<(x187/x188));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x189 = INT32_MAX;
	int8_t x191 = -1;
	int64_t x192 = INT64_MIN;

	t38 = ((x189-x190)<(x191/x192));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x193 = 28U;
	uint16_t x194 = 2U;
	uint16_t x196 = 19364U;

	t39 = ((x193-x194)<(x195/x196));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x197 = 23378;
	uint64_t x198 = 1565074LLU;
	int8_t x199 = -14;
	uint16_t x200 = 2U;
	int32_t t40 = 909;

	t40 = ((x197-x198)<(x199/x200));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x201 = INT32_MIN;
	static uint32_t x202 = 984750U;
	static int32_t x204 = INT32_MAX;
	int32_t t41 = -526064121;

	t41 = ((x201-x202)<(x203/x204));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x205 = INT8_MIN;
	int32_t x206 = INT32_MIN;
	volatile uint16_t x207 = 12186U;
	volatile int32_t t42 = -5857;

	t42 = ((x205-x206)<(x207/x208));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x213 = -61311;
	uint64_t x214 = 1LLU;
	int64_t x215 = 258887657503622LL;
	volatile int32_t t43 = -81716523;

	t43 = ((x213-x214)<(x215/x216));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x217 = 237LL;
	int16_t x218 = 3142;
	static int16_t x219 = INT16_MIN;
	int64_t x220 = INT64_MIN;
	static volatile int32_t t44 = -22;

	t44 = ((x217-x218)<(x219/x220));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x221 = 4040;
	uint8_t x223 = 1U;
	volatile int8_t x224 = 8;
	int32_t t45 = -8153903;

	t45 = ((x221-x222)<(x223/x224));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x225 = 315045385U;
	int16_t x226 = INT16_MIN;
	static uint8_t x227 = 63U;
	int16_t x228 = INT16_MIN;
	int32_t t46 = -7;

	t46 = ((x225-x226)<(x227/x228));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x233 = UINT16_MAX;
	int32_t x234 = -45;
	static uint8_t x235 = 0U;
	volatile int8_t x236 = -1;
	int32_t t47 = -7314453;

	t47 = ((x233-x234)<(x235/x236));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x237 = INT8_MIN;
	int32_t x238 = INT32_MIN;
	static int32_t t48 = -11;

	t48 = ((x237-x238)<(x239/x240));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x241 = 0U;
	int16_t x242 = INT16_MAX;
	uint32_t x244 = 47U;
	int32_t t49 = -206;

	t49 = ((x241-x242)<(x243/x244));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x245 = 154939526LL;
	int32_t x246 = INT32_MAX;

	t50 = ((x245-x246)<(x247/x248));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x249 = 1;
	int32_t x250 = -1;
	static int16_t x251 = -1;
	volatile int32_t t51 = -4;

	t51 = ((x249-x250)<(x251/x252));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x253 = 14;
	static volatile uint64_t x254 = 3418LLU;
	int8_t x255 = INT8_MIN;
	int8_t x256 = -53;
	int32_t t52 = -1;

	t52 = ((x253-x254)<(x255/x256));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x257 = 14U;
	static int16_t x258 = 0;
	static int64_t x259 = 10LL;
	static int32_t x260 = INT32_MAX;
	int32_t t53 = -4364905;

	t53 = ((x257-x258)<(x259/x260));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x261 = INT8_MAX;
	volatile int64_t x262 = -37630LL;
	uint8_t x263 = UINT8_MAX;

	t54 = ((x261-x262)<(x263/x264));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x265 = 3604681183646652917LLU;
	uint32_t x266 = UINT32_MAX;
	uint64_t x268 = UINT64_MAX;
	static volatile int32_t t55 = 45261;

	t55 = ((x265-x266)<(x267/x268));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x269 = 836534323198LLU;
	int16_t x270 = -74;
	int32_t x271 = -7;
	uint32_t x272 = 397076U;
	int32_t t56 = 15269;

	t56 = ((x269-x270)<(x271/x272));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x275 = INT8_MIN;
	int8_t x276 = INT8_MIN;

	t57 = ((x273-x274)<(x275/x276));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x277 = UINT64_MAX;
	volatile int64_t x278 = INT64_MIN;
	volatile int8_t x279 = 1;
	static uint64_t x280 = 892745585744704988LLU;
	static volatile int32_t t58 = -61963;

	t58 = ((x277-x278)<(x279/x280));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x289 = UINT8_MAX;
	volatile uint64_t x290 = 143046818LLU;
	uint8_t x292 = 73U;
	int32_t t59 = 1;

	t59 = ((x289-x290)<(x291/x292));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x293 = INT32_MAX;
	int32_t x295 = 0;

	t60 = ((x293-x294)<(x295/x296));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x297 = 15U;
	uint64_t x298 = 1LLU;
	int32_t x299 = 78786812;
	int32_t x300 = INT32_MIN;
	static volatile int32_t t61 = -74;

	t61 = ((x297-x298)<(x299/x300));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x301 = 136546LLU;
	volatile uint64_t x302 = 230721433750156LLU;
	int64_t x304 = INT64_MIN;
	volatile int32_t t62 = 878;

	t62 = ((x301-x302)<(x303/x304));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x306 = INT16_MIN;
	volatile int8_t x307 = INT8_MIN;
	int32_t x308 = INT32_MIN;
	static int32_t t63 = 100456;

	t63 = ((x305-x306)<(x307/x308));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x309 = INT16_MIN;
	uint32_t x310 = UINT32_MAX;
	static int8_t x311 = 10;
	volatile int32_t t64 = 6833862;

	t64 = ((x309-x310)<(x311/x312));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x313 = UINT32_MAX;
	uint16_t x314 = UINT16_MAX;
	uint16_t x315 = 29210U;
	int8_t x316 = 2;
	int32_t t65 = -3;

	t65 = ((x313-x314)<(x315/x316));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x317 = INT32_MIN;
	int16_t x318 = INT16_MIN;
	int16_t x319 = -1;
	volatile int32_t x320 = 251334664;
	int32_t t66 = -305;

	t66 = ((x317-x318)<(x319/x320));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x321 = UINT64_MAX;
	uint16_t x322 = UINT16_MAX;
	static uint32_t x323 = 244U;
	uint64_t x324 = 19275683582LLU;
	static int32_t t67 = 4196;

	t67 = ((x321-x322)<(x323/x324));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x326 = INT16_MAX;
	uint64_t x327 = 238337LLU;
	volatile int16_t x328 = 139;
	static volatile int32_t t68 = -8124;

	t68 = ((x325-x326)<(x327/x328));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x330 = 124U;
	int32_t x331 = -1;
	static int8_t x332 = 11;
	volatile int32_t t69 = 6238;

	t69 = ((x329-x330)<(x331/x332));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x333 = 0;
	uint8_t x334 = 5U;
	uint32_t x336 = 168U;
	volatile int32_t t70 = 16150;

	t70 = ((x333-x334)<(x335/x336));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x337 = INT16_MIN;
	int8_t x338 = 1;
	int64_t x340 = INT64_MIN;
	int32_t t71 = -1024;

	t71 = ((x337-x338)<(x339/x340));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x341 = INT16_MIN;
	int64_t x342 = 2159739502664LL;
	int32_t x343 = INT32_MIN;
	int64_t x344 = INT64_MIN;

	t72 = ((x341-x342)<(x343/x344));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x346 = 0;
	int16_t x348 = 3;
	static volatile int32_t t73 = -907254195;

	t73 = ((x345-x346)<(x347/x348));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x350 = 2057715690497LL;
	int64_t x351 = 1609133923633721210LL;
	static volatile uint16_t x352 = UINT16_MAX;
	int32_t t74 = -7;

	t74 = ((x349-x350)<(x351/x352));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x357 = -1;
	int8_t x359 = INT8_MIN;
	static int32_t x360 = -562077;
	volatile int32_t t75 = 15;

	t75 = ((x357-x358)<(x359/x360));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x362 = 1;
	int16_t x364 = INT16_MIN;
	volatile int32_t t76 = -6194817;

	t76 = ((x361-x362)<(x363/x364));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x365 = -274292058;
	static int32_t x367 = -1;
	int32_t x368 = INT32_MIN;
	volatile int32_t t77 = -1;

	t77 = ((x365-x366)<(x367/x368));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x377 = -1;
	static uint64_t x378 = 151327498249LLU;
	static int16_t x379 = INT16_MAX;
	static int32_t x380 = 2786118;
	volatile int32_t t78 = 2660;

	t78 = ((x377-x378)<(x379/x380));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x381 = -1;
	uint64_t x382 = 231462453848779LLU;
	int16_t x383 = 46;
	static int16_t x384 = INT16_MIN;

	t79 = ((x381-x382)<(x383/x384));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x386 = 6U;
	uint16_t x387 = 14U;
	uint8_t x388 = 88U;

	t80 = ((x385-x386)<(x387/x388));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x389 = 4776885123678274235LLU;
	int8_t x390 = INT8_MIN;
	volatile int8_t x392 = INT8_MIN;
	volatile int32_t t81 = 4515;

	t81 = ((x389-x390)<(x391/x392));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x393 = 20631311U;
	static volatile int16_t x394 = INT16_MAX;
	volatile uint32_t x395 = 2661050U;
	static volatile uint64_t x396 = UINT64_MAX;
	volatile int32_t t82 = 0;

	t82 = ((x393-x394)<(x395/x396));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x397 = UINT32_MAX;
	volatile uint16_t x398 = UINT16_MAX;
	int16_t x399 = -1;
	int32_t t83 = 539686965;

	t83 = ((x397-x398)<(x399/x400));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x401 = 9;
	int64_t x402 = INT64_MAX;
	static uint8_t x403 = UINT8_MAX;
	int64_t x404 = -1LL;

	t84 = ((x401-x402)<(x403/x404));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x405 = -1;
	uint32_t x406 = 13473U;
	volatile uint16_t x407 = 1208U;
	int16_t x408 = -1;

	t85 = ((x405-x406)<(x407/x408));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x410 = 10;
	volatile int16_t x411 = INT16_MIN;
	volatile int32_t t86 = -740;

	t86 = ((x409-x410)<(x411/x412));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x417 = -1;
	int8_t x418 = INT8_MIN;
	int32_t x419 = INT32_MAX;
	uint16_t x420 = 11370U;
	static volatile int32_t t87 = 32714;

	t87 = ((x417-x418)<(x419/x420));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x421 = INT16_MIN;
	uint64_t x422 = 366999543269845436LLU;
	static uint64_t x423 = 32360915LLU;
	uint32_t x424 = UINT32_MAX;
	static int32_t t88 = 113045;

	t88 = ((x421-x422)<(x423/x424));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x429 = INT16_MIN;
	uint32_t x430 = UINT32_MAX;
	uint8_t x431 = 3U;
	uint64_t x432 = 92622308LLU;
	int32_t t89 = 855;

	t89 = ((x429-x430)<(x431/x432));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x433 = -1LL;
	uint32_t x434 = 3U;
	int64_t x435 = INT64_MAX;
	static int16_t x436 = -1;
	int32_t t90 = -689021826;

	t90 = ((x433-x434)<(x435/x436));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x437 = 12U;
	uint64_t x438 = UINT64_MAX;
	static volatile uint16_t x440 = 4U;
	int32_t t91 = 4745;

	t91 = ((x437-x438)<(x439/x440));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x441 = 114908U;
	int64_t x442 = 11LL;
	uint16_t x443 = 58U;
	static volatile int32_t t92 = -88396;

	t92 = ((x441-x442)<(x443/x444));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x445 = INT16_MIN;
	static uint32_t x446 = UINT32_MAX;
	volatile int32_t x447 = 12;

	t93 = ((x445-x446)<(x447/x448));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x449 = INT8_MIN;
	static int16_t x450 = INT16_MIN;
	int8_t x451 = 4;
	uint32_t x452 = 825047U;
	volatile int32_t t94 = -55076;

	t94 = ((x449-x450)<(x451/x452));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x453 = 21U;
	static uint16_t x454 = 7053U;
	volatile uint8_t x455 = 31U;
	int64_t x456 = INT64_MIN;
	int32_t t95 = 19;

	t95 = ((x453-x454)<(x455/x456));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x457 = INT32_MIN;
	int32_t x458 = -396832;

	t96 = ((x457-x458)<(x459/x460));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x461 = -1;
	uint32_t x462 = 712U;
	volatile int16_t x463 = 12;
	volatile uint64_t x464 = 175238253LLU;
	volatile int32_t t97 = 9;

	t97 = ((x461-x462)<(x463/x464));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x466 = 28733152738LLU;
	int16_t x467 = INT16_MIN;
	uint64_t x468 = 102358811968LLU;
	int32_t t98 = 3;

	t98 = ((x465-x466)<(x467/x468));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x473 = INT64_MIN;
	volatile int32_t x475 = INT32_MAX;
	static uint32_t x476 = 1193116U;
	int32_t t99 = 25295;

	t99 = ((x473-x474)<(x475/x476));

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

