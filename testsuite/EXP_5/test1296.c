#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = 15057133U;
static int8_t x5 = INT8_MIN;
int32_t t1 = 1012471073;
int16_t x14 = INT16_MIN;
int64_t x19 = 264249922010LL;
int32_t t4 = 296803212;
volatile int32_t t5 = -122357;
volatile int16_t x35 = INT16_MAX;
int32_t t8 = 31114052;
uint8_t x39 = 1U;
int8_t x40 = 17;
volatile uint8_t x42 = 0U;
int64_t x43 = INT64_MAX;
uint16_t x44 = 116U;
volatile int8_t x45 = INT8_MIN;
volatile int32_t t11 = -365178849;
static int8_t x67 = INT8_MIN;
uint64_t x72 = UINT64_MAX;
uint8_t x78 = 62U;
int16_t x80 = 1;
static volatile int32_t t19 = 57675;
volatile int8_t x82 = INT8_MIN;
volatile int16_t x84 = -1;
volatile int16_t x85 = INT16_MIN;
volatile uint32_t x94 = UINT32_MAX;
uint16_t x98 = 17U;
uint64_t x100 = 657414LLU;
int32_t x102 = INT32_MAX;
static uint32_t x103 = 34783U;
static volatile uint32_t x104 = 1402896348U;
volatile int32_t t25 = 8575920;
int32_t t27 = -47442;
int64_t x119 = -10061LL;
volatile uint8_t x121 = 2U;
volatile uint16_t x125 = 30470U;
int32_t t31 = -1366341;
uint64_t x131 = UINT64_MAX;
static uint64_t x135 = 459586033939LLU;
static volatile int32_t t33 = 73;
static uint32_t x140 = UINT32_MAX;
int16_t x165 = 23;
int32_t x168 = -98460198;
uint64_t x183 = 18783478145LLU;
int64_t x184 = -1563808LL;
volatile int32_t t45 = -5;
volatile int32_t x185 = INT32_MAX;
int8_t x192 = INT8_MIN;
volatile uint16_t x193 = 8U;
static volatile uint16_t x197 = 364U;
int8_t x203 = INT8_MIN;
volatile int64_t x206 = -1811615507029LL;
volatile int32_t t52 = -14;
uint64_t x223 = 1306916LLU;
static int32_t t56 = 239617;
volatile int64_t x229 = -113145036007267LL;
static int64_t x232 = INT64_MIN;
volatile uint32_t x233 = 9408371U;
volatile int64_t x245 = 7556166631636LL;
volatile int32_t t61 = 4;
int64_t x260 = INT64_MAX;
uint32_t x263 = 495255U;
int32_t t65 = -620;
static volatile int32_t x266 = -1;
int32_t x268 = -13084998;
static volatile int8_t x269 = -1;
int16_t x275 = INT16_MAX;
volatile int64_t x276 = INT64_MIN;
static volatile int32_t t68 = 1;
int8_t x277 = -1;
int32_t x281 = INT32_MAX;
volatile int64_t x283 = -1003890LL;
int16_t x285 = -1;
uint8_t x288 = 1U;
int8_t x296 = -1;
uint8_t x298 = 123U;
static int64_t x299 = INT64_MIN;
int32_t t75 = -310015230;
volatile int32_t t76 = -1880;
volatile int32_t t77 = -36589843;
int64_t x315 = -1LL;
uint16_t x317 = UINT16_MAX;
volatile int32_t t80 = 970443285;
uint8_t x326 = 89U;
int16_t x330 = -1;
int16_t x332 = INT16_MIN;
volatile int32_t t82 = 2012051;
int8_t x339 = INT8_MAX;
static volatile uint16_t x340 = UINT16_MAX;
volatile uint8_t x342 = UINT8_MAX;
int16_t x343 = 5793;
uint64_t x344 = 25817637LLU;
int32_t t85 = -9848;
volatile int32_t x356 = INT32_MAX;
int8_t x357 = INT8_MAX;
volatile int32_t t90 = -33298;
uint32_t x365 = 1324U;
int8_t x366 = INT8_MIN;
volatile int32_t t91 = 214323931;
int32_t x369 = INT32_MIN;
volatile int16_t x373 = INT16_MIN;
volatile int32_t t93 = 1;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int8_t x3 = INT8_MIN;
	volatile uint32_t x4 = 34009U;
	volatile int32_t t0 = -264518230;

	t0 = (x1<((x2==x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 2U;
	int64_t x7 = INT64_MAX;
	volatile int16_t x8 = 52;

	t1 = (x5<((x6==x7)<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 8U;
	uint32_t x10 = 7278U;
	volatile int64_t x11 = -31115165239828LL;
	int32_t x12 = INT32_MAX;
	volatile int32_t t2 = 148299099;

	t2 = (x9<((x10==x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static int32_t x15 = -1;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t3 = -5858;

	t3 = (x13<((x14==x15)<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x17 = -1;
	static int32_t x18 = -2855798;
	volatile int16_t x20 = -1;

	t4 = (x17<((x18==x19)<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = -1;
	volatile int8_t x22 = INT8_MAX;
	volatile int32_t x23 = -1;
	uint8_t x24 = UINT8_MAX;

	t5 = (x21<((x22==x23)<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 4U;
	uint16_t x26 = UINT16_MAX;
	uint16_t x27 = UINT16_MAX;
	int8_t x28 = -1;
	volatile int32_t t6 = 1049606155;

	t6 = (x25<((x26==x27)<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	int32_t x30 = 34;
	int64_t x31 = -1LL;
	int32_t x32 = INT32_MIN;
	int32_t t7 = 1;

	t7 = (x29<((x30==x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = 0;
	int16_t x34 = INT16_MAX;
	int64_t x36 = -8050902355474492LL;

	t8 = (x33<((x34==x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 38686616U;
	static int16_t x38 = INT16_MIN;
	volatile int32_t t9 = -104963;

	t9 = (x37<((x38==x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = 7U;
	int32_t t10 = 0;

	t10 = (x41<((x42==x43)<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = -123638755026503550LL;
	int64_t x47 = INT64_MIN;
	int16_t x48 = -1;

	t11 = (x45<((x46==x47)<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 28;
	uint16_t x50 = 4853U;
	volatile uint16_t x51 = 32U;
	int32_t x52 = 0;
	volatile int32_t t12 = -754162;

	t12 = (x49<((x50==x51)<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = 8642U;
	volatile uint64_t x54 = UINT64_MAX;
	int16_t x55 = INT16_MIN;
	int16_t x56 = -1;
	int32_t t13 = -6937;

	t13 = (x53<((x54==x55)<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 105U;
	volatile int32_t x58 = -396120912;
	static uint8_t x59 = UINT8_MAX;
	static volatile int8_t x60 = -1;
	volatile int32_t t14 = -423998460;

	t14 = (x57<((x58==x59)<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = INT64_MIN;
	uint32_t x62 = 46484416U;
	int64_t x63 = INT64_MIN;
	uint8_t x64 = 63U;
	volatile int32_t t15 = 91;

	t15 = (x61<((x62==x63)<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int64_t x66 = INT64_MIN;
	uint8_t x68 = UINT8_MAX;
	volatile int32_t t16 = -168436462;

	t16 = (x65<((x66==x67)<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 1812U;
	int32_t x70 = INT32_MIN;
	int8_t x71 = 29;
	int32_t t17 = 0;

	t17 = (x69<((x70==x71)<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 6U;
	int64_t x74 = -1LL;
	int32_t x75 = INT32_MIN;
	static int32_t x76 = INT32_MAX;
	volatile int32_t t18 = 47730356;

	t18 = (x73<((x74==x75)<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = INT16_MAX;
	int64_t x79 = INT64_MAX;

	t19 = (x77<((x78==x79)<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	volatile int64_t x83 = -1LL;
	volatile int32_t t20 = 1213907;

	t20 = (x81<((x82==x83)<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x86 = INT64_MIN;
	uint16_t x87 = 1914U;
	static uint16_t x88 = 11608U;
	int32_t t21 = 38935;

	t21 = (x85<((x86==x87)<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = INT16_MIN;
	int32_t x90 = INT32_MIN;
	volatile uint16_t x91 = 66U;
	int64_t x92 = -1LL;
	volatile int32_t t22 = 4190718;

	t22 = (x89<((x90==x91)<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 2964U;
	static volatile int64_t x95 = -1LL;
	static int8_t x96 = -1;
	int32_t t23 = -57326820;

	t23 = (x93<((x94==x95)<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -5;
	static volatile int8_t x99 = INT8_MIN;
	volatile int32_t t24 = 0;

	t24 = (x97<((x98==x99)<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -33478122;

	t25 = (x101<((x102==x103)<x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = -1;
	int32_t x106 = 156639835;
	static int32_t x107 = INT32_MAX;
	int64_t x108 = 1997056LL;
	volatile int32_t t26 = -1215944;

	t26 = (x105<((x106==x107)<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 757;
	int8_t x110 = INT8_MAX;
	uint64_t x111 = UINT64_MAX;
	int64_t x112 = INT64_MIN;

	t27 = (x109<((x110==x111)<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	int32_t x114 = -1;
	volatile int8_t x115 = -1;
	int32_t x116 = INT32_MAX;
	int32_t t28 = 1749;

	t28 = (x113<((x114==x115)<x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = -48209;
	static int8_t x118 = -1;
	int64_t x120 = -1328207451120355287LL;
	volatile int32_t t29 = -9211;

	t29 = (x117<((x118==x119)<x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MAX;
	static int8_t x123 = INT8_MAX;
	int32_t x124 = 31143;
	static int32_t t30 = 0;

	t30 = (x121<((x122==x123)<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x126 = 570848U;
	int8_t x127 = -1;
	int8_t x128 = INT8_MIN;

	t31 = (x125<((x126==x127)<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MAX;
	int32_t x130 = INT32_MIN;
	int64_t x132 = -172793619LL;
	int32_t t32 = -3;

	t32 = (x129<((x130==x131)<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	static volatile uint8_t x134 = UINT8_MAX;
	uint16_t x136 = 27U;

	t33 = (x133<((x134==x135)<x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	static uint8_t x138 = 55U;
	static uint32_t x139 = 14045U;
	volatile int32_t t34 = -6;

	t34 = (x137<((x138==x139)<x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = INT8_MIN;
	static uint32_t x142 = UINT32_MAX;
	uint64_t x143 = 37LLU;
	uint8_t x144 = UINT8_MAX;
	static volatile int32_t t35 = -3;

	t35 = (x141<((x142==x143)<x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	int32_t x146 = INT32_MIN;
	uint64_t x147 = 3946855654790LLU;
	int64_t x148 = 14845446932781LL;
	volatile int32_t t36 = -300;

	t36 = (x145<((x146==x147)<x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 12815258193LL;
	uint64_t x150 = 301080LLU;
	static int8_t x151 = INT8_MAX;
	volatile uint32_t x152 = 60543175U;
	volatile int32_t t37 = -1;

	t37 = (x149<((x150==x151)<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 1U;
	int16_t x154 = INT16_MIN;
	uint32_t x155 = UINT32_MAX;
	int32_t x156 = -232891142;
	int32_t t38 = 59952624;

	t38 = (x153<((x154==x155)<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x157 = INT16_MIN;
	int16_t x158 = 6714;
	uint64_t x159 = 105197193028480917LLU;
	int16_t x160 = INT16_MIN;
	volatile int32_t t39 = 3;

	t39 = (x157<((x158==x159)<x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x161 = 8869U;
	int16_t x162 = INT16_MAX;
	volatile uint16_t x163 = 33U;
	uint8_t x164 = 3U;
	volatile int32_t t40 = 31;

	t40 = (x161<((x162==x163)<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x166 = 357LL;
	volatile uint8_t x167 = 94U;
	int32_t t41 = 15432;

	t41 = (x165<((x166==x167)<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 245192619329628LL;
	volatile int32_t x170 = 26393975;
	static volatile int64_t x171 = INT64_MIN;
	uint32_t x172 = UINT32_MAX;
	volatile int32_t t42 = 440861236;

	t42 = (x169<((x170==x171)<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	uint32_t x174 = UINT32_MAX;
	static uint16_t x175 = 795U;
	uint16_t x176 = 1U;
	volatile int32_t t43 = 46974370;

	t43 = (x173<((x174==x175)<x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 5616995;
	uint16_t x178 = UINT16_MAX;
	volatile int64_t x179 = INT64_MIN;
	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = -1957948;

	t44 = (x177<((x178==x179)<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x181 = UINT16_MAX;
	static int8_t x182 = INT8_MAX;

	t45 = (x181<((x182==x183)<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = -8;
	volatile int32_t x187 = 38;
	int16_t x188 = INT16_MIN;
	static volatile int32_t t46 = 834089021;

	t46 = (x185<((x186==x187)<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int16_t x190 = -38;
	int16_t x191 = INT16_MAX;
	static int32_t t47 = -1072769676;

	t47 = (x189<((x190==x191)<x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = -1LL;
	int8_t x195 = INT8_MAX;
	int8_t x196 = INT8_MIN;
	volatile int32_t t48 = 31929884;

	t48 = (x193<((x194==x195)<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x198 = 105232823299983033LL;
	static int16_t x199 = -1;
	volatile int32_t x200 = INT32_MAX;
	static int32_t t49 = 14675;

	t49 = (x197<((x198==x199)<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	uint64_t x202 = 63553304490108LLU;
	uint16_t x204 = 209U;
	volatile int32_t t50 = 183942;

	t50 = (x201<((x202==x203)<x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	int16_t x207 = INT16_MIN;
	uint64_t x208 = 1157170669LLU;
	volatile int32_t t51 = 61116;

	t51 = (x205<((x206==x207)<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = INT32_MIN;
	int8_t x210 = INT8_MAX;
	uint64_t x211 = 1907174278LLU;
	static int16_t x212 = -1;

	t52 = (x209<((x210==x211)<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = INT32_MIN;
	volatile int64_t x214 = 1904942902436LL;
	int16_t x215 = -1;
	int64_t x216 = INT64_MAX;
	static volatile int32_t t53 = 1619130;

	t53 = (x213<((x214==x215)<x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -3;
	volatile int16_t x218 = INT16_MAX;
	static uint32_t x219 = UINT32_MAX;
	static uint16_t x220 = 4499U;
	int32_t t54 = 946403638;

	t54 = (x217<((x218==x219)<x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	volatile int8_t x222 = -1;
	int8_t x224 = INT8_MIN;
	volatile int32_t t55 = 713807379;

	t55 = (x221<((x222==x223)<x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -33769184667LL;
	int32_t x226 = INT32_MIN;
	volatile uint64_t x227 = 2545601647206LLU;
	uint64_t x228 = 452852074032LLU;

	t56 = (x225<((x226==x227)<x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x230 = INT64_MIN;
	static volatile int8_t x231 = -3;
	static volatile int32_t t57 = -243;

	t57 = (x229<((x230==x231)<x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x234 = 68368LLU;
	static uint32_t x235 = 96369U;
	uint16_t x236 = 120U;
	int32_t t58 = -58720062;

	t58 = (x233<((x234==x235)<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	int8_t x238 = 49;
	int32_t x239 = INT32_MIN;
	int64_t x240 = -1LL;
	int32_t t59 = -7569;

	t59 = (x237<((x238==x239)<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	volatile int8_t x242 = -1;
	static volatile uint8_t x243 = UINT8_MAX;
	int8_t x244 = INT8_MAX;
	int32_t t60 = -60835615;

	t60 = (x241<((x242==x243)<x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = 8114;
	static uint64_t x247 = UINT64_MAX;
	int32_t x248 = INT32_MAX;

	t61 = (x245<((x246==x247)<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 29717554327323477LLU;
	int8_t x250 = 1;
	int16_t x251 = INT16_MIN;
	uint64_t x252 = UINT64_MAX;
	int32_t t62 = -54;

	t62 = (x249<((x250==x251)<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	int16_t x254 = 540;
	static int32_t x255 = INT32_MIN;
	static uint32_t x256 = 7951U;
	int32_t t63 = 568516;

	t63 = (x253<((x254==x255)<x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 27U;
	int32_t x258 = -73;
	uint16_t x259 = 2354U;
	int32_t t64 = -31239521;

	t64 = (x257<((x258==x259)<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	uint64_t x262 = 1874515LLU;
	int32_t x264 = -1;

	t65 = (x261<((x262==x263)<x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x265 = 4967103U;
	int16_t x267 = INT16_MIN;
	static volatile int32_t t66 = -2955;

	t66 = (x265<((x266==x267)<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x270 = 21112U;
	volatile int16_t x271 = 3;
	int64_t x272 = -117339109LL;
	volatile int32_t t67 = 2491;

	t67 = (x269<((x270==x271)<x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	int64_t x274 = INT64_MIN;

	t68 = (x273<((x274==x275)<x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = INT16_MIN;
	volatile int16_t x279 = INT16_MAX;
	static int64_t x280 = 1911004LL;
	int32_t t69 = 9626;

	t69 = (x277<((x278==x279)<x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x282 = 2;
	int16_t x284 = INT16_MIN;
	volatile int32_t t70 = -901336;

	t70 = (x281<((x282==x283)<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x286 = INT16_MAX;
	uint32_t x287 = 1U;
	volatile int32_t t71 = 32;

	t71 = (x285<((x286==x287)<x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 28468U;
	static int16_t x290 = -14334;
	volatile uint64_t x291 = 3494299069437LLU;
	int64_t x292 = INT64_MIN;
	volatile int32_t t72 = -1437945;

	t72 = (x289<((x290==x291)<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 1U;
	static volatile int8_t x294 = 3;
	static uint8_t x295 = 1U;
	volatile int32_t t73 = -1001728;

	t73 = (x293<((x294==x295)<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	int64_t x300 = -7LL;
	static volatile int32_t t74 = -114559455;

	t74 = (x297<((x298==x299)<x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 0;
	volatile int8_t x302 = -12;
	int16_t x303 = INT16_MAX;
	volatile int8_t x304 = INT8_MIN;

	t75 = (x301<((x302==x303)<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x305 = 1U;
	static int64_t x306 = INT64_MIN;
	int32_t x307 = -351518456;
	volatile int8_t x308 = INT8_MIN;

	t76 = (x305<((x306==x307)<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -1LL;
	int8_t x310 = 1;
	int32_t x311 = -1;
	static uint32_t x312 = 2U;

	t77 = (x309<((x310==x311)<x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1LL;
	uint8_t x314 = UINT8_MAX;
	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = -874895168;

	t78 = (x313<((x314==x315)<x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = -1LL;
	int8_t x319 = 15;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t79 = 232539;

	t79 = (x317<((x318==x319)<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 16U;
	int16_t x322 = INT16_MAX;
	uint32_t x323 = 2783U;
	int16_t x324 = 60;

	t80 = (x321<((x322==x323)<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 1;
	uint64_t x327 = UINT64_MAX;
	int64_t x328 = -1LL;
	static volatile int32_t t81 = 292;

	t81 = (x325<((x326==x327)<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	volatile uint16_t x331 = UINT16_MAX;

	t82 = (x329<((x330==x331)<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = 0;
	static uint32_t x334 = 248689297U;
	uint32_t x335 = UINT32_MAX;
	uint32_t x336 = 92U;
	int32_t t83 = -104111258;

	t83 = (x333<((x334==x335)<x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x337 = UINT64_MAX;
	volatile int32_t x338 = INT32_MIN;
	static volatile int32_t t84 = 72;

	t84 = (x337<((x338==x339)<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x341 = 7005U;

	t85 = (x341<((x342==x343)<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	uint16_t x346 = 7636U;
	uint16_t x347 = 183U;
	volatile int32_t x348 = INT32_MAX;
	volatile int32_t t86 = 32650;

	t86 = (x345<((x346==x347)<x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	static uint32_t x350 = UINT32_MAX;
	uint32_t x351 = UINT32_MAX;
	uint16_t x352 = 1U;
	static int32_t t87 = -7;

	t87 = (x349<((x350==x351)<x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = -63101;
	int16_t x354 = -1;
	int32_t x355 = INT32_MAX;
	int32_t t88 = 22048;

	t88 = (x353<((x354==x355)<x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x358 = 80U;
	volatile int64_t x359 = -8376858126LL;
	volatile int16_t x360 = INT16_MAX;
	int32_t t89 = 18613498;

	t89 = (x357<((x358==x359)<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x361 = 52U;
	uint16_t x362 = 5U;
	uint16_t x363 = 25333U;
	int16_t x364 = INT16_MIN;

	t90 = (x361<((x362==x363)<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x367 = -1;
	volatile uint64_t x368 = UINT64_MAX;

	t91 = (x365<((x366==x367)<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x370 = -1;
	volatile int64_t x371 = -1LL;
	uint8_t x372 = UINT8_MAX;
	int32_t t92 = 95575;

	t92 = (x369<((x370==x371)<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = INT16_MIN;
	uint16_t x375 = UINT16_MAX;
	int32_t x376 = INT32_MIN;

	t93 = (x373<((x374==x375)<x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	int16_t x378 = -2;
	uint16_t x379 = UINT16_MAX;
	int32_t x380 = -28402230;
	int32_t t94 = 272601458;

	t94 = (x377<((x378==x379)<x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = UINT8_MAX;
	int8_t x382 = INT8_MAX;
	int64_t x383 = INT64_MAX;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t95 = 5;

	t95 = (x381<((x382==x383)<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 202821516U;
	int64_t x386 = -1608469334142LL;
	uint64_t x387 = 65971397174023LLU;
	int16_t x388 = -38;
	int32_t t96 = -188;

	t96 = (x385<((x386==x387)<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = UINT8_MAX;
	int16_t x390 = -875;
	int32_t x391 = INT32_MIN;
	static uint8_t x392 = UINT8_MAX;
	volatile int32_t t97 = 15727989;

	t97 = (x389<((x390==x391)<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 1U;
	volatile int16_t x394 = -2343;
	int16_t x395 = INT16_MIN;
	static int64_t x396 = INT64_MAX;
	volatile int32_t t98 = -89327;

	t98 = (x393<((x394==x395)<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	static uint8_t x398 = UINT8_MAX;
	int8_t x399 = -1;
	volatile uint32_t x400 = 156U;
	volatile int32_t t99 = -65158;

	t99 = (x397<((x398==x399)<x400));

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

