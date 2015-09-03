#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int16_t x1 = INT16_MIN;
int32_t x2 = INT32_MIN;
int8_t x4 = INT8_MAX;
uint64_t x12 = UINT64_MAX;
static uint32_t x14 = 6397U;
static int32_t x16 = INT32_MIN;
int32_t t3 = -243259;
volatile uint64_t x17 = 92481LLU;
uint8_t x18 = UINT8_MAX;
static uint64_t x21 = UINT64_MAX;
static uint64_t x25 = UINT64_MAX;
int32_t t6 = 302;
int32_t t8 = -11586;
uint8_t x40 = 34U;
int16_t x41 = INT16_MIN;
int64_t x48 = INT64_MAX;
volatile int32_t x54 = -7683;
volatile int32_t t13 = 45539951;
static int32_t x57 = -1;
volatile int16_t x58 = -2;
static uint32_t x66 = UINT32_MAX;
uint32_t x77 = 144300895U;
uint16_t x85 = 2302U;
int32_t x88 = -1;
volatile int32_t t22 = 4;
static uint16_t x99 = 0U;
int16_t x100 = INT16_MIN;
int64_t x102 = -31599138LL;
uint64_t x108 = 0LLU;
uint16_t x109 = 117U;
static uint8_t x112 = 40U;
int64_t x116 = -15886963278710LL;
int8_t x131 = INT8_MIN;
uint16_t x136 = 1U;
volatile int32_t t33 = -1274;
static int64_t x142 = INT64_MAX;
int16_t x150 = -196;
int16_t x153 = INT16_MIN;
int32_t x158 = INT32_MIN;
static volatile int64_t x171 = -377975LL;
volatile int32_t t42 = 8273;
volatile int16_t x178 = -1;
int8_t x180 = -1;
int32_t x181 = -5277;
int32_t x185 = -191024613;
uint16_t x189 = 14U;
int8_t x195 = 1;
uint32_t x202 = 29U;
volatile int32_t t50 = 33475282;
volatile int32_t x206 = 979372720;
int16_t x207 = -36;
uint8_t x208 = UINT8_MAX;
volatile uint64_t x209 = UINT64_MAX;
uint64_t x211 = 3190LLU;
int32_t t54 = 129;
int32_t x224 = -1;
int16_t x226 = -1;
int32_t t56 = -179376293;
static int32_t x231 = -122733958;
int16_t x232 = -1;
int64_t x235 = INT64_MIN;
uint32_t x239 = 1U;
volatile int32_t t59 = -646154890;
int64_t x242 = -9978717881685LL;
int32_t x243 = INT32_MAX;
int32_t t63 = 43341522;
static int8_t x265 = -1;
static volatile int16_t x266 = -39;
uint32_t x272 = 5942613U;
int32_t x275 = -1;
uint64_t x276 = 41219LLU;
static int8_t x277 = -31;
int32_t t69 = 43908;
uint16_t x285 = 2U;
uint8_t x286 = 15U;
int16_t x287 = INT16_MIN;
static int32_t t72 = -201939875;
static int8_t x295 = INT8_MAX;
volatile int32_t t74 = 0;
volatile int32_t t76 = -736;
int16_t x309 = -1;
volatile int32_t t78 = 114346;
int64_t x317 = INT64_MIN;
int64_t x318 = INT64_MAX;
int32_t t80 = 387;
static int8_t x327 = INT8_MIN;
volatile int8_t x331 = -1;
volatile int32_t t82 = 6663333;
int32_t x335 = -1;
static int64_t x345 = 183409875054LL;
uint32_t x366 = 18U;
volatile uint32_t x367 = 6540977U;
int16_t x368 = 24;
int64_t x372 = -40603569591452003LL;
volatile int32_t t92 = -2;
volatile uint64_t x374 = 1545345173LLU;
volatile int64_t x380 = -1LL;
static int8_t x382 = INT8_MIN;
static uint32_t x391 = 15246862U;
int32_t t97 = 3;
static int32_t t98 = 1;
int64_t x398 = INT64_MIN;
int8_t x400 = INT8_MAX;


void f0(void) {
	int64_t x3 = INT64_MAX;
	int32_t t0 = -1660914;

	t0 = ((x1<=(x2&x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	int16_t x6 = INT16_MIN;
	static int32_t x7 = -1;
	static int16_t x8 = -1;
	static int32_t t1 = 8;

	t1 = ((x5<=(x6&x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 1U;
	uint16_t x10 = 57U;
	int32_t x11 = 2297252;
	volatile int32_t t2 = -953237422;

	t2 = ((x9<=(x10&x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -5642026447485LL;
	uint32_t x15 = UINT32_MAX;

	t3 = ((x13<=(x14&x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x19 = INT16_MAX;
	int8_t x20 = INT8_MAX;
	volatile int32_t t4 = 7171874;

	t4 = ((x17<=(x18&x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x22 = INT8_MIN;
	uint64_t x23 = 8319873703105567LLU;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 1998751;

	t5 = ((x21<=(x22&x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	int32_t x27 = -5451751;
	uint8_t x28 = 83U;

	t6 = ((x25<=(x26&x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x29 = 6U;
	int8_t x30 = INT8_MIN;
	static volatile int32_t x31 = INT32_MAX;
	uint16_t x32 = 460U;
	static volatile int32_t t7 = 191709591;

	t7 = ((x29<=(x30&x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = 887148346LLU;
	int32_t x34 = 21904;
	volatile int16_t x35 = -1;
	int8_t x36 = INT8_MIN;

	t8 = ((x33<=(x34&x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = 25014320U;
	volatile int32_t x38 = INT32_MIN;
	int64_t x39 = -10153645LL;
	int32_t t9 = 218464;

	t9 = ((x37<=(x38&x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 5U;
	int16_t x43 = INT16_MAX;
	volatile int64_t x44 = -71LL;
	volatile int32_t t10 = 525;

	t10 = ((x41<=(x42&x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = INT32_MIN;
	uint32_t x46 = 31U;
	static volatile int64_t x47 = INT64_MIN;
	volatile int32_t t11 = -88847;

	t11 = ((x45<=(x46&x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	static uint32_t x50 = UINT32_MAX;
	uint64_t x51 = UINT64_MAX;
	static int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -28109847;

	t12 = ((x49<=(x50&x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = UINT8_MAX;
	uint8_t x55 = 5U;
	static int64_t x56 = -107562159042081406LL;

	t13 = ((x53<=(x54&x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x59 = INT16_MIN;
	volatile uint32_t x60 = 469582U;
	volatile int32_t t14 = -1;

	t14 = ((x57<=(x58&x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int64_t x62 = INT64_MIN;
	static int32_t x63 = INT32_MIN;
	int64_t x64 = -1LL;
	volatile int32_t t15 = 1;

	t15 = ((x61<=(x62&x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MIN;
	int64_t x67 = -1LL;
	static uint64_t x68 = 61LLU;
	int32_t t16 = 403;

	t16 = ((x65<=(x66&x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	static volatile uint8_t x70 = 112U;
	int64_t x71 = INT64_MIN;
	static int32_t x72 = INT32_MIN;
	volatile int32_t t17 = -24;

	t17 = ((x69<=(x70&x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 1;
	uint32_t x74 = 419U;
	int64_t x75 = INT64_MIN;
	volatile uint64_t x76 = UINT64_MAX;
	volatile int32_t t18 = -365392684;

	t18 = ((x73<=(x74&x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x78 = -1;
	uint16_t x79 = 0U;
	int16_t x80 = INT16_MIN;
	int32_t t19 = -12005370;

	t19 = ((x77<=(x78&x79))<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 13U;
	int64_t x82 = INT64_MAX;
	volatile int32_t x83 = INT32_MIN;
	uint8_t x84 = 12U;
	static volatile int32_t t20 = 606529817;

	t20 = ((x81<=(x82&x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x86 = -1;
	uint64_t x87 = UINT64_MAX;
	static volatile int32_t t21 = -1565688;

	t21 = ((x85<=(x86&x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 124U;
	static volatile int8_t x90 = INT8_MIN;
	uint8_t x91 = 1U;
	volatile int64_t x92 = INT64_MAX;

	t22 = ((x89<=(x90&x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x93 = INT32_MIN;
	int16_t x94 = 1;
	uint16_t x95 = 0U;
	int16_t x96 = INT16_MAX;
	volatile int32_t t23 = 3;

	t23 = ((x93<=(x94&x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 3634U;
	uint32_t x98 = 12446834U;
	int32_t t24 = 93884;

	t24 = ((x97<=(x98&x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	int64_t x103 = INT64_MIN;
	int16_t x104 = INT16_MAX;
	int32_t t25 = -209542;

	t25 = ((x101<=(x102&x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 12593043U;
	int64_t x106 = 87861051122LL;
	int8_t x107 = INT8_MAX;
	int32_t t26 = 21748;

	t26 = ((x105<=(x106&x107))<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x110 = -1305878198LL;
	int32_t x111 = -1;
	int32_t t27 = -394784627;

	t27 = ((x109<=(x110&x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	volatile int8_t x114 = INT8_MIN;
	static uint8_t x115 = 0U;
	volatile int32_t t28 = -278067;

	t28 = ((x113<=(x114&x115))<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	int16_t x118 = INT16_MAX;
	int16_t x119 = -1;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = 831264;

	t29 = ((x117<=(x118&x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 2;
	int64_t x122 = INT64_MAX;
	static int16_t x123 = 70;
	volatile uint64_t x124 = 3219276LLU;
	static int32_t t30 = 2009;

	t30 = ((x121<=(x122&x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	static uint32_t x126 = UINT32_MAX;
	volatile int8_t x127 = INT8_MIN;
	uint64_t x128 = UINT64_MAX;
	int32_t t31 = -67747;

	t31 = ((x125<=(x126&x127))<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	int8_t x130 = INT8_MIN;
	static uint16_t x132 = 33U;
	volatile int32_t t32 = -36139905;

	t32 = ((x129<=(x130&x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int8_t x134 = INT8_MIN;
	uint8_t x135 = 0U;

	t33 = ((x133<=(x134&x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = INT8_MAX;
	volatile int16_t x138 = INT16_MIN;
	int16_t x139 = -1;
	uint16_t x140 = 4933U;
	int32_t t34 = 338;

	t34 = ((x137<=(x138&x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	int64_t x143 = -1LL;
	int64_t x144 = -469268299318LL;
	volatile int32_t t35 = 295912562;

	t35 = ((x141<=(x142&x143))<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MAX;
	uint16_t x146 = 16U;
	int64_t x147 = -433LL;
	volatile int32_t x148 = INT32_MIN;
	volatile int32_t t36 = -15020858;

	t36 = ((x145<=(x146&x147))<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 27170LLU;
	static volatile int16_t x151 = INT16_MIN;
	int64_t x152 = INT64_MIN;
	static volatile int32_t t37 = 1076257;

	t37 = ((x149<=(x150&x151))<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x154 = -1;
	static uint16_t x155 = 7U;
	uint32_t x156 = UINT32_MAX;
	int32_t t38 = 3411;

	t38 = ((x153<=(x154&x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	int8_t x159 = 43;
	uint64_t x160 = 7333012003501954LLU;
	volatile int32_t t39 = 5469;

	t39 = ((x157<=(x158&x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	int16_t x162 = INT16_MIN;
	uint32_t x163 = 8052U;
	int16_t x164 = -1;
	volatile int32_t t40 = -241142;

	t40 = ((x161<=(x162&x163))<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	int32_t x166 = INT32_MIN;
	int64_t x167 = INT64_MIN;
	uint16_t x168 = 208U;
	int32_t t41 = 2655781;

	t41 = ((x165<=(x166&x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	static uint16_t x170 = 0U;
	uint32_t x172 = 8784712U;

	t42 = ((x169<=(x170&x171))<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 32680LLU;
	int32_t x174 = INT32_MIN;
	static int8_t x175 = -1;
	int64_t x176 = INT64_MAX;
	int32_t t43 = -5395643;

	t43 = ((x173<=(x174&x175))<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -6819;
	uint8_t x179 = UINT8_MAX;
	volatile int32_t t44 = -4;

	t44 = ((x177<=(x178&x179))<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x182 = INT16_MAX;
	uint8_t x183 = UINT8_MAX;
	int32_t x184 = INT32_MIN;
	int32_t t45 = 445974;

	t45 = ((x181<=(x182&x183))<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x186 = 0U;
	volatile int64_t x187 = INT64_MAX;
	static int32_t x188 = INT32_MIN;
	int32_t t46 = -87108;

	t46 = ((x185<=(x186&x187))<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = -1;
	int32_t x191 = 859426629;
	int64_t x192 = INT64_MIN;
	int32_t t47 = -3821471;

	t47 = ((x189<=(x190&x191))<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;
	volatile int32_t x194 = 22;
	static int8_t x196 = INT8_MIN;
	static volatile int32_t t48 = -769486;

	t48 = ((x193<=(x194&x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -129177;
	static int64_t x198 = INT64_MIN;
	int8_t x199 = 18;
	volatile uint8_t x200 = 0U;
	int32_t t49 = 1149585;

	t49 = ((x197<=(x198&x199))<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 6588060;
	int32_t x203 = INT32_MIN;
	int64_t x204 = 250288596679507LL;

	t50 = ((x201<=(x202&x203))<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	int32_t t51 = 1899306;

	t51 = ((x205<=(x206&x207))<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x210 = INT32_MIN;
	static int16_t x212 = INT16_MIN;
	int32_t t52 = 1;

	t52 = ((x209<=(x210&x211))<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	int8_t x214 = INT8_MAX;
	int64_t x215 = 231971314910LL;
	int16_t x216 = INT16_MIN;
	int32_t t53 = 53;

	t53 = ((x213<=(x214&x215))<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 2597U;
	static uint8_t x218 = 3U;
	static uint16_t x219 = 11U;
	static int16_t x220 = -1;

	t54 = ((x217<=(x218&x219))<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 215U;
	static int64_t x222 = INT64_MAX;
	volatile int16_t x223 = INT16_MIN;
	int32_t t55 = -25;

	t55 = ((x221<=(x222&x223))<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	uint8_t x227 = 4U;
	volatile int32_t x228 = INT32_MIN;

	t56 = ((x225<=(x226&x227))<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x229 = 11353U;
	int64_t x230 = -1LL;
	int32_t t57 = -2742;

	t57 = ((x229<=(x230&x231))<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -27;
	static int64_t x234 = INT64_MIN;
	volatile int16_t x236 = -9733;
	volatile int32_t t58 = 1;

	t58 = ((x233<=(x234&x235))<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x237 = 932244315604LLU;
	int16_t x238 = -1;
	static int8_t x240 = INT8_MIN;

	t59 = ((x237<=(x238&x239))<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int8_t x244 = -1;
	static int32_t t60 = -5607652;

	t60 = ((x241<=(x242&x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x245 = 22704U;
	static int8_t x246 = INT8_MAX;
	int64_t x247 = 648978LL;
	int32_t x248 = INT32_MIN;
	static int32_t t61 = 16110289;

	t61 = ((x245<=(x246&x247))<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	static uint64_t x250 = UINT64_MAX;
	uint16_t x251 = 6U;
	volatile int64_t x252 = INT64_MAX;
	int32_t t62 = -602615126;

	t62 = ((x249<=(x250&x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = INT8_MAX;
	int64_t x254 = INT64_MIN;
	uint8_t x255 = UINT8_MAX;
	uint64_t x256 = 928502085249257201LLU;

	t63 = ((x253<=(x254&x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = -1LL;
	volatile int32_t x258 = -5038;
	volatile uint16_t x259 = 2265U;
	volatile uint32_t x260 = 23U;
	volatile int32_t t64 = 4;

	t64 = ((x257<=(x258&x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	int32_t x262 = -42074951;
	int8_t x263 = INT8_MIN;
	int32_t x264 = INT32_MAX;
	int32_t t65 = -3623;

	t65 = ((x261<=(x262&x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x267 = INT32_MAX;
	uint64_t x268 = 55463170LLU;
	int32_t t66 = 1677;

	t66 = ((x265<=(x266&x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = UINT32_MAX;
	int16_t x270 = -1;
	static int64_t x271 = INT64_MIN;
	volatile int32_t t67 = 124756;

	t67 = ((x269<=(x270&x271))<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = UINT16_MAX;
	volatile int32_t x274 = INT32_MIN;
	static volatile int32_t t68 = 228612992;

	t68 = ((x273<=(x274&x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = INT64_MIN;
	int8_t x279 = INT8_MAX;
	int32_t x280 = 66300;

	t69 = ((x277<=(x278&x279))<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = 3;
	uint16_t x282 = UINT16_MAX;
	int64_t x283 = -1LL;
	static uint64_t x284 = 261731LLU;
	static volatile int32_t t70 = 9839221;

	t70 = ((x281<=(x282&x283))<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x288 = INT16_MIN;
	volatile int32_t t71 = 5541632;

	t71 = ((x285<=(x286&x287))<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	int16_t x290 = INT16_MAX;
	uint64_t x291 = 2LLU;
	volatile int32_t x292 = -1;

	t72 = ((x289<=(x290&x291))<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	static int16_t x294 = -1;
	volatile int32_t x296 = INT32_MIN;
	static volatile int32_t t73 = -58;

	t73 = ((x293<=(x294&x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x297 = UINT8_MAX;
	volatile int8_t x298 = INT8_MAX;
	int8_t x299 = INT8_MIN;
	static int16_t x300 = INT16_MAX;

	t74 = ((x297<=(x298&x299))<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	volatile int16_t x302 = -8046;
	static int16_t x303 = INT16_MIN;
	int16_t x304 = 9460;
	int32_t t75 = -98784;

	t75 = ((x301<=(x302&x303))<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -473LL;
	static int64_t x306 = -1LL;
	int32_t x307 = -1;
	static uint8_t x308 = UINT8_MAX;

	t76 = ((x305<=(x306&x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x310 = -6;
	int16_t x311 = INT16_MIN;
	volatile int64_t x312 = INT64_MIN;
	int32_t t77 = 18;

	t77 = ((x309<=(x310&x311))<=x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = 8935998747140LL;
	int32_t x314 = INT32_MAX;
	int32_t x315 = INT32_MIN;
	int32_t x316 = -582078226;

	t78 = ((x313<=(x314&x315))<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x319 = INT32_MIN;
	volatile int32_t x320 = INT32_MAX;
	static int32_t t79 = -28;

	t79 = ((x317<=(x318&x319))<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	volatile int16_t x322 = 865;
	uint64_t x323 = 214383517721278LLU;
	volatile uint32_t x324 = 1016165341U;

	t80 = ((x321<=(x322&x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = INT64_MIN;
	int16_t x326 = -6;
	int16_t x328 = -1;
	volatile int32_t t81 = 1042;

	t81 = ((x325<=(x326&x327))<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	int64_t x330 = INT64_MIN;
	uint8_t x332 = UINT8_MAX;

	t82 = ((x329<=(x330&x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 10U;
	static int64_t x334 = INT64_MIN;
	volatile int8_t x336 = INT8_MAX;
	volatile int32_t t83 = -12364;

	t83 = ((x333<=(x334&x335))<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 117969LLU;
	uint32_t x338 = 1717448U;
	volatile int64_t x339 = 2140236920LL;
	uint8_t x340 = 124U;
	volatile int32_t t84 = -530884976;

	t84 = ((x337<=(x338&x339))<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = -10;
	int64_t x342 = -1LL;
	volatile int8_t x343 = INT8_MAX;
	int8_t x344 = 1;
	volatile int32_t t85 = -369454715;

	t85 = ((x341<=(x342&x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x346 = INT64_MIN;
	int64_t x347 = -1LL;
	int8_t x348 = INT8_MIN;
	int32_t t86 = -487;

	t86 = ((x345<=(x346&x347))<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -13;
	volatile int8_t x350 = 1;
	int64_t x351 = INT64_MIN;
	int32_t x352 = -15546840;
	volatile int32_t t87 = -1;

	t87 = ((x349<=(x350&x351))<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MAX;
	int32_t x354 = INT32_MAX;
	int64_t x355 = INT64_MAX;
	int16_t x356 = INT16_MAX;
	volatile int32_t t88 = -59879373;

	t88 = ((x353<=(x354&x355))<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = INT16_MIN;
	uint16_t x358 = 1U;
	int16_t x359 = INT16_MIN;
	int8_t x360 = INT8_MIN;
	static int32_t t89 = -25490006;

	t89 = ((x357<=(x358&x359))<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = -1;
	int8_t x362 = INT8_MIN;
	static int32_t x363 = -1;
	volatile int16_t x364 = INT16_MIN;
	volatile int32_t t90 = -100347219;

	t90 = ((x361<=(x362&x363))<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = INT64_MIN;
	volatile int32_t t91 = 6336129;

	t91 = ((x365<=(x366&x367))<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x369 = 4;
	int64_t x370 = INT64_MIN;
	int64_t x371 = INT64_MIN;

	t92 = ((x369<=(x370&x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -7636;
	volatile uint64_t x375 = 7LLU;
	uint16_t x376 = 28U;
	static volatile int32_t t93 = 78;

	t93 = ((x373<=(x374&x375))<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MAX;
	uint64_t x378 = UINT64_MAX;
	volatile uint64_t x379 = 2604591LLU;
	volatile int32_t t94 = -542998480;

	t94 = ((x377<=(x378&x379))<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 6771760LLU;
	uint64_t x383 = 4136926839LLU;
	volatile int16_t x384 = 29;
	int32_t t95 = -165177;

	t95 = ((x381<=(x382&x383))<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 0U;
	uint8_t x386 = UINT8_MAX;
	int16_t x387 = INT16_MAX;
	int32_t x388 = INT32_MIN;
	volatile int32_t t96 = -5852612;

	t96 = ((x385<=(x386&x387))<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	volatile int16_t x390 = -12;
	int64_t x392 = INT64_MIN;

	t97 = ((x389<=(x390&x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	uint32_t x394 = 26088U;
	int16_t x395 = -1;
	int32_t x396 = INT32_MIN;

	t98 = ((x393<=(x394&x395))<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -1;
	int32_t x399 = 1;
	volatile int32_t t99 = -10;

	t99 = ((x397<=(x398&x399))<=x400);

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

