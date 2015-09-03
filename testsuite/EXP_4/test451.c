#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x7 = INT16_MIN;
int64_t x23 = 1067229LL;
static volatile int32_t t4 = 0;
static volatile int64_t x37 = INT64_MAX;
uint16_t x38 = 0U;
int32_t t6 = 1;
static int8_t x45 = -1;
int16_t x49 = INT16_MIN;
volatile uint8_t x50 = 52U;
static int32_t x59 = -1729;
uint32_t x71 = 52U;
int32_t t11 = -13694;
volatile int32_t t12 = -1187;
volatile int16_t x93 = 3;
int16_t x94 = INT16_MIN;
int16_t x105 = INT16_MAX;
volatile int16_t x111 = -1;
volatile uint32_t x112 = 3887U;
int64_t x116 = -165331LL;
int8_t x120 = 32;
static int8_t x121 = INT8_MAX;
static int64_t x125 = -13851034157634681LL;
static int8_t x128 = -1;
static int32_t x143 = -1;
int32_t t22 = -61613;
int32_t t23 = -231172585;
uint32_t x152 = 4U;
uint64_t x159 = 0LLU;
int64_t x160 = -311551430192LL;
int8_t x161 = -25;
int16_t x163 = 495;
volatile int32_t x187 = -17;
int16_t x189 = 14381;
uint16_t x193 = 91U;
volatile int32_t t31 = 1705;
int32_t t32 = 103;
int8_t x207 = INT8_MIN;
int64_t x216 = 17976407998LL;
int8_t x226 = INT8_MAX;
int16_t x227 = INT16_MIN;
uint32_t x228 = UINT32_MAX;
uint64_t x233 = UINT64_MAX;
uint8_t x238 = 4U;
int16_t x248 = 26;
int8_t x250 = -2;
int8_t x261 = -1;
volatile int32_t x263 = 522095547;
int64_t x272 = -19610025868LL;
uint32_t x283 = UINT32_MAX;
volatile int64_t x290 = -1LL;
volatile int32_t t49 = 12;
volatile int32_t t50 = -357;
volatile int32_t t52 = 9407;
int32_t x313 = INT32_MIN;
static int8_t x314 = INT8_MIN;
static volatile int64_t x316 = 753839LL;
static int64_t x322 = INT64_MAX;
uint8_t x324 = 0U;
int32_t t55 = 651;
static int32_t x326 = -10;
volatile uint32_t x332 = 2U;
int32_t x339 = -1;
volatile int32_t t59 = -1241;
static volatile uint32_t x342 = 4447U;
int32_t t60 = -10566;
int8_t x345 = 2;
int64_t x348 = -1LL;
static int32_t x349 = INT32_MIN;
int64_t x350 = 3861LL;
int8_t x358 = INT8_MIN;
int8_t x360 = INT8_MAX;
static volatile uint32_t x364 = 69607U;
volatile int32_t t65 = -21497952;
static int8_t x374 = -1;
int16_t x376 = INT16_MIN;
int32_t t67 = -1;
uint32_t x385 = UINT32_MAX;
int16_t x394 = INT16_MIN;
int8_t x398 = INT8_MAX;
volatile int32_t x405 = INT32_MIN;
uint32_t x409 = 712U;
uint64_t x410 = UINT64_MAX;
static uint16_t x413 = 251U;
int64_t x418 = -1LL;
volatile int16_t x419 = 349;
static int8_t x422 = 7;
int16_t x424 = INT16_MAX;
uint32_t x425 = 2814U;
static volatile int16_t x429 = 869;
uint16_t x440 = 409U;
volatile int32_t t82 = -5020;
static uint32_t x452 = 26U;
int16_t x459 = 12332;
int32_t t85 = 1;
int32_t x463 = -1;
volatile uint64_t x477 = 609704196LLU;
static volatile int32_t t88 = 98608914;
volatile int32_t t91 = -29252;
int32_t t92 = 1974;
static volatile int32_t t95 = 117435;
volatile int64_t x514 = INT64_MIN;
uint16_t x518 = UINT16_MAX;
static volatile int32_t t97 = -18553;
int16_t x523 = INT16_MAX;
int64_t x529 = INT64_MIN;
int16_t x530 = INT16_MAX;


void f0(void) {
	int8_t x5 = INT8_MAX;
	int32_t x6 = -1;
	static int8_t x8 = 12;
	volatile int32_t t0 = 0;

	t0 = (x5<(x6<(x7*x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	static int16_t x10 = -1;
	uint8_t x11 = 1U;
	static volatile int8_t x12 = -1;
	int32_t t1 = -2094435;

	t1 = (x9<(x10<(x11*x12)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = 1U;
	static int32_t x18 = -1;
	int8_t x19 = 1;
	int32_t x20 = INT32_MAX;
	volatile int32_t t2 = -221410551;

	t2 = (x17<(x18<(x19*x20)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = UINT32_MAX;
	int64_t x22 = INT64_MAX;
	int8_t x24 = -1;
	int32_t t3 = -342;

	t3 = (x21<(x22<(x23*x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x25 = INT16_MIN;
	int8_t x26 = -1;
	uint8_t x27 = 4U;
	int32_t x28 = -121412971;

	t4 = (x25<(x26<(x27*x28)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x39 = 0U;
	static volatile int64_t x40 = -1LL;
	volatile int32_t t5 = -531968;

	t5 = (x37<(x38<(x39*x40)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x41 = UINT32_MAX;
	volatile int16_t x42 = INT16_MIN;
	static uint64_t x43 = 6LLU;
	int16_t x44 = INT16_MAX;

	t6 = (x41<(x42<(x43*x44)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x46 = INT64_MIN;
	volatile uint64_t x47 = UINT64_MAX;
	int32_t x48 = INT32_MIN;
	volatile int32_t t7 = 996653519;

	t7 = (x45<(x46<(x47*x48)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x51 = -1LL;
	static int8_t x52 = INT8_MAX;
	volatile int32_t t8 = 6;

	t8 = (x49<(x50<(x51*x52)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x57 = INT32_MIN;
	int64_t x58 = -1LL;
	volatile int16_t x60 = INT16_MAX;
	int32_t t9 = 0;

	t9 = (x57<(x58<(x59*x60)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x65 = 5U;
	int16_t x66 = INT16_MAX;
	int8_t x67 = INT8_MIN;
	volatile int64_t x68 = 72631106LL;
	int32_t t10 = -2;

	t10 = (x65<(x66<(x67*x68)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x69 = 21U;
	static volatile int32_t x70 = -1;
	volatile int32_t x72 = -2083202;

	t11 = (x69<(x70<(x71*x72)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x81 = 1;
	static volatile uint64_t x82 = 98LLU;
	uint64_t x83 = 4711513487915607LLU;
	int16_t x84 = -13892;

	t12 = (x81<(x82<(x83*x84)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x95 = 1322U;
	int64_t x96 = 1729LL;
	volatile int32_t t13 = 103361;

	t13 = (x93<(x94<(x95*x96)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x97 = INT16_MIN;
	volatile int16_t x98 = 1;
	int32_t x99 = INT32_MIN;
	int64_t x100 = -1LL;
	volatile int32_t t14 = -93215;

	t14 = (x97<(x98<(x99*x100)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x101 = -1;
	static int64_t x102 = INT64_MIN;
	int16_t x103 = 3;
	int64_t x104 = -1LL;
	int32_t t15 = -31;

	t15 = (x101<(x102<(x103*x104)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x106 = INT16_MAX;
	uint64_t x107 = 2294447631773024LLU;
	int16_t x108 = -1;
	static volatile int32_t t16 = 15652;

	t16 = (x105<(x106<(x107*x108)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x109 = 239U;
	int16_t x110 = -1;
	static volatile int32_t t17 = -160;

	t17 = (x109<(x110<(x111*x112)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x113 = 32;
	volatile int32_t x114 = INT32_MIN;
	static int16_t x115 = -994;
	int32_t t18 = -32;

	t18 = (x113<(x114<(x115*x116)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x117 = -1;
	uint64_t x118 = 43406664LLU;
	uint8_t x119 = 113U;
	static int32_t t19 = -70;

	t19 = (x117<(x118<(x119*x120)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x122 = 0;
	static uint64_t x123 = 7574474LLU;
	uint32_t x124 = UINT32_MAX;
	volatile int32_t t20 = -17243845;

	t20 = (x121<(x122<(x123*x124)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x126 = INT8_MIN;
	int8_t x127 = INT8_MIN;
	int32_t t21 = 864562146;

	t21 = (x125<(x126<(x127*x128)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x141 = UINT32_MAX;
	int32_t x142 = INT32_MAX;
	uint16_t x144 = UINT16_MAX;

	t22 = (x141<(x142<(x143*x144)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x145 = INT16_MIN;
	int32_t x146 = -409;
	volatile int8_t x147 = -1;
	volatile uint8_t x148 = UINT8_MAX;

	t23 = (x145<(x146<(x147*x148)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x149 = -22;
	int64_t x150 = INT64_MAX;
	uint64_t x151 = 189378850410512132LLU;
	int32_t t24 = -187818470;

	t24 = (x149<(x150<(x151*x152)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x153 = -1;
	volatile int64_t x154 = 4279747999376343LL;
	int64_t x155 = INT64_MIN;
	uint8_t x156 = 0U;
	int32_t t25 = 233852517;

	t25 = (x153<(x154<(x155*x156)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x157 = -1;
	volatile uint16_t x158 = 465U;
	volatile int32_t t26 = 213908748;

	t26 = (x157<(x158<(x159*x160)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x162 = 1807LL;
	static uint32_t x164 = 476830083U;
	int32_t t27 = 91785;

	t27 = (x161<(x162<(x163*x164)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x185 = UINT16_MAX;
	volatile uint32_t x186 = 1531328658U;
	int8_t x188 = -1;
	volatile int32_t t28 = -8;

	t28 = (x185<(x186<(x187*x188)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x190 = INT64_MIN;
	uint64_t x191 = 4014559957560331LLU;
	int16_t x192 = 451;
	int32_t t29 = 0;

	t29 = (x189<(x190<(x191*x192)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x194 = INT32_MAX;
	uint8_t x195 = 29U;
	uint64_t x196 = 228442899462495933LLU;
	static volatile int32_t t30 = -198225;

	t30 = (x193<(x194<(x195*x196)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x197 = 12U;
	static volatile int32_t x198 = INT32_MIN;
	uint64_t x199 = UINT64_MAX;
	int16_t x200 = INT16_MAX;

	t31 = (x197<(x198<(x199*x200)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x201 = INT8_MIN;
	uint8_t x202 = UINT8_MAX;
	int8_t x203 = INT8_MAX;
	static int8_t x204 = 2;

	t32 = (x201<(x202<(x203*x204)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x205 = INT16_MIN;
	volatile int32_t x206 = INT32_MIN;
	int16_t x208 = INT16_MIN;
	volatile int32_t t33 = -212240;

	t33 = (x205<(x206<(x207*x208)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x209 = 30043824883113LL;
	int32_t x210 = -1;
	volatile int8_t x211 = 20;
	static int64_t x212 = -98081689LL;
	static int32_t t34 = -677;

	t34 = (x209<(x210<(x211*x212)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x213 = INT64_MIN;
	static int32_t x214 = INT32_MAX;
	static uint16_t x215 = 5076U;
	int32_t t35 = 0;

	t35 = (x213<(x214<(x215*x216)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x225 = -1;
	static volatile int32_t t36 = 6210;

	t36 = (x225<(x226<(x227*x228)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x234 = -1;
	int8_t x235 = 0;
	static int64_t x236 = INT64_MIN;
	int32_t t37 = -43910;

	t37 = (x233<(x234<(x235*x236)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x237 = -303440;
	volatile int16_t x239 = INT16_MIN;
	int8_t x240 = -2;
	int32_t t38 = -3;

	t38 = (x237<(x238<(x239*x240)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x245 = UINT32_MAX;
	static int16_t x246 = 57;
	int8_t x247 = INT8_MIN;
	volatile int32_t t39 = 958851719;

	t39 = (x245<(x246<(x247*x248)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x249 = 76967U;
	uint64_t x251 = UINT64_MAX;
	uint64_t x252 = UINT64_MAX;
	int32_t t40 = 21419;

	t40 = (x249<(x250<(x251*x252)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x257 = 4U;
	int32_t x258 = INT32_MIN;
	int16_t x259 = INT16_MIN;
	volatile int8_t x260 = -1;
	volatile int32_t t41 = 485517423;

	t41 = (x257<(x258<(x259*x260)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x262 = 1;
	volatile int8_t x264 = -1;
	int32_t t42 = 937031528;

	t42 = (x261<(x262<(x263*x264)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x265 = UINT8_MAX;
	uint16_t x266 = 1359U;
	int64_t x267 = -213724267LL;
	static int8_t x268 = -5;
	volatile int32_t t43 = -152;

	t43 = (x265<(x266<(x267*x268)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x269 = -4;
	static uint16_t x270 = UINT16_MAX;
	int16_t x271 = INT16_MAX;
	int32_t t44 = -263;

	t44 = (x269<(x270<(x271*x272)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x277 = -49146174;
	int64_t x278 = INT64_MIN;
	uint16_t x279 = UINT16_MAX;
	uint64_t x280 = 2590396809677573LLU;
	int32_t t45 = 32;

	t45 = (x277<(x278<(x279*x280)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x281 = INT16_MAX;
	int64_t x282 = 1LL;
	uint8_t x284 = UINT8_MAX;
	int32_t t46 = -11;

	t46 = (x281<(x282<(x283*x284)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x285 = UINT8_MAX;
	uint8_t x286 = 1U;
	static uint8_t x287 = UINT8_MAX;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t47 = 6455;

	t47 = (x285<(x286<(x287*x288)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x289 = UINT32_MAX;
	int16_t x291 = -15914;
	int8_t x292 = INT8_MIN;
	volatile int32_t t48 = -88089;

	t48 = (x289<(x290<(x291*x292)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x293 = -838665891593396LL;
	int32_t x294 = INT32_MIN;
	static uint16_t x295 = UINT16_MAX;
	static volatile uint64_t x296 = 988424649688997513LLU;

	t49 = (x293<(x294<(x295*x296)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x297 = -1;
	int16_t x298 = -1;
	int16_t x299 = -1;
	int32_t x300 = -679167;

	t50 = (x297<(x298<(x299*x300)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x301 = 13254268U;
	int32_t x302 = INT32_MIN;
	static uint64_t x303 = 975648663565LLU;
	int8_t x304 = -1;
	int32_t t51 = -3282;

	t51 = (x301<(x302<(x303*x304)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x309 = -11;
	volatile int16_t x310 = 313;
	int32_t x311 = -1;
	int8_t x312 = -47;

	t52 = (x309<(x310<(x311*x312)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x315 = -1;
	volatile int32_t t53 = 81;

	t53 = (x313<(x314<(x315*x316)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x317 = INT8_MIN;
	uint16_t x318 = 107U;
	static int16_t x319 = 6602;
	volatile int8_t x320 = INT8_MIN;
	int32_t t54 = -138124;

	t54 = (x317<(x318<(x319*x320)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x321 = 6U;
	int64_t x323 = -1LL;

	t55 = (x321<(x322<(x323*x324)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x325 = 1U;
	int32_t x327 = INT32_MIN;
	uint16_t x328 = 1U;
	static volatile int32_t t56 = -98;

	t56 = (x325<(x326<(x327*x328)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x329 = INT8_MIN;
	int64_t x330 = 37356LL;
	int32_t x331 = -17156;
	volatile int32_t t57 = 897905061;

	t57 = (x329<(x330<(x331*x332)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x333 = -1LL;
	uint16_t x334 = 220U;
	int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MIN;
	static int32_t t58 = -79668;

	t58 = (x333<(x334<(x335*x336)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x337 = INT32_MAX;
	volatile int32_t x338 = INT32_MIN;
	int16_t x340 = INT16_MAX;

	t59 = (x337<(x338<(x339*x340)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x341 = -1;
	int32_t x343 = -1;
	int64_t x344 = -462LL;

	t60 = (x341<(x342<(x343*x344)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x346 = INT8_MAX;
	int16_t x347 = INT16_MIN;
	volatile int32_t t61 = 11708107;

	t61 = (x345<(x346<(x347*x348)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x351 = INT8_MIN;
	int16_t x352 = -69;
	int32_t t62 = -7;

	t62 = (x349<(x350<(x351*x352)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x357 = -2039522547769873497LL;
	int16_t x359 = -2433;
	volatile int32_t t63 = 0;

	t63 = (x357<(x358<(x359*x360)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x361 = INT16_MAX;
	static int32_t x362 = -121827;
	static uint64_t x363 = UINT64_MAX;
	int32_t t64 = 241;

	t64 = (x361<(x362<(x363*x364)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x369 = 146101238LLU;
	int64_t x370 = INT64_MIN;
	static int16_t x371 = INT16_MIN;
	int16_t x372 = INT16_MIN;

	t65 = (x369<(x370<(x371*x372)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x373 = INT32_MIN;
	uint8_t x375 = 4U;
	volatile int32_t t66 = 407816240;

	t66 = (x373<(x374<(x375*x376)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x377 = INT32_MIN;
	volatile int32_t x378 = -4142096;
	static volatile int8_t x379 = -1;
	uint32_t x380 = UINT32_MAX;

	t67 = (x377<(x378<(x379*x380)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x381 = INT16_MIN;
	int16_t x382 = -146;
	int16_t x383 = -1;
	uint16_t x384 = 3973U;
	volatile int32_t t68 = 17121;

	t68 = (x381<(x382<(x383*x384)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x386 = 1;
	int16_t x387 = 0;
	volatile uint64_t x388 = UINT64_MAX;
	int32_t t69 = -1;

	t69 = (x385<(x386<(x387*x388)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x389 = 67LLU;
	volatile int64_t x390 = INT64_MAX;
	int64_t x391 = -1LL;
	uint8_t x392 = UINT8_MAX;
	int32_t t70 = 9;

	t70 = (x389<(x390<(x391*x392)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x393 = UINT64_MAX;
	int16_t x395 = INT16_MIN;
	uint64_t x396 = 2065222659LLU;
	int32_t t71 = 1490331;

	t71 = (x393<(x394<(x395*x396)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x397 = UINT8_MAX;
	volatile uint64_t x399 = 21464889381499742LLU;
	int64_t x400 = INT64_MIN;
	static int32_t t72 = -10548587;

	t72 = (x397<(x398<(x399*x400)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x401 = INT32_MAX;
	int16_t x402 = -1;
	uint64_t x403 = 15953587LLU;
	static uint16_t x404 = 7535U;
	int32_t t73 = 0;

	t73 = (x401<(x402<(x403*x404)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x406 = 434954905U;
	int8_t x407 = -1;
	int8_t x408 = INT8_MAX;
	int32_t t74 = 351;

	t74 = (x405<(x406<(x407*x408)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x411 = -1;
	static int16_t x412 = -1;
	int32_t t75 = 109;

	t75 = (x409<(x410<(x411*x412)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x414 = INT8_MIN;
	int8_t x415 = 3;
	int16_t x416 = INT16_MAX;
	int32_t t76 = 336;

	t76 = (x413<(x414<(x415*x416)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x417 = INT16_MIN;
	int8_t x420 = INT8_MAX;
	volatile int32_t t77 = -792;

	t77 = (x417<(x418<(x419*x420)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x421 = INT16_MIN;
	volatile int64_t x423 = 6490LL;
	static volatile int32_t t78 = 0;

	t78 = (x421<(x422<(x423*x424)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x426 = 7U;
	int8_t x427 = -13;
	int16_t x428 = -5189;
	volatile int32_t t79 = -108846;

	t79 = (x425<(x426<(x427*x428)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x430 = 29791656U;
	int8_t x431 = -1;
	int32_t x432 = INT32_MAX;
	volatile int32_t t80 = 854104;

	t80 = (x429<(x430<(x431*x432)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x433 = -905086LL;
	int32_t x434 = 0;
	int8_t x435 = 27;
	volatile int32_t x436 = -652331;
	volatile int32_t t81 = 2452507;

	t81 = (x433<(x434<(x435*x436)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x437 = INT16_MAX;
	int64_t x438 = INT64_MIN;
	static int16_t x439 = -1;

	t82 = (x437<(x438<(x439*x440)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x449 = INT32_MAX;
	uint16_t x450 = 4193U;
	uint32_t x451 = UINT32_MAX;
	int32_t t83 = -220067;

	t83 = (x449<(x450<(x451*x452)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x453 = 9802U;
	static int16_t x454 = -1;
	int16_t x455 = -427;
	int16_t x456 = 10;
	int32_t t84 = -303;

	t84 = (x453<(x454<(x455*x456)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x457 = 2;
	int64_t x458 = -3418966623LL;
	int32_t x460 = -1;

	t85 = (x457<(x458<(x459*x460)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x461 = -1;
	volatile int64_t x462 = -66587586898721821LL;
	int32_t x464 = -1;
	int32_t t86 = -831639;

	t86 = (x461<(x462<(x463*x464)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x469 = INT64_MAX;
	volatile int8_t x470 = -1;
	int8_t x471 = INT8_MIN;
	int64_t x472 = 73411284773LL;
	static int32_t t87 = 14002;

	t87 = (x469<(x470<(x471*x472)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x478 = UINT8_MAX;
	volatile int8_t x479 = -9;
	int64_t x480 = 1736783601225LL;

	t88 = (x477<(x478<(x479*x480)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x481 = 1;
	volatile int32_t x482 = 208;
	int8_t x483 = INT8_MIN;
	uint8_t x484 = UINT8_MAX;
	volatile int32_t t89 = 24;

	t89 = (x481<(x482<(x483*x484)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x485 = -1;
	int32_t x486 = -3048882;
	static uint8_t x487 = 0U;
	static int64_t x488 = -1LL;
	static int32_t t90 = 58293722;

	t90 = (x485<(x486<(x487*x488)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x489 = INT64_MAX;
	volatile uint16_t x490 = 4307U;
	static uint64_t x491 = 9LLU;
	uint64_t x492 = 3LLU;

	t91 = (x489<(x490<(x491*x492)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x493 = INT16_MAX;
	uint32_t x494 = 8437371U;
	int16_t x495 = INT16_MIN;
	static volatile int8_t x496 = INT8_MAX;

	t92 = (x493<(x494<(x495*x496)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x501 = 4211U;
	int64_t x502 = -94101046713181LL;
	static int8_t x503 = INT8_MIN;
	uint64_t x504 = 228794939885138LLU;
	int32_t t93 = 421;

	t93 = (x501<(x502<(x503*x504)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x505 = INT8_MIN;
	int16_t x506 = -1;
	uint8_t x507 = UINT8_MAX;
	volatile uint8_t x508 = UINT8_MAX;
	static volatile int32_t t94 = 7526122;

	t94 = (x505<(x506<(x507*x508)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x509 = -1LL;
	static uint16_t x510 = UINT16_MAX;
	int32_t x511 = INT32_MAX;
	int64_t x512 = -1LL;

	t95 = (x509<(x510<(x511*x512)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x513 = 45U;
	uint32_t x515 = UINT32_MAX;
	volatile uint64_t x516 = 12190369590615605LLU;
	volatile int32_t t96 = -18;

	t96 = (x513<(x514<(x515*x516)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x517 = -1;
	int8_t x519 = -7;
	uint64_t x520 = 1LLU;

	t97 = (x517<(x518<(x519*x520)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x521 = 35U;
	uint32_t x522 = 29534142U;
	int16_t x524 = INT16_MAX;
	int32_t t98 = -1580;

	t98 = (x521<(x522<(x523*x524)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x531 = -1;
	uint32_t x532 = 1877555U;
	volatile int32_t t99 = 3681;

	t99 = (x529<(x530<(x531*x532)));

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

