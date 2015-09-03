#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -59;
int8_t x13 = 53;
uint16_t x21 = 4U;
uint64_t x22 = 8LLU;
volatile uint16_t x25 = 1U;
int32_t x27 = -1;
int64_t x35 = 16043995LL;
volatile int64_t t7 = 6299229670946571LL;
volatile uint8_t x43 = 2U;
uint32_t x44 = 56839147U;
uint8_t x49 = 54U;
static int16_t x59 = -1;
static int16_t x60 = INT16_MIN;
uint32_t x66 = 2U;
volatile int32_t t14 = -5260;
volatile uint16_t x72 = UINT16_MAX;
int8_t x73 = -1;
static uint64_t x75 = 453622003282079LLU;
int32_t x86 = INT32_MIN;
int32_t x88 = INT32_MIN;
volatile int8_t x89 = INT8_MIN;
int16_t x92 = -1;
int32_t t21 = -1036216408;
volatile int32_t x99 = 180949;
int32_t t22 = 7;
volatile uint16_t x103 = 1U;
uint64_t x106 = UINT64_MAX;
volatile int16_t x108 = -168;
static int8_t x112 = INT8_MAX;
static int16_t x121 = INT16_MIN;
int16_t x122 = INT16_MIN;
volatile int64_t t27 = -2424071LL;
static int32_t x132 = -16667;
int8_t x141 = -1;
int16_t x149 = 1227;
int32_t t33 = 0;
static volatile int64_t x164 = -1LL;
volatile int64_t x167 = -1LL;
int16_t x170 = INT16_MIN;
uint32_t x171 = 64324022U;
int64_t t37 = 22350857102243848LL;
uint32_t t38 = 17381U;
int32_t t39 = -375408671;
uint32_t x187 = UINT32_MAX;
static uint64_t x188 = 3067832334528247LLU;
volatile uint64_t t40 = 4430349LLU;
volatile int64_t t41 = -3721196027LL;
int32_t t43 = -1046072077;
int8_t x212 = INT8_MAX;
int32_t t46 = 35026;
uint64_t x213 = 204LLU;
uint32_t t47 = 1U;
int32_t x224 = INT32_MAX;
int64_t t49 = -104387194LL;
volatile int16_t x227 = INT16_MAX;
uint16_t x229 = 0U;
static int16_t x231 = 0;
volatile uint8_t x237 = 0U;
uint8_t x240 = 39U;
static int16_t x245 = -1;
static volatile uint64_t x259 = 95888187470222411LLU;
uint8_t x264 = 2U;
uint64_t t60 = 3LLU;
uint32_t x276 = 73U;
int32_t x290 = INT32_MIN;
int8_t x292 = -7;
int32_t x293 = 72170921;
int16_t x295 = -17;
volatile int16_t x297 = 242;
int64_t x298 = -1LL;
int16_t x305 = 309;
uint8_t x307 = 0U;
int32_t x309 = 1057367209;
int32_t x310 = INT32_MIN;
uint64_t t70 = 30604226LLU;
int16_t x327 = 0;
int32_t t71 = -190825869;
static int16_t x332 = -5;
uint64_t x347 = 0LLU;
static uint64_t x348 = 120751438971LLU;
volatile uint64_t t74 = 2764LLU;
volatile int64_t x350 = 17217471448LL;
volatile int8_t x358 = -3;
volatile int64_t x369 = -1LL;
static int8_t x372 = 28;
static int8_t x379 = INT8_MIN;
uint8_t x384 = 2U;
int64_t x389 = 2LL;
uint32_t x392 = 72915U;
uint32_t x402 = 24U;
int16_t x405 = INT16_MIN;
uint8_t x407 = UINT8_MAX;
volatile uint16_t x411 = UINT16_MAX;
uint32_t x412 = 7U;
int32_t x413 = INT32_MIN;
static int16_t x423 = 1;
uint8_t x424 = 1U;
volatile int64_t x426 = INT64_MIN;
volatile uint64_t x428 = 15015LLU;
uint64_t t91 = 421610536562LLU;
static int16_t x430 = -1;
static int64_t x431 = -1LL;
static uint16_t x432 = 3U;
int32_t x438 = -1;
volatile int64_t t95 = -38780192424742LL;
int8_t x452 = -1;
static int32_t x463 = INT32_MIN;
int8_t x465 = INT8_MIN;


void f0(void) {
	static uint8_t x1 = 15U;
	volatile int32_t x2 = -173813;
	int8_t x3 = -11;
	int8_t x4 = -1;

	t0 = ((x1==x2)-(x3+x4));

	if (t0 != 12) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = INT16_MIN;
	uint64_t x10 = 33LLU;
	static int8_t x11 = INT8_MIN;
	int16_t x12 = -1;
	volatile int32_t t1 = 11;

	t1 = ((x9==x10)-(x11+x12));

	if (t1 != 129) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x14 = 79U;
	static int16_t x15 = -161;
	uint32_t x16 = 74142U;
	uint32_t t2 = 0U;

	t2 = ((x13==x14)-(x15+x16));

	if (t2 != 4294893315U) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = 848;
	int8_t x18 = INT8_MIN;
	int64_t x19 = 25LL;
	int16_t x20 = INT16_MIN;
	volatile int64_t t3 = -6898342LL;

	t3 = ((x17==x18)-(x19+x20));

	if (t3 != 32743LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x23 = 1706270217525924568LLU;
	uint16_t x24 = 5U;
	uint64_t t4 = 1928977465611LLU;

	t4 = ((x21==x22)-(x23+x24));

	if (t4 != 16740473856183627043LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x26 = INT64_MIN;
	static volatile int32_t x28 = -2;
	static volatile int32_t t5 = 1569239;

	t5 = ((x25==x26)-(x27+x28));

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	static int16_t x30 = INT16_MIN;
	static uint16_t x31 = 405U;
	static uint64_t x32 = UINT64_MAX;
	volatile uint64_t t6 = 301968850386365LLU;

	t6 = ((x29==x30)-(x31+x32));

	if (t6 != 18446744073709551212LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x33 = 4644422399409807LLU;
	int64_t x34 = 4286996575987LL;
	int64_t x36 = -1LL;

	t7 = ((x33==x34)-(x35+x36));

	if (t7 != -16043994LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 1U;
	int32_t x38 = 305676534;
	int64_t x39 = INT64_MAX;
	volatile int8_t x40 = INT8_MIN;
	volatile int64_t t8 = 44LL;

	t8 = ((x37==x38)-(x39+x40));

	if (t8 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	int8_t x42 = -1;
	static uint32_t t9 = 18749555U;

	t9 = ((x41==x42)-(x43+x44));

	if (t9 != 4238128147U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x45 = 2924980745453LLU;
	int64_t x46 = INT64_MIN;
	uint8_t x47 = 6U;
	uint8_t x48 = 0U;
	static int32_t t10 = -25904;

	t10 = ((x45==x46)-(x47+x48));

	if (t10 != -6) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x50 = 902U;
	uint16_t x51 = UINT16_MAX;
	int64_t x52 = -5753561135LL;
	static volatile int64_t t11 = -1058673474320528294LL;

	t11 = ((x49==x50)-(x51+x52));

	if (t11 != 5753495600LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -1LL;
	static volatile int16_t x54 = 1;
	uint8_t x55 = 4U;
	static int16_t x56 = INT16_MIN;
	volatile int32_t t12 = -11;

	t12 = ((x53==x54)-(x55+x56));

	if (t12 != 32764) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -1;
	int64_t x58 = INT64_MIN;
	int32_t t13 = 506;

	t13 = ((x57==x58)-(x59+x60));

	if (t13 != 32769) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x65 = -15472;
	int8_t x67 = INT8_MIN;
	volatile int8_t x68 = 0;

	t14 = ((x65==x66)-(x67+x68));

	if (t14 != 128) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = UINT32_MAX;
	int64_t x70 = INT64_MAX;
	static int32_t x71 = -1;
	volatile int32_t t15 = 5;

	t15 = ((x69==x70)-(x71+x72));

	if (t15 != -65534) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x74 = INT64_MIN;
	uint16_t x76 = UINT16_MAX;
	uint64_t t16 = 0LLU;

	t16 = ((x73==x74)-(x75+x76));

	if (t16 != 18446290451706204002LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x77 = 55U;
	volatile uint32_t x78 = 252U;
	uint64_t x79 = 7259190076LLU;
	int32_t x80 = INT32_MAX;
	volatile uint64_t t17 = 2352646167239773LLU;

	t17 = ((x77==x78)-(x79+x80));

	if (t17 != 18446744064302877893LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x81 = INT32_MIN;
	volatile uint8_t x82 = 7U;
	int64_t x83 = 15LL;
	int64_t x84 = -1LL;
	static volatile int64_t t18 = 8143LL;

	t18 = ((x81==x82)-(x83+x84));

	if (t18 != -14LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = 108454039;
	int16_t x87 = INT16_MAX;
	int32_t t19 = -52987503;

	t19 = ((x85==x86)-(x87+x88));

	if (t19 != 2147450881) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x90 = INT32_MIN;
	uint8_t x91 = 104U;
	volatile int32_t t20 = -1011038;

	t20 = ((x89==x90)-(x91+x92));

	if (t20 != -103) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MIN;
	static int16_t x94 = 1543;
	volatile int8_t x95 = 0;
	uint16_t x96 = UINT16_MAX;

	t21 = ((x93==x94)-(x95+x96));

	if (t21 != -65535) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = 8;
	static int32_t x98 = INT32_MIN;
	uint8_t x100 = 0U;

	t22 = ((x97==x98)-(x99+x100));

	if (t22 != -180949) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x101 = 1;
	int8_t x102 = INT8_MIN;
	uint16_t x104 = 1452U;
	int32_t t23 = 1117;

	t23 = ((x101==x102)-(x103+x104));

	if (t23 != -1453) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = -1409LL;
	uint64_t x107 = UINT64_MAX;
	static volatile uint64_t t24 = 3549136LLU;

	t24 = ((x105==x106)-(x107+x108));

	if (t24 != 169LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = -1;
	volatile uint8_t x110 = UINT8_MAX;
	int16_t x111 = -1;
	static int32_t t25 = 38383005;

	t25 = ((x109==x110)-(x111+x112));

	if (t25 != -126) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = 35LLU;
	int32_t x118 = 7;
	static volatile uint32_t x119 = 0U;
	static int32_t x120 = INT32_MAX;
	uint32_t t26 = 1366U;

	t26 = ((x117==x118)-(x119+x120));

	if (t26 != 2147483649U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x123 = -1LL;
	int64_t x124 = -1LL;

	t27 = ((x121==x122)-(x123+x124));

	if (t27 != 3LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = 791102LLU;
	int16_t x126 = INT16_MAX;
	static uint8_t x127 = 1U;
	volatile int64_t x128 = -737896282LL;
	volatile int64_t t28 = -9855LL;

	t28 = ((x125==x126)-(x127+x128));

	if (t28 != 737896281LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x129 = UINT64_MAX;
	uint16_t x130 = 748U;
	volatile uint8_t x131 = 1U;
	int32_t t29 = 547087;

	t29 = ((x129==x130)-(x131+x132));

	if (t29 != 16666) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x133 = INT32_MIN;
	uint64_t x134 = 64637550347LLU;
	int64_t x135 = 24568355098LL;
	static volatile int32_t x136 = INT32_MIN;
	volatile int64_t t30 = 521345685885LL;

	t30 = ((x133==x134)-(x135+x136));

	if (t30 != -22420871450LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x142 = 44U;
	int8_t x143 = 16;
	int8_t x144 = INT8_MIN;
	static volatile int32_t t31 = -201007944;

	t31 = ((x141==x142)-(x143+x144));

	if (t31 != 112) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x145 = INT8_MIN;
	static int64_t x146 = INT64_MIN;
	uint8_t x147 = 27U;
	static uint32_t x148 = 372592U;
	uint32_t t32 = 151155919U;

	t32 = ((x145==x146)-(x147+x148));

	if (t32 != 4294594677U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x150 = INT64_MIN;
	int16_t x151 = INT16_MIN;
	volatile int32_t x152 = INT32_MAX;

	t33 = ((x149==x150)-(x151+x152));

	if (t33 != -2147450879) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x153 = UINT64_MAX;
	static uint16_t x154 = 18655U;
	static int8_t x155 = INT8_MIN;
	uint16_t x156 = 10U;
	volatile int32_t t34 = -566;

	t34 = ((x153==x154)-(x155+x156));

	if (t34 != 118) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = INT32_MIN;
	static int64_t x162 = INT64_MAX;
	volatile uint64_t x163 = UINT64_MAX;
	static volatile uint64_t t35 = 1558071LLU;

	t35 = ((x161==x162)-(x163+x164));

	if (t35 != 2LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x165 = UINT16_MAX;
	volatile int64_t x166 = INT64_MIN;
	int64_t x168 = -679297764738LL;
	int64_t t36 = 208LL;

	t36 = ((x165==x166)-(x167+x168));

	if (t36 != 679297764739LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x169 = UINT8_MAX;
	static int64_t x172 = 2015253520582LL;

	t37 = ((x169==x170)-(x171+x172));

	if (t37 != -2015317844604LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = INT64_MAX;
	int64_t x174 = INT64_MAX;
	int8_t x175 = -6;
	uint32_t x176 = 4U;

	t38 = ((x173==x174)-(x175+x176));

	if (t38 != 3U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x181 = -1526565195728401LL;
	uint8_t x182 = UINT8_MAX;
	int16_t x183 = INT16_MIN;
	int8_t x184 = 1;

	t39 = ((x181==x182)-(x183+x184));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x185 = 3U;
	uint32_t x186 = UINT32_MAX;

	t40 = ((x185==x186)-(x187+x188));

	if (t40 != 18443676237080056074LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x189 = 0U;
	static volatile uint32_t x190 = 1U;
	static int32_t x191 = INT32_MAX;
	int64_t x192 = -1LL;

	t41 = ((x189==x190)-(x191+x192));

	if (t41 != -2147483646LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x193 = INT32_MIN;
	static uint16_t x194 = 7960U;
	int32_t x195 = -514376554;
	int32_t x196 = -1;
	volatile int32_t t42 = -3;

	t42 = ((x193==x194)-(x195+x196));

	if (t42 != 514376555) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x197 = INT16_MIN;
	static int64_t x198 = -1LL;
	int16_t x199 = 66;
	static int8_t x200 = INT8_MIN;

	t43 = ((x197==x198)-(x199+x200));

	if (t43 != 62) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x201 = UINT16_MAX;
	int8_t x202 = INT8_MIN;
	static int8_t x203 = INT8_MIN;
	int16_t x204 = INT16_MIN;
	int32_t t44 = 1229005;

	t44 = ((x201==x202)-(x203+x204));

	if (t44 != 32896) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x205 = -1;
	int16_t x206 = INT16_MIN;
	static int16_t x207 = -1;
	int64_t x208 = 192780279728258268LL;
	volatile int64_t t45 = -7346LL;

	t45 = ((x205==x206)-(x207+x208));

	if (t45 != -192780279728258267LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = -1;
	int32_t x210 = -1;
	int16_t x211 = 98;

	t46 = ((x209==x210)-(x211+x212));

	if (t46 != -224) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x214 = -1LL;
	int32_t x215 = -1;
	uint32_t x216 = 81281555U;

	t47 = ((x213==x214)-(x215+x216));

	if (t47 != 4213685742U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x217 = INT32_MIN;
	int16_t x218 = -2623;
	volatile uint16_t x219 = 4U;
	static int64_t x220 = 3LL;
	volatile int64_t t48 = -7662570299880756LL;

	t48 = ((x217==x218)-(x219+x220));

	if (t48 != -7LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x221 = 364271LLU;
	int8_t x222 = INT8_MAX;
	volatile int64_t x223 = -1LL;

	t49 = ((x221==x222)-(x223+x224));

	if (t49 != -2147483646LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x225 = INT64_MIN;
	static uint32_t x226 = 1871179U;
	uint16_t x228 = UINT16_MAX;
	int32_t t50 = 668707;

	t50 = ((x225==x226)-(x227+x228));

	if (t50 != -98302) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x230 = 16742040062177LLU;
	uint16_t x232 = 202U;
	static int32_t t51 = -1417;

	t51 = ((x229==x230)-(x231+x232));

	if (t51 != -202) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = -1LL;
	static int16_t x234 = INT16_MAX;
	volatile int8_t x235 = INT8_MAX;
	volatile uint16_t x236 = UINT16_MAX;
	int32_t t52 = -3876;

	t52 = ((x233==x234)-(x235+x236));

	if (t52 != -65662) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x238 = -105LL;
	int8_t x239 = INT8_MIN;
	volatile int32_t t53 = 1;

	t53 = ((x237==x238)-(x239+x240));

	if (t53 != 89) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x241 = -21LL;
	uint8_t x242 = UINT8_MAX;
	int32_t x243 = -3;
	int8_t x244 = -1;
	int32_t t54 = 87;

	t54 = ((x241==x242)-(x243+x244));

	if (t54 != 4) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x246 = INT64_MIN;
	uint16_t x247 = 9U;
	static volatile uint64_t x248 = 15LLU;
	static uint64_t t55 = 1LLU;

	t55 = ((x245==x246)-(x247+x248));

	if (t55 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x249 = INT64_MIN;
	uint16_t x250 = 119U;
	int8_t x251 = 1;
	static volatile int64_t x252 = -53LL;
	int64_t t56 = 22294570LL;

	t56 = ((x249==x250)-(x251+x252));

	if (t56 != 52LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x253 = -37LL;
	int32_t x254 = 115079;
	uint64_t x255 = 3365168573774179LLU;
	uint64_t x256 = UINT64_MAX;
	static uint64_t t57 = 3056448426310707LLU;

	t57 = ((x253==x254)-(x255+x256));

	if (t57 != 18443378905135777438LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x257 = UINT32_MAX;
	int16_t x258 = INT16_MAX;
	volatile uint8_t x260 = 24U;
	uint64_t t58 = 266785035LLU;

	t58 = ((x257==x258)-(x259+x260));

	if (t58 != 18350855886239329181LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x261 = 0;
	volatile int64_t x262 = INT64_MAX;
	uint8_t x263 = UINT8_MAX;
	volatile int32_t t59 = -15;

	t59 = ((x261==x262)-(x263+x264));

	if (t59 != -257) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x269 = 110U;
	uint32_t x270 = 944824492U;
	uint64_t x271 = UINT64_MAX;
	int16_t x272 = -2545;

	t60 = ((x269==x270)-(x271+x272));

	if (t60 != 2546LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x273 = 1057421692533521854LL;
	volatile uint8_t x274 = UINT8_MAX;
	static int32_t x275 = INT32_MAX;
	uint32_t t61 = 149982U;

	t61 = ((x273==x274)-(x275+x276));

	if (t61 != 2147483576U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x277 = 477U;
	int64_t x278 = -528997795634645LL;
	int32_t x279 = INT32_MIN;
	int64_t x280 = INT64_MAX;
	static int64_t t62 = 1057760635107355LL;

	t62 = ((x277==x278)-(x279+x280));

	if (t62 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x285 = -18743176793716356LL;
	int8_t x286 = INT8_MAX;
	int64_t x287 = INT64_MIN;
	int32_t x288 = INT32_MAX;
	volatile int64_t t63 = -958LL;

	t63 = ((x285==x286)-(x287+x288));

	if (t63 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x289 = 4U;
	int32_t x291 = -27364923;
	volatile int32_t t64 = -1145164;

	t64 = ((x289==x290)-(x291+x292));

	if (t64 != 27364930) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x294 = -4;
	int8_t x296 = -17;
	int32_t t65 = 10457069;

	t65 = ((x293==x294)-(x295+x296));

	if (t65 != 34) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x299 = INT32_MIN;
	int32_t x300 = INT32_MAX;
	int32_t t66 = 0;

	t66 = ((x297==x298)-(x299+x300));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MIN;
	static int8_t x303 = INT8_MIN;
	uint32_t x304 = UINT32_MAX;
	volatile uint32_t t67 = 45U;

	t67 = ((x301==x302)-(x303+x304));

	if (t67 != 129U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x306 = 10629;
	volatile int64_t x308 = -3926LL;
	volatile int64_t t68 = 3192466114LL;

	t68 = ((x305==x306)-(x307+x308));

	if (t68 != 3926LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x311 = -93343051267LL;
	volatile uint64_t x312 = 3932096LLU;
	static volatile uint64_t t69 = 1121343873452373133LLU;

	t69 = ((x309==x310)-(x311+x312));

	if (t69 != 93339119171LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x313 = 3610509LLU;
	uint64_t x314 = 21485LLU;
	volatile uint64_t x315 = UINT64_MAX;
	uint16_t x316 = 1U;

	t70 = ((x313==x314)-(x315+x316));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x325 = 48;
	uint32_t x326 = 57081384U;
	static int32_t x328 = -476;

	t71 = ((x325==x326)-(x327+x328));

	if (t71 != 476) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x329 = -1;
	int32_t x330 = INT32_MIN;
	int16_t x331 = -1;
	static volatile int32_t t72 = 123077;

	t72 = ((x329==x330)-(x331+x332));

	if (t72 != 6) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x341 = -1;
	uint32_t x342 = 17260U;
	static uint16_t x343 = 37U;
	int32_t x344 = INT32_MIN;
	int32_t t73 = 111016;

	t73 = ((x341==x342)-(x343+x344));

	if (t73 != 2147483611) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x345 = UINT64_MAX;
	volatile int16_t x346 = 4913;

	t74 = ((x345==x346)-(x347+x348));

	if (t74 != 18446743952958112645LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x349 = -4227250453186693486LL;
	static int16_t x351 = -1;
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t75 = -34605686;

	t75 = ((x349==x350)-(x351+x352));

	if (t75 != -254) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x353 = 4;
	int8_t x354 = -1;
	int32_t x355 = INT32_MIN;
	uint32_t x356 = UINT32_MAX;
	static volatile uint32_t t76 = 122746590U;

	t76 = ((x353==x354)-(x355+x356));

	if (t76 != 2147483649U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x357 = 31824U;
	int16_t x359 = -1;
	uint16_t x360 = 405U;
	int32_t t77 = -418;

	t77 = ((x357==x358)-(x359+x360));

	if (t77 != -404) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x370 = 18U;
	int32_t x371 = 1;
	static int32_t t78 = -26389115;

	t78 = ((x369==x370)-(x371+x372));

	if (t78 != -29) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x373 = 0U;
	int64_t x374 = INT64_MAX;
	int16_t x375 = INT16_MIN;
	static int64_t x376 = -1LL;
	static int64_t t79 = -898492326LL;

	t79 = ((x373==x374)-(x375+x376));

	if (t79 != 32769LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x377 = INT16_MAX;
	uint32_t x378 = 3205U;
	int8_t x380 = INT8_MAX;
	volatile int32_t t80 = 0;

	t80 = ((x377==x378)-(x379+x380));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x381 = 1U;
	static int32_t x382 = INT32_MIN;
	int64_t x383 = -776LL;
	int64_t t81 = -8989827887479271LL;

	t81 = ((x381==x382)-(x383+x384));

	if (t81 != 774LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x385 = -1;
	int16_t x386 = INT16_MIN;
	uint16_t x387 = 57U;
	int8_t x388 = 2;
	static volatile int32_t t82 = 69082;

	t82 = ((x385==x386)-(x387+x388));

	if (t82 != -59) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x390 = 1111193896051049LL;
	int32_t x391 = -7461;
	uint32_t t83 = 437U;

	t83 = ((x389==x390)-(x391+x392));

	if (t83 != 4294901842U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x393 = INT32_MAX;
	int8_t x394 = INT8_MIN;
	static int16_t x395 = INT16_MIN;
	uint16_t x396 = 26070U;
	static volatile int32_t t84 = 857904455;

	t84 = ((x393==x394)-(x395+x396));

	if (t84 != 6698) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x401 = UINT8_MAX;
	static volatile uint8_t x403 = 34U;
	int32_t x404 = -1588;
	int32_t t85 = 482278862;

	t85 = ((x401==x402)-(x403+x404));

	if (t85 != 1554) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x406 = INT16_MIN;
	static int32_t x408 = -1;
	int32_t t86 = -200;

	t86 = ((x405==x406)-(x407+x408));

	if (t86 != -253) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x409 = UINT64_MAX;
	int16_t x410 = -1;
	uint32_t t87 = 1116678506U;

	t87 = ((x409==x410)-(x411+x412));

	if (t87 != 4294901755U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x414 = 15U;
	static volatile int32_t x415 = -1;
	volatile int16_t x416 = INT16_MAX;
	volatile int32_t t88 = 1;

	t88 = ((x413==x414)-(x415+x416));

	if (t88 != -32766) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x417 = UINT16_MAX;
	int8_t x418 = 0;
	volatile int32_t x419 = INT32_MIN;
	static uint32_t x420 = UINT32_MAX;
	volatile uint32_t t89 = 104U;

	t89 = ((x417==x418)-(x419+x420));

	if (t89 != 2147483649U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x421 = 44U;
	int32_t x422 = INT32_MIN;
	int32_t t90 = 10614;

	t90 = ((x421==x422)-(x423+x424));

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x425 = INT8_MIN;
	int64_t x427 = 339431173025854330LL;

	t91 = ((x425==x426)-(x427+x428));

	if (t91 != 18107312900683682271LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x429 = UINT8_MAX;
	volatile int64_t t92 = -723680510699054LL;

	t92 = ((x429==x430)-(x431+x432));

	if (t92 != -2LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x437 = 14U;
	uint8_t x439 = UINT8_MAX;
	static uint8_t x440 = 2U;
	static int32_t t93 = 991;

	t93 = ((x437==x438)-(x439+x440));

	if (t93 != -257) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x441 = 392U;
	int8_t x442 = -1;
	uint16_t x443 = UINT16_MAX;
	int16_t x444 = INT16_MIN;
	volatile int32_t t94 = -873519000;

	t94 = ((x441==x442)-(x443+x444));

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x445 = INT8_MIN;
	static int16_t x446 = INT16_MIN;
	uint16_t x447 = 191U;
	int64_t x448 = INT64_MIN;

	t95 = ((x445==x446)-(x447+x448));

	if (t95 != 9223372036854775617LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x449 = UINT8_MAX;
	int32_t x450 = INT32_MIN;
	int16_t x451 = INT16_MIN;
	volatile int32_t t96 = -13;

	t96 = ((x449==x450)-(x451+x452));

	if (t96 != 32769) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x457 = 32;
	static uint16_t x458 = 2927U;
	int32_t x459 = 2;
	int32_t x460 = 57;
	static int32_t t97 = 188447;

	t97 = ((x457==x458)-(x459+x460));

	if (t97 != -59) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x461 = -190;
	int8_t x462 = -1;
	static uint16_t x464 = UINT16_MAX;
	volatile int32_t t98 = -32479;

	t98 = ((x461==x462)-(x463+x464));

	if (t98 != 2147418113) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x466 = INT32_MAX;
	int8_t x467 = -1;
	uint16_t x468 = UINT16_MAX;
	int32_t t99 = -3932;

	t99 = ((x465==x466)-(x467+x468));

	if (t99 != -65534) { NG(); } else { ; }
	
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

