#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 29998LLU;
uint8_t x5 = 111U;
int64_t x7 = 1551096727LL;
volatile int16_t x8 = INT16_MAX;
uint64_t x13 = 22062764683566LLU;
volatile int32_t t5 = 7;
int32_t x25 = 0;
uint8_t x28 = 30U;
int64_t x33 = INT64_MIN;
static int32_t t8 = 327;
int64_t x39 = 25LL;
static volatile int32_t t9 = 11658576;
uint8_t x44 = 0U;
int32_t t10 = 236684516;
int32_t t12 = 157502889;
static uint64_t x62 = 1417245LLU;
int16_t x76 = -1;
static int64_t x77 = 1605LL;
int16_t x80 = INT16_MIN;
int32_t t19 = -34149310;
int16_t x83 = INT16_MIN;
int64_t x98 = 2613LL;
volatile int32_t t24 = -945543;
int16_t x105 = -37;
uint64_t x106 = UINT64_MAX;
int16_t x110 = -503;
int32_t t27 = 3379996;
int32_t x122 = -1;
volatile int32_t t32 = 660315;
uint32_t x134 = 6442849U;
static int32_t t33 = 10486;
int64_t x139 = INT64_MIN;
volatile int32_t t36 = -6;
volatile int16_t x150 = -3149;
volatile int32_t t37 = -57;
volatile int16_t x153 = -1;
int32_t x158 = INT32_MIN;
int8_t x159 = 35;
volatile int64_t x160 = INT64_MIN;
volatile int32_t t39 = -163;
static uint8_t x162 = UINT8_MAX;
uint64_t x164 = UINT64_MAX;
volatile int8_t x167 = -1;
int16_t x170 = 1894;
int32_t t43 = -23103;
volatile uint64_t x180 = 13419LLU;
volatile int32_t x181 = 57;
int64_t x191 = -1LL;
int16_t x195 = -6;
int64_t x204 = 31LL;
static volatile uint8_t x211 = 18U;
static volatile int32_t t52 = -141339;
static int16_t x214 = 71;
int32_t x217 = -4366;
int64_t x225 = INT64_MIN;
static int8_t x228 = INT8_MIN;
uint64_t x229 = 116581163LLU;
int32_t x238 = -440;
int32_t x240 = -1;
int32_t t59 = 7214240;
uint32_t x246 = 329438708U;
int8_t x249 = INT8_MIN;
volatile int32_t t62 = 11183;
uint8_t x256 = 50U;
int16_t x265 = 69;
uint8_t x267 = 1U;
static uint64_t x268 = 173090219779LLU;
static int32_t x269 = INT32_MAX;
uint64_t x271 = 49889290LLU;
int64_t x273 = -22LL;
static int8_t x278 = INT8_MIN;
int16_t x283 = INT16_MIN;
static int8_t x286 = INT8_MIN;
int32_t x290 = INT32_MIN;
static int16_t x291 = -1;
int64_t x297 = INT64_MIN;
uint32_t x299 = UINT32_MAX;
static volatile int32_t t75 = 819;
uint64_t x309 = 4LLU;
volatile int32_t x324 = -1;
uint64_t x325 = 13990704LLU;
volatile uint8_t x327 = 1U;
uint8_t x329 = UINT8_MAX;
int32_t x330 = INT32_MIN;
int64_t x332 = INT64_MIN;
volatile int32_t t83 = -10951095;
volatile int32_t t85 = 1;
int16_t x345 = -73;
static int8_t x348 = -1;
uint64_t x354 = 381LLU;
int32_t t88 = 21764998;
int16_t x358 = INT16_MIN;
static uint8_t x365 = 21U;
int32_t t92 = 2;
int64_t x373 = -1LL;
uint32_t x376 = 16683455U;
uint64_t x381 = UINT64_MAX;
volatile int8_t x391 = 0;
uint8_t x395 = 0U;
uint16_t x396 = 43U;
int64_t x398 = INT64_MIN;
int8_t x399 = INT8_MIN;
int32_t t99 = 11320;


void f0(void) {
	int8_t x1 = -1;
	volatile int8_t x2 = INT8_MAX;
	int8_t x3 = INT8_MIN;
	int32_t t0 = 805446;

	t0 = (x1<(x2^(x3<x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	volatile int32_t t1 = -242;

	t1 = (x5<(x6^(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 467U;
	volatile uint16_t x10 = UINT16_MAX;
	int16_t x11 = 56;
	int64_t x12 = -1LL;
	int32_t t2 = -2;

	t2 = (x9<(x10^(x11<x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = UINT16_MAX;
	int16_t x15 = INT16_MIN;
	int16_t x16 = INT16_MIN;
	int32_t t3 = 704110;

	t3 = (x13<(x14^(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 0U;
	volatile int64_t x18 = INT64_MAX;
	static int32_t x19 = -340;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 62408;

	t4 = (x17<(x18^(x19<x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = UINT32_MAX;
	static int8_t x22 = 0;
	volatile int32_t x23 = INT32_MAX;
	volatile int64_t x24 = INT64_MIN;

	t5 = (x21<(x22^(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -12376807419629778LL;
	volatile int16_t x27 = 1832;
	int32_t t6 = -65614;

	t6 = (x25<(x26^(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = 124LL;
	volatile int64_t x30 = INT64_MAX;
	int64_t x31 = INT64_MIN;
	uint32_t x32 = 13589U;
	static volatile int32_t t7 = 175832084;

	t7 = (x29<(x30^(x31<x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = 1;
	volatile int32_t x35 = INT32_MIN;
	uint32_t x36 = 499U;

	t8 = (x33<(x34^(x35<x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 8002630685927797653LLU;
	uint16_t x38 = UINT16_MAX;
	volatile int64_t x40 = INT64_MAX;

	t9 = (x37<(x38^(x39<x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint8_t x41 = UINT8_MAX;
	int64_t x42 = 8LL;
	int32_t x43 = INT32_MIN;

	t10 = (x41<(x42^(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = UINT16_MAX;
	uint64_t x46 = UINT64_MAX;
	int8_t x47 = INT8_MIN;
	uint32_t x48 = 1988686464U;
	static volatile int32_t t11 = 53;

	t11 = (x45<(x46^(x47<x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -1;
	uint16_t x50 = 2U;
	int8_t x51 = -1;
	uint8_t x52 = 7U;

	t12 = (x49<(x50^(x51<x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MIN;
	volatile uint64_t x54 = 58399LLU;
	static int32_t x55 = INT32_MIN;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t13 = -6260597;

	t13 = (x53<(x54^(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x57 = INT64_MAX;
	volatile int64_t x58 = -1LL;
	int32_t x59 = INT32_MAX;
	static uint64_t x60 = UINT64_MAX;
	int32_t t14 = 97611003;

	t14 = (x57<(x58^(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = 3198U;
	static uint32_t x63 = 1022658707U;
	uint32_t x64 = 27660484U;
	volatile int32_t t15 = 11905;

	t15 = (x61<(x62^(x63<x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	int16_t x66 = INT16_MAX;
	volatile int16_t x67 = -1;
	int16_t x68 = INT16_MIN;
	int32_t t16 = 616760;

	t16 = (x65<(x66^(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int16_t x70 = -24;
	static int32_t x71 = 233369;
	int8_t x72 = INT8_MIN;
	volatile int32_t t17 = 46;

	t17 = (x69<(x70^(x71<x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	static int16_t x74 = INT16_MIN;
	static int64_t x75 = -1800403013LL;
	int32_t t18 = 786980128;

	t18 = (x73<(x74^(x75<x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = 4954U;
	int64_t x79 = -1LL;

	t19 = (x77<(x78^(x79<x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	static uint64_t x82 = 81341294739LLU;
	int64_t x84 = -58501LL;
	int32_t t20 = 9018;

	t20 = (x81<(x82^(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 14265LL;
	int32_t x86 = INT32_MIN;
	static int32_t x87 = INT32_MAX;
	volatile uint16_t x88 = UINT16_MAX;
	int32_t t21 = 9228540;

	t21 = (x85<(x86^(x87<x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int8_t x90 = INT8_MIN;
	static int16_t x91 = 1;
	static int32_t x92 = INT32_MAX;
	volatile int32_t t22 = -50332;

	t22 = (x89<(x90^(x91<x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	int16_t x94 = 237;
	int16_t x95 = INT16_MIN;
	static uint8_t x96 = 1U;
	int32_t t23 = -8;

	t23 = (x93<(x94^(x95<x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = INT64_MIN;
	int32_t x99 = 239209176;
	volatile int32_t x100 = -6041939;

	t24 = (x97<(x98^(x99<x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	uint32_t x102 = 112718U;
	int64_t x103 = INT64_MAX;
	static uint32_t x104 = UINT32_MAX;
	int32_t t25 = -37;

	t25 = (x101<(x102^(x103<x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x107 = INT8_MAX;
	uint16_t x108 = 24942U;
	int32_t t26 = -1;

	t26 = (x105<(x106^(x107<x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x109 = INT16_MAX;
	static volatile int64_t x111 = -209881229108LL;
	int8_t x112 = INT8_MIN;

	t27 = (x109<(x110^(x111<x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = 0;
	static int16_t x114 = INT16_MIN;
	int16_t x115 = INT16_MIN;
	volatile int16_t x116 = -3;
	int32_t t28 = 1626;

	t28 = (x113<(x114^(x115<x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = -1;
	int16_t x118 = INT16_MIN;
	static int16_t x119 = -1;
	int8_t x120 = INT8_MIN;
	int32_t t29 = 1;

	t29 = (x117<(x118^(x119<x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = 0U;
	int16_t x123 = INT16_MIN;
	volatile int8_t x124 = INT8_MIN;
	int32_t t30 = -171999;

	t30 = (x121<(x122^(x123<x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int64_t x126 = INT64_MIN;
	int32_t x127 = -1;
	uint64_t x128 = 172390176707805LLU;
	static int32_t t31 = 466213;

	t31 = (x125<(x126^(x127<x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 6093U;
	int16_t x130 = -2;
	int64_t x131 = -1LL;
	static volatile uint64_t x132 = 152074LLU;

	t32 = (x129<(x130^(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	volatile uint16_t x135 = UINT16_MAX;
	int8_t x136 = -1;

	t33 = (x133<(x134^(x135<x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x137 = UINT16_MAX;
	uint16_t x138 = 12U;
	static uint64_t x140 = 85275642579LLU;
	volatile int32_t t34 = 80898;

	t34 = (x137<(x138^(x139<x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = INT32_MIN;
	static int16_t x142 = INT16_MAX;
	volatile uint64_t x143 = 29LLU;
	int8_t x144 = INT8_MAX;
	static int32_t t35 = 3239;

	t35 = (x141<(x142^(x143<x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	int16_t x146 = INT16_MIN;
	int16_t x147 = INT16_MIN;
	int16_t x148 = -1;

	t36 = (x145<(x146^(x147<x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	static int8_t x151 = INT8_MIN;
	int32_t x152 = INT32_MAX;

	t37 = (x149<(x150^(x151<x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x154 = INT16_MIN;
	int32_t x155 = -706425;
	uint8_t x156 = 36U;
	volatile int32_t t38 = 815486604;

	t38 = (x153<(x154^(x155<x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MIN;

	t39 = (x157<(x158^(x159<x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 5LLU;
	uint32_t x163 = UINT32_MAX;
	int32_t t40 = 247033;

	t40 = (x161<(x162^(x163<x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -7726813LL;
	static int16_t x166 = -1;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t41 = -8;

	t41 = (x165<(x166^(x167<x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x169 = 30U;
	int8_t x171 = INT8_MIN;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t42 = -18250;

	t42 = (x169<(x170^(x171<x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = INT32_MAX;
	static volatile int16_t x174 = -1;
	static uint8_t x175 = 14U;
	uint64_t x176 = 48684228503LLU;

	t43 = (x173<(x174^(x175<x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = 2;
	int16_t x178 = INT16_MAX;
	volatile int16_t x179 = 5;
	int32_t t44 = 202730;

	t44 = (x177<(x178^(x179<x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x182 = -31697142LL;
	int16_t x183 = INT16_MIN;
	uint8_t x184 = 26U;
	int32_t t45 = -662797;

	t45 = (x181<(x182^(x183<x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	int16_t x186 = -11428;
	int16_t x187 = INT16_MAX;
	static int32_t x188 = INT32_MIN;
	int32_t t46 = -101;

	t46 = (x185<(x186^(x187<x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 1388U;
	volatile int16_t x190 = INT16_MIN;
	static int64_t x192 = INT64_MAX;
	int32_t t47 = 6;

	t47 = (x189<(x190^(x191<x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	static int16_t x194 = INT16_MAX;
	int32_t x196 = INT32_MAX;
	volatile int32_t t48 = 2397587;

	t48 = (x193<(x194^(x195<x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -54;
	volatile int32_t x198 = -1;
	uint32_t x199 = UINT32_MAX;
	uint8_t x200 = 0U;
	volatile int32_t t49 = 26420514;

	t49 = (x197<(x198^(x199<x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MAX;
	uint32_t x202 = 16396U;
	uint32_t x203 = UINT32_MAX;
	int32_t t50 = 3681;

	t50 = (x201<(x202^(x203<x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = INT16_MAX;
	int32_t x206 = INT32_MIN;
	int32_t x207 = INT32_MAX;
	int8_t x208 = -45;
	static int32_t t51 = 6;

	t51 = (x205<(x206^(x207<x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 1896820492235361LLU;
	volatile uint32_t x210 = 77663286U;
	int32_t x212 = INT32_MIN;

	t52 = (x209<(x210^(x211<x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 1U;
	static volatile uint16_t x215 = UINT16_MAX;
	int32_t x216 = INT32_MAX;
	int32_t t53 = 1;

	t53 = (x213<(x214^(x215<x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MIN;
	int64_t x219 = -1LL;
	uint8_t x220 = 8U;
	static volatile int32_t t54 = 131230;

	t54 = (x217<(x218^(x219<x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 1542874243LLU;
	int32_t x222 = INT32_MIN;
	static int32_t x223 = -19533105;
	static int8_t x224 = -2;
	static int32_t t55 = -3;

	t55 = (x221<(x222^(x223<x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x226 = INT8_MIN;
	int8_t x227 = INT8_MAX;
	int32_t t56 = -762;

	t56 = (x225<(x226^(x227<x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = -1;
	static int64_t x231 = INT64_MIN;
	volatile uint8_t x232 = UINT8_MAX;
	volatile int32_t t57 = 49275977;

	t57 = (x229<(x230^(x231<x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -130648;
	uint32_t x234 = UINT32_MAX;
	uint32_t x235 = 15814U;
	uint32_t x236 = 1U;
	int32_t t58 = -1;

	t58 = (x233<(x234^(x235<x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	static uint32_t x239 = UINT32_MAX;

	t59 = (x237<(x238^(x239<x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 9LL;
	volatile uint32_t x242 = UINT32_MAX;
	uint32_t x243 = 659U;
	int16_t x244 = INT16_MIN;
	int32_t t60 = 875465131;

	t60 = (x241<(x242^(x243<x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	uint32_t x247 = 57U;
	int8_t x248 = INT8_MAX;
	int32_t t61 = -13531;

	t61 = (x245<(x246^(x247<x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x250 = INT8_MIN;
	int16_t x251 = 3;
	volatile uint16_t x252 = 7U;

	t62 = (x249<(x250^(x251<x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = INT64_MIN;
	uint64_t x254 = 48260384848LLU;
	int64_t x255 = -1LL;
	int32_t t63 = 27905;

	t63 = (x253<(x254^(x255<x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 498677755847062501LLU;
	volatile uint16_t x258 = 0U;
	int64_t x259 = INT64_MAX;
	static uint16_t x260 = 13U;
	int32_t t64 = -1;

	t64 = (x257<(x258^(x259<x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = 12;
	volatile uint64_t x262 = UINT64_MAX;
	uint32_t x263 = 14045637U;
	int16_t x264 = 0;
	int32_t t65 = -23812;

	t65 = (x261<(x262^(x263<x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x266 = 3U;
	int32_t t66 = -378247704;

	t66 = (x265<(x266^(x267<x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = INT8_MIN;
	volatile int64_t x272 = -4547252214678735754LL;
	int32_t t67 = 0;

	t67 = (x269<(x270^(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x274 = INT64_MIN;
	int8_t x275 = 3;
	int16_t x276 = -1;
	int32_t t68 = -44;

	t68 = (x273<(x274^(x275<x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 180LLU;
	uint64_t x279 = UINT64_MAX;
	int32_t x280 = INT32_MAX;
	volatile int32_t t69 = -387;

	t69 = (x277<(x278^(x279<x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -2051630250206182705LL;
	volatile uint8_t x282 = 3U;
	int64_t x284 = -1LL;
	volatile int32_t t70 = 12694;

	t70 = (x281<(x282^(x283<x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	uint32_t x287 = 490339U;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t71 = -2244;

	t71 = (x285<(x286^(x287<x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int64_t x292 = INT64_MIN;
	static volatile int32_t t72 = -82484;

	t72 = (x289<(x290^(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x293 = UINT16_MAX;
	int16_t x294 = INT16_MIN;
	volatile int32_t x295 = 60;
	uint8_t x296 = UINT8_MAX;
	int32_t t73 = 1;

	t73 = (x293<(x294^(x295<x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x298 = INT64_MAX;
	int8_t x300 = INT8_MAX;
	volatile int32_t t74 = 16469124;

	t74 = (x297<(x298^(x299<x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 316444939U;
	static volatile int16_t x302 = -2296;
	int8_t x303 = 0;
	volatile uint8_t x304 = 22U;

	t75 = (x301<(x302^(x303<x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	uint16_t x306 = 464U;
	static int16_t x307 = -1;
	int16_t x308 = INT16_MIN;
	int32_t t76 = 9294;

	t76 = (x305<(x306^(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x310 = -1;
	static int16_t x311 = INT16_MIN;
	int16_t x312 = -235;
	int32_t t77 = 221;

	t77 = (x309<(x310^(x311<x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x313 = -158291973565521185LL;
	int16_t x314 = INT16_MIN;
	int8_t x315 = -1;
	static int32_t x316 = -1;
	int32_t t78 = -180;

	t78 = (x313<(x314^(x315<x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	uint32_t x318 = UINT32_MAX;
	int64_t x319 = 5974LL;
	int32_t x320 = -40853;
	int32_t t79 = -119632;

	t79 = (x317<(x318^(x319<x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = INT64_MIN;
	volatile uint16_t x322 = 11U;
	int16_t x323 = -1;
	int32_t t80 = 550161369;

	t80 = (x321<(x322^(x323<x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x326 = -1;
	volatile uint32_t x328 = 1866982874U;
	static volatile int32_t t81 = 0;

	t81 = (x325<(x326^(x327<x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x331 = UINT32_MAX;
	static int32_t t82 = -93524037;

	t82 = (x329<(x330^(x331<x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = INT64_MIN;
	static int64_t x334 = -1LL;
	int32_t x335 = INT32_MIN;
	uint16_t x336 = UINT16_MAX;

	t83 = (x333<(x334^(x335<x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = 25;
	int16_t x338 = 9467;
	int8_t x339 = -1;
	int32_t x340 = -86296;
	int32_t t84 = 215;

	t84 = (x337<(x338^(x339<x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	uint64_t x342 = 71832519562054637LLU;
	static volatile uint32_t x343 = UINT32_MAX;
	volatile int64_t x344 = -1LL;

	t85 = (x341<(x342^(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = INT8_MIN;
	static int64_t x347 = 694798015LL;
	int32_t t86 = -461;

	t86 = (x345<(x346^(x347<x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 15U;
	int64_t x350 = INT64_MIN;
	int16_t x351 = INT16_MAX;
	static int64_t x352 = INT64_MIN;
	volatile int32_t t87 = 452;

	t87 = (x349<(x350^(x351<x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 1724U;
	int8_t x355 = -1;
	uint32_t x356 = 111U;

	t88 = (x353<(x354^(x355<x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = INT32_MAX;
	uint16_t x359 = 1091U;
	int8_t x360 = 13;
	int32_t t89 = -444;

	t89 = (x357<(x358^(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	uint64_t x362 = 52918319771261LLU;
	static uint16_t x363 = 12U;
	int64_t x364 = INT64_MAX;
	static volatile int32_t t90 = -63;

	t90 = (x361<(x362^(x363<x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = INT64_MIN;
	int32_t x367 = INT32_MIN;
	int32_t x368 = -1;
	int32_t t91 = 7567;

	t91 = (x365<(x366^(x367<x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x369 = 5U;
	int8_t x370 = INT8_MAX;
	uint16_t x371 = 25U;
	int16_t x372 = -1;

	t92 = (x369<(x370^(x371<x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x374 = -1;
	int64_t x375 = -1LL;
	volatile int32_t t93 = -1;

	t93 = (x373<(x374^(x375<x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x377 = 3U;
	volatile uint64_t x378 = UINT64_MAX;
	uint64_t x379 = 948007135480928832LLU;
	static int32_t x380 = INT32_MIN;
	int32_t t94 = -25082947;

	t94 = (x377<(x378^(x379<x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x382 = INT32_MIN;
	static uint32_t x383 = UINT32_MAX;
	int32_t x384 = 488355;
	volatile int32_t t95 = 1;

	t95 = (x381<(x382^(x383<x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	int32_t x386 = INT32_MAX;
	static volatile uint8_t x387 = 10U;
	static int8_t x388 = INT8_MIN;
	volatile int32_t t96 = 983744707;

	t96 = (x385<(x386^(x387<x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	uint64_t x390 = 2829599LLU;
	volatile int16_t x392 = -146;
	volatile int32_t t97 = -724237471;

	t97 = (x389<(x390^(x391<x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = UINT16_MAX;
	static uint8_t x394 = 55U;
	int32_t t98 = 92866;

	t98 = (x393<(x394^(x395<x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	int8_t x400 = -1;

	t99 = (x397<(x398^(x399<x400)));

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

