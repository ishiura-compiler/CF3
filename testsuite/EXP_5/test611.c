#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = 192;
int16_t x4 = 733;
int16_t x12 = 1;
int16_t x16 = INT16_MAX;
int8_t x20 = -1;
static int16_t x32 = INT16_MAX;
int8_t x38 = INT8_MIN;
uint32_t x54 = 2825U;
int64_t x67 = INT64_MAX;
int16_t x74 = INT16_MIN;
static uint16_t x80 = 3270U;
volatile int8_t x85 = INT8_MIN;
volatile int64_t x87 = 95297422876272579LL;
static volatile int8_t x92 = -13;
int64_t t20 = INT64_MIN;
volatile uint32_t x94 = UINT32_MAX;
int16_t x98 = INT16_MIN;
int64_t x101 = INT64_MIN;
volatile int8_t x104 = INT8_MAX;
int16_t x108 = INT16_MIN;
uint64_t t24 = 213070164512LLU;
int32_t x115 = -1;
volatile int32_t t27 = 0;
volatile int16_t x143 = INT16_MAX;
volatile int32_t t33 = -3571644;
uint64_t x145 = 235806635721861712LLU;
volatile uint64_t t34 = 2253580LLU;
static int8_t x154 = 53;
int32_t t36 = INT32_MIN;
int32_t t37 = -1;
uint8_t x174 = 13U;
int32_t x184 = INT32_MIN;
uint16_t x187 = 1U;
volatile int64_t x188 = 14283803714665077LL;
int64_t x191 = INT64_MIN;
int32_t t44 = -24;
uint16_t x198 = UINT16_MAX;
volatile int16_t x199 = 3146;
int64_t x208 = INT64_MIN;
int32_t x209 = INT32_MIN;
static volatile int32_t t48 = INT32_MIN;
volatile int64_t t49 = -1073203483110922LL;
int32_t t51 = -5264199;
int64_t t52 = INT64_MIN;
static int64_t x229 = -1LL;
int8_t x230 = -1;
static int32_t x232 = -1;
static uint16_t x238 = 69U;
int64_t x241 = INT64_MIN;
static int32_t x242 = INT32_MIN;
int64_t t56 = INT64_MIN;
int64_t x246 = INT64_MAX;
volatile int8_t x247 = INT8_MIN;
int32_t x260 = INT32_MAX;
int32_t t61 = -5;
volatile int64_t x270 = 2790616657386833677LL;
uint32_t x282 = UINT32_MAX;
static int64_t t67 = -149959713LL;
volatile int32_t x291 = 6906;
volatile int32_t x292 = INT32_MIN;
volatile int32_t t69 = 2;
int64_t x299 = INT64_MIN;
uint8_t x307 = UINT8_MAX;
uint64_t x310 = 386041LLU;
static int16_t x311 = -1;
int64_t x312 = -1LL;
volatile int8_t x317 = INT8_MAX;
uint32_t x319 = 2U;
int64_t x326 = INT64_MAX;
volatile int32_t t78 = 64469653;
static int32_t t79 = -2160;
static int8_t x346 = 0;
static uint32_t t82 = 189U;
volatile uint64_t x366 = UINT64_MAX;
volatile uint64_t t86 = UINT64_MAX;
int8_t x370 = INT8_MIN;
int32_t t88 = -4218318;
int32_t t89 = 499215;
uint64_t x381 = 72367LLU;
static volatile uint64_t t90 = 376974718825LLU;
volatile int16_t x387 = INT16_MIN;
int16_t x396 = -1;
volatile uint64_t x404 = 80577848LLU;
volatile uint8_t x408 = 1U;
int64_t x410 = -361047527LL;
volatile int32_t t97 = 4057687;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static uint8_t x3 = 10U;
	int32_t t0 = -111744968;

	t0 = (x1^((x2/x3)==x4));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x6 = 43;
	int16_t x7 = INT16_MIN;
	static int32_t x8 = 1052958174;
	static int32_t t1 = -1;

	t1 = (x5^((x6/x7)==x8));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	static int64_t x10 = INT64_MIN;
	static volatile uint64_t x11 = 1327148083093104200LLU;
	int32_t t2 = INT32_MAX;

	t2 = (x9^((x10/x11)==x12));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -640090975875LL;
	uint8_t x14 = UINT8_MAX;
	int64_t x15 = INT64_MAX;
	volatile int64_t t3 = 24722279889675LL;

	t3 = (x13^((x14/x15)==x16));

	if (t3 != -640090975875LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 0;
	uint64_t x18 = 51538275940031LLU;
	int16_t x19 = INT16_MAX;
	int32_t t4 = 489987;

	t4 = (x17^((x18/x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	static int64_t x22 = -1947839749133LL;
	volatile int64_t x23 = 1923813445LL;
	static int16_t x24 = 3790;
	volatile uint32_t t5 = UINT32_MAX;

	t5 = (x21^((x22/x23)==x24));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -1LL;
	uint64_t x26 = 3432096859198462LLU;
	uint64_t x27 = UINT64_MAX;
	int32_t x28 = 2793666;
	volatile int64_t t6 = 2LL;

	t6 = (x25^((x26/x27)==x28));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int64_t x30 = 1LL;
	int16_t x31 = -1;
	int32_t t7 = 93562;

	t7 = (x29^((x30/x31)==x32));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	int64_t x34 = 53588410LL;
	volatile int32_t x35 = 6829;
	int16_t x36 = -11;
	static volatile int64_t t8 = INT64_MAX;

	t8 = (x33^((x34/x35)==x36));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int8_t x39 = INT8_MIN;
	uint16_t x40 = 17594U;
	static int32_t t9 = INT32_MIN;

	t9 = (x37^((x38/x39)==x40));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x49 = -1;
	static uint32_t x50 = 649034U;
	int16_t x51 = -1;
	static int8_t x52 = 1;
	int32_t t10 = 213;

	t10 = (x49^((x50/x51)==x52));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = 107U;
	static uint64_t x55 = UINT64_MAX;
	int32_t x56 = INT32_MIN;
	int32_t t11 = -930081049;

	t11 = (x53^((x54/x55)==x56));

	if (t11 != 107) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x57 = INT16_MAX;
	volatile uint8_t x58 = 61U;
	static int8_t x59 = INT8_MAX;
	volatile int64_t x60 = INT64_MIN;
	int32_t t12 = 276;

	t12 = (x57^((x58/x59)==x60));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = -10707;
	static int8_t x62 = INT8_MAX;
	uint64_t x63 = 10976LLU;
	int64_t x64 = INT64_MIN;
	int32_t t13 = 863;

	t13 = (x61^((x62/x63)==x64));

	if (t13 != -10707) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MIN;
	uint64_t x66 = 1130261529863003LLU;
	int8_t x68 = INT8_MAX;
	volatile int32_t t14 = INT32_MIN;

	t14 = (x65^((x66/x67)==x68));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = UINT16_MAX;
	int8_t x70 = 0;
	uint16_t x71 = UINT16_MAX;
	static int8_t x72 = -44;
	static volatile int32_t t15 = 0;

	t15 = (x69^((x70/x71)==x72));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x73 = 2138U;
	int16_t x75 = -5;
	uint16_t x76 = 2U;
	static int32_t t16 = 161;

	t16 = (x73^((x74/x75)==x76));

	if (t16 != 2138) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x77 = INT8_MIN;
	uint8_t x78 = 0U;
	static volatile int64_t x79 = INT64_MIN;
	static volatile int32_t t17 = -142989;

	t17 = (x77^((x78/x79)==x80));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MAX;
	static volatile int16_t x82 = INT16_MAX;
	int32_t x83 = -31;
	uint8_t x84 = 0U;
	int64_t t18 = INT64_MAX;

	t18 = (x81^((x82/x83)==x84));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x86 = 29124634377LLU;
	int64_t x88 = 3730467769942616LL;
	volatile int32_t t19 = -5338;

	t19 = (x85^((x86/x87)==x88));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x89 = INT64_MIN;
	volatile int64_t x90 = INT64_MAX;
	static uint64_t x91 = UINT64_MAX;

	t20 = (x89^((x90/x91)==x92));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x93 = INT16_MIN;
	volatile int64_t x95 = 777817LL;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t21 = -17989641;

	t21 = (x93^((x94/x95)==x96));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x97 = 3545;
	int64_t x99 = INT64_MAX;
	volatile uint64_t x100 = 123991525634360LLU;
	static volatile int32_t t22 = 57281;

	t22 = (x97^((x98/x99)==x100));

	if (t22 != 3545) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x102 = 1439117728U;
	uint64_t x103 = UINT64_MAX;
	static int64_t t23 = INT64_MIN;

	t23 = (x101^((x102/x103)==x104));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = 1833819530938LLU;
	static int8_t x106 = -1;
	uint16_t x107 = 3U;

	t24 = (x105^((x106/x107)==x108));

	if (t24 != 1833819530938LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = 26699U;
	int8_t x110 = INT8_MIN;
	volatile uint16_t x111 = UINT16_MAX;
	uint32_t x112 = UINT32_MAX;
	uint32_t t25 = 3884003U;

	t25 = (x109^((x110/x111)==x112));

	if (t25 != 26699U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x113 = UINT8_MAX;
	int64_t x114 = 4LL;
	int8_t x116 = 1;
	volatile int32_t t26 = -18993;

	t26 = (x113^((x114/x115)==x116));

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x117 = 114U;
	int16_t x118 = INT16_MIN;
	int8_t x119 = INT8_MIN;
	static int32_t x120 = 798;

	t27 = (x117^((x118/x119)==x120));

	if (t27 != 114) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = -30;
	int64_t x122 = INT64_MAX;
	uint16_t x123 = 176U;
	static volatile int32_t x124 = INT32_MAX;
	int32_t t28 = 692;

	t28 = (x121^((x122/x123)==x124));

	if (t28 != -30) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MIN;
	uint32_t x126 = 31755U;
	static uint16_t x127 = UINT16_MAX;
	volatile int16_t x128 = INT16_MIN;
	static int32_t t29 = 1;

	t29 = (x125^((x126/x127)==x128));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x129 = INT32_MIN;
	volatile int32_t x130 = 58100242;
	int32_t x131 = 8992174;
	static uint64_t x132 = UINT64_MAX;
	int32_t t30 = INT32_MIN;

	t30 = (x129^((x130/x131)==x132));

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = UINT32_MAX;
	int16_t x134 = 4047;
	int64_t x135 = INT64_MIN;
	static int16_t x136 = INT16_MIN;
	uint32_t t31 = UINT32_MAX;

	t31 = (x133^((x134/x135)==x136));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = INT64_MIN;
	int64_t x138 = INT64_MAX;
	volatile int32_t x139 = -1386340;
	int64_t x140 = -1LL;
	static volatile int64_t t32 = INT64_MIN;

	t32 = (x137^((x138/x139)==x140));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MAX;
	int16_t x142 = -1;
	int16_t x144 = INT16_MIN;

	t33 = (x141^((x142/x143)==x144));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x146 = INT8_MIN;
	int64_t x147 = INT64_MIN;
	int32_t x148 = -1;

	t34 = (x145^((x146/x147)==x148));

	if (t34 != 235806635721861712LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x149 = UINT8_MAX;
	volatile uint32_t x150 = 3U;
	int64_t x151 = 65034608239630038LL;
	volatile int32_t x152 = 14421;
	int32_t t35 = 31625693;

	t35 = (x149^((x150/x151)==x152));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MIN;
	int8_t x155 = 8;
	static int64_t x156 = INT64_MIN;

	t36 = (x153^((x154/x155)==x156));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x157 = 1785U;
	int8_t x158 = INT8_MAX;
	int32_t x159 = -1;
	int8_t x160 = INT8_MAX;

	t37 = (x157^((x158/x159)==x160));

	if (t37 != 1785) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = 267;
	uint32_t x170 = UINT32_MAX;
	uint8_t x171 = 2U;
	static int32_t x172 = INT32_MIN;
	int32_t t38 = 1056681;

	t38 = (x169^((x170/x171)==x172));

	if (t38 != 267) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = -864319607;
	int64_t x175 = -33052634LL;
	uint32_t x176 = UINT32_MAX;
	int32_t t39 = 1640944;

	t39 = (x173^((x174/x175)==x176));

	if (t39 != -864319607) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x177 = UINT8_MAX;
	uint16_t x178 = 3U;
	uint16_t x179 = 3601U;
	volatile int16_t x180 = INT16_MIN;
	int32_t t40 = 48874;

	t40 = (x177^((x178/x179)==x180));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x181 = -1;
	uint8_t x182 = 3U;
	uint64_t x183 = 196438273480LLU;
	static int32_t t41 = 54032;

	t41 = (x181^((x182/x183)==x184));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x185 = UINT32_MAX;
	int16_t x186 = 111;
	static uint32_t t42 = UINT32_MAX;

	t42 = (x185^((x186/x187)==x188));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x189 = INT32_MAX;
	int16_t x190 = INT16_MIN;
	uint32_t x192 = 31860U;
	volatile int32_t t43 = INT32_MAX;

	t43 = (x189^((x190/x191)==x192));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = INT16_MAX;
	int32_t x194 = -1;
	uint8_t x195 = 70U;
	uint64_t x196 = 184776680437434042LLU;

	t44 = (x193^((x194/x195)==x196));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = INT8_MIN;
	int32_t x200 = INT32_MIN;
	int32_t t45 = 15731064;

	t45 = (x197^((x198/x199)==x200));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = INT16_MIN;
	int8_t x202 = INT8_MIN;
	int16_t x203 = -1;
	int64_t x204 = -1LL;
	int32_t t46 = -11;

	t46 = (x201^((x202/x203)==x204));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = UINT16_MAX;
	int16_t x206 = INT16_MIN;
	int16_t x207 = -1244;
	int32_t t47 = 315187;

	t47 = (x205^((x206/x207)==x208));

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x210 = INT8_MAX;
	uint32_t x211 = UINT32_MAX;
	static int8_t x212 = INT8_MIN;

	t48 = (x209^((x210/x211)==x212));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = -1LL;
	uint16_t x214 = 10581U;
	int16_t x215 = INT16_MIN;
	static int8_t x216 = -2;

	t49 = (x213^((x214/x215)==x216));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = INT8_MIN;
	uint32_t x218 = 2U;
	int32_t x219 = INT32_MAX;
	int32_t x220 = INT32_MAX;
	static int32_t t50 = 5332;

	t50 = (x217^((x218/x219)==x220));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = -1204;
	uint8_t x222 = 4U;
	uint32_t x223 = UINT32_MAX;
	volatile int64_t x224 = INT64_MAX;

	t51 = (x221^((x222/x223)==x224));

	if (t51 != -1204) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = INT64_MIN;
	int64_t x226 = INT64_MAX;
	int16_t x227 = 16;
	int32_t x228 = -2257055;

	t52 = (x225^((x226/x227)==x228));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x231 = 171U;
	volatile int64_t t53 = 13LL;

	t53 = (x229^((x230/x231)==x232));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = 2;
	int64_t x234 = INT64_MIN;
	int8_t x235 = INT8_MIN;
	uint32_t x236 = 16606U;
	int32_t t54 = -233318231;

	t54 = (x233^((x234/x235)==x236));

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = INT16_MAX;
	static volatile uint64_t x239 = 3904842LLU;
	volatile int32_t x240 = -58;
	volatile int32_t t55 = -88587;

	t55 = (x237^((x238/x239)==x240));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x243 = -1LL;
	static uint32_t x244 = 13013564U;

	t56 = (x241^((x242/x243)==x244));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x245 = -2598;
	static uint64_t x248 = 104075LLU;
	volatile int32_t t57 = 1;

	t57 = (x245^((x246/x247)==x248));

	if (t57 != -2598) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x249 = -9156;
	uint8_t x250 = UINT8_MAX;
	volatile uint64_t x251 = UINT64_MAX;
	uint16_t x252 = 3128U;
	int32_t t58 = 7095;

	t58 = (x249^((x250/x251)==x252));

	if (t58 != -9156) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x253 = -1LL;
	int8_t x254 = -1;
	int64_t x255 = INT64_MIN;
	int32_t x256 = INT32_MAX;
	static volatile int64_t t59 = -483580849941276640LL;

	t59 = (x253^((x254/x255)==x256));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = INT64_MAX;
	static int8_t x258 = 1;
	static volatile int16_t x259 = -1;
	static int64_t t60 = INT64_MAX;

	t60 = (x257^((x258/x259)==x260));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x261 = UINT16_MAX;
	volatile uint16_t x262 = UINT16_MAX;
	volatile int8_t x263 = INT8_MIN;
	static volatile int8_t x264 = INT8_MAX;

	t61 = (x261^((x262/x263)==x264));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x265 = INT8_MIN;
	int32_t x266 = INT32_MIN;
	int64_t x267 = 351828384LL;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t62 = 7411950;

	t62 = (x265^((x266/x267)==x268));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MIN;
	volatile uint8_t x271 = 2U;
	volatile int64_t x272 = -16390461874LL;
	volatile int64_t t63 = INT64_MIN;

	t63 = (x269^((x270/x271)==x272));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x273 = 38U;
	uint16_t x274 = 52U;
	int64_t x275 = 98LL;
	uint32_t x276 = 200610U;
	volatile int32_t t64 = 77;

	t64 = (x273^((x274/x275)==x276));

	if (t64 != 38) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x277 = INT16_MIN;
	volatile int64_t x278 = INT64_MIN;
	static volatile uint64_t x279 = 985692855994845946LLU;
	int8_t x280 = INT8_MIN;
	int32_t t65 = -2138;

	t65 = (x277^((x278/x279)==x280));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = -216;
	int16_t x283 = INT16_MIN;
	volatile int32_t x284 = -1;
	volatile int32_t t66 = 1784416;

	t66 = (x281^((x282/x283)==x284));

	if (t66 != -216) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = 19237243LL;
	int32_t x286 = INT32_MAX;
	static uint64_t x287 = UINT64_MAX;
	volatile uint16_t x288 = UINT16_MAX;

	t67 = (x285^((x286/x287)==x288));

	if (t67 != 19237243LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x289 = -1;
	int32_t x290 = INT32_MIN;
	volatile int32_t t68 = 109;

	t68 = (x289^((x290/x291)==x292));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x293 = INT8_MIN;
	uint16_t x294 = 124U;
	int32_t x295 = 80699581;
	static int16_t x296 = INT16_MIN;

	t69 = (x293^((x294/x295)==x296));

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x297 = UINT16_MAX;
	volatile int64_t x298 = INT64_MIN;
	uint64_t x300 = 877098212088342860LLU;
	static int32_t t70 = -46445;

	t70 = (x297^((x298/x299)==x300));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = INT32_MIN;
	int16_t x302 = INT16_MIN;
	int32_t x303 = INT32_MIN;
	int32_t x304 = INT32_MIN;
	volatile int32_t t71 = INT32_MIN;

	t71 = (x301^((x302/x303)==x304));

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x305 = 3271;
	uint16_t x306 = 5134U;
	static int32_t x308 = INT32_MAX;
	static int32_t t72 = 1039617;

	t72 = (x305^((x306/x307)==x308));

	if (t72 != 3271) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x309 = -519510438;
	int32_t t73 = -895;

	t73 = (x309^((x310/x311)==x312));

	if (t73 != -519510438) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = INT64_MIN;
	uint64_t x314 = 56969892LLU;
	static volatile int64_t x315 = INT64_MIN;
	uint16_t x316 = 548U;
	volatile int64_t t74 = INT64_MIN;

	t74 = (x313^((x314/x315)==x316));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x318 = 0U;
	volatile int16_t x320 = INT16_MIN;
	volatile int32_t t75 = 282566620;

	t75 = (x317^((x318/x319)==x320));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x321 = INT32_MAX;
	volatile int32_t x322 = 56;
	volatile int32_t x323 = -1;
	volatile uint64_t x324 = UINT64_MAX;
	volatile int32_t t76 = INT32_MAX;

	t76 = (x321^((x322/x323)==x324));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = 4577;
	static int16_t x327 = 7725;
	volatile uint64_t x328 = 2547584497777344002LLU;
	static volatile int32_t t77 = -18;

	t77 = (x325^((x326/x327)==x328));

	if (t77 != 4577) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x329 = UINT16_MAX;
	uint64_t x330 = 1525LLU;
	volatile uint16_t x331 = 195U;
	static uint8_t x332 = UINT8_MAX;

	t78 = (x329^((x330/x331)==x332));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x333 = 54U;
	uint8_t x334 = UINT8_MAX;
	static int32_t x335 = INT32_MAX;
	static volatile uint16_t x336 = UINT16_MAX;

	t79 = (x333^((x334/x335)==x336));

	if (t79 != 54) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x337 = 491121755LLU;
	uint32_t x338 = 1001U;
	uint64_t x339 = UINT64_MAX;
	static uint16_t x340 = UINT16_MAX;
	uint64_t t80 = 148467342411800181LLU;

	t80 = (x337^((x338/x339)==x340));

	if (t80 != 491121755LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x341 = 3LLU;
	int16_t x342 = INT16_MIN;
	volatile int32_t x343 = -7;
	int8_t x344 = INT8_MIN;
	static volatile uint64_t t81 = 539242311034870LLU;

	t81 = (x341^((x342/x343)==x344));

	if (t81 != 3LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = 1262107828U;
	volatile int64_t x347 = INT64_MIN;
	int16_t x348 = -1;

	t82 = (x345^((x346/x347)==x348));

	if (t82 != 1262107828U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x353 = INT16_MIN;
	int16_t x354 = -1;
	static int32_t x355 = INT32_MIN;
	int16_t x356 = -7937;
	volatile int32_t t83 = -483123113;

	t83 = (x353^((x354/x355)==x356));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x357 = -1;
	volatile uint32_t x358 = 14385U;
	volatile int64_t x359 = -1LL;
	int64_t x360 = -1LL;
	volatile int32_t t84 = 661183;

	t84 = (x357^((x358/x359)==x360));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x361 = 3U;
	int8_t x362 = -15;
	int64_t x363 = 1LL;
	int32_t x364 = INT32_MIN;
	static volatile int32_t t85 = 456611;

	t85 = (x361^((x362/x363)==x364));

	if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x365 = UINT64_MAX;
	static uint64_t x367 = 377516LLU;
	int32_t x368 = -1;

	t86 = (x365^((x366/x367)==x368));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x369 = 3348U;
	volatile int64_t x371 = INT64_MIN;
	int16_t x372 = 357;
	int32_t t87 = -5439753;

	t87 = (x369^((x370/x371)==x372));

	if (t87 != 3348) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = INT16_MAX;
	uint8_t x374 = UINT8_MAX;
	static volatile int16_t x375 = INT16_MIN;
	uint32_t x376 = 156019879U;

	t88 = (x373^((x374/x375)==x376));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x377 = 1;
	static uint64_t x378 = 172909561668479LLU;
	int32_t x379 = -1;
	volatile int8_t x380 = 6;

	t89 = (x377^((x378/x379)==x380));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x382 = -1LL;
	volatile uint64_t x383 = 42425577890833266LLU;
	uint8_t x384 = 23U;

	t90 = (x381^((x382/x383)==x384));

	if (t90 != 72367LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x385 = 136U;
	int16_t x386 = -1;
	static uint8_t x388 = 0U;
	volatile uint32_t t91 = 3U;

	t91 = (x385^((x386/x387)==x388));

	if (t91 != 137U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x389 = INT32_MIN;
	int64_t x390 = -1LL;
	uint16_t x391 = 120U;
	uint64_t x392 = 3549170LLU;
	volatile int32_t t92 = INT32_MIN;

	t92 = (x389^((x390/x391)==x392));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = -1LL;
	int32_t x394 = INT32_MIN;
	static volatile uint16_t x395 = 3U;
	int64_t t93 = 938837047999LL;

	t93 = (x393^((x394/x395)==x396));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x397 = 119;
	uint8_t x398 = 2U;
	static int16_t x399 = INT16_MAX;
	int8_t x400 = 0;
	volatile int32_t t94 = -10;

	t94 = (x397^((x398/x399)==x400));

	if (t94 != 118) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x401 = 234163085827166145LLU;
	volatile int8_t x402 = INT8_MIN;
	static volatile uint32_t x403 = 433228537U;
	static volatile uint64_t t95 = 61283LLU;

	t95 = (x401^((x402/x403)==x404));

	if (t95 != 234163085827166145LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = INT16_MIN;
	volatile uint16_t x406 = UINT16_MAX;
	static int32_t x407 = INT32_MIN;
	volatile int32_t t96 = 266;

	t96 = (x405^((x406/x407)==x408));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x409 = UINT8_MAX;
	int32_t x411 = 45377;
	int8_t x412 = INT8_MAX;

	t97 = (x409^((x410/x411)==x412));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x413 = INT8_MIN;
	int32_t x414 = -1;
	uint16_t x415 = 802U;
	int32_t x416 = INT32_MAX;
	volatile int32_t t98 = 2;

	t98 = (x413^((x414/x415)==x416));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x417 = -30775;
	volatile int64_t x418 = 474627LL;
	static uint64_t x419 = UINT64_MAX;
	static int16_t x420 = 87;
	int32_t t99 = -32678417;

	t99 = (x417^((x418/x419)==x420));

	if (t99 != -30775) { NG(); } else { ; }
	
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

