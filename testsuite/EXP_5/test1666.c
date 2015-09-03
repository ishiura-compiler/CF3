#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
uint8_t x10 = 1U;
uint32_t t2 = 24080U;
volatile int64_t x18 = INT64_MIN;
uint8_t x20 = 46U;
static int64_t x21 = 55447214944564LL;
uint32_t x28 = UINT32_MAX;
int8_t x30 = INT8_MIN;
int16_t x31 = INT16_MIN;
volatile int64_t t6 = 2LL;
volatile int8_t x35 = -2;
volatile uint16_t x38 = 111U;
int16_t x40 = -1;
static int8_t x43 = INT8_MIN;
uint64_t x56 = UINT64_MAX;
volatile int32_t x63 = -1;
int16_t x68 = INT16_MIN;
int8_t x71 = INT8_MAX;
static int32_t t18 = -25920073;
volatile int32_t t20 = 40881096;
int8_t x91 = 23;
uint32_t t21 = 9U;
volatile uint16_t x103 = 2U;
volatile int32_t t23 = 1;
static uint8_t x105 = 3U;
uint16_t x108 = 9U;
volatile uint64_t x111 = 7931190857417LLU;
int8_t x114 = -1;
int32_t x117 = 208746301;
int16_t x119 = -1;
int32_t x123 = INT32_MIN;
uint64_t x127 = 79375610007666286LLU;
int8_t x130 = 1;
int16_t x131 = -1;
int8_t x132 = 0;
static int8_t x136 = INT8_MAX;
volatile int32_t x138 = -1;
volatile int16_t x143 = 1;
uint64_t x145 = 1LLU;
static uint16_t x146 = 0U;
int8_t x148 = INT8_MIN;
volatile uint8_t x169 = UINT8_MAX;
int16_t x170 = INT16_MIN;
static int16_t x171 = -1;
int16_t x174 = -1394;
uint8_t x179 = UINT8_MAX;
uint16_t x189 = 126U;
int8_t x190 = INT8_MIN;
static uint64_t t42 = 847LLU;
uint8_t x193 = 73U;
static uint64_t x222 = UINT64_MAX;
int64_t x226 = INT64_MIN;
volatile uint16_t x239 = 3491U;
int64_t x240 = 134429467314527LL;
volatile int64_t t50 = -35LL;
volatile int64_t x245 = INT64_MIN;
uint64_t x250 = 26825LLU;
static volatile int32_t t55 = 289058074;
volatile int8_t x262 = INT8_MAX;
int8_t x265 = INT8_MIN;
int32_t x266 = -694;
int64_t x267 = INT64_MIN;
int32_t x268 = -1;
volatile int64_t x269 = INT64_MIN;
int8_t x280 = INT8_MAX;
volatile int16_t x285 = INT16_MAX;
volatile int8_t x288 = 1;
int32_t t60 = 612411645;
static uint16_t x290 = UINT16_MAX;
static volatile uint32_t x291 = UINT32_MAX;
uint32_t x294 = 889U;
int32_t t62 = 504039;
int64_t x299 = -34148369814682LL;
volatile int32_t x300 = INT32_MIN;
int64_t x305 = -1LL;
static uint64_t x306 = UINT64_MAX;
int8_t x322 = -1;
volatile int16_t x325 = 10191;
int32_t x327 = -1;
int64_t x335 = INT64_MAX;
int32_t t71 = -1419;
int64_t x342 = 214491LL;
int16_t x344 = -5793;
volatile int64_t x348 = INT64_MAX;
int64_t x360 = -1LL;
int16_t x361 = -4;
int16_t x364 = 8137;
static int8_t x367 = -1;
volatile int16_t x370 = INT16_MAX;
volatile uint32_t t79 = 51U;
int16_t x373 = -1;
int64_t x380 = INT64_MIN;
uint64_t x382 = 149719LLU;
volatile uint32_t t83 = 515439U;
volatile uint32_t x389 = UINT32_MAX;
static volatile int32_t x395 = INT32_MIN;
int8_t x397 = -1;
volatile uint64_t t86 = 5LLU;
int16_t x413 = INT16_MIN;
int32_t x420 = INT32_MIN;
static uint16_t x425 = UINT16_MAX;
int16_t x430 = -2;
volatile int64_t x440 = INT64_MAX;
uint64_t x441 = UINT64_MAX;
int8_t x458 = -10;
uint64_t x461 = 345LLU;


void f0(void) {
	int16_t x2 = 358;
	int32_t x3 = -1;
	static uint32_t x4 = 24889736U;
	static volatile uint32_t t0 = 4428024U;

	t0 = (x1-((x2<=x3)|x4));

	if (t0 != 4270044792U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = -112;
	volatile uint8_t x6 = 6U;
	uint16_t x7 = 69U;
	int16_t x8 = 1;
	static volatile int32_t t1 = 25824116;

	t1 = (x5-((x6<=x7)|x8));

	if (t1 != -113) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 101589U;
	uint8_t x11 = 48U;
	uint8_t x12 = UINT8_MAX;

	t2 = (x9-((x10<=x11)|x12));

	if (t2 != 101334U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = -547990LL;
	int64_t x19 = -2951326805LL;
	volatile int64_t t3 = 462274391LL;

	t3 = (x17-((x18<=x19)|x20));

	if (t3 != -548037LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x22 = 0;
	static int32_t x23 = INT32_MIN;
	uint32_t x24 = UINT32_MAX;
	static int64_t t4 = 16811291885985797LL;

	t4 = (x21-((x22<=x23)|x24));

	if (t4 != 55442919977269LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x25 = 1324746026U;
	int8_t x26 = INT8_MAX;
	int8_t x27 = -2;
	uint32_t t5 = 2357U;

	t5 = (x25-((x26<=x27)|x28));

	if (t5 != 1324746027U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	int64_t x32 = 13944263LL;

	t6 = (x29-((x30<=x31)|x32));

	if (t6 != -13944391LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	int64_t x34 = 161981627230LL;
	static int8_t x36 = -1;
	int32_t t7 = 36567;

	t7 = (x33-((x34<=x35)|x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = 5965898272148LL;
	int8_t x39 = INT8_MAX;
	int64_t t8 = -857069LL;

	t8 = (x37-((x38<=x39)|x40));

	if (t8 != 5965898272149LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = INT8_MAX;
	volatile uint8_t x42 = UINT8_MAX;
	int32_t x44 = 2257759;
	int32_t t9 = 124058;

	t9 = (x41-((x42<=x43)|x44));

	if (t9 != -2257632) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = 5486LL;
	uint32_t x46 = UINT32_MAX;
	int8_t x47 = 1;
	int8_t x48 = INT8_MIN;
	static int64_t t10 = 0LL;

	t10 = (x45-((x46<=x47)|x48));

	if (t10 != 5614LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	static uint32_t x50 = 2233U;
	int8_t x51 = INT8_MIN;
	int64_t x52 = -103514LL;
	static int64_t t11 = 10038LL;

	t11 = (x49-((x50<=x51)|x52));

	if (t11 != 103385LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = UINT8_MAX;
	int8_t x54 = INT8_MIN;
	int64_t x55 = 11820022886535853LL;
	uint64_t t12 = 108736LLU;

	t12 = (x53-((x54<=x55)|x56));

	if (t12 != 256LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = INT32_MIN;
	volatile int32_t x58 = -1;
	int8_t x59 = 0;
	int64_t x60 = INT64_MIN;
	volatile int64_t t13 = -48390LL;

	t13 = (x57-((x58<=x59)|x60));

	if (t13 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x61 = UINT16_MAX;
	int32_t x62 = INT32_MAX;
	int16_t x64 = INT16_MIN;
	volatile int32_t t14 = 3541971;

	t14 = (x61-((x62<=x63)|x64));

	if (t14 != 98303) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	int8_t x66 = INT8_MIN;
	volatile int8_t x67 = 53;
	int32_t t15 = -51780;

	t15 = (x65-((x66<=x67)|x68));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = INT8_MIN;
	int16_t x70 = -25;
	int16_t x72 = INT16_MIN;
	static volatile int32_t t16 = 1;

	t16 = (x69-((x70<=x71)|x72));

	if (t16 != 32639) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = -1;
	volatile uint8_t x74 = 47U;
	static int64_t x75 = INT64_MIN;
	int64_t x76 = -1LL;
	int64_t t17 = -487915255421185LL;

	t17 = (x73-((x74<=x75)|x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = INT8_MAX;
	int16_t x78 = INT16_MIN;
	int16_t x79 = -1687;
	uint8_t x80 = UINT8_MAX;

	t18 = (x77-((x78<=x79)|x80));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	int8_t x82 = INT8_MAX;
	uint16_t x83 = 27U;
	int32_t x84 = INT32_MIN;
	static volatile int64_t t19 = -1088749LL;

	t19 = (x81-((x82<=x83)|x84));

	if (t19 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -18;
	volatile int64_t x86 = INT64_MIN;
	int32_t x87 = -1;
	int32_t x88 = INT32_MIN;

	t20 = (x85-((x86<=x87)|x88));

	if (t20 != 2147483629) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 2002865U;
	static int8_t x90 = -1;
	static int8_t x92 = INT8_MIN;

	t21 = (x89-((x90<=x91)|x92));

	if (t21 != 2002992U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -1;
	static volatile uint16_t x94 = UINT16_MAX;
	volatile uint64_t x95 = UINT64_MAX;
	volatile uint64_t x96 = 3651531183801603LLU;
	uint64_t t22 = 58170460661774836LLU;

	t22 = (x93-((x94<=x95)|x96));

	if (t22 != 18443092542525750012LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MIN;
	int32_t x102 = 3;
	int8_t x104 = INT8_MAX;

	t23 = (x101-((x102<=x103)|x104));

	if (t23 != -255) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x106 = -628;
	int16_t x107 = -1;
	static volatile int32_t t24 = 39895436;

	t24 = (x105-((x106<=x107)|x108));

	if (t24 != -6) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x109 = -22;
	volatile int32_t x110 = 2;
	int64_t x112 = INT64_MIN;
	int64_t t25 = -58992543484372LL;

	t25 = (x109-((x110<=x111)|x112));

	if (t25 != 9223372036854775785LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x113 = INT32_MAX;
	int64_t x115 = INT64_MAX;
	volatile uint32_t x116 = 47U;
	static uint32_t t26 = 4658823U;

	t26 = (x113-((x114<=x115)|x116));

	if (t26 != 2147483600U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x118 = INT64_MIN;
	volatile uint64_t x120 = 14572LLU;
	volatile uint64_t t27 = 296043006976LLU;

	t27 = (x117-((x118<=x119)|x120));

	if (t27 != 208731728LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x121 = -1;
	int64_t x122 = INT64_MIN;
	volatile int64_t x124 = INT64_MAX;
	int64_t t28 = INT64_MIN;

	t28 = (x121-((x122<=x123)|x124));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = 64U;
	int32_t x126 = INT32_MIN;
	volatile int16_t x128 = INT16_MAX;
	volatile int32_t t29 = -295;

	t29 = (x125-((x126<=x127)|x128));

	if (t29 != -32703) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x129 = UINT32_MAX;
	uint32_t t30 = UINT32_MAX;

	t30 = (x129-((x130<=x131)|x132));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = UINT8_MAX;
	int32_t x134 = -35757146;
	int32_t x135 = -138551;
	int32_t t31 = -14270947;

	t31 = (x133-((x134<=x135)|x136));

	if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = 3605;
	uint32_t x139 = UINT32_MAX;
	uint16_t x140 = 2235U;
	int32_t t32 = -184993;

	t32 = (x137-((x138<=x139)|x140));

	if (t32 != 1370) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = -1LL;
	volatile int32_t x142 = INT32_MIN;
	static uint32_t x144 = 2U;
	volatile int64_t t33 = -421425LL;

	t33 = (x141-((x142<=x143)|x144));

	if (t33 != -4LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x147 = UINT16_MAX;
	static uint64_t t34 = 154318278LLU;

	t34 = (x145-((x146<=x147)|x148));

	if (t34 != 128LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MIN;
	static uint16_t x154 = 3609U;
	int8_t x155 = INT8_MIN;
	static int64_t x156 = INT64_MIN;
	static volatile int64_t t35 = -200LL;

	t35 = (x153-((x154<=x155)|x156));

	if (t35 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x157 = 91174700U;
	int32_t x158 = INT32_MAX;
	volatile int8_t x159 = 1;
	volatile uint64_t x160 = UINT64_MAX;
	volatile uint64_t t36 = 7426951LLU;

	t36 = (x157-((x158<=x159)|x160));

	if (t36 != 91174701LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = -966807520583699LL;
	static volatile int8_t x162 = INT8_MAX;
	volatile int16_t x163 = 85;
	int8_t x164 = -6;
	int64_t t37 = -377555LL;

	t37 = (x161-((x162<=x163)|x164));

	if (t37 != -966807520583693LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x165 = -1;
	int32_t x166 = 3;
	volatile int8_t x167 = INT8_MIN;
	static uint64_t x168 = 13597LLU;
	volatile uint64_t t38 = 242029250LLU;

	t38 = (x165-((x166<=x167)|x168));

	if (t38 != 18446744073709538018LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x172 = 16119U;
	uint32_t t39 = 133U;

	t39 = (x169-((x170<=x171)|x172));

	if (t39 != 4294951432U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x173 = 32U;
	int8_t x175 = 1;
	int8_t x176 = 10;
	volatile int32_t t40 = 24812;

	t40 = (x173-((x174<=x175)|x176));

	if (t40 != 21) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = -1;
	int32_t x178 = INT32_MIN;
	static volatile uint32_t x180 = UINT32_MAX;
	volatile uint32_t t41 = 378549170U;

	t41 = (x177-((x178<=x179)|x180));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x191 = 152731441046LLU;
	uint64_t x192 = UINT64_MAX;

	t42 = (x189-((x190<=x191)|x192));

	if (t42 != 127LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x194 = INT16_MIN;
	int64_t x195 = 505318132LL;
	int64_t x196 = -1LL;
	int64_t t43 = -345221753412LL;

	t43 = (x193-((x194<=x195)|x196));

	if (t43 != 74LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = INT16_MAX;
	int64_t x198 = -1LL;
	static int32_t x199 = -1;
	uint16_t x200 = 4232U;
	int32_t t44 = -53804881;

	t44 = (x197-((x198<=x199)|x200));

	if (t44 != 28534) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = 1LL;
	uint16_t x206 = 1089U;
	int16_t x207 = -1;
	volatile int16_t x208 = -541;
	int64_t t45 = -12237518LL;

	t45 = (x205-((x206<=x207)|x208));

	if (t45 != 542LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = INT8_MIN;
	int8_t x210 = -1;
	volatile int16_t x211 = INT16_MIN;
	int16_t x212 = INT16_MAX;
	volatile int32_t t46 = 18625983;

	t46 = (x209-((x210<=x211)|x212));

	if (t46 != -32895) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x217 = 27;
	volatile int16_t x218 = -1;
	volatile int16_t x219 = -15637;
	int16_t x220 = INT16_MAX;
	int32_t t47 = 0;

	t47 = (x217-((x218<=x219)|x220));

	if (t47 != -32740) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x221 = UINT64_MAX;
	static int64_t x223 = -1LL;
	uint8_t x224 = 11U;
	uint64_t t48 = 2145815699244735937LLU;

	t48 = (x221-((x222<=x223)|x224));

	if (t48 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x225 = 18892802U;
	volatile uint64_t x227 = 106LLU;
	int8_t x228 = INT8_MAX;
	volatile uint32_t t49 = 838141347U;

	t49 = (x225-((x226<=x227)|x228));

	if (t49 != 18892675U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x237 = INT8_MIN;
	int64_t x238 = 687993351LL;

	t50 = (x237-((x238<=x239)|x240));

	if (t50 != -134429467314655LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x241 = 2U;
	volatile int64_t x242 = INT64_MAX;
	uint32_t x243 = UINT32_MAX;
	int16_t x244 = INT16_MAX;
	int32_t t51 = 1;

	t51 = (x241-((x242<=x243)|x244));

	if (t51 != -32765) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x246 = INT8_MIN;
	uint32_t x247 = 45288U;
	int8_t x248 = INT8_MIN;
	volatile int64_t t52 = 0LL;

	t52 = (x245-((x246<=x247)|x248));

	if (t52 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x249 = 18U;
	static int16_t x251 = 3;
	int32_t x252 = 789864;
	volatile int32_t t53 = -426;

	t53 = (x249-((x250<=x251)|x252));

	if (t53 != -789846) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x253 = 22U;
	int32_t x254 = INT32_MIN;
	volatile int64_t x255 = -940805LL;
	int16_t x256 = -41;
	static int32_t t54 = -19;

	t54 = (x253-((x254<=x255)|x256));

	if (t54 != 63) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x257 = 4;
	uint16_t x258 = UINT16_MAX;
	uint8_t x259 = UINT8_MAX;
	static int8_t x260 = INT8_MIN;

	t55 = (x257-((x258<=x259)|x260));

	if (t55 != 132) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x261 = INT64_MAX;
	int64_t x263 = INT64_MAX;
	static uint32_t x264 = 39U;
	static volatile int64_t t56 = 1LL;

	t56 = (x261-((x262<=x263)|x264));

	if (t56 != 9223372036854775768LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t t57 = 7335302;

	t57 = (x265-((x266<=x267)|x268));

	if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x270 = 17;
	int16_t x271 = INT16_MIN;
	volatile int8_t x272 = -1;
	int64_t t58 = -1589180615239726474LL;

	t58 = (x269-((x270<=x271)|x272));

	if (t58 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x277 = INT64_MAX;
	int8_t x278 = 1;
	static int16_t x279 = INT16_MIN;
	volatile int64_t t59 = -42940155862468745LL;

	t59 = (x277-((x278<=x279)|x280));

	if (t59 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x286 = -1LL;
	uint16_t x287 = 203U;

	t60 = (x285-((x286<=x287)|x288));

	if (t60 != 32766) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x289 = 0;
	volatile int8_t x292 = -1;
	int32_t t61 = 5388529;

	t61 = (x289-((x290<=x291)|x292));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x293 = UINT16_MAX;
	int64_t x295 = -1LL;
	volatile int32_t x296 = -10840122;

	t62 = (x293-((x294<=x295)|x296));

	if (t62 != 10905657) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x297 = INT8_MIN;
	int64_t x298 = -1LL;
	static volatile int32_t t63 = 3;

	t63 = (x297-((x298<=x299)|x300));

	if (t63 != 2147483520) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x301 = UINT64_MAX;
	volatile uint32_t x302 = 253022329U;
	uint16_t x303 = 30U;
	int32_t x304 = -8;
	uint64_t t64 = 1LLU;

	t64 = (x301-((x302<=x303)|x304));

	if (t64 != 7LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x307 = 714;
	uint32_t x308 = 122U;
	int64_t t65 = -93LL;

	t65 = (x305-((x306<=x307)|x308));

	if (t65 != -123LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x313 = UINT8_MAX;
	int32_t x314 = -297;
	int64_t x315 = -7540041572204LL;
	int64_t x316 = INT64_MAX;
	volatile int64_t t66 = 616435878LL;

	t66 = (x313-((x314<=x315)|x316));

	if (t66 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x317 = -1;
	volatile uint32_t x318 = 235133U;
	uint8_t x319 = 0U;
	int64_t x320 = -62387LL;
	int64_t t67 = -65536061240LL;

	t67 = (x317-((x318<=x319)|x320));

	if (t67 != 62386LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x321 = INT64_MIN;
	static int64_t x323 = INT64_MAX;
	volatile int32_t x324 = INT32_MIN;
	static volatile int64_t t68 = 580646152LL;

	t68 = (x321-((x322<=x323)|x324));

	if (t68 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x326 = INT64_MAX;
	uint8_t x328 = 0U;
	int32_t t69 = 487907;

	t69 = (x325-((x326<=x327)|x328));

	if (t69 != 10191) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x333 = -1;
	int8_t x334 = -6;
	int64_t x336 = INT64_MIN;
	volatile int64_t t70 = -19572LL;

	t70 = (x333-((x334<=x335)|x336));

	if (t70 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x337 = INT16_MAX;
	int32_t x338 = INT32_MIN;
	int64_t x339 = INT64_MIN;
	volatile int16_t x340 = INT16_MIN;

	t71 = (x337-((x338<=x339)|x340));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x341 = -299671921LL;
	volatile int8_t x343 = INT8_MIN;
	volatile int64_t t72 = -212507069008LL;

	t72 = (x341-((x342<=x343)|x344));

	if (t72 != -299666128LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x345 = INT16_MAX;
	volatile uint8_t x346 = 10U;
	int16_t x347 = INT16_MAX;
	volatile int64_t t73 = -24LL;

	t73 = (x345-((x346<=x347)|x348));

	if (t73 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x349 = 7U;
	uint64_t x350 = 0LLU;
	int64_t x351 = INT64_MIN;
	static volatile int8_t x352 = 1;
	volatile int32_t t74 = 33;

	t74 = (x349-((x350<=x351)|x352));

	if (t74 != 6) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x353 = -1;
	int64_t x354 = INT64_MAX;
	int8_t x355 = -1;
	volatile int64_t x356 = -1LL;
	static volatile int64_t t75 = 1021733193821864688LL;

	t75 = (x353-((x354<=x355)|x356));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x357 = 230363869;
	int32_t x358 = -1;
	static volatile int8_t x359 = -1;
	volatile int64_t t76 = -199777260176530514LL;

	t76 = (x357-((x358<=x359)|x360));

	if (t76 != 230363870LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x362 = 13271;
	int16_t x363 = INT16_MIN;
	int32_t t77 = 1619;

	t77 = (x361-((x362<=x363)|x364));

	if (t77 != -8141) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x365 = INT8_MIN;
	volatile int32_t x366 = INT32_MIN;
	uint16_t x368 = 0U;
	volatile int32_t t78 = -237;

	t78 = (x365-((x366<=x367)|x368));

	if (t78 != -129) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x369 = -1;
	uint8_t x371 = 2U;
	static uint32_t x372 = 65445522U;

	t79 = (x369-((x370<=x371)|x372));

	if (t79 != 4229521773U) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x374 = -51;
	int8_t x375 = INT8_MIN;
	uint16_t x376 = 11151U;
	volatile int32_t t80 = -159;

	t80 = (x373-((x374<=x375)|x376));

	if (t80 != -11152) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x377 = -1LL;
	int32_t x378 = -17;
	uint8_t x379 = 1U;
	volatile int64_t t81 = 326916708LL;

	t81 = (x377-((x378<=x379)|x380));

	if (t81 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x381 = INT8_MIN;
	uint16_t x383 = UINT16_MAX;
	int32_t x384 = INT32_MIN;
	int32_t t82 = 911612;

	t82 = (x381-((x382<=x383)|x384));

	if (t82 != 2147483520) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x385 = 5255324U;
	volatile int32_t x386 = INT32_MIN;
	int16_t x387 = 145;
	uint8_t x388 = 0U;

	t83 = (x385-((x386<=x387)|x388));

	if (t83 != 5255323U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x390 = UINT16_MAX;
	static int32_t x391 = INT32_MIN;
	int64_t x392 = -1LL;
	int64_t t84 = 121318485057LL;

	t84 = (x389-((x390<=x391)|x392));

	if (t84 != 4294967296LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x393 = -1;
	int32_t x394 = INT32_MIN;
	int8_t x396 = INT8_MIN;
	int32_t t85 = 1;

	t85 = (x393-((x394<=x395)|x396));

	if (t85 != 126) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x398 = 246;
	int16_t x399 = INT16_MIN;
	uint64_t x400 = 13LLU;

	t86 = (x397-((x398<=x399)|x400));

	if (t86 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x401 = INT8_MAX;
	int8_t x402 = -32;
	volatile int8_t x403 = INT8_MIN;
	int32_t x404 = INT32_MAX;
	volatile int32_t t87 = 0;

	t87 = (x401-((x402<=x403)|x404));

	if (t87 != -2147483520) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x409 = UINT16_MAX;
	uint32_t x410 = 810U;
	uint64_t x411 = 0LLU;
	uint8_t x412 = 1U;
	static volatile int32_t t88 = 7;

	t88 = (x409-((x410<=x411)|x412));

	if (t88 != 65534) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x414 = INT64_MIN;
	static uint64_t x415 = 110239815459014LLU;
	volatile int16_t x416 = INT16_MAX;
	int32_t t89 = 3120;

	t89 = (x413-((x414<=x415)|x416));

	if (t89 != -65535) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x417 = -1;
	volatile int64_t x418 = INT64_MAX;
	uint16_t x419 = 12003U;
	volatile int32_t t90 = INT32_MAX;

	t90 = (x417-((x418<=x419)|x420));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x426 = UINT8_MAX;
	int32_t x427 = 2740;
	static int8_t x428 = INT8_MIN;
	int32_t t91 = -593;

	t91 = (x425-((x426<=x427)|x428));

	if (t91 != 65662) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x429 = INT16_MIN;
	volatile int8_t x431 = INT8_MIN;
	int8_t x432 = INT8_MAX;
	volatile int32_t t92 = -289050751;

	t92 = (x429-((x430<=x431)|x432));

	if (t92 != -32895) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x433 = INT8_MAX;
	int32_t x434 = -82;
	static volatile uint16_t x435 = 1267U;
	int16_t x436 = INT16_MIN;
	int32_t t93 = -25517018;

	t93 = (x433-((x434<=x435)|x436));

	if (t93 != 32894) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x437 = 13;
	volatile uint64_t x438 = 879098393470204LLU;
	uint64_t x439 = UINT64_MAX;
	volatile int64_t t94 = 78LL;

	t94 = (x437-((x438<=x439)|x440));

	if (t94 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x442 = -1;
	volatile int64_t x443 = -968437590464LL;
	static int16_t x444 = -1;
	static uint64_t t95 = 1264193665731LLU;

	t95 = (x441-((x442<=x443)|x444));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x445 = 3;
	volatile int8_t x446 = INT8_MIN;
	uint64_t x447 = UINT64_MAX;
	volatile int64_t x448 = -1LL;
	volatile int64_t t96 = 1039975577955LL;

	t96 = (x445-((x446<=x447)|x448));

	if (t96 != 4LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x449 = INT8_MIN;
	int64_t x450 = INT64_MAX;
	uint8_t x451 = 1U;
	static int16_t x452 = 10207;
	static int32_t t97 = 2563;

	t97 = (x449-((x450<=x451)|x452));

	if (t97 != -10335) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x457 = INT16_MIN;
	static int32_t x459 = INT32_MIN;
	int8_t x460 = INT8_MIN;
	int32_t t98 = 48573;

	t98 = (x457-((x458<=x459)|x460));

	if (t98 != -32640) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x462 = INT64_MIN;
	int64_t x463 = -1LL;
	uint16_t x464 = 82U;
	uint64_t t99 = 20986LLU;

	t99 = (x461-((x462<=x463)|x464));

	if (t99 != 262LLU) { NG(); } else { ; }
	
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

