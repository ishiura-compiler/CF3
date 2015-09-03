#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
volatile int32_t x3 = INT32_MAX;
uint32_t x6 = 7U;
static int16_t x9 = INT16_MIN;
uint16_t x13 = 0U;
int64_t x15 = INT64_MIN;
static uint32_t x22 = 5U;
static volatile uint8_t x24 = 1U;
uint32_t x28 = 52U;
int64_t x30 = INT64_MAX;
uint8_t x39 = 2U;
volatile int32_t x41 = INT32_MIN;
volatile int32_t t10 = -4;
volatile int64_t x49 = -15490186954082LL;
int8_t x52 = -1;
int16_t x55 = INT16_MIN;
volatile int32_t x64 = INT32_MAX;
int64_t x70 = INT64_MIN;
int16_t x72 = INT16_MIN;
int64_t x76 = -1LL;
volatile int32_t t18 = 2005815;
volatile int32_t t19 = -127486;
int32_t t20 = -6;
uint8_t x88 = UINT8_MAX;
static int16_t x90 = INT16_MAX;
int32_t t23 = -1211754;
int8_t x108 = INT8_MAX;
int64_t x113 = 35LL;
volatile int32_t t29 = -4199566;
uint16_t x121 = 21U;
int8_t x130 = -1;
int8_t x135 = INT8_MIN;
int32_t x140 = INT32_MIN;
uint32_t x146 = 9263U;
volatile int16_t x151 = INT16_MAX;
volatile uint16_t x153 = UINT16_MAX;
int64_t x158 = -109215841LL;
static int16_t x161 = INT16_MIN;
static int32_t x162 = -359553460;
uint64_t x164 = 346318LLU;
int16_t x167 = INT16_MAX;
int64_t x171 = INT64_MIN;
volatile int64_t x174 = -1804106101160LL;
int16_t x178 = -1;
int32_t x180 = INT32_MIN;
volatile int16_t x182 = INT16_MIN;
static int8_t x186 = INT8_MIN;
volatile int8_t x187 = -1;
int32_t x192 = INT32_MAX;
uint32_t x194 = 52616U;
int32_t x195 = -246;
int32_t x204 = INT32_MIN;
static int32_t x207 = -29325;
uint16_t x211 = UINT16_MAX;
volatile int8_t x212 = -1;
uint16_t x213 = 44U;
int16_t x214 = INT16_MIN;
uint32_t x220 = 238U;
int32_t t55 = -8391;
int16_t x229 = INT16_MIN;
uint8_t x230 = 108U;
uint64_t x231 = 189822212042279LLU;
static volatile int32_t t57 = 5826;
volatile int16_t x242 = INT16_MAX;
uint16_t x246 = 15659U;
int32_t t61 = -6884;
int8_t x250 = -1;
volatile uint64_t x255 = 12157LLU;
volatile int32_t t66 = -160200706;
int16_t x270 = INT16_MAX;
static volatile int64_t x272 = INT64_MAX;
static volatile int32_t t67 = 1;
int16_t x283 = -8834;
int64_t x291 = -1LL;
volatile int32_t t73 = -83;
int8_t x298 = INT8_MIN;
volatile int32_t t75 = -50098;
uint64_t x305 = 11671303905212LLU;
uint16_t x306 = 1879U;
int64_t x308 = 2563LL;
int8_t x309 = INT8_MAX;
static int8_t x314 = -60;
volatile int32_t t80 = -120852906;
int16_t x331 = -1;
static int32_t x333 = INT32_MAX;
volatile int32_t t83 = -11031171;
int32_t t86 = -4474;
uint32_t x349 = 270U;
int16_t x350 = INT16_MIN;
int64_t x356 = INT64_MAX;
volatile int16_t x361 = INT16_MAX;
int32_t t91 = 1199;
volatile int32_t x370 = 38;
int64_t x376 = INT64_MIN;
volatile int8_t x384 = -14;
volatile uint16_t x391 = 0U;
uint64_t x392 = 30943791012680200LLU;
int32_t t97 = -5403505;
volatile int64_t x395 = INT64_MIN;


void f0(void) {
	static int32_t x2 = INT32_MAX;
	uint64_t x4 = 713785925LLU;
	volatile int32_t t0 = 14810;

	t0 = (x1<(x2<(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int8_t x7 = 43;
	int8_t x8 = INT8_MIN;
	static volatile int32_t t1 = 2772;

	t1 = (x5<(x6<(x7==x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = UINT32_MAX;
	static volatile int16_t x11 = 15697;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = -8329;

	t2 = (x9<(x10<(x11==x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = INT64_MAX;
	static uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = 0;

	t3 = (x13<(x14<(x15==x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	uint64_t x18 = 37722807438LLU;
	int16_t x19 = -10220;
	static int64_t x20 = INT64_MAX;
	int32_t t4 = 559;

	t4 = (x17<(x18<(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MAX;
	uint16_t x23 = 541U;
	static volatile int32_t t5 = -3284739;

	t5 = (x21<(x22<(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = UINT8_MAX;
	volatile int16_t x26 = INT16_MAX;
	int64_t x27 = 24985701LL;
	int32_t t6 = 12;

	t6 = (x25<(x26<(x27==x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 5LLU;
	int16_t x31 = -1;
	uint16_t x32 = 502U;
	int32_t t7 = -1;

	t7 = (x29<(x30<(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int16_t x34 = -9522;
	volatile int64_t x35 = -71447148192616LL;
	int32_t x36 = -1;
	int32_t t8 = -18524;

	t8 = (x33<(x34<(x35==x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 14U;
	uint8_t x38 = 30U;
	int16_t x40 = INT16_MAX;
	int32_t t9 = 40323381;

	t9 = (x37<(x38<(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = -1;
	volatile uint8_t x43 = UINT8_MAX;
	volatile int8_t x44 = -1;

	t10 = (x41<(x42<(x43==x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x45 = -19;
	int64_t x46 = 49651LL;
	int16_t x47 = INT16_MIN;
	static volatile uint64_t x48 = 6737687538955LLU;
	static int32_t t11 = 894355;

	t11 = (x45<(x46<(x47==x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x50 = -1LL;
	volatile int64_t x51 = INT64_MIN;
	int32_t t12 = 0;

	t12 = (x49<(x50<(x51==x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = UINT16_MAX;
	volatile uint32_t x54 = 421635U;
	static int64_t x56 = 7431LL;
	volatile int32_t t13 = -1;

	t13 = (x53<(x54<(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	static int8_t x58 = 1;
	volatile uint8_t x59 = UINT8_MAX;
	static uint8_t x60 = UINT8_MAX;
	static int32_t t14 = 51047604;

	t14 = (x57<(x58<(x59==x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MIN;
	int64_t x62 = 10181146LL;
	uint8_t x63 = 31U;
	int32_t t15 = -1;

	t15 = (x61<(x62<(x63==x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 1265783911537LLU;
	uint64_t x66 = UINT64_MAX;
	int8_t x67 = -1;
	uint64_t x68 = UINT64_MAX;
	static volatile int32_t t16 = 4;

	t16 = (x65<(x66<(x67==x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int16_t x71 = -1;
	static int32_t t17 = -7914;

	t17 = (x69<(x70<(x71==x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = 45354307233314640LL;
	static int64_t x74 = -1LL;
	static int16_t x75 = INT16_MIN;

	t18 = (x73<(x74<(x75==x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 3U;
	uint32_t x78 = 251150183U;
	int32_t x79 = INT32_MAX;
	volatile uint64_t x80 = 47068387377029171LLU;

	t19 = (x77<(x78<(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x81 = UINT32_MAX;
	int8_t x82 = INT8_MIN;
	int32_t x83 = -1;
	static int16_t x84 = 4604;

	t20 = (x81<(x82<(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int64_t x86 = INT64_MIN;
	int16_t x87 = INT16_MIN;
	volatile int32_t t21 = -446390;

	t21 = (x85<(x86<(x87==x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	volatile int8_t x91 = -2;
	uint8_t x92 = 3U;
	int32_t t22 = 9;

	t22 = (x89<(x90<(x91==x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 7898U;
	int32_t x94 = INT32_MIN;
	static int32_t x95 = INT32_MIN;
	static int8_t x96 = INT8_MAX;

	t23 = (x93<(x94<(x95==x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	volatile uint8_t x98 = 0U;
	int32_t x99 = -1;
	volatile int64_t x100 = 616LL;
	volatile int32_t t24 = 1;

	t24 = (x97<(x98<(x99==x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 4033;
	int8_t x102 = INT8_MAX;
	volatile uint16_t x103 = 527U;
	int32_t x104 = -7;
	int32_t t25 = -138575;

	t25 = (x101<(x102<(x103==x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = -44;
	volatile int64_t x106 = -1LL;
	int16_t x107 = INT16_MIN;
	volatile int32_t t26 = 0;

	t26 = (x105<(x106<(x107==x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MAX;
	uint64_t x110 = 127235874357835354LLU;
	volatile uint16_t x111 = UINT16_MAX;
	int32_t x112 = 4932;
	volatile int32_t t27 = 3189909;

	t27 = (x109<(x110<(x111==x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = INT8_MAX;
	static int32_t x115 = INT32_MIN;
	volatile int8_t x116 = INT8_MIN;
	static volatile int32_t t28 = -19804125;

	t28 = (x113<(x114<(x115==x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 4773476536601LLU;
	int16_t x118 = INT16_MIN;
	int8_t x119 = INT8_MIN;
	static uint64_t x120 = 206LLU;

	t29 = (x117<(x118<(x119==x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x122 = UINT32_MAX;
	uint16_t x123 = 1U;
	static volatile uint16_t x124 = 13270U;
	int32_t t30 = 224418846;

	t30 = (x121<(x122<(x123==x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	uint64_t x126 = 3673169LLU;
	static uint8_t x127 = 6U;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = -1;

	t31 = (x125<(x126<(x127==x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 73U;
	int8_t x131 = INT8_MAX;
	int16_t x132 = -1;
	volatile int32_t t32 = -34588667;

	t32 = (x129<(x130<(x131==x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = UINT64_MAX;
	static int16_t x134 = INT16_MIN;
	int8_t x136 = -1;
	int32_t t33 = 253251;

	t33 = (x133<(x134<(x135==x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = -3LL;
	volatile uint64_t x138 = UINT64_MAX;
	int64_t x139 = -936215029063512LL;
	static volatile int32_t t34 = -36493303;

	t34 = (x137<(x138<(x139==x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	int8_t x142 = 2;
	int32_t x143 = -19904068;
	volatile int16_t x144 = INT16_MIN;
	volatile int32_t t35 = -445;

	t35 = (x141<(x142<(x143==x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = 13329U;
	static int32_t x147 = -953;
	uint32_t x148 = UINT32_MAX;
	int32_t t36 = 64715437;

	t36 = (x145<(x146<(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = INT8_MIN;
	int32_t x150 = INT32_MIN;
	uint64_t x152 = 122132828674068LLU;
	static int32_t t37 = -18;

	t37 = (x149<(x150<(x151==x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x154 = INT64_MIN;
	uint64_t x155 = 17148LLU;
	volatile int64_t x156 = INT64_MIN;
	static int32_t t38 = -18;

	t38 = (x153<(x154<(x155==x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 36;
	int32_t x159 = INT32_MIN;
	int32_t x160 = -28410;
	int32_t t39 = 9;

	t39 = (x157<(x158<(x159==x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x163 = 1232132;
	static int32_t t40 = -230860286;

	t40 = (x161<(x162<(x163==x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -1;
	static volatile int16_t x166 = 0;
	static int64_t x168 = 0LL;
	int32_t t41 = 6;

	t41 = (x165<(x166<(x167==x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	int16_t x170 = -20;
	uint16_t x172 = 3722U;
	int32_t t42 = 379534;

	t42 = (x169<(x170<(x171==x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 2U;
	int8_t x175 = INT8_MIN;
	volatile int64_t x176 = INT64_MIN;
	volatile int32_t t43 = -14262823;

	t43 = (x173<(x174<(x175==x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 17045656917928427LLU;
	volatile int8_t x179 = INT8_MIN;
	volatile int32_t t44 = 109568;

	t44 = (x177<(x178<(x179==x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = UINT8_MAX;
	static volatile int32_t x183 = INT32_MIN;
	static int16_t x184 = -1;
	static volatile int32_t t45 = 2;

	t45 = (x181<(x182<(x183==x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -2392105LL;
	uint32_t x188 = 709599U;
	static int32_t t46 = -71580;

	t46 = (x185<(x186<(x187==x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = -1;
	volatile int8_t x190 = 1;
	uint8_t x191 = 40U;
	static int32_t t47 = 981483047;

	t47 = (x189<(x190<(x191==x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -31;
	static int64_t x196 = -1LL;
	volatile int32_t t48 = 2;

	t48 = (x193<(x194<(x195==x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 5209973LLU;
	static int16_t x198 = 4832;
	int16_t x199 = INT16_MIN;
	uint32_t x200 = 1U;
	int32_t t49 = 14471654;

	t49 = (x197<(x198<(x199==x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	volatile int16_t x202 = INT16_MIN;
	volatile int8_t x203 = 1;
	volatile int32_t t50 = -5792;

	t50 = (x201<(x202<(x203==x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int16_t x206 = -1;
	int32_t x208 = INT32_MIN;
	volatile int32_t t51 = 13440526;

	t51 = (x205<(x206<(x207==x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -172459982448379LL;
	static int8_t x210 = -1;
	volatile int32_t t52 = -7;

	t52 = (x209<(x210<(x211==x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x215 = INT64_MIN;
	int8_t x216 = -1;
	static volatile int32_t t53 = -4;

	t53 = (x213<(x214<(x215==x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = -4080680716408LL;
	uint8_t x218 = UINT8_MAX;
	int32_t x219 = INT32_MIN;
	volatile int32_t t54 = -10635;

	t54 = (x217<(x218<(x219==x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 659254304U;
	int32_t x222 = INT32_MAX;
	int64_t x223 = INT64_MAX;
	volatile int16_t x224 = 156;

	t55 = (x221<(x222<(x223==x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = -1;
	volatile int32_t x226 = 17691;
	static uint8_t x227 = UINT8_MAX;
	static volatile int16_t x228 = INT16_MAX;
	static volatile int32_t t56 = -1;

	t56 = (x225<(x226<(x227==x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x232 = INT16_MAX;

	t57 = (x229<(x230<(x231==x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = -1;
	static volatile int8_t x234 = -30;
	uint32_t x235 = 11U;
	static uint16_t x236 = 4418U;
	static int32_t t58 = 240;

	t58 = (x233<(x234<(x235==x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 278886316;
	int32_t x238 = -1;
	int16_t x239 = INT16_MAX;
	volatile int64_t x240 = INT64_MIN;
	int32_t t59 = -183;

	t59 = (x237<(x238<(x239==x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 14404U;
	uint8_t x243 = 6U;
	int64_t x244 = INT64_MIN;
	volatile int32_t t60 = -13882;

	t60 = (x241<(x242<(x243==x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	uint8_t x247 = UINT8_MAX;
	uint64_t x248 = 782895141968242202LLU;

	t61 = (x245<(x246<(x247==x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = UINT16_MAX;
	int64_t x251 = INT64_MIN;
	int64_t x252 = -1LL;
	static int32_t t62 = -663491;

	t62 = (x249<(x250<(x251==x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x253 = 12U;
	int32_t x254 = INT32_MAX;
	static uint8_t x256 = 1U;
	volatile int32_t t63 = 501990807;

	t63 = (x253<(x254<(x255==x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	volatile uint64_t x258 = UINT64_MAX;
	volatile uint64_t x259 = 127LLU;
	static uint64_t x260 = 646732LLU;
	volatile int32_t t64 = -3792375;

	t64 = (x257<(x258<(x259==x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = 1;
	static volatile int16_t x262 = -1;
	int32_t x263 = 3787358;
	int16_t x264 = INT16_MIN;
	volatile int32_t t65 = -2;

	t65 = (x261<(x262<(x263==x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	uint16_t x266 = 1U;
	uint64_t x267 = 1546017403677LLU;
	int32_t x268 = 21496;

	t66 = (x265<(x266<(x267==x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	volatile uint8_t x271 = 66U;

	t67 = (x269<(x270<(x271==x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x273 = 169U;
	volatile uint64_t x274 = UINT64_MAX;
	uint8_t x275 = UINT8_MAX;
	volatile int8_t x276 = INT8_MIN;
	int32_t t68 = -1315;

	t68 = (x273<(x274<(x275==x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	static volatile int32_t x278 = INT32_MIN;
	int16_t x279 = INT16_MAX;
	static uint64_t x280 = UINT64_MAX;
	volatile int32_t t69 = -29;

	t69 = (x277<(x278<(x279==x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MAX;
	volatile uint8_t x282 = UINT8_MAX;
	uint64_t x284 = 4529938LLU;
	volatile int32_t t70 = 2502;

	t70 = (x281<(x282<(x283==x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x285 = 26U;
	uint32_t x286 = UINT32_MAX;
	static int8_t x287 = 29;
	static int8_t x288 = -1;
	volatile int32_t t71 = -331207;

	t71 = (x285<(x286<(x287==x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = 2;
	static int16_t x290 = 11;
	int32_t x292 = INT32_MIN;
	static int32_t t72 = -7621;

	t72 = (x289<(x290<(x291==x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	int64_t x294 = -8833102086609218LL;
	int32_t x295 = INT32_MIN;
	int8_t x296 = INT8_MAX;

	t73 = (x293<(x294<(x295==x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x297 = INT16_MIN;
	int8_t x299 = INT8_MAX;
	int64_t x300 = INT64_MIN;
	int32_t t74 = -5347;

	t74 = (x297<(x298<(x299==x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = -1;
	int8_t x302 = -51;
	int8_t x303 = 10;
	int16_t x304 = 14;

	t75 = (x301<(x302<(x303==x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x307 = INT32_MAX;
	volatile int32_t t76 = -291693;

	t76 = (x305<(x306<(x307==x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = INT32_MAX;
	uint16_t x311 = 91U;
	static int16_t x312 = -1;
	volatile int32_t t77 = -1983533;

	t77 = (x309<(x310<(x311==x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MAX;
	static int64_t x315 = 211938994315046415LL;
	int8_t x316 = INT8_MAX;
	int32_t t78 = 11768;

	t78 = (x313<(x314<(x315==x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x317 = INT64_MIN;
	static uint32_t x318 = 2525U;
	static volatile uint32_t x319 = 381U;
	static uint8_t x320 = 5U;
	int32_t t79 = 87;

	t79 = (x317<(x318<(x319==x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = 112;
	static uint8_t x322 = 14U;
	static volatile uint16_t x323 = UINT16_MAX;
	volatile uint8_t x324 = UINT8_MAX;

	t80 = (x321<(x322<(x323==x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = -1;
	int16_t x326 = INT16_MIN;
	static uint8_t x327 = UINT8_MAX;
	int8_t x328 = INT8_MAX;
	volatile int32_t t81 = 410;

	t81 = (x325<(x326<(x327==x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 647U;
	uint64_t x330 = 4377700707857LLU;
	int16_t x332 = -1;
	int32_t t82 = 222798460;

	t82 = (x329<(x330<(x331==x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x334 = INT16_MIN;
	uint8_t x335 = UINT8_MAX;
	int64_t x336 = INT64_MIN;

	t83 = (x333<(x334<(x335==x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1LL;
	int32_t x338 = INT32_MIN;
	uint64_t x339 = 5468621688599LLU;
	int32_t x340 = -1;
	volatile int32_t t84 = -1;

	t84 = (x337<(x338<(x339==x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -511768793LL;
	uint32_t x342 = UINT32_MAX;
	int32_t x343 = 579536431;
	uint8_t x344 = 0U;
	volatile int32_t t85 = 106355659;

	t85 = (x341<(x342<(x343==x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	volatile int32_t x346 = INT32_MAX;
	volatile uint8_t x347 = 73U;
	static uint16_t x348 = 28U;

	t86 = (x345<(x346<(x347==x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x351 = 3463LL;
	static int64_t x352 = INT64_MAX;
	int32_t t87 = -274;

	t87 = (x349<(x350<(x351==x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = UINT32_MAX;
	int16_t x354 = 14;
	int32_t x355 = INT32_MIN;
	int32_t t88 = 33;

	t88 = (x353<(x354<(x355==x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = INT64_MIN;
	uint32_t x358 = UINT32_MAX;
	uint32_t x359 = 10327U;
	static int16_t x360 = INT16_MIN;
	int32_t t89 = 0;

	t89 = (x357<(x358<(x359==x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x362 = INT8_MAX;
	int64_t x363 = INT64_MAX;
	uint16_t x364 = UINT16_MAX;
	static int32_t t90 = 7;

	t90 = (x361<(x362<(x363==x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	static int32_t x366 = INT32_MAX;
	volatile uint64_t x367 = 29695090941LLU;
	static int8_t x368 = INT8_MAX;

	t91 = (x365<(x366<(x367==x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	int64_t x371 = INT64_MIN;
	int16_t x372 = INT16_MAX;
	static volatile int32_t t92 = -2;

	t92 = (x369<(x370<(x371==x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	int64_t x374 = INT64_MIN;
	static int32_t x375 = INT32_MAX;
	int32_t t93 = 938;

	t93 = (x373<(x374<(x375==x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = 64291814;
	static int32_t x378 = INT32_MAX;
	volatile int8_t x379 = INT8_MIN;
	static int16_t x380 = INT16_MIN;
	static volatile int32_t t94 = -126445957;

	t94 = (x377<(x378<(x379==x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 344665673U;
	static int32_t x382 = -1;
	int32_t x383 = -5456877;
	volatile int32_t t95 = -61384427;

	t95 = (x381<(x382<(x383==x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 28U;
	int16_t x386 = INT16_MIN;
	uint8_t x387 = 1U;
	int16_t x388 = 6;
	int32_t t96 = -1425392;

	t96 = (x385<(x386<(x387==x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	volatile uint32_t x390 = 306617U;

	t97 = (x389<(x390<(x391==x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MAX;
	static uint16_t x394 = 25U;
	int32_t x396 = 539872811;
	int32_t t98 = 128756;

	t98 = (x393<(x394<(x395==x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x397 = -1LL;
	int32_t x398 = INT32_MIN;
	static volatile int64_t x399 = 4680LL;
	int8_t x400 = INT8_MIN;
	static volatile int32_t t99 = -6239495;

	t99 = (x397<(x398<(x399==x400)));

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

