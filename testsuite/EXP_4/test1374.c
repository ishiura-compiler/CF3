#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MAX;
uint8_t x4 = 11U;
volatile int16_t x7 = INT16_MIN;
volatile int16_t x25 = 9;
int16_t x26 = -1;
uint32_t x35 = 6992635U;
static int16_t x36 = INT16_MAX;
static uint32_t x38 = 188821790U;
int64_t x43 = -1LL;
uint8_t x48 = 6U;
static int32_t t10 = 89997;
static int32_t x49 = -2;
int32_t t12 = 31;
volatile uint16_t x65 = 6U;
int8_t x72 = INT8_MIN;
uint32_t x73 = 568315U;
static volatile int32_t x83 = INT32_MIN;
int32_t t19 = -14;
uint32_t x98 = UINT32_MAX;
int16_t x105 = INT16_MIN;
static int8_t x111 = INT8_MIN;
int8_t x116 = 0;
int64_t x119 = -366600LL;
uint32_t x120 = UINT32_MAX;
uint8_t x121 = 3U;
static int64_t x135 = INT64_MIN;
int8_t x137 = 20;
uint8_t x140 = 0U;
int8_t x141 = 0;
uint16_t x148 = UINT16_MAX;
volatile int32_t t35 = -2;
int16_t x154 = -1;
static uint32_t x155 = UINT32_MAX;
uint8_t x164 = 30U;
static int8_t x182 = -1;
uint32_t x184 = UINT32_MAX;
static uint64_t x185 = 1915417071669812LLU;
static int16_t x187 = INT16_MAX;
int32_t t44 = 15918735;
static volatile int32_t x197 = INT32_MIN;
int16_t x207 = -10;
static int8_t x217 = INT8_MIN;
int32_t x229 = INT32_MAX;
uint64_t x231 = UINT64_MAX;
uint8_t x237 = 0U;
volatile int64_t x240 = 164169326564LL;
volatile int64_t x242 = -1LL;
volatile int32_t t58 = -6983;
uint8_t x255 = UINT8_MAX;
volatile int32_t x270 = -17186420;
uint64_t x284 = UINT64_MAX;
int8_t x285 = INT8_MIN;
int32_t x289 = -62917;
int16_t x290 = -1;
int64_t x295 = -1LL;
int16_t x296 = INT16_MAX;
int8_t x297 = INT8_MAX;
volatile int16_t x299 = -1;
uint16_t x314 = 29824U;
uint64_t x318 = 524599843879654LLU;
uint8_t x331 = 94U;
int16_t x334 = INT16_MIN;
int32_t x338 = 382;
int16_t x340 = INT16_MIN;
int32_t x344 = -2381;
int16_t x345 = -1;
int32_t x351 = -1;
static volatile int16_t x352 = -239;
volatile int32_t t80 = -88814133;
static uint8_t x353 = 1U;
uint16_t x356 = 5U;
int32_t t81 = -129;
uint64_t x364 = 3059789993LLU;
int64_t x368 = 237449563111LL;
uint16_t x381 = UINT16_MAX;
uint32_t x385 = 109926U;
volatile uint16_t x397 = 1485U;
volatile int64_t x407 = 25023LL;
int64_t x408 = -1LL;
int32_t x419 = -5;
static int64_t x424 = 6266524LL;
static int8_t x430 = -20;
int16_t x431 = 1;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	static uint32_t x3 = 0U;
	int32_t t0 = 3;

	t0 = (x1<(x2-(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -12174;
	int16_t x6 = INT16_MAX;
	volatile int64_t x8 = -11074770318LL;
	volatile int32_t t1 = 1;

	t1 = (x5<(x6-(x7<x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x9 = INT16_MIN;
	int8_t x10 = -3;
	volatile int8_t x11 = INT8_MIN;
	volatile int32_t x12 = INT32_MIN;
	int32_t t2 = 106650701;

	t2 = (x9<(x10-(x11<x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 49U;
	int32_t x18 = INT32_MIN;
	int16_t x19 = INT16_MAX;
	int64_t x20 = INT64_MIN;
	volatile int32_t t3 = 1;

	t3 = (x17<(x18-(x19<x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = INT16_MIN;
	int64_t x22 = 446637652291071121LL;
	volatile uint8_t x23 = 120U;
	static uint16_t x24 = 0U;
	volatile int32_t t4 = 7;

	t4 = (x21<(x22-(x23<x24)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x27 = -22304873689LL;
	uint16_t x28 = 409U;
	volatile int32_t t5 = 3465;

	t5 = (x25<(x26-(x27<x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	static uint16_t x30 = 21U;
	int32_t x31 = INT32_MAX;
	int16_t x32 = -1;
	volatile int32_t t6 = -2151270;

	t6 = (x29<(x30-(x31<x32)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = INT32_MIN;
	int32_t x34 = INT32_MAX;
	volatile int32_t t7 = -5;

	t7 = (x33<(x34-(x35<x36)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -1;
	volatile uint8_t x39 = UINT8_MAX;
	uint8_t x40 = 1U;
	static volatile int32_t t8 = -202;

	t8 = (x37<(x38-(x39<x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x41 = UINT32_MAX;
	static uint32_t x42 = 19200U;
	uint64_t x44 = 44011443LLU;
	int32_t t9 = -17897762;

	t9 = (x41<(x42-(x43<x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MAX;
	volatile int64_t x46 = -1LL;
	int32_t x47 = -312673921;

	t10 = (x45<(x46-(x47<x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = INT32_MIN;
	static volatile int32_t x51 = 49793;
	int8_t x52 = -61;
	int32_t t11 = 151987877;

	t11 = (x49<(x50-(x51<x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = 15;
	int32_t x54 = INT32_MAX;
	int8_t x55 = INT8_MIN;
	int32_t x56 = INT32_MIN;

	t12 = (x53<(x54-(x55<x56)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	int8_t x58 = 3;
	int32_t x59 = -33707;
	int32_t x60 = INT32_MAX;
	volatile int32_t t13 = 2728;

	t13 = (x57<(x58-(x59<x60)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x66 = -14;
	int16_t x67 = -1;
	uint64_t x68 = 0LLU;
	volatile int32_t t14 = 74;

	t14 = (x65<(x66-(x67<x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 5384410759894LLU;
	int8_t x70 = -1;
	volatile int64_t x71 = INT64_MAX;
	volatile int32_t t15 = -15;

	t15 = (x69<(x70-(x71<x72)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x74 = 34031792U;
	static volatile int32_t x75 = 652;
	volatile int8_t x76 = INT8_MIN;
	int32_t t16 = 0;

	t16 = (x73<(x74-(x75<x76)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = INT32_MIN;
	volatile uint8_t x78 = UINT8_MAX;
	int8_t x79 = INT8_MIN;
	int8_t x80 = -1;
	static volatile int32_t t17 = -41335;

	t17 = (x77<(x78-(x79<x80)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x81 = 13U;
	int32_t x82 = -845;
	int16_t x84 = -1;
	volatile int32_t t18 = -730;

	t18 = (x81<(x82-(x83<x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -1LL;
	int16_t x86 = INT16_MIN;
	uint16_t x87 = UINT16_MAX;
	volatile int8_t x88 = 6;

	t19 = (x85<(x86-(x87<x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = 1;
	static uint8_t x90 = UINT8_MAX;
	static int8_t x91 = INT8_MAX;
	static uint64_t x92 = 4506LLU;
	volatile int32_t t20 = 292828971;

	t20 = (x89<(x90-(x91<x92)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x93 = INT16_MIN;
	volatile int64_t x94 = 1066063305543LL;
	static uint64_t x95 = 223726841LLU;
	volatile int64_t x96 = INT64_MIN;
	int32_t t21 = -5130;

	t21 = (x93<(x94-(x95<x96)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MIN;
	uint64_t x99 = 32425393518860LLU;
	volatile int64_t x100 = INT64_MIN;
	volatile int32_t t22 = 973;

	t22 = (x97<(x98-(x99<x100)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x101 = INT64_MIN;
	int16_t x102 = INT16_MAX;
	int64_t x103 = INT64_MAX;
	int8_t x104 = INT8_MAX;
	volatile int32_t t23 = -417;

	t23 = (x101<(x102-(x103<x104)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x106 = 7U;
	uint64_t x107 = 27971431762128LLU;
	volatile int64_t x108 = -1LL;
	int32_t t24 = -371;

	t24 = (x105<(x106-(x107<x108)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = UINT16_MAX;
	volatile int8_t x110 = INT8_MAX;
	int16_t x112 = INT16_MIN;
	int32_t t25 = -131;

	t25 = (x109<(x110-(x111<x112)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x113 = 4U;
	static uint8_t x114 = 0U;
	uint16_t x115 = UINT16_MAX;
	static int32_t t26 = -35;

	t26 = (x113<(x114-(x115<x116)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x117 = -1;
	int64_t x118 = INT64_MAX;
	volatile int32_t t27 = -16707400;

	t27 = (x117<(x118-(x119<x120)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x122 = INT8_MAX;
	volatile int16_t x123 = -32;
	volatile int64_t x124 = INT64_MIN;
	int32_t t28 = 53617217;

	t28 = (x121<(x122-(x123<x124)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MAX;
	int32_t x126 = INT32_MIN;
	uint8_t x127 = 0U;
	static int32_t x128 = INT32_MIN;
	volatile int32_t t29 = -50252;

	t29 = (x125<(x126-(x127<x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MAX;
	int64_t x130 = 74LL;
	static volatile int8_t x131 = INT8_MIN;
	uint64_t x132 = UINT64_MAX;
	int32_t t30 = -185927;

	t30 = (x129<(x130-(x131<x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x133 = -24155642017580LL;
	int64_t x134 = -249826577LL;
	int32_t x136 = INT32_MIN;
	volatile int32_t t31 = -8;

	t31 = (x133<(x134-(x135<x136)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x138 = UINT16_MAX;
	static volatile int8_t x139 = INT8_MIN;
	volatile int32_t t32 = -6346987;

	t32 = (x137<(x138-(x139<x140)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x142 = 59U;
	static int16_t x143 = INT16_MIN;
	uint32_t x144 = UINT32_MAX;
	volatile int32_t t33 = -56802;

	t33 = (x141<(x142-(x143<x144)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x145 = 401809LL;
	volatile int16_t x146 = 7851;
	uint8_t x147 = UINT8_MAX;
	volatile int32_t t34 = 619;

	t34 = (x145<(x146-(x147<x148)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x149 = INT16_MAX;
	static int16_t x150 = INT16_MIN;
	uint16_t x151 = UINT16_MAX;
	uint16_t x152 = UINT16_MAX;

	t35 = (x149<(x150-(x151<x152)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = 15U;
	int64_t x156 = INT64_MIN;
	static int32_t t36 = -313722;

	t36 = (x153<(x154-(x155<x156)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = INT32_MIN;
	int64_t x162 = -1LL;
	int32_t x163 = INT32_MAX;
	int32_t t37 = -2092;

	t37 = (x161<(x162-(x163<x164)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = INT16_MIN;
	int8_t x166 = -1;
	volatile int64_t x167 = INT64_MIN;
	uint64_t x168 = 571646LLU;
	volatile int32_t t38 = 18827326;

	t38 = (x165<(x166-(x167<x168)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x169 = UINT16_MAX;
	static volatile int8_t x170 = 10;
	static int32_t x171 = INT32_MAX;
	static uint32_t x172 = 31159646U;
	static volatile int32_t t39 = 4676628;

	t39 = (x169<(x170-(x171<x172)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x173 = UINT32_MAX;
	uint8_t x174 = 61U;
	int32_t x175 = INT32_MAX;
	volatile int32_t x176 = INT32_MIN;
	int32_t t40 = 28986;

	t40 = (x173<(x174-(x175<x176)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x177 = UINT32_MAX;
	static uint8_t x178 = 4U;
	int16_t x179 = 3;
	static volatile int8_t x180 = -1;
	volatile int32_t t41 = 42130473;

	t41 = (x177<(x178-(x179<x180)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x181 = INT8_MIN;
	static uint8_t x183 = 1U;
	int32_t t42 = 57068;

	t42 = (x181<(x182-(x183<x184)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x186 = -1LL;
	volatile int64_t x188 = -1LL;
	volatile int32_t t43 = -475763639;

	t43 = (x185<(x186-(x187<x188)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = UINT16_MAX;
	uint8_t x190 = 8U;
	int8_t x191 = -1;
	static volatile int64_t x192 = INT64_MIN;

	t44 = (x189<(x190-(x191<x192)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x193 = UINT64_MAX;
	volatile int32_t x194 = -1;
	static uint64_t x195 = 157831800LLU;
	uint64_t x196 = 30178012682244733LLU;
	static int32_t t45 = -66;

	t45 = (x193<(x194-(x195<x196)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x198 = -1;
	static volatile int64_t x199 = INT64_MIN;
	int32_t x200 = INT32_MIN;
	int32_t t46 = -24881321;

	t46 = (x197<(x198-(x199<x200)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x201 = 17U;
	static int32_t x202 = 6698;
	static int32_t x203 = INT32_MIN;
	int64_t x204 = 4045308LL;
	int32_t t47 = -8192448;

	t47 = (x201<(x202-(x203<x204)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x205 = INT16_MIN;
	uint8_t x206 = 16U;
	static uint8_t x208 = 15U;
	int32_t t48 = 4978073;

	t48 = (x205<(x206-(x207<x208)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = UINT32_MAX;
	uint8_t x210 = UINT8_MAX;
	int16_t x211 = INT16_MIN;
	uint64_t x212 = 611806334349LLU;
	volatile int32_t t49 = -1;

	t49 = (x209<(x210-(x211<x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x213 = INT16_MAX;
	uint8_t x214 = 0U;
	int32_t x215 = -904763374;
	static uint16_t x216 = UINT16_MAX;
	volatile int32_t t50 = 280;

	t50 = (x213<(x214-(x215<x216)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x218 = 122237430308635LL;
	static volatile uint16_t x219 = 0U;
	int64_t x220 = -170996050735078597LL;
	volatile int32_t t51 = 0;

	t51 = (x217<(x218-(x219<x220)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = INT8_MIN;
	static volatile int8_t x226 = INT8_MAX;
	int16_t x227 = INT16_MIN;
	volatile int8_t x228 = INT8_MIN;
	int32_t t52 = 11368123;

	t52 = (x225<(x226-(x227<x228)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x230 = INT64_MIN;
	static volatile int32_t x232 = INT32_MIN;
	int32_t t53 = -223720;

	t53 = (x229<(x230-(x231<x232)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x233 = INT16_MAX;
	int32_t x234 = -14741586;
	uint8_t x235 = 31U;
	int16_t x236 = INT16_MIN;
	volatile int32_t t54 = -29407090;

	t54 = (x233<(x234-(x235<x236)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x238 = -1;
	volatile int64_t x239 = 1613LL;
	static volatile int32_t t55 = -1;

	t55 = (x237<(x238-(x239<x240)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = -1;
	uint8_t x243 = 3U;
	int16_t x244 = INT16_MIN;
	int32_t t56 = -2156;

	t56 = (x241<(x242-(x243<x244)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x245 = -17771847;
	int32_t x246 = INT32_MIN;
	int8_t x247 = 0;
	int8_t x248 = -1;
	int32_t t57 = -310;

	t57 = (x245<(x246-(x247<x248)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x249 = 296430071022710LLU;
	volatile int32_t x250 = -1;
	volatile int64_t x251 = 2372LL;
	static uint32_t x252 = 15230675U;

	t58 = (x249<(x250-(x251<x252)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x253 = 3U;
	volatile int64_t x254 = -6810380LL;
	int16_t x256 = INT16_MIN;
	int32_t t59 = 41;

	t59 = (x253<(x254-(x255<x256)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x261 = 1445029U;
	uint16_t x262 = 50U;
	int16_t x263 = INT16_MAX;
	uint32_t x264 = UINT32_MAX;
	volatile int32_t t60 = -1944;

	t60 = (x261<(x262-(x263<x264)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x265 = 71533278LLU;
	uint8_t x266 = UINT8_MAX;
	uint8_t x267 = 0U;
	int32_t x268 = INT32_MIN;
	int32_t t61 = 37338;

	t61 = (x265<(x266-(x267<x268)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x269 = 7U;
	static int16_t x271 = 1052;
	int16_t x272 = INT16_MIN;
	volatile int32_t t62 = 386;

	t62 = (x269<(x270-(x271<x272)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x273 = 1677U;
	int8_t x274 = 0;
	int8_t x275 = INT8_MAX;
	int8_t x276 = INT8_MIN;
	int32_t t63 = -121382006;

	t63 = (x273<(x274-(x275<x276)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = 1225;
	int8_t x278 = INT8_MIN;
	uint16_t x279 = UINT16_MAX;
	uint16_t x280 = 150U;
	volatile int32_t t64 = 0;

	t64 = (x277<(x278-(x279<x280)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x281 = 2037191LL;
	volatile int8_t x282 = INT8_MIN;
	volatile int8_t x283 = -1;
	volatile int32_t t65 = -57848069;

	t65 = (x281<(x282-(x283<x284)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x286 = 2U;
	volatile uint16_t x287 = 1U;
	volatile uint8_t x288 = UINT8_MAX;
	static int32_t t66 = 104191;

	t66 = (x285<(x286-(x287<x288)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x291 = -1LL;
	int8_t x292 = INT8_MIN;
	int32_t t67 = 191022822;

	t67 = (x289<(x290-(x291<x292)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x293 = -147246331455LL;
	static volatile int8_t x294 = INT8_MIN;
	volatile int32_t t68 = -182449;

	t68 = (x293<(x294-(x295<x296)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x298 = 22684U;
	int8_t x300 = 0;
	volatile int32_t t69 = 1;

	t69 = (x297<(x298-(x299<x300)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x309 = UINT16_MAX;
	volatile int32_t x310 = 27820;
	int64_t x311 = INT64_MIN;
	int32_t x312 = INT32_MIN;
	static volatile int32_t t70 = -214361;

	t70 = (x309<(x310-(x311<x312)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x313 = 2;
	int8_t x315 = -54;
	uint16_t x316 = UINT16_MAX;
	volatile int32_t t71 = -8240643;

	t71 = (x313<(x314-(x315<x316)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x317 = -1;
	int16_t x319 = -2023;
	static int16_t x320 = INT16_MIN;
	static int32_t t72 = 1462654;

	t72 = (x317<(x318-(x319<x320)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x321 = -12;
	int64_t x322 = INT64_MAX;
	int8_t x323 = 0;
	uint32_t x324 = 15U;
	int32_t t73 = -4781097;

	t73 = (x321<(x322-(x323<x324)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x325 = INT64_MIN;
	uint64_t x326 = UINT64_MAX;
	int32_t x327 = -1;
	volatile int16_t x328 = 6691;
	static volatile int32_t t74 = 1801077;

	t74 = (x325<(x326-(x327<x328)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x329 = 108021U;
	static volatile int16_t x330 = -2104;
	int32_t x332 = 1;
	int32_t t75 = -35330;

	t75 = (x329<(x330-(x331<x332)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x333 = 7975090202LL;
	volatile uint8_t x335 = 1U;
	uint32_t x336 = UINT32_MAX;
	static int32_t t76 = -11;

	t76 = (x333<(x334-(x335<x336)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x337 = INT16_MIN;
	uint64_t x339 = UINT64_MAX;
	static int32_t t77 = 25932443;

	t77 = (x337<(x338-(x339<x340)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x341 = INT64_MAX;
	volatile int32_t x342 = INT32_MIN;
	int64_t x343 = INT64_MAX;
	int32_t t78 = -5859147;

	t78 = (x341<(x342-(x343<x344)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x346 = UINT32_MAX;
	int32_t x347 = INT32_MIN;
	volatile int64_t x348 = INT64_MAX;
	volatile int32_t t79 = -6896;

	t79 = (x345<(x346-(x347<x348)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x349 = INT32_MIN;
	static uint8_t x350 = 5U;

	t80 = (x349<(x350-(x351<x352)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x354 = UINT64_MAX;
	volatile int64_t x355 = INT64_MIN;

	t81 = (x353<(x354-(x355<x356)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x357 = 2826U;
	uint8_t x358 = 7U;
	int32_t x359 = INT32_MIN;
	int64_t x360 = -13702069LL;
	static int32_t t82 = -11947;

	t82 = (x357<(x358-(x359<x360)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x361 = 105U;
	int16_t x362 = INT16_MIN;
	int64_t x363 = -1LL;
	int32_t t83 = 831;

	t83 = (x361<(x362-(x363<x364)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x365 = INT64_MIN;
	static int32_t x366 = -70725319;
	int32_t x367 = INT32_MIN;
	static int32_t t84 = -87269368;

	t84 = (x365<(x366-(x367<x368)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x369 = INT8_MAX;
	int16_t x370 = -1;
	int64_t x371 = INT64_MIN;
	uint64_t x372 = 1079976945849569167LLU;
	int32_t t85 = 5;

	t85 = (x369<(x370-(x371<x372)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x373 = 0;
	int8_t x374 = 2;
	volatile int16_t x375 = INT16_MIN;
	volatile uint64_t x376 = 4087LLU;
	volatile int32_t t86 = -10;

	t86 = (x373<(x374-(x375<x376)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x377 = UINT64_MAX;
	static uint64_t x378 = 524172181LLU;
	volatile int8_t x379 = INT8_MIN;
	static int32_t x380 = INT32_MIN;
	int32_t t87 = -1;

	t87 = (x377<(x378-(x379<x380)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x382 = INT8_MIN;
	uint32_t x383 = 39538U;
	static volatile int32_t x384 = 314;
	int32_t t88 = -57;

	t88 = (x381<(x382-(x383<x384)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x386 = 570;
	static uint64_t x387 = 3761429LLU;
	static int16_t x388 = INT16_MIN;
	volatile int32_t t89 = 27;

	t89 = (x385<(x386-(x387<x388)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x393 = INT32_MIN;
	volatile int8_t x394 = INT8_MIN;
	static uint64_t x395 = UINT64_MAX;
	uint32_t x396 = UINT32_MAX;
	volatile int32_t t90 = -12272472;

	t90 = (x393<(x394-(x395<x396)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x398 = -22541238481816347LL;
	volatile int16_t x399 = -3;
	uint32_t x400 = 58167389U;
	volatile int32_t t91 = 235791094;

	t91 = (x397<(x398-(x399<x400)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x405 = UINT8_MAX;
	volatile int16_t x406 = -1;
	static volatile int32_t t92 = 1;

	t92 = (x405<(x406-(x407<x408)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x409 = INT64_MIN;
	static uint16_t x410 = 282U;
	int64_t x411 = -1LL;
	int32_t x412 = INT32_MIN;
	int32_t t93 = 111334506;

	t93 = (x409<(x410-(x411<x412)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x413 = 1U;
	static int16_t x414 = INT16_MAX;
	static volatile int8_t x415 = 16;
	volatile int32_t x416 = INT32_MAX;
	volatile int32_t t94 = 1868738;

	t94 = (x413<(x414-(x415<x416)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x417 = INT8_MIN;
	int8_t x418 = -1;
	static int64_t x420 = INT64_MIN;
	static int32_t t95 = 1718491;

	t95 = (x417<(x418-(x419<x420)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x421 = UINT16_MAX;
	static int16_t x422 = -1;
	int16_t x423 = -1;
	volatile int32_t t96 = 7135857;

	t96 = (x421<(x422-(x423<x424)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x429 = INT32_MIN;
	int64_t x432 = -1LL;
	static volatile int32_t t97 = 14031216;

	t97 = (x429<(x430-(x431<x432)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x433 = 50LL;
	int32_t x434 = INT32_MIN;
	int32_t x435 = 142548469;
	uint16_t x436 = 1619U;
	volatile int32_t t98 = 1;

	t98 = (x433<(x434-(x435<x436)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x437 = -53;
	uint32_t x438 = 2U;
	int64_t x439 = INT64_MIN;
	uint16_t x440 = 287U;
	int32_t t99 = 1;

	t99 = (x437<(x438-(x439<x440)));

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

