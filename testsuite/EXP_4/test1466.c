#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 3U;
int8_t x6 = -1;
static int32_t t1 = -105349;
int32_t t2 = 3746;
uint16_t x15 = 6310U;
uint32_t x17 = 26U;
int8_t x18 = -1;
int32_t x21 = INT32_MAX;
static volatile int32_t t6 = -11827613;
uint16_t x30 = UINT16_MAX;
static int64_t x33 = INT64_MIN;
uint32_t x37 = 229U;
static volatile int16_t x50 = INT16_MIN;
static volatile int32_t t12 = -6505534;
static int32_t x56 = INT32_MIN;
uint64_t x57 = UINT64_MAX;
uint16_t x58 = 4U;
int16_t x59 = -392;
uint16_t x63 = 7U;
int32_t x64 = INT32_MIN;
int8_t x65 = 1;
volatile int8_t x71 = 0;
int8_t x72 = INT8_MIN;
int32_t x74 = -810781;
int64_t x79 = 61064247453LL;
int8_t x83 = 1;
int32_t t20 = -42;
int16_t x96 = INT16_MAX;
int8_t x101 = -1;
uint8_t x104 = UINT8_MAX;
int32_t x105 = -1;
uint8_t x111 = UINT8_MAX;
uint8_t x116 = 1U;
int32_t t28 = 73920;
uint16_t x119 = UINT16_MAX;
volatile int32_t t29 = 123016211;
int32_t t30 = -824;
int64_t x127 = -921148287LL;
int16_t x130 = INT16_MIN;
uint32_t x138 = UINT32_MAX;
int64_t x143 = -54384895035307LL;
uint32_t x150 = UINT32_MAX;
int8_t x151 = INT8_MIN;
uint8_t x154 = 0U;
int64_t x155 = INT64_MAX;
static volatile int32_t t38 = -3;
uint16_t x160 = 2099U;
static volatile int32_t t40 = 1;
uint32_t x170 = 220U;
int32_t x172 = -311;
int32_t t42 = 427;
uint16_t x174 = 1006U;
volatile int8_t x181 = 2;
int8_t x182 = 13;
int32_t x185 = INT32_MIN;
static uint64_t x197 = UINT64_MAX;
int16_t x201 = 251;
uint64_t x203 = 3960237834423709LLU;
static int64_t x210 = -1LL;
uint16_t x211 = UINT16_MAX;
int32_t x215 = INT32_MIN;
int8_t x219 = INT8_MAX;
volatile int64_t x224 = 123LL;
volatile uint16_t x227 = 2U;
int32_t x228 = -50708189;
static uint32_t x232 = 193311U;
uint32_t x236 = 31588U;
static uint16_t x245 = UINT16_MAX;
static uint8_t x249 = UINT8_MAX;
int32_t x253 = INT32_MIN;
uint8_t x255 = 5U;
volatile int32_t t63 = -51;
int16_t x258 = 5;
int16_t x260 = -1;
volatile int16_t x261 = INT16_MIN;
volatile int32_t x263 = INT32_MAX;
int32_t t66 = 3639;
int16_t x269 = 6293;
int32_t t67 = -7442;
int8_t x276 = -1;
volatile uint32_t x278 = UINT32_MAX;
int16_t x288 = INT16_MIN;
int32_t t71 = -123;
int32_t x296 = 276;
int64_t x297 = INT64_MAX;
static uint8_t x298 = 6U;
uint8_t x302 = 1U;
int8_t x307 = -1;
int32_t x309 = 71496240;
volatile int32_t t78 = -17;
uint32_t x319 = UINT32_MAX;
int8_t x320 = 28;
int64_t x323 = -13231598320684LL;
static int8_t x325 = INT8_MAX;
volatile int64_t x327 = -6419815LL;
uint64_t x333 = 46004229957804076LLU;
int8_t x344 = -1;
static int8_t x345 = -49;
static int8_t x356 = 2;
int16_t x363 = INT16_MAX;
uint32_t x366 = 3501724U;
uint8_t x367 = 38U;
static int32_t t91 = 68;
static volatile int8_t x370 = INT8_MIN;
volatile int8_t x374 = -17;
static volatile int32_t t93 = -7684;
uint16_t x386 = 6U;
uint8_t x400 = 32U;


void f0(void) {
	int16_t x2 = INT16_MAX;
	uint16_t x3 = 115U;
	int64_t x4 = INT64_MIN;
	static int32_t t0 = 421344;

	t0 = (x1<=(x2<(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	uint8_t x7 = UINT8_MAX;
	static uint32_t x8 = UINT32_MAX;

	t1 = (x5<=(x6<(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 32734U;
	static int64_t x10 = -558829741808961LL;
	static int8_t x11 = 15;
	int32_t x12 = -1;

	t2 = (x9<=(x10<(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static volatile int64_t x14 = 1027365624081LL;
	volatile int64_t x16 = -10769314LL;
	int32_t t3 = -73672;

	t3 = (x13<=(x14<(x15<x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x19 = 3;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 93315679;

	t4 = (x17<=(x18<(x19<x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x22 = -1LL;
	uint64_t x23 = 38LLU;
	static volatile uint64_t x24 = UINT64_MAX;
	int32_t t5 = -2385180;

	t5 = (x21<=(x22<(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	int8_t x26 = -1;
	int16_t x27 = INT16_MAX;
	static volatile int16_t x28 = 1;

	t6 = (x25<=(x26<(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 4U;
	volatile uint32_t x31 = 5277204U;
	uint16_t x32 = 288U;
	volatile int32_t t7 = 9603;

	t7 = (x29<=(x30<(x31<x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MIN;
	int16_t x35 = INT16_MAX;
	static int64_t x36 = 1894183327LL;
	volatile int32_t t8 = 30946;

	t8 = (x33<=(x34<(x35<x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = -1;
	int64_t x39 = 1292053113LL;
	int64_t x40 = 12699485LL;
	volatile int32_t t9 = -163623606;

	t9 = (x37<=(x38<(x39<x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 38;
	static volatile int8_t x42 = INT8_MIN;
	static int64_t x43 = 290955898191734091LL;
	int32_t x44 = 199825986;
	volatile int32_t t10 = -157959;

	t10 = (x41<=(x42<(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	uint64_t x46 = UINT64_MAX;
	volatile uint64_t x47 = UINT64_MAX;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t11 = 1351;

	t11 = (x45<=(x46<(x47<x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 1724893;
	int32_t x51 = INT32_MIN;
	uint64_t x52 = 884781LLU;

	t12 = (x49<=(x50<(x51<x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -49;
	volatile int64_t x54 = INT64_MAX;
	volatile int64_t x55 = INT64_MIN;
	volatile int32_t t13 = -609579030;

	t13 = (x53<=(x54<(x55<x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x60 = INT64_MIN;
	volatile int32_t t14 = 1043007504;

	t14 = (x57<=(x58<(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MIN;
	int8_t x62 = INT8_MAX;
	static volatile int32_t t15 = 168;

	t15 = (x61<=(x62<(x63<x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MIN;
	uint16_t x67 = UINT16_MAX;
	int64_t x68 = INT64_MIN;
	int32_t t16 = -2695991;

	t16 = (x65<=(x66<(x67<x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 1U;
	static int32_t x70 = -1;
	static volatile int32_t t17 = -31178667;

	t17 = (x69<=(x70<(x71<x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	uint16_t x75 = 1904U;
	static int64_t x76 = -255LL;
	int32_t t18 = 10;

	t18 = (x73<=(x74<(x75<x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 15U;
	int16_t x78 = -5499;
	volatile uint8_t x80 = UINT8_MAX;
	volatile int32_t t19 = -7570;

	t19 = (x77<=(x78<(x79<x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -5;
	int32_t x82 = INT32_MIN;
	static int32_t x84 = -1;

	t20 = (x81<=(x82<(x83<x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	int32_t x86 = INT32_MAX;
	int64_t x87 = -2716950532472601932LL;
	uint8_t x88 = 1U;
	static int32_t t21 = 3893;

	t21 = (x85<=(x86<(x87<x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 1;
	int32_t x90 = -1;
	int64_t x91 = INT64_MIN;
	int64_t x92 = -4561LL;
	int32_t t22 = -242;

	t22 = (x89<=(x90<(x91<x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 3033LLU;
	int16_t x94 = INT16_MAX;
	static int64_t x95 = -1LL;
	volatile int32_t t23 = -1;

	t23 = (x93<=(x94<(x95<x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1983;
	uint32_t x98 = 958U;
	uint64_t x99 = 130602685134096608LLU;
	int8_t x100 = 0;
	int32_t t24 = 24474;

	t24 = (x97<=(x98<(x99<x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = 4419305;
	uint16_t x103 = 18547U;
	volatile int32_t t25 = -3608266;

	t25 = (x101<=(x102<(x103<x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = INT8_MIN;
	static int64_t x107 = INT64_MIN;
	int16_t x108 = INT16_MAX;
	int32_t t26 = 617395426;

	t26 = (x105<=(x106<(x107<x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 1U;
	static int8_t x110 = INT8_MIN;
	volatile int8_t x112 = -1;
	int32_t t27 = 11;

	t27 = (x109<=(x110<(x111<x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	volatile int32_t x114 = INT32_MIN;
	uint64_t x115 = UINT64_MAX;

	t28 = (x113<=(x114<(x115<x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MIN;
	static volatile uint64_t x118 = UINT64_MAX;
	volatile int64_t x120 = INT64_MIN;

	t29 = (x117<=(x118<(x119<x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	volatile int32_t x122 = -1;
	static int64_t x123 = -760780LL;
	static int32_t x124 = INT32_MAX;

	t30 = (x121<=(x122<(x123<x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 12848U;
	uint64_t x126 = UINT64_MAX;
	static int8_t x128 = INT8_MIN;
	static volatile int32_t t31 = 1139;

	t31 = (x125<=(x126<(x127<x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = 3407LL;
	volatile int16_t x131 = INT16_MIN;
	static uint32_t x132 = 1851U;
	volatile int32_t t32 = -40223;

	t32 = (x129<=(x130<(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 606051;
	int64_t x134 = -66043863238517LL;
	int8_t x135 = INT8_MIN;
	int64_t x136 = INT64_MAX;
	volatile int32_t t33 = 18;

	t33 = (x133<=(x134<(x135<x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	static uint32_t x139 = 12U;
	int8_t x140 = INT8_MAX;
	volatile int32_t t34 = -850943;

	t34 = (x137<=(x138<(x139<x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	int64_t x142 = INT64_MIN;
	uint8_t x144 = UINT8_MAX;
	int32_t t35 = -107765201;

	t35 = (x141<=(x142<(x143<x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	uint16_t x146 = 32258U;
	int32_t x147 = -6282;
	static volatile int32_t x148 = INT32_MAX;
	volatile int32_t t36 = -2876780;

	t36 = (x145<=(x146<(x147<x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	static uint32_t x152 = 282633U;
	volatile int32_t t37 = -95311;

	t37 = (x149<=(x150<(x151<x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x153 = 12943798U;
	static volatile int64_t x156 = INT64_MIN;

	t38 = (x153<=(x154<(x155<x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = INT64_MIN;
	int64_t x158 = INT64_MIN;
	static volatile int64_t x159 = INT64_MIN;
	volatile int32_t t39 = 32;

	t39 = (x157<=(x158<(x159<x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 0U;
	static int16_t x162 = 1560;
	uint16_t x163 = 10595U;
	int8_t x164 = INT8_MIN;

	t40 = (x161<=(x162<(x163<x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MIN;
	volatile int8_t x166 = -1;
	volatile int32_t x167 = -1;
	uint64_t x168 = 377260LLU;
	int32_t t41 = 217294;

	t41 = (x165<=(x166<(x167<x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = -1;
	volatile int64_t x171 = -9729405000LL;

	t42 = (x169<=(x170<(x171<x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = INT64_MIN;
	static int64_t x175 = INT64_MAX;
	int32_t x176 = INT32_MAX;
	int32_t t43 = 175;

	t43 = (x173<=(x174<(x175<x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -2;
	static int64_t x178 = INT64_MIN;
	volatile int8_t x179 = -1;
	static uint8_t x180 = 1U;
	int32_t t44 = 3252;

	t44 = (x177<=(x178<(x179<x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x183 = 2869945060LLU;
	static int16_t x184 = -27;
	int32_t t45 = -6;

	t45 = (x181<=(x182<(x183<x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x186 = 5U;
	int8_t x187 = INT8_MIN;
	static int64_t x188 = -5664LL;
	volatile int32_t t46 = -1;

	t46 = (x185<=(x186<(x187<x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 12;
	volatile uint16_t x190 = 18U;
	int8_t x191 = 1;
	int16_t x192 = INT16_MAX;
	volatile int32_t t47 = -1;

	t47 = (x189<=(x190<(x191<x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = INT16_MAX;
	int8_t x194 = -1;
	int16_t x195 = -5;
	uint32_t x196 = UINT32_MAX;
	int32_t t48 = -62836;

	t48 = (x193<=(x194<(x195<x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x198 = 12309;
	uint32_t x199 = UINT32_MAX;
	uint64_t x200 = 11545216578792697LLU;
	static int32_t t49 = 5936053;

	t49 = (x197<=(x198<(x199<x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = 73468887;
	uint8_t x204 = 39U;
	volatile int32_t t50 = 6478;

	t50 = (x201<=(x202<(x203<x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x205 = 14073U;
	uint64_t x206 = UINT64_MAX;
	int64_t x207 = 2193372907993LL;
	int16_t x208 = INT16_MIN;
	int32_t t51 = -73670946;

	t51 = (x205<=(x206<(x207<x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 2U;
	uint32_t x212 = 385211U;
	static int32_t t52 = 28431651;

	t52 = (x209<=(x210<(x211<x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MAX;
	int8_t x214 = -7;
	static int16_t x216 = -1;
	volatile int32_t t53 = 2488652;

	t53 = (x213<=(x214<(x215<x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int32_t x218 = -2462678;
	int16_t x220 = INT16_MIN;
	volatile int32_t t54 = 915384402;

	t54 = (x217<=(x218<(x219<x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	int64_t x222 = 671524533829040217LL;
	volatile int16_t x223 = -1;
	int32_t t55 = -230;

	t55 = (x221<=(x222<(x223<x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = -1;
	int64_t x226 = INT64_MIN;
	int32_t t56 = -51341;

	t56 = (x225<=(x226<(x227<x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 1;
	int32_t x230 = 7;
	static uint8_t x231 = UINT8_MAX;
	static int32_t t57 = 370;

	t57 = (x229<=(x230<(x231<x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MIN;
	volatile uint8_t x234 = 0U;
	uint8_t x235 = 3U;
	int32_t t58 = -213373273;

	t58 = (x233<=(x234<(x235<x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	volatile int64_t x238 = -1LL;
	int32_t x239 = INT32_MAX;
	volatile int32_t x240 = INT32_MIN;
	static volatile int32_t t59 = -5558;

	t59 = (x237<=(x238<(x239<x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int16_t x242 = INT16_MIN;
	static volatile int32_t x243 = INT32_MIN;
	int64_t x244 = -1LL;
	int32_t t60 = -60352;

	t60 = (x241<=(x242<(x243<x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = -1;
	int32_t x247 = INT32_MIN;
	int64_t x248 = INT64_MIN;
	volatile int32_t t61 = 68857;

	t61 = (x245<=(x246<(x247<x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x250 = 1514400464LLU;
	static uint8_t x251 = 6U;
	static uint16_t x252 = 5U;
	volatile int32_t t62 = -19;

	t62 = (x249<=(x250<(x251<x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x254 = 22248524U;
	static uint8_t x256 = 11U;

	t63 = (x253<=(x254<(x255<x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = -335;
	static uint8_t x259 = 1U;
	volatile int32_t t64 = 1;

	t64 = (x257<=(x258<(x259<x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x262 = -1;
	int8_t x264 = -23;
	int32_t t65 = 37334159;

	t65 = (x261<=(x262<(x263<x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	static volatile int16_t x266 = INT16_MIN;
	uint8_t x267 = 33U;
	int8_t x268 = -1;

	t66 = (x265<=(x266<(x267<x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x270 = 55457LLU;
	int32_t x271 = INT32_MIN;
	uint16_t x272 = 1575U;

	t67 = (x269<=(x270<(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	uint64_t x274 = UINT64_MAX;
	int16_t x275 = -1;
	volatile int32_t t68 = 1;

	t68 = (x273<=(x274<(x275<x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	int64_t x279 = INT64_MIN;
	uint64_t x280 = 261172036810505515LLU;
	static int32_t t69 = 3180;

	t69 = (x277<=(x278<(x279<x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = -1;
	volatile int16_t x282 = 160;
	static volatile uint64_t x283 = 22357119968943902LLU;
	uint16_t x284 = UINT16_MAX;
	int32_t t70 = 3;

	t70 = (x281<=(x282<(x283<x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	int32_t x286 = INT32_MAX;
	volatile uint64_t x287 = UINT64_MAX;

	t71 = (x285<=(x286<(x287<x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x289 = 424414LL;
	int64_t x290 = INT64_MAX;
	int32_t x291 = INT32_MAX;
	uint64_t x292 = 4274701304LLU;
	int32_t t72 = 19109462;

	t72 = (x289<=(x290<(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	static int32_t x294 = -38370315;
	int32_t x295 = INT32_MIN;
	volatile int32_t t73 = 4;

	t73 = (x293<=(x294<(x295<x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x299 = -271852162191478674LL;
	uint64_t x300 = UINT64_MAX;
	static int32_t t74 = 3152581;

	t74 = (x297<=(x298<(x299<x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x301 = 24U;
	uint8_t x303 = 9U;
	int8_t x304 = INT8_MIN;
	static volatile int32_t t75 = 762;

	t75 = (x301<=(x302<(x303<x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int8_t x306 = -1;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t76 = -15247;

	t76 = (x305<=(x306<(x307<x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = 441989170940LL;
	uint16_t x311 = 90U;
	uint32_t x312 = 2U;
	int32_t t77 = -6333;

	t77 = (x309<=(x310<(x311<x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = -1;
	int32_t x314 = 190536927;
	int8_t x315 = 0;
	volatile uint16_t x316 = 1U;

	t78 = (x313<=(x314<(x315<x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = UINT16_MAX;
	static int16_t x318 = INT16_MIN;
	int32_t t79 = -109085;

	t79 = (x317<=(x318<(x319<x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x321 = 310942U;
	volatile int8_t x322 = INT8_MIN;
	int64_t x324 = INT64_MIN;
	int32_t t80 = -38480;

	t80 = (x321<=(x322<(x323<x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x326 = INT8_MAX;
	volatile uint8_t x328 = 109U;
	int32_t t81 = -963634;

	t81 = (x325<=(x326<(x327<x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x329 = 1U;
	int32_t x330 = -1;
	static int8_t x331 = -1;
	int8_t x332 = 0;
	volatile int32_t t82 = 671662;

	t82 = (x329<=(x330<(x331<x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = -2;
	uint16_t x335 = UINT16_MAX;
	uint64_t x336 = 4389LLU;
	int32_t t83 = -1376318;

	t83 = (x333<=(x334<(x335<x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MIN;
	int16_t x338 = INT16_MIN;
	static uint32_t x339 = 86995U;
	int64_t x340 = INT64_MIN;
	volatile int32_t t84 = 2399;

	t84 = (x337<=(x338<(x339<x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int8_t x342 = -1;
	int8_t x343 = INT8_MAX;
	int32_t t85 = -223328423;

	t85 = (x341<=(x342<(x343<x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = 21;
	int64_t x347 = INT64_MIN;
	static uint16_t x348 = UINT16_MAX;
	static int32_t t86 = 65616126;

	t86 = (x345<=(x346<(x347<x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int16_t x350 = -1;
	volatile int64_t x351 = INT64_MIN;
	int64_t x352 = 181423LL;
	volatile int32_t t87 = -2;

	t87 = (x349<=(x350<(x351<x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = 7779207LL;
	int64_t x354 = INT64_MAX;
	static uint64_t x355 = 143914253731666LLU;
	static int32_t t88 = 950;

	t88 = (x353<=(x354<(x355<x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	int16_t x358 = -1;
	static volatile int32_t x359 = INT32_MIN;
	static int64_t x360 = INT64_MIN;
	int32_t t89 = 349159;

	t89 = (x357<=(x358<(x359<x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = -634319146;
	volatile int32_t x362 = INT32_MAX;
	static int32_t x364 = INT32_MIN;
	static volatile int32_t t90 = 1241708;

	t90 = (x361<=(x362<(x363<x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = INT64_MIN;
	static volatile uint64_t x368 = 13495684252LLU;

	t91 = (x365<=(x366<(x367<x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int8_t x371 = INT8_MIN;
	int16_t x372 = -5177;
	int32_t t92 = 58;

	t92 = (x369<=(x370<(x371<x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	uint16_t x375 = 583U;
	int16_t x376 = -1;

	t93 = (x373<=(x374<(x375<x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	uint64_t x378 = 3229677LLU;
	int8_t x379 = -1;
	uint32_t x380 = 1U;
	int32_t t94 = -3208540;

	t94 = (x377<=(x378<(x379<x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -1;
	uint32_t x382 = UINT32_MAX;
	int16_t x383 = 250;
	uint32_t x384 = 14965U;
	int32_t t95 = -68704108;

	t95 = (x381<=(x382<(x383<x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	uint8_t x387 = 10U;
	volatile uint16_t x388 = UINT16_MAX;
	volatile int32_t t96 = -2328;

	t96 = (x385<=(x386<(x387<x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = 6;
	uint32_t x390 = UINT32_MAX;
	static int64_t x391 = 111629172230021791LL;
	uint32_t x392 = UINT32_MAX;
	volatile int32_t t97 = -11150;

	t97 = (x389<=(x390<(x391<x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 1LLU;
	static int16_t x394 = 0;
	uint64_t x395 = 914LLU;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t98 = 1147;

	t98 = (x393<=(x394<(x395<x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	int32_t x398 = INT32_MIN;
	uint8_t x399 = 9U;
	static volatile int32_t t99 = 1079924;

	t99 = (x397<=(x398<(x399<x400)));

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

