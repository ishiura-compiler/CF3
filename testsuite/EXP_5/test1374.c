#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x8 = 28U;
int32_t x10 = INT32_MAX;
uint8_t x12 = 36U;
int32_t t1 = 5;
static int64_t x16 = INT64_MAX;
int8_t x19 = INT8_MIN;
int8_t x20 = INT8_MAX;
int32_t t6 = -26596;
volatile int16_t x36 = INT16_MIN;
static volatile int64_t x37 = INT64_MIN;
static int16_t x41 = INT16_MIN;
int32_t x43 = -1;
int8_t x49 = INT8_MIN;
uint16_t x52 = 724U;
static int32_t x58 = INT32_MAX;
uint16_t x60 = 21427U;
volatile int32_t t14 = -1;
uint64_t x68 = 13LLU;
static int32_t t17 = 28740;
uint8_t x78 = 2U;
static int32_t t18 = 76800226;
static int32_t t19 = -2729;
int8_t x85 = INT8_MIN;
static volatile int32_t t20 = -95362929;
int64_t x92 = 136070862815LL;
volatile int32_t t21 = 0;
static int8_t x93 = INT8_MIN;
int64_t x100 = -1LL;
volatile int32_t t23 = -28477;
static uint16_t x104 = 6677U;
int32_t t24 = 1;
static int32_t x108 = 7785;
static int32_t x114 = 4;
static int32_t x123 = -107686971;
volatile int32_t x124 = -6;
static uint8_t x130 = 90U;
uint64_t x135 = UINT64_MAX;
int8_t x136 = INT8_MIN;
int32_t x138 = -7618;
uint64_t x139 = 17703818LLU;
static volatile int32_t t32 = -769;
int8_t x141 = -55;
uint16_t x142 = 3U;
uint32_t x159 = 93U;
volatile int32_t t37 = -28772313;
int8_t x173 = INT8_MIN;
int16_t x178 = INT16_MIN;
static volatile int8_t x187 = INT8_MAX;
uint64_t x190 = UINT64_MAX;
static uint64_t x192 = 714LLU;
static volatile int32_t t43 = -809814;
int32_t t45 = 55132651;
int32_t x207 = INT32_MAX;
uint16_t x213 = UINT16_MAX;
int32_t t48 = 254615;
int16_t x219 = -1;
uint64_t x234 = UINT64_MAX;
uint8_t x236 = 3U;
int64_t x243 = 2064579273875151LL;
volatile int32_t t54 = -31500134;
static int32_t x245 = INT32_MIN;
int16_t x246 = 11963;
uint64_t x261 = 89350327245LLU;
int16_t x262 = -1;
int32_t x268 = -1;
int32_t t61 = -272;
static volatile int8_t x278 = -9;
volatile int32_t t64 = 9;
static int16_t x289 = -1;
uint32_t x291 = 4045U;
int64_t x294 = INT64_MAX;
volatile int64_t x315 = -22455499267LL;
static int32_t t72 = -1;
int64_t x321 = INT64_MIN;
int8_t x323 = -31;
int64_t x326 = INT64_MIN;
volatile int32_t t74 = -680346;
uint32_t x329 = 1987U;
int8_t x332 = -6;
int64_t x340 = -1LL;
static volatile uint64_t x341 = 277341578839074LLU;
uint16_t x342 = 228U;
int64_t x345 = INT64_MAX;
int32_t x346 = INT32_MIN;
volatile uint32_t x347 = 155206309U;
static volatile int64_t x355 = INT64_MIN;
uint64_t x359 = 4644146408831671LLU;
volatile uint64_t x362 = UINT64_MAX;
int16_t x370 = 13;
int32_t x373 = 3005;
volatile int16_t x374 = -179;
uint64_t x382 = 2015136509LLU;
int8_t x383 = -1;
volatile uint16_t x389 = 455U;
volatile int16_t x393 = INT16_MIN;
int8_t x394 = -4;
volatile int8_t x396 = INT8_MIN;
volatile int32_t t91 = 20482630;
static uint8_t x397 = UINT8_MAX;
int8_t x399 = INT8_MIN;
static uint8_t x403 = UINT8_MAX;
uint16_t x404 = 14U;
volatile uint16_t x405 = 2U;
int8_t x414 = INT8_MAX;
static int64_t x415 = 271994431672LL;
int32_t t96 = -8081039;
static int8_t x425 = 19;
uint8_t x428 = 18U;
static int32_t t98 = -657398;


void f0(void) {
	volatile int8_t x5 = -1;
	volatile int16_t x6 = 157;
	int32_t x7 = -1;
	volatile int32_t t0 = -57998;

	t0 = (x5<((x6<x7)-x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x9 = 1498LLU;
	int16_t x11 = INT16_MIN;

	t1 = (x9<((x10<x11)-x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	int16_t x14 = 3;
	int64_t x15 = 31395637257LL;
	int32_t t2 = -523632;

	t2 = (x13<((x14<x15)-x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x17 = INT32_MAX;
	int64_t x18 = -5LL;
	volatile int32_t t3 = -9;

	t3 = (x17<((x18<x19)-x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	int16_t x22 = INT16_MIN;
	int16_t x23 = INT16_MIN;
	int32_t x24 = -1;
	volatile int32_t t4 = -917;

	t4 = (x21<((x22<x23)-x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	int64_t x26 = -5403006973LL;
	volatile uint64_t x27 = UINT64_MAX;
	int8_t x28 = INT8_MAX;
	int32_t t5 = 44396;

	t5 = (x25<((x26<x27)-x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = UINT32_MAX;
	int32_t x30 = 2700;
	volatile int16_t x31 = INT16_MIN;
	int8_t x32 = INT8_MIN;

	t6 = (x29<((x30<x31)-x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	volatile int32_t x34 = 11484996;
	int8_t x35 = -1;
	static int32_t t7 = 1400606;

	t7 = (x33<((x34<x35)-x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x38 = 12LL;
	uint32_t x39 = 18171U;
	volatile uint64_t x40 = UINT64_MAX;
	int32_t t8 = -330750609;

	t8 = (x37<((x38<x39)-x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x42 = 2771651804LLU;
	static int64_t x44 = INT64_MAX;
	volatile int32_t t9 = 14492;

	t9 = (x41<((x42<x43)-x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = 180306857535LL;
	int64_t x46 = -1LL;
	static uint8_t x47 = 6U;
	int64_t x48 = -25363926471069LL;
	volatile int32_t t10 = -70511;

	t10 = (x45<((x46<x47)-x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x50 = INT8_MIN;
	volatile int32_t x51 = -1496;
	int32_t t11 = -85969225;

	t11 = (x49<((x50<x51)-x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MAX;
	volatile int8_t x54 = INT8_MAX;
	int16_t x55 = -15;
	int16_t x56 = -1;
	volatile int32_t t12 = 5477264;

	t12 = (x53<((x54<x55)-x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -44;
	volatile int32_t x59 = INT32_MIN;
	int32_t t13 = -2094347;

	t13 = (x57<((x58<x59)-x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	int16_t x62 = -1;
	int64_t x63 = -16199080485491LL;
	int16_t x64 = INT16_MAX;

	t14 = (x61<((x62<x63)-x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x65 = UINT32_MAX;
	int64_t x66 = INT64_MAX;
	int16_t x67 = -1;
	int32_t t15 = 12731;

	t15 = (x65<((x66<x67)-x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x69 = 21900733199532248LLU;
	uint8_t x70 = 11U;
	int64_t x71 = -296836LL;
	int32_t x72 = INT32_MAX;
	static volatile int32_t t16 = 5;

	t16 = (x69<((x70<x71)-x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 2U;
	uint16_t x74 = 3011U;
	int16_t x75 = INT16_MAX;
	int64_t x76 = 6098470215995588LL;

	t17 = (x73<((x74<x75)-x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MAX;
	int8_t x79 = INT8_MIN;
	volatile int16_t x80 = -1;

	t18 = (x77<((x78<x79)-x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x81 = -1LL;
	volatile int16_t x82 = INT16_MIN;
	uint32_t x83 = 4681U;
	uint8_t x84 = 14U;

	t19 = (x81<((x82<x83)-x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x86 = -1;
	int64_t x87 = -1LL;
	int8_t x88 = INT8_MIN;

	t20 = (x85<((x86<x87)-x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 1294773174U;
	int16_t x90 = -1;
	uint8_t x91 = 13U;

	t21 = (x89<((x90<x91)-x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x94 = 3356852878LLU;
	int16_t x95 = INT16_MIN;
	static int64_t x96 = -1LL;
	static volatile int32_t t22 = -7482;

	t22 = (x93<((x94<x95)-x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 3U;
	int8_t x98 = -28;
	static uint64_t x99 = UINT64_MAX;

	t23 = (x97<((x98<x99)-x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 70744LLU;
	static volatile int8_t x102 = -1;
	int16_t x103 = 2;

	t24 = (x101<((x102<x103)-x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = 1;
	int64_t x106 = -1LL;
	uint32_t x107 = 19128949U;
	static int32_t t25 = 666;

	t25 = (x105<((x106<x107)-x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MAX;
	uint32_t x110 = 3526U;
	uint16_t x111 = UINT16_MAX;
	uint8_t x112 = 7U;
	static int32_t t26 = -3483;

	t26 = (x109<((x110<x111)-x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x113 = -31;
	uint8_t x115 = 13U;
	int8_t x116 = INT8_MIN;
	int32_t t27 = 67;

	t27 = (x113<((x114<x115)-x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x121 = -10440285;
	int32_t x122 = INT32_MAX;
	static volatile int32_t t28 = 1;

	t28 = (x121<((x122<x123)-x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x125 = -5;
	int16_t x126 = INT16_MIN;
	int32_t x127 = -5;
	uint64_t x128 = 456032137413512108LLU;
	volatile int32_t t29 = -40528514;

	t29 = (x125<((x126<x127)-x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = -1;
	volatile int32_t x131 = 27794;
	int32_t x132 = INT32_MAX;
	int32_t t30 = 1;

	t30 = (x129<((x130<x131)-x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x133 = 94;
	int16_t x134 = -58;
	int32_t t31 = -1;

	t31 = (x133<((x134<x135)-x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = INT32_MIN;
	int8_t x140 = INT8_MIN;

	t32 = (x137<((x138<x139)-x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x143 = INT32_MIN;
	int16_t x144 = INT16_MIN;
	int32_t t33 = 3929;

	t33 = (x141<((x142<x143)-x144));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = 7651LLU;
	volatile uint16_t x150 = 229U;
	int8_t x151 = -1;
	int16_t x152 = INT16_MIN;
	int32_t t34 = 13;

	t34 = (x149<((x150<x151)-x152));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x153 = UINT32_MAX;
	uint64_t x154 = UINT64_MAX;
	uint64_t x155 = 138658081LLU;
	volatile int16_t x156 = INT16_MIN;
	int32_t t35 = 3726120;

	t35 = (x153<((x154<x155)-x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x157 = 41U;
	int32_t x158 = -1;
	uint8_t x160 = 3U;
	static int32_t t36 = 97260;

	t36 = (x157<((x158<x159)-x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x165 = UINT16_MAX;
	int8_t x166 = -5;
	static int32_t x167 = INT32_MIN;
	static uint16_t x168 = 3U;

	t37 = (x165<((x166<x167)-x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = INT64_MIN;
	static int16_t x170 = INT16_MAX;
	volatile int8_t x171 = 7;
	int64_t x172 = -90870924702026549LL;
	static volatile int32_t t38 = 2693469;

	t38 = (x169<((x170<x171)-x172));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x174 = 895LLU;
	uint32_t x175 = UINT32_MAX;
	int16_t x176 = -31;
	static int32_t t39 = 10;

	t39 = (x173<((x174<x175)-x176));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x177 = INT64_MIN;
	uint8_t x179 = 28U;
	volatile int8_t x180 = INT8_MIN;
	volatile int32_t t40 = -79625731;

	t40 = (x177<((x178<x179)-x180));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x181 = 0;
	volatile int32_t x182 = INT32_MIN;
	uint16_t x183 = UINT16_MAX;
	uint64_t x184 = 215487346256LLU;
	volatile int32_t t41 = -19446;

	t41 = (x181<((x182<x183)-x184));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x185 = 58584209U;
	int8_t x186 = INT8_MAX;
	volatile uint8_t x188 = 2U;
	volatile int32_t t42 = -6672;

	t42 = (x185<((x186<x187)-x188));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x189 = UINT32_MAX;
	int16_t x191 = INT16_MAX;

	t43 = (x189<((x190<x191)-x192));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = INT64_MAX;
	uint64_t x194 = 46LLU;
	int32_t x195 = INT32_MAX;
	int16_t x196 = -1;
	volatile int32_t t44 = -1820;

	t44 = (x193<((x194<x195)-x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = -1;
	int64_t x198 = 1877797310359035LL;
	static uint32_t x199 = UINT32_MAX;
	volatile int32_t x200 = -1;

	t45 = (x197<((x198<x199)-x200));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x205 = 3591403746635350LLU;
	int8_t x206 = INT8_MIN;
	int64_t x208 = -1LL;
	volatile int32_t t46 = 3902;

	t46 = (x205<((x206<x207)-x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x209 = -1;
	volatile int32_t x210 = INT32_MIN;
	uint32_t x211 = 7476425U;
	volatile int8_t x212 = 1;
	int32_t t47 = -1;

	t47 = (x209<((x210<x211)-x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x214 = UINT64_MAX;
	int8_t x215 = INT8_MIN;
	static volatile int64_t x216 = INT64_MAX;

	t48 = (x213<((x214<x215)-x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = -2;
	int64_t x218 = -3020265882431808LL;
	int16_t x220 = INT16_MIN;
	int32_t t49 = -319148409;

	t49 = (x217<((x218<x219)-x220));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x225 = -1;
	int16_t x226 = INT16_MAX;
	static int8_t x227 = -6;
	int8_t x228 = 1;
	volatile int32_t t50 = 634074;

	t50 = (x225<((x226<x227)-x228));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x229 = -436;
	uint32_t x230 = 4484U;
	volatile int64_t x231 = INT64_MAX;
	volatile int16_t x232 = INT16_MAX;
	int32_t t51 = 6;

	t51 = (x229<((x230<x231)-x232));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = INT64_MAX;
	int64_t x235 = INT64_MAX;
	int32_t t52 = 11270920;

	t52 = (x233<((x234<x235)-x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x237 = -542240884708LL;
	int16_t x238 = 90;
	int8_t x239 = INT8_MAX;
	int64_t x240 = -1LL;
	int32_t t53 = -24135;

	t53 = (x237<((x238<x239)-x240));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = -1;
	int16_t x242 = -2997;
	int64_t x244 = 807LL;

	t54 = (x241<((x242<x243)-x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x247 = -49149;
	static volatile int8_t x248 = INT8_MIN;
	volatile int32_t t55 = 473612159;

	t55 = (x245<((x246<x247)-x248));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = INT16_MIN;
	int32_t x250 = -220417;
	int16_t x251 = INT16_MIN;
	int16_t x252 = INT16_MIN;
	int32_t t56 = -1039266266;

	t56 = (x249<((x250<x251)-x252));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x253 = 600695675LLU;
	uint8_t x254 = UINT8_MAX;
	int8_t x255 = -1;
	int16_t x256 = INT16_MIN;
	static int32_t t57 = 32878;

	t57 = (x253<((x254<x255)-x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x257 = INT8_MAX;
	static uint8_t x258 = 5U;
	uint16_t x259 = 3159U;
	volatile uint8_t x260 = 3U;
	volatile int32_t t58 = 61;

	t58 = (x257<((x258<x259)-x260));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x263 = 6U;
	int16_t x264 = INT16_MAX;
	volatile int32_t t59 = -104588;

	t59 = (x261<((x262<x263)-x264));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x265 = UINT64_MAX;
	int16_t x266 = INT16_MIN;
	int8_t x267 = 14;
	int32_t t60 = 6;

	t60 = (x265<((x266<x267)-x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = INT16_MIN;
	static uint32_t x270 = UINT32_MAX;
	static int32_t x271 = INT32_MIN;
	volatile int64_t x272 = -1LL;

	t61 = (x269<((x270<x271)-x272));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x273 = UINT64_MAX;
	volatile uint16_t x274 = 1537U;
	uint32_t x275 = 417U;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t62 = 4;

	t62 = (x273<((x274<x275)-x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x277 = UINT8_MAX;
	int16_t x279 = INT16_MIN;
	int64_t x280 = 0LL;
	static volatile int32_t t63 = -100233030;

	t63 = (x277<((x278<x279)-x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x281 = INT16_MIN;
	int16_t x282 = -1;
	static volatile uint8_t x283 = UINT8_MAX;
	uint8_t x284 = 40U;

	t64 = (x281<((x282<x283)-x284));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x285 = 5355U;
	uint16_t x286 = 1771U;
	static uint64_t x287 = 3559295LLU;
	volatile uint64_t x288 = 8324230671457820890LLU;
	volatile int32_t t65 = 110;

	t65 = (x285<((x286<x287)-x288));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x290 = -2554641207484LL;
	int16_t x292 = 2;
	int32_t t66 = 533;

	t66 = (x289<((x290<x291)-x292));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x293 = -8708839LL;
	uint16_t x295 = 180U;
	int16_t x296 = 2;
	static int32_t t67 = 442889;

	t67 = (x293<((x294<x295)-x296));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x297 = 8478438361562LLU;
	uint64_t x298 = 2098269252185LLU;
	volatile uint16_t x299 = 30U;
	int16_t x300 = INT16_MIN;
	int32_t t68 = -5702657;

	t68 = (x297<((x298<x299)-x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x301 = -361;
	int64_t x302 = INT64_MAX;
	uint32_t x303 = UINT32_MAX;
	uint8_t x304 = 1U;
	static int32_t t69 = -62123;

	t69 = (x301<((x302<x303)-x304));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x305 = INT32_MIN;
	int32_t x306 = INT32_MIN;
	volatile uint64_t x307 = 1587LLU;
	volatile uint64_t x308 = 0LLU;
	static int32_t t70 = -84;

	t70 = (x305<((x306<x307)-x308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x313 = INT64_MIN;
	static uint32_t x314 = UINT32_MAX;
	int64_t x316 = -1LL;
	volatile int32_t t71 = -1579;

	t71 = (x313<((x314<x315)-x316));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x317 = UINT32_MAX;
	volatile uint16_t x318 = 16797U;
	uint8_t x319 = 15U;
	uint16_t x320 = 1U;

	t72 = (x317<((x318<x319)-x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x322 = 8960U;
	int16_t x324 = -2608;
	int32_t t73 = -1;

	t73 = (x321<((x322<x323)-x324));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x325 = INT8_MIN;
	int64_t x327 = -24598134050497881LL;
	int16_t x328 = -6081;

	t74 = (x325<((x326<x327)-x328));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x330 = UINT64_MAX;
	uint8_t x331 = 28U;
	int32_t t75 = -23988;

	t75 = (x329<((x330<x331)-x332));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x333 = 47;
	volatile int16_t x334 = -1;
	int16_t x335 = 11296;
	int8_t x336 = INT8_MIN;
	static int32_t t76 = 13022000;

	t76 = (x333<((x334<x335)-x336));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x337 = INT16_MIN;
	int16_t x338 = 1376;
	int64_t x339 = -409127LL;
	int32_t t77 = -49515;

	t77 = (x337<((x338<x339)-x340));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x343 = INT16_MAX;
	static uint8_t x344 = 2U;
	int32_t t78 = -2093439;

	t78 = (x341<((x342<x343)-x344));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x348 = UINT64_MAX;
	int32_t t79 = -2074757;

	t79 = (x345<((x346<x347)-x348));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x349 = 58U;
	volatile uint32_t x350 = UINT32_MAX;
	int8_t x351 = 6;
	volatile uint64_t x352 = 34487823LLU;
	static volatile int32_t t80 = 1565048;

	t80 = (x349<((x350<x351)-x352));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x353 = INT16_MIN;
	int16_t x354 = -1;
	uint32_t x356 = 1U;
	volatile int32_t t81 = 1;

	t81 = (x353<((x354<x355)-x356));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x357 = 14706840;
	int16_t x358 = INT16_MIN;
	volatile int8_t x360 = INT8_MIN;
	int32_t t82 = 1;

	t82 = (x357<((x358<x359)-x360));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = -120392;
	volatile uint16_t x363 = UINT16_MAX;
	static int16_t x364 = -1;
	int32_t t83 = 1;

	t83 = (x361<((x362<x363)-x364));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x365 = -1;
	volatile int64_t x366 = -306128159494462161LL;
	int32_t x367 = 20698390;
	static volatile int16_t x368 = INT16_MAX;
	int32_t t84 = -1;

	t84 = (x365<((x366<x367)-x368));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x369 = -1;
	uint16_t x371 = 1U;
	static int8_t x372 = 11;
	volatile int32_t t85 = -1688475;

	t85 = (x369<((x370<x371)-x372));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x375 = 98397168LLU;
	static uint64_t x376 = UINT64_MAX;
	int32_t t86 = 0;

	t86 = (x373<((x374<x375)-x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x377 = INT32_MAX;
	int8_t x378 = INT8_MIN;
	int8_t x379 = -1;
	int16_t x380 = INT16_MIN;
	int32_t t87 = 2;

	t87 = (x377<((x378<x379)-x380));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x381 = -1;
	static int64_t x384 = 7176617931709LL;
	int32_t t88 = -170591;

	t88 = (x381<((x382<x383)-x384));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x385 = UINT32_MAX;
	static volatile int32_t x386 = -1;
	int8_t x387 = INT8_MIN;
	static volatile uint8_t x388 = 0U;
	int32_t t89 = 22314;

	t89 = (x385<((x386<x387)-x388));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x390 = INT16_MAX;
	uint16_t x391 = 12U;
	uint64_t x392 = 835170557LLU;
	volatile int32_t t90 = 456921;

	t90 = (x389<((x390<x391)-x392));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x395 = 186254LL;

	t91 = (x393<((x394<x395)-x396));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x398 = INT64_MAX;
	int64_t x400 = INT64_MAX;
	volatile int32_t t92 = -1;

	t92 = (x397<((x398<x399)-x400));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x401 = INT32_MAX;
	static int64_t x402 = -1LL;
	static int32_t t93 = 2550;

	t93 = (x401<((x402<x403)-x404));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x406 = INT64_MIN;
	int16_t x407 = INT16_MAX;
	uint16_t x408 = UINT16_MAX;
	static int32_t t94 = -28424;

	t94 = (x405<((x406<x407)-x408));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x409 = 2092609U;
	int8_t x410 = INT8_MAX;
	int32_t x411 = INT32_MAX;
	volatile uint8_t x412 = UINT8_MAX;
	int32_t t95 = -1;

	t95 = (x409<((x410<x411)-x412));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x413 = INT8_MIN;
	int16_t x416 = INT16_MIN;

	t96 = (x413<((x414<x415)-x416));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x417 = UINT32_MAX;
	volatile uint64_t x418 = 88734000667325LLU;
	uint32_t x419 = 7111136U;
	static int64_t x420 = INT64_MAX;
	int32_t t97 = -247;

	t97 = (x417<((x418<x419)-x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x426 = 16U;
	int8_t x427 = -6;

	t98 = (x425<((x426<x427)-x428));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x429 = UINT32_MAX;
	static volatile uint32_t x430 = 5U;
	static int64_t x431 = 359398422011458LL;
	int32_t x432 = -1;
	volatile int32_t t99 = 65285054;

	t99 = (x429<((x430<x431)-x432));

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

