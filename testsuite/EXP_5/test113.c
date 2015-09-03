#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x6 = 15970LLU;
int16_t x9 = INT16_MAX;
int16_t x10 = 1;
uint16_t x11 = UINT16_MAX;
static int32_t x12 = INT32_MIN;
volatile int8_t x14 = INT8_MIN;
static int32_t x27 = INT32_MIN;
int32_t t8 = 246262431;
uint8_t x38 = 5U;
volatile int32_t x40 = 8614658;
int32_t x43 = -1;
int32_t x46 = INT32_MIN;
int8_t x50 = INT8_MAX;
int32_t x54 = 29;
volatile int32_t t13 = 55209546;
int16_t x58 = INT16_MIN;
int64_t x65 = -15385949770859LL;
uint32_t x68 = 61U;
volatile int32_t t16 = -6034255;
static uint64_t x70 = 533LLU;
int64_t x71 = -17372536939315LL;
static volatile int32_t t17 = 58;
uint32_t x73 = 31281789U;
int32_t t18 = 51607207;
volatile int32_t t19 = 222130027;
volatile int8_t x90 = -1;
volatile uint16_t x94 = 6U;
int8_t x99 = -1;
uint8_t x105 = 20U;
int8_t x107 = INT8_MIN;
int64_t x108 = INT64_MIN;
static volatile int32_t t25 = -460;
volatile int16_t x115 = INT16_MIN;
volatile uint8_t x117 = 14U;
uint32_t x120 = 6833U;
static int16_t x121 = -1;
int8_t x127 = INT8_MIN;
volatile int32_t t30 = -81;
volatile uint16_t x131 = 7423U;
int8_t x143 = INT8_MAX;
volatile int64_t x144 = INT64_MIN;
volatile int8_t x158 = INT8_MIN;
volatile int32_t t38 = -1;
volatile int32_t x165 = INT32_MIN;
int8_t x170 = -1;
volatile int32_t x171 = 65093;
uint64_t x172 = 951890965423374LLU;
int16_t x173 = 116;
int16_t x176 = INT16_MIN;
int32_t x181 = INT32_MAX;
static int8_t x182 = INT8_MAX;
int8_t x184 = INT8_MAX;
int32_t t43 = -4576;
int8_t x187 = INT8_MIN;
int32_t t44 = 8;
static int32_t x192 = INT32_MAX;
int32_t x201 = 511770185;
static int64_t x209 = INT64_MIN;
uint32_t x210 = UINT32_MAX;
static int32_t t52 = -28697651;
int32_t x227 = -1;
int64_t x229 = INT64_MIN;
int8_t x236 = INT8_MIN;
int32_t t55 = -21;
volatile uint32_t x242 = 442083U;
int32_t x243 = -1;
int16_t x249 = 30;
int16_t x254 = INT16_MAX;
int32_t x257 = -1;
static int64_t x258 = 560599054042LL;
uint16_t x266 = 4U;
volatile int32_t t63 = 127207;
volatile uint16_t x275 = 6013U;
int16_t x287 = -1;
int32_t t71 = 14;
int64_t x308 = INT64_MAX;
static uint8_t x310 = 4U;
volatile uint8_t x312 = 12U;
int32_t x316 = 60864123;
int32_t t75 = 14;
static int16_t x325 = INT16_MIN;
uint32_t x336 = 53U;
static int32_t t78 = -673700557;
uint16_t x340 = 2U;
int16_t x365 = INT16_MAX;
int32_t t85 = -64521;
int16_t x371 = 2;
int32_t x373 = -208894;
volatile int16_t x375 = INT16_MIN;
static int32_t t89 = -194199688;
volatile int32_t x391 = 2448;
uint64_t x393 = UINT64_MAX;
volatile int8_t x395 = 0;
int64_t x397 = -1LL;
int8_t x400 = -1;
int32_t x403 = -104397803;
uint32_t x408 = 23U;
uint64_t x410 = 185451565047LLU;
int64_t x415 = 59006692646711705LL;
int8_t x417 = INT8_MAX;
int32_t x425 = INT32_MAX;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int16_t x2 = -2;
	volatile int32_t x3 = -769886;
	uint16_t x4 = 428U;
	volatile int32_t t0 = 108855339;

	t0 = (x1<((x2+x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int16_t x7 = -1;
	volatile uint8_t x8 = 4U;
	volatile int32_t t1 = -201;

	t1 = (x5<((x6+x7)<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t t2 = -25186657;

	t2 = (x9<((x10+x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint16_t x15 = 110U;
	static uint32_t x16 = UINT32_MAX;
	int32_t t3 = 946320150;

	t3 = (x13<((x14+x15)<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	static int8_t x18 = INT8_MAX;
	static int64_t x19 = INT64_MIN;
	volatile uint8_t x20 = 58U;
	static int32_t t4 = 342982;

	t4 = (x17<((x18+x19)<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 2U;
	static int16_t x22 = INT16_MIN;
	volatile int16_t x23 = -10;
	uint64_t x24 = 113300LLU;
	volatile int32_t t5 = 20;

	t5 = (x21<((x22+x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = -112;
	int64_t x26 = INT64_MAX;
	static uint16_t x28 = 450U;
	int32_t t6 = 0;

	t6 = (x25<((x26+x27)<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = -320;
	static int8_t x30 = INT8_MIN;
	int16_t x31 = INT16_MAX;
	volatile int8_t x32 = 60;
	static int32_t t7 = 34751793;

	t7 = (x29<((x30+x31)<x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = 570;
	int8_t x34 = 4;
	int64_t x35 = INT64_MIN;
	volatile uint8_t x36 = UINT8_MAX;

	t8 = (x33<((x34+x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 17086U;
	static uint64_t x39 = 8075347803LLU;
	int32_t t9 = 19;

	t9 = (x37<((x38+x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -362956188;
	int32_t x42 = 368811;
	uint32_t x44 = 418U;
	int32_t t10 = 34573726;

	t10 = (x41<((x42+x43)<x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	uint64_t x47 = 5889699332LLU;
	int16_t x48 = 757;
	int32_t t11 = 0;

	t11 = (x45<((x46+x47)<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -15;
	volatile int8_t x51 = 1;
	static int16_t x52 = INT16_MIN;
	volatile int32_t t12 = 286732;

	t12 = (x49<((x50+x51)<x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = -1LL;
	int64_t x55 = INT64_MIN;
	volatile int16_t x56 = 54;

	t13 = (x53<((x54+x55)<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	uint16_t x59 = UINT16_MAX;
	int8_t x60 = INT8_MAX;
	static int32_t t14 = -3640090;

	t14 = (x57<((x58+x59)<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -2;
	uint16_t x62 = UINT16_MAX;
	int8_t x63 = INT8_MIN;
	static int16_t x64 = -864;
	static volatile int32_t t15 = -5752751;

	t15 = (x61<((x62+x63)<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x66 = 3U;
	static int8_t x67 = 3;

	t16 = (x65<((x66+x67)<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	uint64_t x72 = UINT64_MAX;

	t17 = (x69<((x70+x71)<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x74 = 6838531638863546LLU;
	uint16_t x75 = UINT16_MAX;
	int64_t x76 = 62039717272LL;

	t18 = (x73<((x74+x75)<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x81 = 1556U;
	uint64_t x82 = UINT64_MAX;
	int32_t x83 = 1496;
	int16_t x84 = INT16_MAX;

	t19 = (x81<((x82+x83)<x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x85 = 1081466;
	int8_t x86 = -1;
	static int8_t x87 = INT8_MAX;
	uint64_t x88 = 31929LLU;
	volatile int32_t t20 = -1;

	t20 = (x85<((x86+x87)<x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x89 = UINT8_MAX;
	volatile int16_t x91 = -1;
	uint16_t x92 = 21U;
	static int32_t t21 = 195798;

	t21 = (x89<((x90+x91)<x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	uint16_t x95 = 1U;
	volatile int64_t x96 = -2315353427LL;
	int32_t t22 = -13;

	t22 = (x93<((x94+x95)<x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x97 = INT8_MIN;
	volatile uint16_t x98 = 58U;
	volatile int16_t x100 = -1;
	int32_t t23 = 440;

	t23 = (x97<((x98+x99)<x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 112U;
	int64_t x102 = INT64_MAX;
	int16_t x103 = 0;
	volatile uint16_t x104 = UINT16_MAX;
	int32_t t24 = 12679;

	t24 = (x101<((x102+x103)<x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x106 = INT16_MAX;

	t25 = (x105<((x106+x107)<x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = -1;
	volatile int64_t x110 = INT64_MIN;
	volatile uint16_t x111 = 1605U;
	static int32_t x112 = -1;
	volatile int32_t t26 = -117311;

	t26 = (x109<((x110+x111)<x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	static volatile int16_t x114 = -2;
	uint16_t x116 = 251U;
	static volatile int32_t t27 = 65885096;

	t27 = (x113<((x114+x115)<x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x118 = -158;
	static volatile int8_t x119 = -20;
	int32_t t28 = -1367205;

	t28 = (x117<((x118+x119)<x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x122 = 1;
	uint64_t x123 = 285191747560517LLU;
	volatile int32_t x124 = 473776200;
	int32_t t29 = 77340;

	t29 = (x121<((x122+x123)<x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = 2322717568LL;
	uint16_t x126 = UINT16_MAX;
	uint64_t x128 = UINT64_MAX;

	t30 = (x125<((x126+x127)<x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = INT64_MAX;
	int32_t x130 = INT32_MIN;
	static uint32_t x132 = 133U;
	int32_t t31 = 85;

	t31 = (x129<((x130+x131)<x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = INT64_MIN;
	volatile uint32_t x134 = 8U;
	int16_t x135 = -908;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t32 = 237975615;

	t32 = (x133<((x134+x135)<x136));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	int16_t x138 = 117;
	uint64_t x139 = 2045LLU;
	int8_t x140 = 1;
	static int32_t t33 = 58261906;

	t33 = (x137<((x138+x139)<x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x141 = 15;
	volatile int16_t x142 = INT16_MIN;
	volatile int32_t t34 = -7682;

	t34 = (x141<((x142+x143)<x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = INT8_MIN;
	static uint64_t x146 = UINT64_MAX;
	int32_t x147 = 677927001;
	uint32_t x148 = 3756862U;
	int32_t t35 = -193;

	t35 = (x145<((x146+x147)<x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x153 = -1;
	int8_t x154 = INT8_MAX;
	static int16_t x155 = -1;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t36 = -7829261;

	t36 = (x153<((x154+x155)<x156));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MIN;
	uint8_t x159 = 70U;
	int32_t x160 = 230576;
	volatile int32_t t37 = 524275186;

	t37 = (x157<((x158+x159)<x160));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x161 = 802948641U;
	volatile int32_t x162 = INT32_MIN;
	uint8_t x163 = UINT8_MAX;
	static volatile int16_t x164 = INT16_MIN;

	t38 = (x161<((x162+x163)<x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x166 = INT64_MAX;
	int64_t x167 = -1LL;
	uint64_t x168 = 4LLU;
	static int32_t t39 = 59;

	t39 = (x165<((x166+x167)<x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = -1LL;
	volatile int32_t t40 = 80592;

	t40 = (x169<((x170+x171)<x172));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x174 = 18U;
	uint16_t x175 = UINT16_MAX;
	static int32_t t41 = -141009;

	t41 = (x173<((x174+x175)<x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = INT64_MIN;
	uint8_t x178 = 6U;
	volatile int16_t x179 = -7545;
	int16_t x180 = -1;
	volatile int32_t t42 = -21188502;

	t42 = (x177<((x178+x179)<x180));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x183 = 271941319901LLU;

	t43 = (x181<((x182+x183)<x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x185 = 0;
	volatile uint32_t x186 = UINT32_MAX;
	static int8_t x188 = INT8_MIN;

	t44 = (x185<((x186+x187)<x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x189 = -52260;
	uint64_t x190 = 354418LLU;
	static volatile int8_t x191 = -1;
	volatile int32_t t45 = 1754956;

	t45 = (x189<((x190+x191)<x192));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x193 = 20160139311298775LLU;
	int8_t x194 = -1;
	volatile int16_t x195 = -24;
	volatile int8_t x196 = INT8_MIN;
	int32_t t46 = 46846051;

	t46 = (x193<((x194+x195)<x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = 0;
	int16_t x198 = INT16_MIN;
	int16_t x199 = 88;
	int64_t x200 = 39999359LL;
	volatile int32_t t47 = -6624;

	t47 = (x197<((x198+x199)<x200));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x202 = INT32_MAX;
	int8_t x203 = INT8_MIN;
	int16_t x204 = -1;
	static volatile int32_t t48 = -195;

	t48 = (x201<((x202+x203)<x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x205 = 697944566081448LLU;
	int64_t x206 = INT64_MIN;
	uint32_t x207 = UINT32_MAX;
	static uint8_t x208 = 81U;
	volatile int32_t t49 = 111;

	t49 = (x205<((x206+x207)<x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x211 = -1;
	int32_t x212 = 210665552;
	volatile int32_t t50 = 58217;

	t50 = (x209<((x210+x211)<x212));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x217 = UINT64_MAX;
	volatile int64_t x218 = INT64_MAX;
	static volatile int64_t x219 = -412LL;
	volatile int64_t x220 = 75544798645LL;
	static int32_t t51 = 0;

	t51 = (x217<((x218+x219)<x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x221 = 56U;
	static volatile int8_t x222 = INT8_MAX;
	uint8_t x223 = UINT8_MAX;
	uint16_t x224 = 5U;

	t52 = (x221<((x222+x223)<x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x225 = 15130U;
	int64_t x226 = -7LL;
	int8_t x228 = INT8_MIN;
	volatile int32_t t53 = 1;

	t53 = (x225<((x226+x227)<x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x230 = INT32_MIN;
	uint64_t x231 = UINT64_MAX;
	int64_t x232 = -1LL;
	int32_t t54 = 2;

	t54 = (x229<((x230+x231)<x232));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x233 = INT64_MIN;
	uint16_t x234 = 269U;
	int64_t x235 = -1LL;

	t55 = (x233<((x234+x235)<x236));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x237 = INT32_MAX;
	volatile uint8_t x238 = 1U;
	volatile uint8_t x239 = UINT8_MAX;
	uint64_t x240 = UINT64_MAX;
	int32_t t56 = 40504035;

	t56 = (x237<((x238+x239)<x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x241 = -1;
	static volatile uint32_t x244 = 316U;
	int32_t t57 = 934203;

	t57 = (x241<((x242+x243)<x244));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x245 = UINT32_MAX;
	int8_t x246 = -1;
	int16_t x247 = -14;
	uint16_t x248 = 5U;
	volatile int32_t t58 = -18158;

	t58 = (x245<((x246+x247)<x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x250 = 651U;
	int8_t x251 = INT8_MIN;
	int16_t x252 = INT16_MIN;
	int32_t t59 = -70210;

	t59 = (x249<((x250+x251)<x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x253 = UINT16_MAX;
	int64_t x255 = INT64_MIN;
	uint32_t x256 = 16068431U;
	int32_t t60 = -170930;

	t60 = (x253<((x254+x255)<x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x259 = INT64_MIN;
	volatile int8_t x260 = -1;
	int32_t t61 = -14393;

	t61 = (x257<((x258+x259)<x260));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = 4;
	static uint64_t x262 = 277223872919708563LLU;
	static int32_t x263 = -1;
	int32_t x264 = -119;
	int32_t t62 = -4396;

	t62 = (x261<((x262+x263)<x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x265 = 11427U;
	uint8_t x267 = UINT8_MAX;
	volatile int32_t x268 = 249;

	t63 = (x265<((x266+x267)<x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x269 = 9U;
	volatile int16_t x270 = -1;
	int8_t x271 = 0;
	int16_t x272 = -1;
	volatile int32_t t64 = 212297;

	t64 = (x269<((x270+x271)<x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x273 = INT32_MIN;
	uint64_t x274 = UINT64_MAX;
	int64_t x276 = INT64_MIN;
	volatile int32_t t65 = -1;

	t65 = (x273<((x274+x275)<x276));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x277 = -1;
	volatile int8_t x278 = -1;
	int8_t x279 = INT8_MAX;
	volatile int8_t x280 = -38;
	volatile int32_t t66 = -6;

	t66 = (x277<((x278+x279)<x280));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x281 = INT64_MIN;
	static int16_t x282 = 3103;
	int64_t x283 = -5327639130076046LL;
	static volatile uint16_t x284 = 19U;
	volatile int32_t t67 = 520299473;

	t67 = (x281<((x282+x283)<x284));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = INT16_MAX;
	volatile uint64_t x286 = UINT64_MAX;
	static int32_t x288 = INT32_MAX;
	volatile int32_t t68 = 3754409;

	t68 = (x285<((x286+x287)<x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = INT8_MAX;
	uint8_t x290 = 7U;
	int16_t x291 = 7692;
	volatile int8_t x292 = INT8_MIN;
	volatile int32_t t69 = 44;

	t69 = (x289<((x290+x291)<x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x293 = INT8_MIN;
	int32_t x294 = -1;
	int32_t x295 = -1;
	uint32_t x296 = 61562U;
	volatile int32_t t70 = -198;

	t70 = (x293<((x294+x295)<x296));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x297 = 5LLU;
	volatile uint16_t x298 = 864U;
	static uint32_t x299 = UINT32_MAX;
	int32_t x300 = 28;

	t71 = (x297<((x298+x299)<x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = 1087825;
	volatile int16_t x306 = INT16_MIN;
	int16_t x307 = 2;
	volatile int32_t t72 = 471;

	t72 = (x305<((x306+x307)<x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x309 = UINT16_MAX;
	static int64_t x311 = 162811LL;
	volatile int32_t t73 = -60414;

	t73 = (x309<((x310+x311)<x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = 28568LL;
	volatile uint32_t x314 = 864499U;
	int64_t x315 = -1LL;
	volatile int32_t t74 = 41824;

	t74 = (x313<((x314+x315)<x316));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x317 = 11915643840521793LLU;
	uint16_t x318 = 9630U;
	int32_t x319 = 12304133;
	static int32_t x320 = INT32_MAX;

	t75 = (x317<((x318+x319)<x320));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x321 = UINT32_MAX;
	int8_t x322 = INT8_MIN;
	uint16_t x323 = 267U;
	int64_t x324 = 3LL;
	volatile int32_t t76 = -15;

	t76 = (x321<((x322+x323)<x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x326 = 245582LLU;
	volatile uint64_t x327 = UINT64_MAX;
	int32_t x328 = -1;
	volatile int32_t t77 = 73;

	t77 = (x325<((x326+x327)<x328));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x333 = 2055611U;
	uint64_t x334 = 35731941455699LLU;
	uint8_t x335 = 21U;

	t78 = (x333<((x334+x335)<x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x337 = UINT8_MAX;
	static uint32_t x338 = 2U;
	int8_t x339 = INT8_MIN;
	volatile int32_t t79 = 6;

	t79 = (x337<((x338+x339)<x340));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x341 = 3222;
	static int16_t x342 = -306;
	static int32_t x343 = -205883314;
	static uint64_t x344 = UINT64_MAX;
	int32_t t80 = 1380;

	t80 = (x341<((x342+x343)<x344));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x345 = INT16_MIN;
	static uint64_t x346 = UINT64_MAX;
	static uint8_t x347 = 0U;
	uint16_t x348 = 11U;
	int32_t t81 = -58749114;

	t81 = (x345<((x346+x347)<x348));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x349 = 0;
	uint64_t x350 = 1473316253154507LLU;
	int8_t x351 = 1;
	int64_t x352 = INT64_MIN;
	volatile int32_t t82 = 362882;

	t82 = (x349<((x350+x351)<x352));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x353 = 81942LLU;
	uint16_t x354 = UINT16_MAX;
	volatile int8_t x355 = INT8_MIN;
	int64_t x356 = INT64_MAX;
	int32_t t83 = 9152;

	t83 = (x353<((x354+x355)<x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x357 = 9U;
	static uint16_t x358 = 1U;
	volatile uint32_t x359 = 257537U;
	uint8_t x360 = UINT8_MAX;
	int32_t t84 = 2;

	t84 = (x357<((x358+x359)<x360));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x366 = -1LL;
	uint64_t x367 = 8869LLU;
	volatile int16_t x368 = 139;

	t85 = (x365<((x366+x367)<x368));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x369 = 16707U;
	volatile uint16_t x370 = 15U;
	uint8_t x372 = 1U;
	volatile int32_t t86 = 3164;

	t86 = (x369<((x370+x371)<x372));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x374 = -1LL;
	int8_t x376 = -1;
	volatile int32_t t87 = 83;

	t87 = (x373<((x374+x375)<x376));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x377 = UINT32_MAX;
	uint8_t x378 = 67U;
	uint64_t x379 = UINT64_MAX;
	uint64_t x380 = UINT64_MAX;
	volatile int32_t t88 = 2760;

	t88 = (x377<((x378+x379)<x380));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x381 = INT16_MAX;
	static int8_t x382 = INT8_MAX;
	volatile uint32_t x383 = 109756885U;
	static volatile uint16_t x384 = UINT16_MAX;

	t89 = (x381<((x382+x383)<x384));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x385 = INT16_MIN;
	int64_t x386 = INT64_MIN;
	uint16_t x387 = 637U;
	static int16_t x388 = -3;
	volatile int32_t t90 = -1614;

	t90 = (x385<((x386+x387)<x388));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x389 = -1;
	volatile uint8_t x390 = UINT8_MAX;
	uint64_t x392 = UINT64_MAX;
	volatile int32_t t91 = 88625;

	t91 = (x389<((x390+x391)<x392));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x394 = -2185022;
	static int32_t x396 = 3;
	int32_t t92 = -77609;

	t92 = (x393<((x394+x395)<x396));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x398 = INT32_MIN;
	int64_t x399 = INT64_MAX;
	volatile int32_t t93 = -2;

	t93 = (x397<((x398+x399)<x400));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x401 = -1;
	int16_t x402 = 7429;
	static volatile uint32_t x404 = 88347399U;
	int32_t t94 = -1;

	t94 = (x401<((x402+x403)<x404));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x405 = INT8_MAX;
	int32_t x406 = INT32_MIN;
	uint8_t x407 = UINT8_MAX;
	static volatile int32_t t95 = -7461;

	t95 = (x405<((x406+x407)<x408));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x409 = INT8_MIN;
	int16_t x411 = 1;
	volatile uint32_t x412 = UINT32_MAX;
	volatile int32_t t96 = 3204;

	t96 = (x409<((x410+x411)<x412));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x413 = INT64_MIN;
	uint8_t x414 = UINT8_MAX;
	static volatile int8_t x416 = -33;
	int32_t t97 = 1;

	t97 = (x413<((x414+x415)<x416));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x418 = INT64_MIN;
	uint16_t x419 = 1U;
	int64_t x420 = -2806615LL;
	int32_t t98 = 2979321;

	t98 = (x417<((x418+x419)<x420));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x426 = -7976;
	volatile int8_t x427 = INT8_MIN;
	int8_t x428 = INT8_MIN;
	volatile int32_t t99 = 50787438;

	t99 = (x425<((x426+x427)<x428));

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

