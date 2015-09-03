#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = 14U;
int32_t t1 = 204;
uint16_t x9 = 1586U;
volatile uint32_t x10 = 60U;
static int16_t x15 = INT16_MAX;
int64_t x18 = 2160052662242LL;
static volatile uint16_t x24 = 1U;
volatile int32_t t6 = 17202594;
int16_t x29 = -1;
int64_t x34 = INT64_MIN;
int32_t t9 = -2364237;
uint8_t x43 = UINT8_MAX;
int32_t t11 = 60218392;
static int64_t x49 = INT64_MIN;
int64_t x50 = INT64_MIN;
uint16_t x51 = 664U;
int64_t x53 = INT64_MAX;
int32_t t13 = 916881299;
int64_t x57 = INT64_MIN;
int16_t x62 = INT16_MIN;
static volatile int16_t x64 = 0;
static int8_t x68 = INT8_MIN;
volatile int32_t t16 = 1068373461;
static int64_t x69 = -1LL;
volatile uint32_t x72 = UINT32_MAX;
volatile int32_t t19 = -119;
volatile int32_t t20 = 18192;
int8_t x85 = -5;
int16_t x86 = -4;
int8_t x89 = INT8_MIN;
int32_t t23 = -30;
int16_t x104 = -1;
int16_t x105 = INT16_MIN;
uint64_t x111 = UINT64_MAX;
volatile int32_t x112 = INT32_MIN;
uint64_t x114 = UINT64_MAX;
volatile int32_t t28 = 498;
int16_t x121 = -25;
int32_t x124 = -1;
int64_t x128 = -1LL;
uint16_t x134 = UINT16_MAX;
static uint32_t x144 = UINT32_MAX;
volatile int32_t t36 = 71444276;
uint8_t x149 = UINT8_MAX;
uint32_t x151 = 17U;
int8_t x155 = INT8_MAX;
int16_t x157 = INT16_MIN;
int64_t x160 = INT64_MIN;
int32_t t39 = -24009639;
int32_t x164 = -2656229;
static int32_t x165 = -1;
int32_t x170 = 299541;
static int16_t x171 = INT16_MIN;
static uint16_t x172 = 10U;
volatile int32_t t43 = 1;
uint16_t x178 = 115U;
volatile uint64_t x182 = 236227282636187LLU;
volatile uint64_t x184 = UINT64_MAX;
uint64_t x198 = 63496527LLU;
volatile int32_t t49 = -10025710;
int8_t x201 = 13;
int64_t x207 = INT64_MAX;
static uint64_t x212 = UINT64_MAX;
uint64_t x215 = 8583682410700393LLU;
static volatile int8_t x217 = INT8_MAX;
static volatile int32_t t56 = 61;
int16_t x230 = INT16_MIN;
int32_t t58 = -21101;
int8_t x240 = INT8_MIN;
int32_t t59 = 1867;
volatile int32_t x242 = -1;
static int64_t x252 = 8405760LL;
static uint8_t x256 = 5U;
static uint32_t x259 = UINT32_MAX;
int8_t x270 = INT8_MIN;
static int32_t x272 = INT32_MAX;
volatile int32_t t67 = -8699536;
uint64_t x278 = UINT64_MAX;
volatile int32_t t69 = 4382;
volatile int16_t x285 = INT16_MAX;
uint32_t x294 = UINT32_MAX;
int64_t x296 = INT64_MIN;
int8_t x303 = -1;
int64_t x304 = -110232LL;
uint16_t x307 = 24673U;
static int32_t t76 = 10394959;
uint32_t x311 = 495U;
uint16_t x313 = UINT16_MAX;
int8_t x316 = INT8_MAX;
int16_t x317 = INT16_MAX;
uint32_t x318 = UINT32_MAX;
int64_t x321 = -1LL;
volatile int32_t t80 = -666211690;
uint32_t x327 = UINT32_MAX;
int32_t t81 = -1;
int32_t x331 = INT32_MAX;
int8_t x336 = -1;
int32_t t83 = 254970;
int8_t x339 = -1;
static int8_t x344 = -1;
int32_t x364 = INT32_MAX;
volatile int64_t x366 = INT64_MIN;
int16_t x367 = -61;
uint64_t x368 = UINT64_MAX;
volatile uint64_t x371 = UINT64_MAX;
volatile int32_t t92 = 116;
int64_t x373 = INT64_MAX;
uint16_t x375 = UINT16_MAX;
volatile int16_t x379 = 14826;
int16_t x387 = INT16_MIN;
static int16_t x389 = -10591;
uint32_t x391 = 663U;
volatile int16_t x392 = 6;
static volatile int32_t t97 = -22;


void f0(void) {
	static int32_t x1 = 110743;
	int64_t x2 = 55LL;
	uint64_t x3 = 721858359LLU;
	static volatile int32_t t0 = -3825;

	t0 = ((x1==x2)<(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int32_t x6 = -2;
	int64_t x7 = INT64_MAX;
	int32_t x8 = 30;

	t1 = ((x5==x6)<(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x11 = 1159;
	volatile int16_t x12 = -2;
	static int32_t t2 = -842690756;

	t2 = ((x9==x10)<(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint64_t x14 = UINT64_MAX;
	int8_t x16 = 61;
	static volatile int32_t t3 = -91039;

	t3 = ((x13==x14)<(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -8;
	uint64_t x19 = 68875LLU;
	int32_t x20 = 77524;
	int32_t t4 = 745781126;

	t4 = ((x17==x18)<(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	uint64_t x22 = 3460LLU;
	int32_t x23 = INT32_MAX;
	int32_t t5 = 28;

	t5 = ((x21==x22)<(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = 1;
	int8_t x26 = -1;
	static int8_t x27 = INT8_MAX;
	uint32_t x28 = UINT32_MAX;

	t6 = ((x25==x26)<(x27<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x30 = 1;
	volatile int32_t x31 = 10727;
	uint32_t x32 = 5838930U;
	volatile int32_t t7 = 886519597;

	t7 = ((x29==x30)<(x31<x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	static volatile int16_t x35 = INT16_MIN;
	static uint8_t x36 = 46U;
	int32_t t8 = 33476;

	t8 = ((x33==x34)<(x35<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 36982217521173741LL;
	uint8_t x38 = 114U;
	int64_t x39 = 3LL;
	volatile int64_t x40 = INT64_MAX;

	t9 = ((x37==x38)<(x39<x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	uint32_t x42 = 4U;
	int32_t x44 = INT32_MAX;
	static int32_t t10 = 221;

	t10 = ((x41==x42)<(x43<x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	int32_t x46 = INT32_MIN;
	int16_t x47 = -1;
	uint32_t x48 = UINT32_MAX;

	t11 = ((x45==x46)<(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x52 = -1;
	int32_t t12 = 1;

	t12 = ((x49==x50)<(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = 1U;
	volatile int32_t x55 = -1;
	volatile int64_t x56 = INT64_MIN;

	t13 = ((x53==x54)<(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = -1;
	static volatile int32_t x59 = INT32_MAX;
	static int16_t x60 = -1;
	int32_t t14 = 1;

	t14 = ((x57==x58)<(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int32_t x63 = INT32_MIN;
	volatile int32_t t15 = 1;

	t15 = ((x61==x62)<(x63<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	static uint64_t x66 = UINT64_MAX;
	static uint32_t x67 = 30836U;

	t16 = ((x65==x66)<(x67<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = INT64_MAX;
	int32_t x71 = 938048275;
	int32_t t17 = -11109;

	t17 = ((x69==x70)<(x71<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	static volatile int32_t x74 = INT32_MIN;
	int64_t x75 = INT64_MIN;
	volatile int16_t x76 = -1;
	int32_t t18 = -23640;

	t18 = ((x73==x74)<(x75<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = -1;
	uint16_t x78 = 11U;
	uint16_t x79 = UINT16_MAX;
	uint8_t x80 = 10U;

	t19 = ((x77==x78)<(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	int32_t x82 = INT32_MIN;
	static int64_t x83 = -1LL;
	volatile int64_t x84 = INT64_MIN;

	t20 = ((x81==x82)<(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x87 = -37;
	static int16_t x88 = -1;
	volatile int32_t t21 = -125545075;

	t21 = ((x85==x86)<(x87<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x90 = 0;
	int16_t x91 = -1;
	int16_t x92 = -117;
	int32_t t22 = -4128;

	t22 = ((x89==x90)<(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 3505466077761820859LLU;
	int64_t x94 = 3LL;
	uint64_t x95 = UINT64_MAX;
	volatile int64_t x96 = INT64_MIN;

	t23 = ((x93==x94)<(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	uint32_t x98 = 850350759U;
	static volatile int32_t x99 = -469;
	int32_t x100 = -73;
	volatile int32_t t24 = -42436;

	t24 = ((x97==x98)<(x99<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 28554502U;
	volatile int8_t x102 = INT8_MIN;
	static int64_t x103 = 640560LL;
	static int32_t t25 = 23388751;

	t25 = ((x101==x102)<(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x106 = INT16_MIN;
	uint8_t x107 = 36U;
	int64_t x108 = -4386728510831476746LL;
	int32_t t26 = 6;

	t26 = ((x105==x106)<(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 2024189771720894LLU;
	int32_t x110 = -501;
	volatile int32_t t27 = 1877;

	t27 = ((x109==x110)<(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 54LLU;
	uint32_t x115 = 393200U;
	volatile uint8_t x116 = UINT8_MAX;

	t28 = ((x113==x114)<(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	uint16_t x118 = 1U;
	uint16_t x119 = 167U;
	int64_t x120 = 876207875919851074LL;
	static int32_t t29 = -958764039;

	t29 = ((x117==x118)<(x119<x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x122 = 10301U;
	static int32_t x123 = 4498636;
	volatile int32_t t30 = -15633430;

	t30 = ((x121==x122)<(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 11326;
	int8_t x126 = INT8_MIN;
	volatile uint16_t x127 = 76U;
	int32_t t31 = 6839;

	t31 = ((x125==x126)<(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -12443196576099790LL;
	int8_t x130 = INT8_MAX;
	uint64_t x131 = UINT64_MAX;
	static int64_t x132 = INT64_MIN;
	int32_t t32 = -924997;

	t32 = ((x129==x130)<(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = -1;
	int16_t x135 = INT16_MIN;
	uint64_t x136 = 14047882083LLU;
	int32_t t33 = 28327;

	t33 = ((x133==x134)<(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 81;
	int8_t x138 = 1;
	int8_t x139 = -5;
	int16_t x140 = INT16_MIN;
	int32_t t34 = -577154;

	t34 = ((x137==x138)<(x139<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 8498375897808LLU;
	int64_t x142 = -1LL;
	int8_t x143 = 49;
	int32_t t35 = -3945;

	t35 = ((x141==x142)<(x143<x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	int16_t x146 = -3;
	int8_t x147 = INT8_MIN;
	static uint64_t x148 = 1822288267111956LLU;

	t36 = ((x145==x146)<(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = INT8_MIN;
	int16_t x152 = INT16_MIN;
	int32_t t37 = 1720048;

	t37 = ((x149==x150)<(x151<x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x153 = 229375972LLU;
	uint8_t x154 = 24U;
	int64_t x156 = -1110LL;
	volatile int32_t t38 = 15065287;

	t38 = ((x153==x154)<(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x158 = -3051;
	int64_t x159 = -6LL;

	t39 = ((x157==x158)<(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 7;
	uint64_t x162 = 1339815413692663LLU;
	int8_t x163 = INT8_MIN;
	static int32_t t40 = -69778;

	t40 = ((x161==x162)<(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = -55381230;
	static int8_t x167 = -1;
	uint8_t x168 = 25U;
	int32_t t41 = -64061;

	t41 = ((x165==x166)<(x167<x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 7U;
	int32_t t42 = 77543638;

	t42 = ((x169==x170)<(x171<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = INT64_MIN;
	int64_t x174 = INT64_MIN;
	int8_t x175 = -1;
	int8_t x176 = -1;

	t43 = ((x173==x174)<(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	uint32_t x179 = 9700092U;
	static int8_t x180 = INT8_MIN;
	volatile int32_t t44 = -98;

	t44 = ((x177==x178)<(x179<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 901610951U;
	uint64_t x183 = 105579383547016845LLU;
	static int32_t t45 = 3850;

	t45 = ((x181==x182)<(x183<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 3U;
	volatile uint16_t x186 = 139U;
	uint8_t x187 = UINT8_MAX;
	int8_t x188 = 12;
	int32_t t46 = -3462713;

	t46 = ((x185==x186)<(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	static volatile uint16_t x190 = UINT16_MAX;
	int8_t x191 = INT8_MIN;
	int64_t x192 = INT64_MAX;
	volatile int32_t t47 = -3581;

	t47 = ((x189==x190)<(x191<x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x193 = 1601602979U;
	int16_t x194 = INT16_MIN;
	volatile uint8_t x195 = 76U;
	int16_t x196 = INT16_MAX;
	static int32_t t48 = 5794;

	t48 = ((x193==x194)<(x195<x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = -1;
	uint32_t x199 = 89268103U;
	static int64_t x200 = 7059395964LL;

	t49 = ((x197==x198)<(x199<x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x202 = 110985LLU;
	uint64_t x203 = UINT64_MAX;
	int8_t x204 = 1;
	volatile int32_t t50 = 2408;

	t50 = ((x201==x202)<(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -27240628LL;
	int64_t x206 = INT64_MAX;
	int16_t x208 = INT16_MIN;
	volatile int32_t t51 = 12060;

	t51 = ((x205==x206)<(x207<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 263736681321360072LLU;
	int64_t x210 = INT64_MIN;
	int64_t x211 = 5700LL;
	int32_t t52 = -344766904;

	t52 = ((x209==x210)<(x211<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	int32_t x214 = INT32_MAX;
	static uint8_t x216 = UINT8_MAX;
	int32_t t53 = -117702405;

	t53 = ((x213==x214)<(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x218 = UINT32_MAX;
	int8_t x219 = 2;
	volatile uint64_t x220 = UINT64_MAX;
	int32_t t54 = 1557;

	t54 = ((x217==x218)<(x219<x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = INT16_MAX;
	int16_t x222 = INT16_MAX;
	static uint64_t x223 = UINT64_MAX;
	volatile int32_t x224 = INT32_MIN;
	static int32_t t55 = 192975;

	t55 = ((x221==x222)<(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = INT16_MAX;
	int16_t x226 = INT16_MIN;
	volatile uint16_t x227 = 4631U;
	int64_t x228 = -1LL;

	t56 = ((x225==x226)<(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	int64_t x231 = INT64_MAX;
	int64_t x232 = INT64_MAX;
	int32_t t57 = 2383;

	t57 = ((x229==x230)<(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = INT16_MIN;
	volatile int64_t x234 = 299999833LL;
	uint8_t x235 = 1U;
	int8_t x236 = INT8_MIN;

	t58 = ((x233==x234)<(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	uint16_t x238 = UINT16_MAX;
	int64_t x239 = INT64_MIN;

	t59 = ((x237==x238)<(x239<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -4482726;
	uint16_t x243 = 441U;
	int64_t x244 = INT64_MAX;
	int32_t t60 = -1007788;

	t60 = ((x241==x242)<(x243<x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 463U;
	static int32_t x246 = 41;
	int8_t x247 = 0;
	uint32_t x248 = 10U;
	volatile int32_t t61 = -3477;

	t61 = ((x245==x246)<(x247<x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -14018269;
	uint8_t x250 = 1U;
	int16_t x251 = INT16_MIN;
	int32_t t62 = -355;

	t62 = ((x249==x250)<(x251<x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 25U;
	static int32_t x254 = INT32_MIN;
	int64_t x255 = -977564175780346LL;
	volatile int32_t t63 = -1;

	t63 = ((x253==x254)<(x255<x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x257 = 3U;
	int64_t x258 = 31620368LL;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t64 = 2461;

	t64 = ((x257==x258)<(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -519822;
	volatile int8_t x262 = -1;
	int32_t x263 = 66336751;
	static int64_t x264 = 297LL;
	int32_t t65 = 1007361613;

	t65 = ((x261==x262)<(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	static uint16_t x266 = 752U;
	int64_t x267 = -413082025032412LL;
	int64_t x268 = INT64_MAX;
	volatile int32_t t66 = 358;

	t66 = ((x265==x266)<(x267<x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int8_t x271 = INT8_MIN;

	t67 = ((x269==x270)<(x271<x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 2U;
	int8_t x274 = -2;
	static uint64_t x275 = 78603245986649LLU;
	int32_t x276 = 6175218;
	volatile int32_t t68 = -32584403;

	t68 = ((x273==x274)<(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	int16_t x279 = INT16_MIN;
	volatile int32_t x280 = INT32_MIN;

	t69 = ((x277==x278)<(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -20;
	uint32_t x282 = UINT32_MAX;
	uint64_t x283 = 26654688915253LLU;
	static int16_t x284 = 15;
	static int32_t t70 = 249819;

	t70 = ((x281==x282)<(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x286 = -6;
	int16_t x287 = -4343;
	volatile uint64_t x288 = UINT64_MAX;
	volatile int32_t t71 = 1480772;

	t71 = ((x285==x286)<(x287<x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	uint64_t x290 = 2337484505LLU;
	volatile int32_t x291 = -116827;
	int32_t x292 = INT32_MIN;
	static volatile int32_t t72 = 7977358;

	t72 = ((x289==x290)<(x291<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = -497;
	int8_t x295 = INT8_MAX;
	int32_t t73 = 610663;

	t73 = ((x293==x294)<(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x297 = UINT32_MAX;
	int32_t x298 = INT32_MIN;
	int64_t x299 = -1LL;
	static uint16_t x300 = UINT16_MAX;
	static volatile int32_t t74 = -12046;

	t74 = ((x297==x298)<(x299<x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int32_t x302 = INT32_MIN;
	int32_t t75 = -62989881;

	t75 = ((x301==x302)<(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 1;
	int8_t x306 = INT8_MIN;
	uint8_t x308 = UINT8_MAX;

	t76 = ((x305==x306)<(x307<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x309 = 927U;
	uint16_t x310 = UINT16_MAX;
	uint8_t x312 = 49U;
	static volatile int32_t t77 = 11;

	t77 = ((x309==x310)<(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x314 = -37;
	volatile int8_t x315 = INT8_MAX;
	volatile int32_t t78 = -382023;

	t78 = ((x313==x314)<(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x319 = UINT64_MAX;
	static int16_t x320 = INT16_MAX;
	int32_t t79 = 50;

	t79 = ((x317==x318)<(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = -2579;
	uint32_t x323 = 106144431U;
	uint8_t x324 = 7U;

	t80 = ((x321==x322)<(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	uint32_t x326 = UINT32_MAX;
	int16_t x328 = INT16_MIN;

	t81 = ((x325==x326)<(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = INT16_MIN;
	int32_t x330 = INT32_MAX;
	int32_t x332 = INT32_MIN;
	volatile int32_t t82 = 532;

	t82 = ((x329==x330)<(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = -4;
	int16_t x334 = INT16_MAX;
	int64_t x335 = INT64_MIN;

	t83 = ((x333==x334)<(x335<x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = INT64_MAX;
	volatile int8_t x338 = INT8_MIN;
	int32_t x340 = -3;
	static volatile int32_t t84 = 7736;

	t84 = ((x337==x338)<(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -37;
	uint8_t x342 = UINT8_MAX;
	static int16_t x343 = INT16_MIN;
	static int32_t t85 = -942;

	t85 = ((x341==x342)<(x343<x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -2;
	volatile uint64_t x346 = 1197902542LLU;
	static int8_t x347 = INT8_MIN;
	int32_t x348 = INT32_MIN;
	volatile int32_t t86 = -266403;

	t86 = ((x345==x346)<(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 15U;
	volatile int32_t x350 = INT32_MAX;
	int16_t x351 = -1;
	uint8_t x352 = 1U;
	volatile int32_t t87 = 29842602;

	t87 = ((x349==x350)<(x351<x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x353 = 83300587026258569LLU;
	static uint64_t x354 = 1817783938737345LLU;
	int32_t x355 = INT32_MIN;
	int64_t x356 = -1LL;
	volatile int32_t t88 = -104086;

	t88 = ((x353==x354)<(x355<x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	static uint32_t x358 = 78163687U;
	int8_t x359 = 51;
	int64_t x360 = INT64_MIN;
	volatile int32_t t89 = 0;

	t89 = ((x357==x358)<(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = 29LL;
	volatile uint32_t x362 = 66492U;
	static int16_t x363 = INT16_MIN;
	static int32_t t90 = 11;

	t90 = ((x361==x362)<(x363<x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = 13146275;
	volatile int32_t t91 = 6709;

	t91 = ((x365==x366)<(x367<x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	int32_t x370 = INT32_MIN;
	uint8_t x372 = 2U;

	t92 = ((x369==x370)<(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x374 = 128172611092404106LLU;
	uint16_t x376 = 63U;
	volatile int32_t t93 = 1;

	t93 = ((x373==x374)<(x375<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 264U;
	int32_t x378 = INT32_MIN;
	uint16_t x380 = 7U;
	int32_t t94 = -3254;

	t94 = ((x377==x378)<(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	volatile uint8_t x382 = UINT8_MAX;
	int16_t x383 = -1;
	volatile uint64_t x384 = 256LLU;
	volatile int32_t t95 = -1147513;

	t95 = ((x381==x382)<(x383<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x385 = 3U;
	static int8_t x386 = -3;
	int16_t x388 = -1;
	int32_t t96 = 488556;

	t96 = ((x385==x386)<(x387<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x390 = INT16_MAX;

	t97 = ((x389==x390)<(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	int64_t x394 = 158LL;
	static int32_t x395 = -99;
	int8_t x396 = -1;
	static int32_t t98 = -35;

	t98 = ((x393==x394)<(x395<x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	int32_t x398 = INT32_MIN;
	static uint32_t x399 = 5U;
	volatile int8_t x400 = -1;
	volatile int32_t t99 = 4507;

	t99 = ((x397==x398)<(x399<x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

