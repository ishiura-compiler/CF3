#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 43469166718804222LLU;
uint64_t x7 = UINT64_MAX;
int8_t x8 = INT8_MAX;
uint16_t x10 = 22U;
volatile int32_t t2 = -45940;
int32_t t4 = 3;
uint64_t x29 = 62140LLU;
int16_t x33 = -1;
static int16_t x49 = INT16_MAX;
int8_t x53 = INT8_MIN;
volatile int8_t x60 = INT8_MAX;
int64_t x66 = INT64_MIN;
volatile int16_t x68 = INT16_MAX;
uint16_t x69 = 82U;
uint16_t x73 = UINT16_MAX;
static int16_t x74 = INT16_MAX;
uint64_t x75 = 11227LLU;
int32_t t18 = -279577156;
static uint16_t x93 = UINT16_MAX;
uint32_t x96 = 920923935U;
static uint16_t x97 = UINT16_MAX;
int32_t t23 = -36322524;
int32_t x109 = -52294;
uint16_t x113 = 1U;
int64_t x114 = -1LL;
uint32_t x120 = 55U;
uint8_t x125 = 0U;
int8_t x129 = INT8_MIN;
int32_t x137 = -239426465;
int16_t x138 = INT16_MIN;
int16_t x139 = -1;
static int64_t x143 = -1LL;
uint16_t x144 = UINT16_MAX;
volatile int16_t x146 = INT16_MIN;
static uint64_t x147 = 17096693409120LLU;
static uint64_t x151 = UINT64_MAX;
static int8_t x154 = INT8_MAX;
int8_t x157 = INT8_MAX;
static volatile int32_t t38 = 0;
uint16_t x166 = 7U;
static int32_t t39 = 950991;
uint32_t x172 = 101205U;
int64_t x178 = INT64_MIN;
static int32_t t42 = 42717918;
static int32_t x187 = INT32_MAX;
int16_t x188 = -3;
uint64_t x190 = UINT64_MAX;
int32_t t45 = -521817;
uint64_t x197 = UINT64_MAX;
uint32_t x204 = UINT32_MAX;
int32_t x207 = -1;
volatile int32_t t52 = 3;
uint16_t x221 = UINT16_MAX;
volatile uint32_t x223 = UINT32_MAX;
volatile int64_t x224 = 3524052885432082LL;
int16_t x229 = INT16_MAX;
int16_t x230 = INT16_MIN;
volatile int8_t x231 = -9;
volatile int16_t x235 = 10;
int32_t t56 = -1;
int32_t x241 = INT32_MIN;
uint8_t x242 = 38U;
static int64_t x248 = -1LL;
int64_t x249 = INT64_MIN;
volatile int64_t x252 = -26233315487LL;
uint8_t x255 = UINT8_MAX;
int32_t x256 = -918;
int64_t x260 = 58709035LL;
volatile int32_t t62 = -451;
static volatile uint32_t x262 = UINT32_MAX;
static int16_t x271 = 250;
static int32_t x272 = 1;
int32_t x276 = 41894356;
static int32_t t66 = 10576;
int32_t x277 = 27926666;
static int8_t x282 = INT8_MAX;
uint64_t x286 = 3053029097925268575LLU;
uint64_t x300 = 230LLU;
volatile int8_t x312 = INT8_MIN;
volatile int16_t x320 = INT16_MIN;
volatile uint32_t x323 = 3157959U;
static int64_t x324 = INT64_MIN;
int16_t x331 = -1;
uint64_t x333 = UINT64_MAX;
int8_t x341 = INT8_MAX;
static int32_t t83 = -1;
int64_t x352 = -97792793LL;
volatile int32_t t84 = 5800;
uint64_t x357 = 24150199LLU;
int16_t x358 = -147;
int32_t x361 = -40055052;
volatile int32_t t89 = -230286435;
uint32_t x378 = UINT32_MAX;
int32_t t90 = -186738306;
uint16_t x386 = 14U;
volatile uint16_t x398 = 1U;
volatile int16_t x404 = INT16_MIN;
volatile int32_t t98 = -452292;


void f0(void) {
	volatile uint32_t x1 = 772742U;
	int16_t x2 = 25;
	int16_t x3 = INT16_MIN;
	volatile int32_t t0 = 1354530;

	t0 = (x1<(x2+(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = UINT64_MAX;
	int32_t x6 = -1;
	int32_t t1 = 2549886;

	t1 = (x5<(x6+(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	uint64_t x11 = UINT64_MAX;
	uint32_t x12 = 486721U;

	t2 = (x9<(x10+(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 759057547899307LLU;
	static int16_t x14 = -62;
	int64_t x15 = INT64_MIN;
	uint8_t x16 = 16U;
	int32_t t3 = -6343;

	t3 = (x13<(x14+(x15<x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -6;
	uint32_t x18 = UINT32_MAX;
	volatile uint64_t x19 = UINT64_MAX;
	int32_t x20 = -1;

	t4 = (x17<(x18+(x19<x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MIN;
	int16_t x22 = INT16_MIN;
	int64_t x23 = INT64_MIN;
	static volatile int64_t x24 = INT64_MIN;
	static volatile int32_t t5 = 0;

	t5 = (x21<(x22+(x23<x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	int32_t x26 = INT32_MAX;
	int8_t x27 = -8;
	uint64_t x28 = 3620222353573281183LLU;
	volatile int32_t t6 = -14957516;

	t6 = (x25<(x26+(x27<x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = 0;
	int16_t x31 = INT16_MIN;
	volatile int64_t x32 = -1LL;
	int32_t t7 = -5228;

	t7 = (x29<(x30+(x31<x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = INT8_MAX;
	uint8_t x35 = 9U;
	uint32_t x36 = UINT32_MAX;
	int32_t t8 = -8090374;

	t8 = (x33<(x34+(x35<x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	static int32_t x38 = INT32_MIN;
	uint64_t x39 = 31269929539097041LLU;
	int64_t x40 = -90223LL;
	int32_t t9 = -1428965;

	t9 = (x37<(x38+(x39<x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -1;
	int8_t x42 = INT8_MIN;
	int16_t x43 = INT16_MIN;
	static int64_t x44 = INT64_MAX;
	volatile int32_t t10 = -13;

	t10 = (x41<(x42+(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x50 = UINT64_MAX;
	uint8_t x51 = 8U;
	int64_t x52 = 21627LL;
	volatile int32_t t11 = 3550294;

	t11 = (x49<(x50+(x51<x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x54 = 5327486660719826876LLU;
	static uint32_t x55 = 96192U;
	volatile int64_t x56 = 603552LL;
	int32_t t12 = 42081;

	t12 = (x53<(x54+(x55<x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x57 = 1138513523U;
	int8_t x58 = INT8_MAX;
	static volatile int64_t x59 = -1LL;
	static volatile int32_t t13 = -202;

	t13 = (x57<(x58+(x59<x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x61 = 48U;
	static int32_t x62 = INT32_MAX;
	int8_t x63 = 17;
	int8_t x64 = -2;
	static volatile int32_t t14 = -44474;

	t14 = (x61<(x62+(x63<x64)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	static volatile uint64_t x67 = 16LLU;
	volatile int32_t t15 = 1;

	t15 = (x65<(x66+(x67<x68)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x70 = INT16_MAX;
	int8_t x71 = -1;
	static uint32_t x72 = 229U;
	volatile int32_t t16 = -510110;

	t16 = (x69<(x70+(x71<x72)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x76 = UINT16_MAX;
	volatile int32_t t17 = 1985;

	t17 = (x73<(x74+(x75<x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = UINT64_MAX;
	int64_t x78 = INT64_MIN;
	static int32_t x79 = INT32_MIN;
	static int8_t x80 = INT8_MIN;

	t18 = (x77<(x78+(x79<x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 7026964LLU;
	int32_t x82 = INT32_MIN;
	static volatile int32_t x83 = -20265;
	static int64_t x84 = INT64_MIN;
	volatile int32_t t19 = -8527;

	t19 = (x81<(x82+(x83<x84)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = UINT8_MAX;
	static uint64_t x86 = 12899412LLU;
	int64_t x87 = INT64_MIN;
	uint16_t x88 = 11295U;
	static volatile int32_t t20 = -146492;

	t20 = (x85<(x86+(x87<x88)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x89 = UINT64_MAX;
	static volatile int8_t x90 = -16;
	static uint64_t x91 = 7018144562378611LLU;
	uint32_t x92 = UINT32_MAX;
	volatile int32_t t21 = 3;

	t21 = (x89<(x90+(x91<x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x94 = -1LL;
	static volatile uint64_t x95 = UINT64_MAX;
	int32_t t22 = 46125;

	t22 = (x93<(x94+(x95<x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x98 = -1LL;
	volatile uint16_t x99 = 16333U;
	volatile int16_t x100 = -1;

	t23 = (x97<(x98+(x99<x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = UINT16_MAX;
	uint16_t x102 = 193U;
	int16_t x103 = INT16_MAX;
	uint64_t x104 = 22274424122374965LLU;
	volatile int32_t t24 = 52356;

	t24 = (x101<(x102+(x103<x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x105 = -15;
	int64_t x106 = INT64_MIN;
	int8_t x107 = INT8_MIN;
	static uint32_t x108 = 4300U;
	int32_t t25 = -20;

	t25 = (x105<(x106+(x107<x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x110 = -1LL;
	volatile uint64_t x111 = 18527LLU;
	int8_t x112 = INT8_MAX;
	static volatile int32_t t26 = 1018;

	t26 = (x109<(x110+(x111<x112)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x115 = INT8_MIN;
	static int64_t x116 = INT64_MIN;
	volatile int32_t t27 = 397;

	t27 = (x113<(x114+(x115<x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MIN;
	int32_t x118 = INT32_MAX;
	uint64_t x119 = UINT64_MAX;
	int32_t t28 = -1485344;

	t28 = (x117<(x118+(x119<x120)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x126 = -1;
	int32_t x127 = -3;
	int32_t x128 = INT32_MIN;
	int32_t t29 = -6;

	t29 = (x125<(x126+(x127<x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x130 = UINT32_MAX;
	int8_t x131 = INT8_MAX;
	int32_t x132 = INT32_MIN;
	static int32_t t30 = 7157658;

	t30 = (x129<(x130+(x131<x132)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MIN;
	static volatile uint16_t x134 = UINT16_MAX;
	uint16_t x135 = UINT16_MAX;
	int32_t x136 = INT32_MIN;
	int32_t t31 = 0;

	t31 = (x133<(x134+(x135<x136)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x140 = UINT64_MAX;
	static volatile int32_t t32 = 13078;

	t32 = (x137<(x138+(x139<x140)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	int8_t x142 = INT8_MIN;
	volatile int32_t t33 = -263544;

	t33 = (x141<(x142+(x143<x144)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x145 = INT32_MIN;
	uint8_t x148 = 18U;
	int32_t t34 = 499302521;

	t34 = (x145<(x146+(x147<x148)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = 0;
	uint16_t x150 = UINT16_MAX;
	int64_t x152 = INT64_MIN;
	volatile int32_t t35 = -238906004;

	t35 = (x149<(x150+(x151<x152)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MAX;
	int16_t x155 = INT16_MAX;
	int8_t x156 = INT8_MIN;
	volatile int32_t t36 = 11341;

	t36 = (x153<(x154+(x155<x156)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x158 = -346091550;
	volatile uint32_t x159 = UINT32_MAX;
	static uint32_t x160 = 5321U;
	volatile int32_t t37 = 2056592;

	t37 = (x157<(x158+(x159<x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = 1;
	int64_t x162 = INT64_MIN;
	static volatile int16_t x163 = INT16_MAX;
	int64_t x164 = -85766252676LL;

	t38 = (x161<(x162+(x163<x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x165 = -1;
	int64_t x167 = INT64_MIN;
	uint32_t x168 = UINT32_MAX;

	t39 = (x165<(x166+(x167<x168)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = INT32_MIN;
	volatile int8_t x170 = INT8_MIN;
	uint16_t x171 = 1U;
	int32_t t40 = 0;

	t40 = (x169<(x170+(x171<x172)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = -1;
	static uint8_t x174 = 5U;
	uint16_t x175 = 1333U;
	uint32_t x176 = 48025929U;
	volatile int32_t t41 = -21575744;

	t41 = (x173<(x174+(x175<x176)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = 13609U;
	int16_t x179 = -328;
	volatile uint64_t x180 = 90777765993052LLU;

	t42 = (x177<(x178+(x179<x180)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x181 = -545723575694640LL;
	static int8_t x182 = -1;
	uint64_t x183 = UINT64_MAX;
	uint64_t x184 = 5398818552LLU;
	volatile int32_t t43 = -291687313;

	t43 = (x181<(x182+(x183<x184)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x185 = UINT8_MAX;
	int64_t x186 = -314LL;
	int32_t t44 = -5110501;

	t44 = (x185<(x186+(x187<x188)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x189 = INT16_MAX;
	volatile int64_t x191 = -1LL;
	int16_t x192 = INT16_MIN;

	t45 = (x189<(x190+(x191<x192)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x193 = INT64_MIN;
	int64_t x194 = -1123LL;
	static uint32_t x195 = 19415U;
	static int16_t x196 = INT16_MIN;
	int32_t t46 = 21709;

	t46 = (x193<(x194+(x195<x196)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x198 = INT64_MAX;
	int16_t x199 = -1;
	int8_t x200 = INT8_MIN;
	int32_t t47 = -3946184;

	t47 = (x197<(x198+(x199<x200)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x201 = 10692728898LLU;
	int32_t x202 = -1;
	int16_t x203 = INT16_MAX;
	volatile int32_t t48 = 4255;

	t48 = (x201<(x202+(x203<x204)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = -1;
	volatile int8_t x206 = INT8_MAX;
	static int64_t x208 = 0LL;
	volatile int32_t t49 = 1721990;

	t49 = (x205<(x206+(x207<x208)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x209 = 39U;
	int64_t x210 = INT64_MAX;
	volatile int16_t x211 = -1;
	int16_t x212 = -2;
	int32_t t50 = -119606;

	t50 = (x209<(x210+(x211<x212)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = INT64_MIN;
	volatile uint8_t x214 = 56U;
	uint8_t x215 = UINT8_MAX;
	volatile int32_t x216 = 73;
	int32_t t51 = 1;

	t51 = (x213<(x214+(x215<x216)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x217 = 2579597173822LLU;
	volatile int32_t x218 = -169304;
	static volatile int32_t x219 = -749881;
	uint16_t x220 = UINT16_MAX;

	t52 = (x217<(x218+(x219<x220)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x222 = UINT8_MAX;
	static int32_t t53 = -56205211;

	t53 = (x221<(x222+(x223<x224)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x225 = UINT32_MAX;
	int16_t x226 = -1;
	uint16_t x227 = UINT16_MAX;
	int64_t x228 = INT64_MAX;
	volatile int32_t t54 = 541585897;

	t54 = (x225<(x226+(x227<x228)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x232 = INT32_MIN;
	int32_t t55 = -37239358;

	t55 = (x229<(x230+(x231<x232)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x233 = UINT32_MAX;
	int16_t x234 = INT16_MIN;
	uint32_t x236 = UINT32_MAX;

	t56 = (x233<(x234+(x235<x236)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x237 = 9U;
	uint8_t x238 = 1U;
	volatile int32_t x239 = -1;
	int8_t x240 = 3;
	volatile int32_t t57 = 324;

	t57 = (x237<(x238+(x239<x240)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x243 = INT64_MIN;
	int8_t x244 = -3;
	int32_t t58 = -175;

	t58 = (x241<(x242+(x243<x244)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x245 = INT32_MAX;
	int8_t x246 = INT8_MIN;
	volatile uint8_t x247 = 44U;
	int32_t t59 = -127;

	t59 = (x245<(x246+(x247<x248)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x250 = INT32_MIN;
	int64_t x251 = 0LL;
	volatile int32_t t60 = 5300184;

	t60 = (x249<(x250+(x251<x252)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = 6680;
	volatile uint16_t x254 = UINT16_MAX;
	int32_t t61 = 13074598;

	t61 = (x253<(x254+(x255<x256)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x257 = UINT16_MAX;
	int32_t x258 = INT32_MIN;
	int16_t x259 = 78;

	t62 = (x257<(x258+(x259<x260)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = INT16_MIN;
	static int32_t x263 = -336881572;
	volatile int8_t x264 = INT8_MAX;
	volatile int32_t t63 = 4;

	t63 = (x261<(x262+(x263<x264)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = INT64_MAX;
	uint32_t x266 = UINT32_MAX;
	static uint16_t x267 = 2U;
	static int8_t x268 = -16;
	int32_t t64 = -11;

	t64 = (x265<(x266+(x267<x268)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = INT16_MIN;
	static volatile int16_t x270 = INT16_MIN;
	volatile int32_t t65 = -3681337;

	t65 = (x269<(x270+(x271<x272)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x273 = INT32_MIN;
	int64_t x274 = INT64_MIN;
	static uint64_t x275 = 1235LLU;

	t66 = (x273<(x274+(x275<x276)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x278 = UINT8_MAX;
	uint16_t x279 = 6325U;
	static volatile int8_t x280 = INT8_MAX;
	volatile int32_t t67 = -59276593;

	t67 = (x277<(x278+(x279<x280)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x281 = UINT8_MAX;
	volatile uint64_t x283 = UINT64_MAX;
	static uint64_t x284 = 794LLU;
	static volatile int32_t t68 = -1108045;

	t68 = (x281<(x282+(x283<x284)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = -1LL;
	int8_t x287 = INT8_MAX;
	int64_t x288 = 84080006163658821LL;
	static volatile int32_t t69 = -53;

	t69 = (x285<(x286+(x287<x288)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = 107LL;
	volatile uint16_t x290 = UINT16_MAX;
	int8_t x291 = INT8_MAX;
	int64_t x292 = -9891484805LL;
	volatile int32_t t70 = 5854651;

	t70 = (x289<(x290+(x291<x292)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x293 = -1;
	volatile int64_t x294 = INT64_MIN;
	volatile int32_t x295 = INT32_MAX;
	int16_t x296 = INT16_MIN;
	static volatile int32_t t71 = -237355;

	t71 = (x293<(x294+(x295<x296)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x297 = 26U;
	int8_t x298 = INT8_MAX;
	uint16_t x299 = 27765U;
	volatile int32_t t72 = 2;

	t72 = (x297<(x298+(x299<x300)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x301 = INT16_MIN;
	int32_t x302 = 27142;
	int64_t x303 = INT64_MAX;
	int8_t x304 = INT8_MIN;
	volatile int32_t t73 = 165533526;

	t73 = (x301<(x302+(x303<x304)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = 3U;
	uint16_t x306 = 887U;
	int16_t x307 = 88;
	static uint32_t x308 = 406411923U;
	int32_t t74 = 6365;

	t74 = (x305<(x306+(x307<x308)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x309 = INT64_MIN;
	int32_t x310 = 67624;
	static int32_t x311 = INT32_MAX;
	static int32_t t75 = 27647;

	t75 = (x309<(x310+(x311<x312)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x317 = INT16_MIN;
	int32_t x318 = -1;
	int8_t x319 = INT8_MAX;
	int32_t t76 = 143;

	t76 = (x317<(x318+(x319<x320)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x321 = UINT16_MAX;
	static volatile uint32_t x322 = 48U;
	int32_t t77 = 284;

	t77 = (x321<(x322+(x323<x324)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = 0;
	static int32_t x326 = 25;
	int64_t x327 = INT64_MAX;
	uint8_t x328 = 42U;
	int32_t t78 = 2508765;

	t78 = (x325<(x326+(x327<x328)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x329 = -3;
	int16_t x330 = -1;
	int64_t x332 = -1LL;
	static int32_t t79 = -130864;

	t79 = (x329<(x330+(x331<x332)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x334 = 16245471U;
	int8_t x335 = -1;
	int8_t x336 = INT8_MIN;
	static volatile int32_t t80 = -581343336;

	t80 = (x333<(x334+(x335<x336)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = 1;
	uint32_t x338 = 1158807U;
	int8_t x339 = 0;
	static volatile uint64_t x340 = UINT64_MAX;
	volatile int32_t t81 = 56;

	t81 = (x337<(x338+(x339<x340)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x342 = -589643;
	int32_t x343 = INT32_MAX;
	int8_t x344 = INT8_MAX;
	int32_t t82 = -39192;

	t82 = (x341<(x342+(x343<x344)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x345 = -1;
	int32_t x346 = 354795141;
	int64_t x347 = -6LL;
	int16_t x348 = -1;

	t83 = (x345<(x346+(x347<x348)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x349 = 7117984611954437219LLU;
	int8_t x350 = INT8_MIN;
	uint64_t x351 = UINT64_MAX;

	t84 = (x349<(x350+(x351<x352)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x353 = UINT64_MAX;
	int8_t x354 = -1;
	uint32_t x355 = 119914528U;
	int64_t x356 = INT64_MIN;
	int32_t t85 = -219;

	t85 = (x353<(x354+(x355<x356)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x359 = INT64_MAX;
	int16_t x360 = -3;
	int32_t t86 = -130229290;

	t86 = (x357<(x358+(x359<x360)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x362 = UINT8_MAX;
	int16_t x363 = -7790;
	uint8_t x364 = UINT8_MAX;
	int32_t t87 = 8139407;

	t87 = (x361<(x362+(x363<x364)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = INT64_MIN;
	uint16_t x366 = UINT16_MAX;
	int8_t x367 = INT8_MIN;
	int64_t x368 = INT64_MAX;
	static volatile int32_t t88 = -798983;

	t88 = (x365<(x366+(x367<x368)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x369 = 50240799509866LLU;
	static volatile int32_t x370 = -5555;
	volatile int16_t x371 = -1;
	int32_t x372 = INT32_MIN;

	t89 = (x369<(x370+(x371<x372)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = -3;
	uint64_t x379 = 13010047025164573LLU;
	volatile int8_t x380 = 2;

	t90 = (x377<(x378+(x379<x380)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x381 = UINT8_MAX;
	static uint16_t x382 = UINT16_MAX;
	int32_t x383 = INT32_MIN;
	static volatile uint16_t x384 = 23657U;
	int32_t t91 = -8353;

	t91 = (x381<(x382+(x383<x384)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x385 = 80U;
	int32_t x387 = 763399725;
	static uint64_t x388 = UINT64_MAX;
	volatile int32_t t92 = 0;

	t92 = (x385<(x386+(x387<x388)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = INT16_MIN;
	static volatile uint64_t x390 = 143LLU;
	static uint8_t x391 = 98U;
	int16_t x392 = 6139;
	int32_t t93 = 2926;

	t93 = (x389<(x390+(x391<x392)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x393 = INT32_MIN;
	volatile uint64_t x394 = 32LLU;
	volatile int64_t x395 = -1LL;
	int32_t x396 = INT32_MAX;
	volatile int32_t t94 = -119;

	t94 = (x393<(x394+(x395<x396)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x397 = 907087632648LLU;
	int32_t x399 = -2688074;
	volatile uint16_t x400 = 19U;
	int32_t t95 = -2785;

	t95 = (x397<(x398+(x399<x400)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = -10548;
	static volatile int64_t x402 = INT64_MIN;
	static int32_t x403 = 160;
	volatile int32_t t96 = 277318;

	t96 = (x401<(x402+(x403<x404)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x405 = -1;
	uint8_t x406 = 21U;
	static uint32_t x407 = 1786291U;
	int8_t x408 = INT8_MIN;
	volatile int32_t t97 = 111;

	t97 = (x405<(x406+(x407<x408)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x409 = INT32_MIN;
	volatile uint64_t x410 = 126587848198351662LLU;
	static volatile int32_t x411 = -725908;
	int8_t x412 = 0;

	t98 = (x409<(x410+(x411<x412)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x413 = 2U;
	int32_t x414 = INT32_MIN;
	int8_t x415 = INT8_MIN;
	int64_t x416 = INT64_MAX;
	int32_t t99 = 647867256;

	t99 = (x413<(x414+(x415<x416)));

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

