#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x3 = 19614515479LLU;
volatile uint16_t x9 = 613U;
volatile uint32_t x15 = UINT32_MAX;
int16_t x24 = INT16_MAX;
static uint32_t x26 = 179U;
volatile uint32_t x29 = 9476566U;
int32_t x35 = 74810753;
uint64_t x36 = 114494643642LLU;
static int16_t x41 = INT16_MIN;
volatile int16_t x44 = INT16_MIN;
int16_t x45 = INT16_MIN;
uint8_t x48 = 0U;
static int32_t x49 = INT32_MAX;
int32_t t12 = -200045;
static uint8_t x58 = 0U;
volatile int8_t x60 = -31;
uint16_t x72 = 17U;
uint64_t x82 = UINT64_MAX;
int64_t x84 = 393855567798LL;
volatile int8_t x87 = -36;
int8_t x88 = INT8_MAX;
static int64_t x95 = -1LL;
int64_t x109 = -248603LL;
int16_t x123 = 0;
volatile int32_t t28 = 6285362;
int16_t x132 = -7476;
uint64_t x136 = UINT64_MAX;
static uint16_t x138 = UINT16_MAX;
static int16_t x141 = INT16_MIN;
int32_t t33 = 63;
int64_t x156 = INT64_MAX;
volatile int8_t x166 = 1;
volatile int8_t x168 = 27;
static uint16_t x169 = UINT16_MAX;
volatile uint8_t x170 = UINT8_MAX;
volatile int32_t x172 = -1;
int8_t x179 = -1;
int32_t x184 = 253412147;
volatile int16_t x185 = -12954;
int8_t x187 = INT8_MIN;
static int64_t x189 = -1LL;
int16_t x193 = -1;
int32_t x198 = 108679;
int16_t x199 = INT16_MIN;
volatile int32_t t43 = 37713;
uint32_t x204 = 24067496U;
uint16_t x209 = 12348U;
int8_t x215 = -1;
uint64_t x216 = 100066951832757063LLU;
static volatile int32_t t46 = 68;
static volatile int32_t t48 = -3110706;
int8_t x236 = 1;
volatile int32_t t51 = 243;
static int32_t x238 = INT32_MIN;
uint16_t x239 = UINT16_MAX;
uint64_t x256 = 698LLU;
volatile uint8_t x260 = 12U;
int32_t t57 = -38610726;
volatile int32_t t58 = 100846320;
static int8_t x276 = INT8_MIN;
static volatile int32_t t59 = -2256;
int8_t x278 = INT8_MIN;
int32_t x289 = INT32_MIN;
int16_t x293 = 8992;
int16_t x309 = INT16_MIN;
int32_t t68 = -33553949;
int16_t x330 = INT16_MIN;
int64_t x336 = -1709436185LL;
volatile int32_t t74 = -909233;
int16_t x343 = 7475;
int16_t x351 = -14;
int8_t x367 = -1;
volatile int32_t t82 = -1;
volatile int16_t x381 = -1;
int64_t x382 = -1LL;
volatile int32_t t86 = -18321;
uint64_t x390 = 1053278171565348346LLU;
volatile int8_t x391 = INT8_MIN;
volatile uint32_t x396 = 5952U;
volatile int32_t t88 = 2075662;
static volatile uint8_t x400 = 1U;
int16_t x401 = INT16_MIN;
int16_t x402 = -1;
int32_t t90 = 1402348;
int16_t x406 = -137;
volatile uint8_t x411 = 2U;
volatile int8_t x415 = INT8_MIN;
uint32_t x418 = UINT32_MAX;
static int64_t x444 = INT64_MIN;


void f0(void) {
	volatile uint32_t x1 = UINT32_MAX;
	static uint32_t x2 = UINT32_MAX;
	int16_t x4 = INT16_MAX;
	int32_t t0 = -65;

	t0 = (x1<(x2%(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x5 = 84U;
	int16_t x6 = INT16_MAX;
	int32_t x7 = -1;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 1040;

	t1 = (x5<(x6%(x7-x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = UINT32_MAX;
	uint64_t x11 = UINT64_MAX;
	static volatile uint64_t x12 = 1822648155490973385LLU;
	static int32_t t2 = 18823785;

	t2 = (x9<(x10%(x11-x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 475405268716803LLU;
	volatile int32_t x14 = 575904296;
	volatile int32_t x16 = INT32_MAX;
	int32_t t3 = -1014;

	t3 = (x13<(x14%(x15-x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = UINT8_MAX;
	int32_t x18 = 33590866;
	int16_t x19 = 7449;
	int32_t x20 = 14;
	int32_t t4 = 47151;

	t4 = (x17<(x18%(x19-x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = 19U;
	static int32_t x22 = -1;
	static uint16_t x23 = UINT16_MAX;
	int32_t t5 = -409374;

	t5 = (x21<(x22%(x23-x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	int8_t x27 = 1;
	static uint64_t x28 = 875501687LLU;
	volatile int32_t t6 = -41125;

	t6 = (x25<(x26%(x27-x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = UINT64_MAX;
	uint32_t x31 = 740958601U;
	int32_t x32 = INT32_MIN;
	int32_t t7 = -15050;

	t7 = (x29<(x30%(x31-x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	int64_t x34 = -1LL;
	static int32_t t8 = 243271885;

	t8 = (x33<(x34%(x35-x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	volatile int32_t x38 = 47319;
	int16_t x39 = 0;
	int8_t x40 = -5;
	int32_t t9 = 5;

	t9 = (x37<(x38%(x39-x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 129U;
	uint8_t x43 = UINT8_MAX;
	static int32_t t10 = -882818;

	t10 = (x41<(x42%(x43-x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MIN;
	int16_t x47 = INT16_MAX;
	int32_t t11 = 1620810;

	t11 = (x45<(x46%(x47-x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x50 = INT8_MIN;
	static uint32_t x51 = 2730U;
	int8_t x52 = 1;

	t12 = (x49<(x50%(x51-x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x57 = -1LL;
	int32_t x59 = -5;
	volatile int32_t t13 = 25452;

	t13 = (x57<(x58%(x59-x60)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -1;
	uint8_t x66 = 33U;
	static int8_t x67 = -25;
	static volatile uint8_t x68 = UINT8_MAX;
	int32_t t14 = 1602;

	t14 = (x65<(x66%(x67-x68)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MIN;
	volatile int16_t x70 = INT16_MAX;
	uint64_t x71 = UINT64_MAX;
	int32_t t15 = -2645546;

	t15 = (x69<(x70%(x71-x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = UINT32_MAX;
	static int8_t x74 = 0;
	int8_t x75 = -1;
	int64_t x76 = INT64_MIN;
	int32_t t16 = 24625630;

	t16 = (x73<(x74%(x75-x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 2U;
	static int64_t x78 = 81972213540517263LL;
	uint16_t x79 = 5012U;
	volatile int64_t x80 = -64009690516756LL;
	volatile int32_t t17 = -3;

	t17 = (x77<(x78%(x79-x80)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = 29LLU;
	static int16_t x83 = INT16_MAX;
	int32_t t18 = -17;

	t18 = (x81<(x82%(x83-x84)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x85 = 2244U;
	int64_t x86 = INT64_MIN;
	int32_t t19 = 368011520;

	t19 = (x85<(x86%(x87-x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x89 = UINT64_MAX;
	int32_t x90 = 154;
	static uint8_t x91 = 5U;
	uint16_t x92 = 73U;
	int32_t t20 = -85352;

	t20 = (x89<(x90%(x91-x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x93 = 75U;
	static uint32_t x94 = 65020U;
	int8_t x96 = INT8_MIN;
	static volatile int32_t t21 = 219;

	t21 = (x93<(x94%(x95-x96)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x97 = -97557LL;
	uint8_t x98 = 58U;
	int32_t x99 = -3582735;
	uint32_t x100 = 7997815U;
	int32_t t22 = -150226;

	t22 = (x97<(x98%(x99-x100)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = -1;
	volatile int8_t x106 = 2;
	uint16_t x107 = 2U;
	int32_t x108 = 374258;
	int32_t t23 = 632681284;

	t23 = (x105<(x106%(x107-x108)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x110 = -389995780;
	int8_t x111 = INT8_MAX;
	int16_t x112 = 109;
	static int32_t t24 = -875908;

	t24 = (x109<(x110%(x111-x112)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = UINT16_MAX;
	static uint32_t x114 = UINT32_MAX;
	uint8_t x115 = 0U;
	volatile int32_t x116 = INT32_MAX;
	int32_t t25 = -4760427;

	t25 = (x113<(x114%(x115-x116)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = -1;
	int16_t x118 = -363;
	static int8_t x119 = 0;
	uint64_t x120 = UINT64_MAX;
	volatile int32_t t26 = -384;

	t26 = (x117<(x118%(x119-x120)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x121 = 16;
	uint8_t x122 = 0U;
	volatile uint8_t x124 = 9U;
	static int32_t t27 = 1;

	t27 = (x121<(x122%(x123-x124)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = 3;
	volatile uint32_t x126 = 440509099U;
	int16_t x127 = INT16_MIN;
	uint16_t x128 = UINT16_MAX;

	t28 = (x125<(x126%(x127-x128)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x129 = 1U;
	int16_t x130 = -7;
	static int8_t x131 = 0;
	static volatile int32_t t29 = -391;

	t29 = (x129<(x130%(x131-x132)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x133 = INT16_MAX;
	int8_t x134 = INT8_MIN;
	volatile uint8_t x135 = 0U;
	volatile int32_t t30 = -2908;

	t30 = (x133<(x134%(x135-x136)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x137 = -1;
	volatile int8_t x139 = INT8_MAX;
	int32_t x140 = INT32_MAX;
	volatile int32_t t31 = 9;

	t31 = (x137<(x138%(x139-x140)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x142 = INT32_MIN;
	int8_t x143 = -9;
	volatile int16_t x144 = INT16_MIN;
	volatile int32_t t32 = -1;

	t32 = (x141<(x142%(x143-x144)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = -2915;
	uint8_t x146 = 40U;
	uint64_t x147 = 254570506205856LLU;
	volatile int16_t x148 = INT16_MIN;

	t33 = (x145<(x146%(x147-x148)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x149 = 3LL;
	uint8_t x150 = UINT8_MAX;
	int64_t x151 = INT64_MIN;
	volatile uint64_t x152 = 85419258631LLU;
	int32_t t34 = 15796;

	t34 = (x149<(x150%(x151-x152)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x153 = INT8_MAX;
	int8_t x154 = INT8_MIN;
	int16_t x155 = INT16_MAX;
	volatile int32_t t35 = 1;

	t35 = (x153<(x154%(x155-x156)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = INT64_MAX;
	static uint16_t x167 = 4U;
	int32_t t36 = -9866863;

	t36 = (x165<(x166%(x167-x168)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x171 = INT16_MIN;
	volatile int32_t t37 = -594224;

	t37 = (x169<(x170%(x171-x172)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x177 = INT16_MIN;
	int8_t x178 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	int32_t t38 = -4;

	t38 = (x177<(x178%(x179-x180)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = -1;
	int64_t x182 = INT64_MIN;
	static int16_t x183 = INT16_MAX;
	volatile int32_t t39 = 570263305;

	t39 = (x181<(x182%(x183-x184)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x186 = INT8_MAX;
	static int16_t x188 = INT16_MIN;
	static volatile int32_t t40 = -44080;

	t40 = (x185<(x186%(x187-x188)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x190 = UINT32_MAX;
	uint16_t x191 = 2U;
	static uint32_t x192 = UINT32_MAX;
	volatile int32_t t41 = 25;

	t41 = (x189<(x190%(x191-x192)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x194 = -1;
	uint8_t x195 = 1U;
	volatile int16_t x196 = INT16_MIN;
	volatile int32_t t42 = -894;

	t42 = (x193<(x194%(x195-x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x197 = INT16_MIN;
	int16_t x200 = INT16_MAX;

	t43 = (x197<(x198%(x199-x200)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x201 = -22646456895868561LL;
	volatile int64_t x202 = INT64_MIN;
	int8_t x203 = INT8_MIN;
	int32_t t44 = -31962124;

	t44 = (x201<(x202%(x203-x204)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x210 = UINT64_MAX;
	int16_t x211 = INT16_MIN;
	volatile int16_t x212 = -1;
	int32_t t45 = -798;

	t45 = (x209<(x210%(x211-x212)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x213 = 1U;
	int16_t x214 = -1;

	t46 = (x213<(x214%(x215-x216)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = INT16_MIN;
	int64_t x218 = -1LL;
	uint64_t x219 = UINT64_MAX;
	static int8_t x220 = INT8_MIN;
	int32_t t47 = -350047;

	t47 = (x217<(x218%(x219-x220)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = INT8_MAX;
	int32_t x222 = INT32_MAX;
	uint32_t x223 = 42779U;
	static int8_t x224 = -1;

	t48 = (x221<(x222%(x223-x224)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x225 = -1;
	int64_t x226 = -1LL;
	int16_t x227 = INT16_MAX;
	static uint8_t x228 = 30U;
	int32_t t49 = 11921112;

	t49 = (x225<(x226%(x227-x228)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x229 = 28U;
	int8_t x230 = -11;
	volatile int8_t x231 = -61;
	static volatile int8_t x232 = INT8_MAX;
	volatile int32_t t50 = -554589;

	t50 = (x229<(x230%(x231-x232)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x233 = 27599U;
	int32_t x234 = 20;
	int64_t x235 = -1LL;

	t51 = (x233<(x234%(x235-x236)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x237 = UINT32_MAX;
	volatile int16_t x240 = 1185;
	volatile int32_t t52 = 30490986;

	t52 = (x237<(x238%(x239-x240)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x245 = -15;
	int8_t x246 = -4;
	uint64_t x247 = 294218870072LLU;
	uint16_t x248 = 0U;
	int32_t t53 = -2869526;

	t53 = (x245<(x246%(x247-x248)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x249 = -358089;
	static int64_t x250 = INT64_MIN;
	int64_t x251 = INT64_MIN;
	volatile int32_t x252 = INT32_MIN;
	volatile int32_t t54 = 3;

	t54 = (x249<(x250%(x251-x252)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x253 = 167U;
	int16_t x254 = INT16_MIN;
	int16_t x255 = INT16_MIN;
	int32_t t55 = -3928881;

	t55 = (x253<(x254%(x255-x256)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x257 = 1459U;
	int8_t x258 = -3;
	volatile int32_t x259 = INT32_MAX;
	volatile int32_t t56 = 355640;

	t56 = (x257<(x258%(x259-x260)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x261 = -1;
	uint64_t x262 = 2185583LLU;
	int8_t x263 = INT8_MIN;
	volatile uint64_t x264 = UINT64_MAX;

	t57 = (x261<(x262%(x263-x264)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x265 = INT16_MIN;
	int32_t x266 = 0;
	uint16_t x267 = 32471U;
	uint16_t x268 = UINT16_MAX;

	t58 = (x265<(x266%(x267-x268)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x273 = 0;
	static int16_t x274 = -1;
	uint8_t x275 = UINT8_MAX;

	t59 = (x273<(x274%(x275-x276)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x277 = 5LLU;
	static volatile int64_t x279 = INT64_MIN;
	static int16_t x280 = -1;
	volatile int32_t t60 = 27;

	t60 = (x277<(x278%(x279-x280)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x281 = 58U;
	uint16_t x282 = UINT16_MAX;
	int64_t x283 = -136012439605698522LL;
	uint64_t x284 = 10907LLU;
	int32_t t61 = 209401321;

	t61 = (x281<(x282%(x283-x284)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x285 = UINT32_MAX;
	int32_t x286 = INT32_MIN;
	int64_t x287 = 503283LL;
	static int16_t x288 = -1;
	volatile int32_t t62 = 2603;

	t62 = (x285<(x286%(x287-x288)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x290 = 189726945LL;
	int64_t x291 = 12LL;
	int16_t x292 = INT16_MAX;
	volatile int32_t t63 = -11320374;

	t63 = (x289<(x290%(x291-x292)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x294 = INT16_MIN;
	volatile int32_t x295 = -138;
	int16_t x296 = -5826;
	static int32_t t64 = -397689;

	t64 = (x293<(x294%(x295-x296)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x297 = 16;
	static volatile uint32_t x298 = 314451U;
	uint16_t x299 = 11617U;
	volatile int32_t x300 = 0;
	volatile int32_t t65 = -21;

	t65 = (x297<(x298%(x299-x300)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x301 = -1;
	int8_t x302 = -1;
	static int8_t x303 = INT8_MIN;
	uint64_t x304 = 479LLU;
	volatile int32_t t66 = 1086000;

	t66 = (x301<(x302%(x303-x304)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x305 = 32U;
	static uint32_t x306 = 8825267U;
	int16_t x307 = -1;
	int16_t x308 = -61;
	int32_t t67 = 7023;

	t67 = (x305<(x306%(x307-x308)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x310 = 31U;
	volatile int8_t x311 = INT8_MIN;
	uint16_t x312 = 39U;

	t68 = (x309<(x310%(x311-x312)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x313 = INT32_MAX;
	uint64_t x314 = 145973437LLU;
	int16_t x315 = -1013;
	volatile uint8_t x316 = 25U;
	static int32_t t69 = -2;

	t69 = (x313<(x314%(x315-x316)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x317 = 317742567U;
	uint64_t x318 = 33338786419830083LLU;
	static int64_t x319 = INT64_MAX;
	uint64_t x320 = 5140536452482869LLU;
	volatile int32_t t70 = -160;

	t70 = (x317<(x318%(x319-x320)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x321 = 67772874611641LLU;
	int32_t x322 = INT32_MAX;
	uint64_t x323 = 1035799097051207LLU;
	int64_t x324 = INT64_MAX;
	static int32_t t71 = -185204;

	t71 = (x321<(x322%(x323-x324)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x325 = 2U;
	static int16_t x326 = -1;
	volatile int16_t x327 = 73;
	int32_t x328 = -1;
	int32_t t72 = 5;

	t72 = (x325<(x326%(x327-x328)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x329 = INT16_MIN;
	volatile int16_t x331 = -1;
	uint64_t x332 = 0LLU;
	static int32_t t73 = -29570;

	t73 = (x329<(x330%(x331-x332)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x333 = INT64_MIN;
	int16_t x334 = INT16_MIN;
	int64_t x335 = -3972300244076230736LL;

	t74 = (x333<(x334%(x335-x336)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x337 = INT16_MIN;
	uint8_t x338 = UINT8_MAX;
	int8_t x339 = INT8_MAX;
	static int8_t x340 = -1;
	volatile int32_t t75 = -790441;

	t75 = (x337<(x338%(x339-x340)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x341 = 30191U;
	int16_t x342 = INT16_MIN;
	int16_t x344 = INT16_MIN;
	volatile int32_t t76 = 7;

	t76 = (x341<(x342%(x343-x344)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x345 = -19978LL;
	int8_t x346 = -1;
	int32_t x347 = -19390;
	int64_t x348 = -1LL;
	volatile int32_t t77 = 72;

	t77 = (x345<(x346%(x347-x348)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x349 = 25032U;
	uint64_t x350 = 161769LLU;
	uint8_t x352 = 2U;
	int32_t t78 = -202669;

	t78 = (x349<(x350%(x351-x352)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x357 = -43936;
	int8_t x358 = 9;
	int8_t x359 = 30;
	int16_t x360 = INT16_MIN;
	int32_t t79 = -3507823;

	t79 = (x357<(x358%(x359-x360)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x361 = 18LL;
	volatile int16_t x362 = -171;
	int16_t x363 = -1;
	int64_t x364 = INT64_MAX;
	volatile int32_t t80 = 591;

	t80 = (x361<(x362%(x363-x364)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x365 = 1649009U;
	uint16_t x366 = 101U;
	uint16_t x368 = 0U;
	static volatile int32_t t81 = 370;

	t81 = (x365<(x366%(x367-x368)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x369 = INT16_MIN;
	uint64_t x370 = UINT64_MAX;
	static uint8_t x371 = 27U;
	uint64_t x372 = 141LLU;

	t82 = (x369<(x370%(x371-x372)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x373 = INT16_MAX;
	int32_t x374 = INT32_MIN;
	volatile int32_t x375 = -1;
	int64_t x376 = INT64_MIN;
	static volatile int32_t t83 = 849742;

	t83 = (x373<(x374%(x375-x376)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x377 = 60U;
	int64_t x378 = -1LL;
	int64_t x379 = INT64_MIN;
	int64_t x380 = -20233298316LL;
	volatile int32_t t84 = 87;

	t84 = (x377<(x378%(x379-x380)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x383 = INT32_MIN;
	static uint32_t x384 = 311779U;
	static int32_t t85 = -1;

	t85 = (x381<(x382%(x383-x384)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x385 = 14995LL;
	int32_t x386 = INT32_MIN;
	uint64_t x387 = 3748996LLU;
	uint16_t x388 = 14U;

	t86 = (x385<(x386%(x387-x388)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x389 = UINT32_MAX;
	uint64_t x392 = 936645135884661LLU;
	volatile int32_t t87 = 4032;

	t87 = (x389<(x390%(x391-x392)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x393 = 0U;
	int32_t x394 = -1;
	int16_t x395 = INT16_MIN;

	t88 = (x393<(x394%(x395-x396)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x397 = INT32_MIN;
	int64_t x398 = 471933858959LL;
	int8_t x399 = INT8_MAX;
	int32_t t89 = -140237032;

	t89 = (x397<(x398%(x399-x400)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x403 = 5U;
	uint64_t x404 = 6513731699LLU;

	t90 = (x401<(x402%(x403-x404)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x405 = 14075LLU;
	static uint16_t x407 = UINT16_MAX;
	int8_t x408 = INT8_MIN;
	int32_t t91 = 1198727;

	t91 = (x405<(x406%(x407-x408)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x409 = INT32_MIN;
	static int16_t x410 = INT16_MIN;
	int8_t x412 = INT8_MIN;
	volatile int32_t t92 = -22;

	t92 = (x409<(x410%(x411-x412)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x413 = INT32_MIN;
	static int32_t x414 = 8952192;
	int32_t x416 = -7411;
	int32_t t93 = 11437;

	t93 = (x413<(x414%(x415-x416)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x417 = 0U;
	static int64_t x419 = INT64_MAX;
	volatile int32_t x420 = INT32_MAX;
	volatile int32_t t94 = 46704;

	t94 = (x417<(x418%(x419-x420)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x425 = 390944910100LLU;
	uint64_t x426 = 4210255637146LLU;
	int64_t x427 = -184194168592LL;
	uint64_t x428 = 6306LLU;
	volatile int32_t t95 = -5;

	t95 = (x425<(x426%(x427-x428)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x429 = -1;
	int16_t x430 = INT16_MAX;
	int8_t x431 = 1;
	volatile int8_t x432 = -21;
	static volatile int32_t t96 = 18735;

	t96 = (x429<(x430%(x431-x432)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x433 = -75562;
	static uint8_t x434 = 10U;
	int32_t x435 = INT32_MIN;
	int16_t x436 = -1789;
	volatile int32_t t97 = -25775;

	t97 = (x433<(x434%(x435-x436)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x437 = INT8_MAX;
	volatile int16_t x438 = INT16_MIN;
	volatile int8_t x439 = -1;
	int32_t x440 = INT32_MIN;
	volatile int32_t t98 = -540565589;

	t98 = (x437<(x438%(x439-x440)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x441 = -1;
	int32_t x442 = -3;
	volatile int16_t x443 = INT16_MIN;
	volatile int32_t t99 = -14852;

	t99 = (x441<(x442%(x443-x444)));

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

