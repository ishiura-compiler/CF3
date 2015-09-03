#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MAX;
int64_t x3 = -86099103320LL;
volatile int32_t t1 = 24;
int16_t x14 = INT16_MIN;
static uint8_t x19 = UINT8_MAX;
int64_t x25 = INT64_MIN;
uint32_t x28 = UINT32_MAX;
int8_t x33 = INT8_MIN;
static uint8_t x38 = 3U;
uint16_t x41 = 24U;
int32_t t10 = -4086312;
static volatile uint32_t x50 = UINT32_MAX;
uint16_t x51 = 5U;
static uint16_t x60 = 277U;
volatile int16_t x62 = INT16_MAX;
static int32_t x63 = -1;
volatile int64_t x67 = -1LL;
int8_t x69 = -1;
volatile int32_t x71 = -1;
volatile uint8_t x73 = 9U;
int8_t x77 = INT8_MIN;
volatile int32_t t20 = 33077;
int64_t x87 = INT64_MIN;
static uint32_t x95 = 204U;
int8_t x96 = INT8_MIN;
int8_t x99 = 49;
static volatile int64_t x107 = INT64_MIN;
uint8_t x108 = 47U;
uint16_t x109 = UINT16_MAX;
static int8_t x110 = INT8_MAX;
volatile int8_t x112 = INT8_MAX;
static int32_t t27 = 503087;
int32_t x113 = -11557;
int8_t x118 = 1;
static int32_t x120 = INT32_MIN;
static int32_t t29 = -6193073;
int64_t x123 = INT64_MIN;
int32_t x126 = -1;
volatile uint16_t x131 = 6301U;
volatile int8_t x134 = INT8_MAX;
static int64_t x135 = INT64_MIN;
static int32_t t33 = -11001498;
static volatile uint8_t x137 = UINT8_MAX;
int64_t x146 = INT64_MIN;
static int64_t x148 = INT64_MIN;
int16_t x151 = INT16_MIN;
int32_t t37 = 3013;
int32_t x160 = -1;
volatile int8_t x163 = INT8_MIN;
int32_t t40 = -4404;
uint32_t x183 = 0U;
int8_t x185 = INT8_MAX;
int16_t x188 = INT16_MIN;
volatile int32_t t47 = 6942;
int64_t x193 = 2069720423472LL;
int64_t x195 = INT64_MAX;
int32_t x198 = INT32_MIN;
uint8_t x201 = 1U;
volatile int32_t x209 = -9046818;
int32_t x215 = 0;
volatile int32_t t53 = 1;
uint64_t x220 = 177089859519LLU;
int32_t t54 = -1280;
volatile int16_t x224 = 3;
static uint32_t x232 = 0U;
volatile int32_t t57 = 2214;
static int64_t x236 = INT64_MIN;
int32_t x237 = -1;
volatile uint64_t x241 = UINT64_MAX;
int8_t x242 = INT8_MIN;
int64_t x246 = INT64_MAX;
int64_t x256 = -1LL;
int32_t t65 = -56388;
int32_t t66 = -64249660;
int16_t x269 = -40;
static int32_t t68 = 532641734;
static volatile int16_t x279 = INT16_MIN;
int64_t x285 = 142435LL;
int32_t x286 = 2;
volatile uint32_t x287 = UINT32_MAX;
uint64_t x292 = 580181LLU;
static int32_t x296 = -1;
int16_t x298 = INT16_MAX;
static uint16_t x303 = UINT16_MAX;
int32_t t75 = 318887;
int64_t x305 = INT64_MAX;
volatile uint16_t x308 = UINT16_MAX;
uint8_t x312 = 2U;
static uint64_t x315 = 260866395484175LLU;
volatile uint16_t x321 = 13973U;
static int32_t t80 = 0;
int16_t x334 = INT16_MAX;
uint8_t x336 = 3U;
volatile uint16_t x348 = 11032U;
int8_t x350 = 1;
int32_t x356 = 26984544;
volatile uint8_t x365 = UINT8_MAX;
volatile int16_t x373 = INT16_MAX;
int16_t x382 = INT16_MIN;
volatile int32_t t95 = -16096;
uint8_t x385 = 3U;
uint64_t x388 = 19903LLU;
int32_t x390 = INT32_MIN;
int8_t x392 = INT8_MIN;
static int32_t t98 = -2790;


void f0(void) {
	int32_t x2 = INT32_MIN;
	static volatile int16_t x4 = INT16_MAX;
	volatile int32_t t0 = 11301;

	t0 = ((x1^x2)<(x3<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	uint64_t x6 = 250739024LLU;
	volatile uint8_t x7 = UINT8_MAX;
	uint64_t x8 = UINT64_MAX;

	t1 = ((x5^x6)<(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 7033606;
	int64_t x10 = INT64_MAX;
	uint16_t x11 = UINT16_MAX;
	static int32_t x12 = -1;
	volatile int32_t t2 = -3619660;

	t2 = ((x9^x10)<(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 1;
	volatile int16_t x15 = INT16_MIN;
	int32_t x16 = -1;
	static int32_t t3 = 15218112;

	t3 = ((x13^x14)<(x15<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = UINT16_MAX;
	int16_t x18 = INT16_MIN;
	static uint64_t x20 = 53809199826LLU;
	int32_t t4 = 16415;

	t4 = ((x17^x18)<(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = UINT16_MAX;
	int64_t x22 = -1LL;
	uint64_t x23 = 783123223441515LLU;
	volatile int32_t x24 = INT32_MAX;
	volatile int32_t t5 = 8448079;

	t5 = ((x21^x22)<(x23<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = -11;
	static uint8_t x27 = UINT8_MAX;
	int32_t t6 = -13;

	t6 = ((x25^x26)<(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -20;
	volatile int32_t x30 = INT32_MIN;
	int16_t x31 = INT16_MIN;
	int16_t x32 = INT16_MAX;
	volatile int32_t t7 = 200842490;

	t7 = ((x29^x30)<(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 194289193U;
	volatile uint8_t x35 = 22U;
	int32_t x36 = 15261;
	volatile int32_t t8 = -1226;

	t8 = ((x33^x34)<(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = 235U;
	static int32_t x39 = -1;
	uint32_t x40 = UINT32_MAX;
	int32_t t9 = 0;

	t9 = ((x37^x38)<(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x42 = 65192U;
	int8_t x43 = 0;
	static volatile int8_t x44 = INT8_MIN;

	t10 = ((x41^x42)<(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = 95;
	int16_t x46 = 48;
	uint32_t x47 = UINT32_MAX;
	volatile int8_t x48 = -23;
	int32_t t11 = -17316426;

	t11 = ((x45^x46)<(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	int8_t x52 = -55;
	int32_t t12 = 3883834;

	t12 = ((x49^x50)<(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = 1448;
	int16_t x54 = INT16_MIN;
	static uint32_t x55 = 1013526U;
	uint64_t x56 = 4386536661656693LLU;
	int32_t t13 = -104130218;

	t13 = ((x53^x54)<(x55<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int8_t x58 = INT8_MAX;
	int64_t x59 = INT64_MIN;
	int32_t t14 = 2051046;

	t14 = ((x57^x58)<(x59<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MIN;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t15 = 5;

	t15 = ((x61^x62)<(x63<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x65 = 10U;
	uint64_t x66 = 15028254LLU;
	volatile int32_t x68 = INT32_MAX;
	static volatile int32_t t16 = -109;

	t16 = ((x65^x66)<(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	uint64_t x72 = UINT64_MAX;
	volatile int32_t t17 = 280;

	t17 = ((x69^x70)<(x71<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x74 = 27509221U;
	static int8_t x75 = -1;
	volatile uint64_t x76 = 8424567303902LLU;
	int32_t t18 = 22652501;

	t18 = ((x73^x74)<(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x78 = INT32_MAX;
	int64_t x79 = 1149821719980961548LL;
	uint16_t x80 = 62U;
	static int32_t t19 = 0;

	t19 = ((x77^x78)<(x79<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 4U;
	int64_t x82 = 144958371528731546LL;
	volatile int64_t x83 = INT64_MIN;
	uint16_t x84 = 2738U;

	t20 = ((x81^x82)<(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	uint16_t x86 = 2U;
	uint8_t x88 = 27U;
	volatile int32_t t21 = -87;

	t21 = ((x85^x86)<(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 11115U;
	int8_t x90 = INT8_MIN;
	int64_t x91 = INT64_MIN;
	uint8_t x92 = 55U;
	volatile int32_t t22 = -60493801;

	t22 = ((x89^x90)<(x91<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 6;
	int32_t x94 = INT32_MAX;
	volatile int32_t t23 = -15675006;

	t23 = ((x93^x94)<(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 36630LL;
	int8_t x98 = -1;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -1742;

	t24 = ((x97^x98)<(x99<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	uint16_t x102 = 4U;
	int32_t x103 = INT32_MIN;
	int64_t x104 = INT64_MIN;
	volatile int32_t t25 = -284;

	t25 = ((x101^x102)<(x103<x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MAX;
	int32_t x106 = INT32_MAX;
	volatile int32_t t26 = 15234805;

	t26 = ((x105^x106)<(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x111 = -1LL;

	t27 = ((x109^x110)<(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x114 = -1;
	int32_t x115 = INT32_MIN;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = -112491;

	t28 = ((x113^x114)<(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	int64_t x119 = INT64_MAX;

	t29 = ((x117^x118)<(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 771U;
	int32_t x122 = INT32_MAX;
	int32_t x124 = 54137;
	int32_t t30 = 64824320;

	t30 = ((x121^x122)<(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	static uint32_t x127 = 4675780U;
	uint32_t x128 = 1062U;
	int32_t t31 = -8;

	t31 = ((x125^x126)<(x127<x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = INT16_MIN;
	int32_t x130 = INT32_MIN;
	static uint16_t x132 = UINT16_MAX;
	int32_t t32 = -2908379;

	t32 = ((x129^x130)<(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	static int32_t x136 = -18;

	t33 = ((x133^x134)<(x135<x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x138 = INT64_MIN;
	static int64_t x139 = 14000287LL;
	int64_t x140 = 146273174833LL;
	volatile int32_t t34 = -436787744;

	t34 = ((x137^x138)<(x139<x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x141 = 14U;
	int16_t x142 = INT16_MIN;
	volatile int64_t x143 = -1LL;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = 54520095;

	t35 = ((x141^x142)<(x143<x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 520;
	int32_t x147 = INT32_MIN;
	volatile int32_t t36 = -24;

	t36 = ((x145^x146)<(x147<x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -28;
	uint8_t x150 = 0U;
	int8_t x152 = -1;

	t37 = ((x149^x150)<(x151<x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	uint64_t x154 = 419614LLU;
	int16_t x155 = INT16_MIN;
	uint32_t x156 = 308996867U;
	int32_t t38 = -7;

	t38 = ((x153^x154)<(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 244LL;
	int16_t x158 = -2;
	volatile int64_t x159 = -1LL;
	int32_t t39 = 194;

	t39 = ((x157^x158)<(x159<x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 1193U;
	static uint16_t x162 = UINT16_MAX;
	int8_t x164 = -1;

	t40 = ((x161^x162)<(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = INT16_MIN;
	static uint64_t x166 = 217LLU;
	int16_t x167 = INT16_MIN;
	int32_t x168 = INT32_MAX;
	volatile int32_t t41 = 216628317;

	t41 = ((x165^x166)<(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = 13U;
	int32_t x170 = INT32_MIN;
	int16_t x171 = INT16_MIN;
	int32_t x172 = -590873;
	int32_t t42 = 14999;

	t42 = ((x169^x170)<(x171<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = 0LLU;
	int32_t x174 = -8306390;
	static uint64_t x175 = 6021359225195LLU;
	static int32_t x176 = 2093066;
	volatile int32_t t43 = -27;

	t43 = ((x173^x174)<(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 15U;
	volatile uint64_t x178 = 27LLU;
	int16_t x179 = -414;
	int64_t x180 = 1LL;
	volatile int32_t t44 = 1022;

	t44 = ((x177^x178)<(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	uint16_t x182 = 17859U;
	uint64_t x184 = 499284506967442LLU;
	int32_t t45 = 25;

	t45 = ((x181^x182)<(x183<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = INT8_MAX;
	uint32_t x187 = UINT32_MAX;
	volatile int32_t t46 = 8372380;

	t46 = ((x185^x186)<(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x189 = 16565681839LLU;
	int16_t x190 = 0;
	static int8_t x191 = 1;
	int16_t x192 = -25;

	t47 = ((x189^x190)<(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = INT32_MAX;
	static int64_t x196 = INT64_MIN;
	static volatile int32_t t48 = 116872;

	t48 = ((x193^x194)<(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x197 = 838327823;
	static int32_t x199 = 847717546;
	volatile uint8_t x200 = 99U;
	volatile int32_t t49 = 3;

	t49 = ((x197^x198)<(x199<x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = INT8_MAX;
	static volatile uint64_t x203 = UINT64_MAX;
	int16_t x204 = 6993;
	volatile int32_t t50 = 0;

	t50 = ((x201^x202)<(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	static volatile int16_t x206 = INT16_MIN;
	int8_t x207 = -1;
	volatile int8_t x208 = INT8_MAX;
	volatile int32_t t51 = -11828055;

	t51 = ((x205^x206)<(x207<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x210 = -1LL;
	int64_t x211 = INT64_MIN;
	static int32_t x212 = INT32_MAX;
	volatile int32_t t52 = 335976;

	t52 = ((x209^x210)<(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 55809855LLU;
	int64_t x214 = 4853559278LL;
	uint64_t x216 = 1087853623LLU;

	t53 = ((x213^x214)<(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x217 = 29U;
	volatile int16_t x218 = -1;
	int32_t x219 = INT32_MIN;

	t54 = ((x217^x218)<(x219<x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = UINT8_MAX;
	static volatile int32_t x222 = INT32_MAX;
	volatile int64_t x223 = 1813096604253188LL;
	int32_t t55 = -14;

	t55 = ((x221^x222)<(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = 68;
	uint8_t x226 = 2U;
	int64_t x227 = INT64_MAX;
	int64_t x228 = -64170863271LL;
	volatile int32_t t56 = 52022993;

	t56 = ((x225^x226)<(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 67U;
	int16_t x230 = -8;
	uint64_t x231 = 947737414761LLU;

	t57 = ((x229^x230)<(x231<x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = -1;
	int16_t x234 = -1;
	uint16_t x235 = 1U;
	int32_t t58 = 742108;

	t58 = ((x233^x234)<(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x238 = 5137U;
	static volatile uint64_t x239 = UINT64_MAX;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t59 = -65;

	t59 = ((x237^x238)<(x239<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x243 = -63263287LL;
	static volatile int16_t x244 = INT16_MIN;
	int32_t t60 = 83555984;

	t60 = ((x241^x242)<(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	int32_t x247 = 76140559;
	int64_t x248 = -1LL;
	static volatile int32_t t61 = 640240287;

	t61 = ((x245^x246)<(x247<x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 200U;
	static uint8_t x250 = UINT8_MAX;
	volatile int8_t x251 = 1;
	int64_t x252 = -1LL;
	static volatile int32_t t62 = -544461431;

	t62 = ((x249^x250)<(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -9630;
	uint16_t x254 = 3518U;
	uint8_t x255 = 1U;
	int32_t t63 = -16222028;

	t63 = ((x253^x254)<(x255<x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	uint16_t x258 = UINT16_MAX;
	uint64_t x259 = 426797194191988557LLU;
	volatile int16_t x260 = -5;
	static int32_t t64 = -24;

	t64 = ((x257^x258)<(x259<x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	int32_t x262 = INT32_MIN;
	int16_t x263 = INT16_MIN;
	int16_t x264 = 48;

	t65 = ((x261^x262)<(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = 1709611336038305LL;
	uint64_t x266 = 498LLU;
	uint16_t x267 = 266U;
	static int16_t x268 = INT16_MAX;

	t66 = ((x265^x266)<(x267<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x270 = INT16_MIN;
	static int16_t x271 = INT16_MAX;
	static uint16_t x272 = 23027U;
	int32_t t67 = -7189876;

	t67 = ((x269^x270)<(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 917363LLU;
	uint16_t x274 = UINT16_MAX;
	uint16_t x275 = UINT16_MAX;
	static int8_t x276 = INT8_MIN;

	t68 = ((x273^x274)<(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	int8_t x278 = -1;
	int16_t x280 = -3049;
	int32_t t69 = -1217891;

	t69 = ((x277^x278)<(x279<x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = UINT64_MAX;
	int8_t x282 = INT8_MAX;
	uint8_t x283 = UINT8_MAX;
	int64_t x284 = INT64_MIN;
	int32_t t70 = -4440;

	t70 = ((x281^x282)<(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x288 = INT16_MIN;
	volatile int32_t t71 = -1367;

	t71 = ((x285^x286)<(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	volatile int16_t x290 = INT16_MAX;
	int32_t x291 = -1;
	static volatile int32_t t72 = 882888;

	t72 = ((x289^x290)<(x291<x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = -37801891LL;
	int64_t x294 = INT64_MIN;
	static int16_t x295 = INT16_MIN;
	volatile int32_t t73 = 1;

	t73 = ((x293^x294)<(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = INT64_MAX;
	volatile int32_t x299 = -4979732;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t74 = 34;

	t74 = ((x297^x298)<(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x301 = 67U;
	int32_t x302 = INT32_MAX;
	int16_t x304 = 1213;

	t75 = ((x301^x302)<(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = -1;
	uint64_t x307 = 133632009868LLU;
	volatile int32_t t76 = -3;

	t76 = ((x305^x306)<(x307<x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = INT64_MIN;
	volatile uint16_t x310 = 5U;
	int64_t x311 = 1510685996684126760LL;
	volatile int32_t t77 = -579546;

	t77 = ((x309^x310)<(x311<x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MAX;
	int64_t x314 = INT64_MAX;
	int16_t x316 = -7598;
	volatile int32_t t78 = 47668855;

	t78 = ((x313^x314)<(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 432U;
	int8_t x318 = -2;
	int32_t x319 = INT32_MAX;
	int16_t x320 = -1;
	int32_t t79 = 386;

	t79 = ((x317^x318)<(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = -1;
	volatile int8_t x323 = -1;
	static int32_t x324 = INT32_MIN;

	t80 = ((x321^x322)<(x323<x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = INT16_MAX;
	uint16_t x326 = UINT16_MAX;
	int32_t x327 = INT32_MIN;
	int16_t x328 = -1;
	volatile int32_t t81 = 171945346;

	t81 = ((x325^x326)<(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = 42901981672526LL;
	uint64_t x330 = UINT64_MAX;
	int16_t x331 = 15;
	volatile int8_t x332 = INT8_MIN;
	int32_t t82 = 1;

	t82 = ((x329^x330)<(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	static int8_t x335 = -1;
	volatile int32_t t83 = -2;

	t83 = ((x333^x334)<(x335<x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 0;
	int8_t x338 = INT8_MAX;
	volatile int16_t x339 = -1;
	uint16_t x340 = 984U;
	static volatile int32_t t84 = 119443;

	t84 = ((x337^x338)<(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	static int32_t x342 = -1;
	volatile int32_t x343 = -652984;
	static int16_t x344 = INT16_MIN;
	int32_t t85 = 520231073;

	t85 = ((x341^x342)<(x343<x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -3423612465LL;
	int32_t x346 = INT32_MAX;
	static uint8_t x347 = 7U;
	volatile int32_t t86 = 11677499;

	t86 = ((x345^x346)<(x347<x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = 10;
	uint32_t x351 = UINT32_MAX;
	static int32_t x352 = INT32_MIN;
	int32_t t87 = -129;

	t87 = ((x349^x350)<(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 4U;
	int64_t x354 = INT64_MIN;
	int64_t x355 = INT64_MIN;
	int32_t t88 = 110;

	t88 = ((x353^x354)<(x355<x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x357 = UINT8_MAX;
	int16_t x358 = -1;
	int64_t x359 = 11193526LL;
	volatile int16_t x360 = INT16_MIN;
	static int32_t t89 = -1;

	t89 = ((x357^x358)<(x359<x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	static int16_t x362 = 102;
	int32_t x363 = 0;
	static int16_t x364 = 19;
	volatile int32_t t90 = -53;

	t90 = ((x361^x362)<(x363<x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x366 = UINT16_MAX;
	volatile uint16_t x367 = UINT16_MAX;
	uint16_t x368 = UINT16_MAX;
	static volatile int32_t t91 = 884171;

	t91 = ((x365^x366)<(x367<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x369 = INT16_MIN;
	volatile uint16_t x370 = 154U;
	int16_t x371 = -1;
	int8_t x372 = -12;
	int32_t t92 = -1;

	t92 = ((x369^x370)<(x371<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x374 = 25704;
	volatile int64_t x375 = 4680611187LL;
	uint8_t x376 = UINT8_MAX;
	int32_t t93 = -4123011;

	t93 = ((x373^x374)<(x375<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = INT16_MIN;
	static uint32_t x378 = 63U;
	static uint16_t x379 = 28U;
	static uint8_t x380 = 40U;
	int32_t t94 = 3;

	t94 = ((x377^x378)<(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = -1;
	int16_t x383 = 468;
	volatile int32_t x384 = INT32_MIN;

	t95 = ((x381^x382)<(x383<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x386 = 4301LLU;
	uint16_t x387 = UINT16_MAX;
	static volatile int32_t t96 = -169648874;

	t96 = ((x385^x386)<(x387<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 548172549547574693LLU;
	int64_t x391 = INT64_MIN;
	int32_t t97 = 838;

	t97 = ((x389^x390)<(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = -10;
	static int8_t x394 = -19;
	uint64_t x395 = UINT64_MAX;
	uint8_t x396 = 23U;

	t98 = ((x393^x394)<(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = INT64_MIN;
	uint16_t x398 = 135U;
	static int16_t x399 = -1;
	static uint64_t x400 = 1332LLU;
	int32_t t99 = 1346531;

	t99 = ((x397^x398)<(x399<x400));

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

