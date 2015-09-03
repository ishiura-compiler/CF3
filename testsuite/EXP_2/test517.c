#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = INT8_MIN;
int32_t t0 = 830487;
static int64_t x8 = INT64_MIN;
static int32_t x9 = -1;
static volatile int32_t t3 = 300562;
static volatile uint8_t x17 = 0U;
int16_t x18 = INT16_MIN;
int32_t x19 = INT32_MIN;
int64_t x21 = INT64_MAX;
volatile int32_t t6 = 71135;
uint32_t x34 = UINT32_MAX;
int16_t x35 = -1;
static volatile int32_t t9 = -14302562;
int32_t x44 = 26746;
uint16_t x45 = 12369U;
int16_t x46 = -333;
volatile int32_t t11 = -2271790;
int32_t x49 = INT32_MAX;
static int8_t x50 = INT8_MIN;
uint16_t x51 = 109U;
int64_t x54 = -722586397987117430LL;
int64_t x57 = -1LL;
uint64_t x59 = 132436415LLU;
volatile int16_t x62 = -1;
int32_t x68 = INT32_MIN;
static int32_t t16 = 1;
int32_t x76 = -1;
int32_t t18 = -2227;
uint32_t x79 = 5499U;
static int32_t x81 = -876705029;
int32_t t21 = -104946850;
uint16_t x89 = 0U;
static uint64_t x98 = 468465134474788258LLU;
volatile int64_t x102 = -1LL;
static volatile uint32_t x103 = 12714718U;
int64_t x113 = 0LL;
static int16_t x115 = INT16_MIN;
int8_t x124 = INT8_MAX;
int32_t x130 = INT32_MAX;
int8_t x135 = -1;
uint64_t x136 = 357977LLU;
int32_t t33 = 26440;
int32_t t36 = 63490712;
int64_t x150 = 234435560251506LL;
int32_t t37 = 118;
int64_t x153 = INT64_MAX;
int16_t x158 = -24;
static volatile uint32_t x167 = 249543U;
int8_t x169 = 11;
static uint8_t x170 = UINT8_MAX;
uint64_t x173 = 116LLU;
static int32_t x174 = INT32_MIN;
int64_t x183 = INT64_MIN;
volatile int16_t x189 = INT16_MIN;
volatile int8_t x193 = INT8_MIN;
int32_t t49 = -23375;
int64_t x203 = INT64_MAX;
int64_t x206 = -1LL;
static int64_t x208 = INT64_MIN;
static int32_t t51 = 4042;
int8_t x209 = 0;
int64_t x219 = INT64_MIN;
int16_t x220 = INT16_MIN;
volatile int32_t t55 = -30743;
static uint16_t x228 = UINT16_MAX;
volatile int32_t t56 = 0;
static uint8_t x232 = 85U;
volatile int32_t t57 = 1844850;
int64_t x237 = 542351706742LL;
volatile uint16_t x241 = 7U;
static int8_t x242 = 1;
uint8_t x243 = UINT8_MAX;
int8_t x247 = -3;
uint64_t x258 = UINT64_MAX;
int16_t x260 = -471;
uint16_t x262 = 1U;
uint64_t x263 = 15LLU;
uint16_t x271 = 1U;
uint32_t x273 = UINT32_MAX;
uint32_t x276 = 132400725U;
int32_t x283 = INT32_MIN;
int64_t x286 = INT64_MIN;
static int8_t x292 = INT8_MIN;
static int32_t t69 = -667200404;
uint32_t x307 = 61960849U;
int8_t x308 = -1;
int32_t t74 = 0;
volatile uint32_t x322 = 15U;
int32_t x327 = INT32_MAX;
int32_t t77 = 33;
int32_t x331 = -258212;
int64_t x343 = INT64_MAX;
int64_t x344 = INT64_MIN;
int16_t x353 = -1;
int64_t x357 = -1079LL;
int16_t x371 = INT16_MAX;
int32_t t88 = -36944281;
volatile int32_t t89 = 705224;
volatile int32_t t90 = -1724;
volatile uint8_t x384 = 6U;
static int32_t t91 = 719474;
int16_t x392 = INT16_MIN;
int32_t x397 = -765;
int64_t x399 = 92652LL;
uint8_t x400 = 9U;
volatile int32_t t95 = 1069918;
uint8_t x404 = UINT8_MAX;
static int32_t t96 = -31698;
int32_t x407 = INT32_MAX;
int16_t x409 = 444;
int16_t x412 = 6471;
int32_t t99 = -167;


void f0(void) {
	static int32_t x2 = -45337;
	static int8_t x3 = -10;
	int8_t x4 = INT8_MAX;

	t0 = ((x1+(x2/x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int32_t x6 = INT32_MAX;
	uint16_t x7 = 24U;
	volatile int32_t t1 = 28062834;

	t1 = ((x5+(x6/x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x10 = -26;
	static volatile uint64_t x11 = 433390625LLU;
	uint8_t x12 = UINT8_MAX;
	int32_t t2 = -1;

	t2 = ((x9+(x10/x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 254LLU;
	int8_t x14 = -1;
	int64_t x15 = INT64_MIN;
	volatile int8_t x16 = 1;

	t3 = ((x13+(x14/x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x20 = UINT8_MAX;
	int32_t t4 = 2496992;

	t4 = ((x17+(x18/x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x22 = INT16_MAX;
	uint16_t x23 = UINT16_MAX;
	static uint16_t x24 = UINT16_MAX;
	static int32_t t5 = -1669909;

	t5 = ((x21+(x22/x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 27526U;
	uint64_t x26 = 125338339555646LLU;
	int16_t x27 = 3317;
	uint16_t x28 = UINT16_MAX;

	t6 = ((x25+(x26/x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int64_t x30 = 5970086923954LL;
	static uint8_t x31 = 19U;
	static int32_t x32 = INT32_MAX;
	volatile int32_t t7 = -548247;

	t7 = ((x29+(x30/x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 1;
	uint64_t x36 = 5401167888LLU;
	volatile int32_t t8 = 91063501;

	t8 = ((x33+(x34/x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int32_t x38 = INT32_MIN;
	uint16_t x39 = 27102U;
	static int64_t x40 = -1LL;

	t9 = ((x37+(x38/x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = 516152089U;
	int64_t x42 = -1161LL;
	uint8_t x43 = UINT8_MAX;
	int32_t t10 = -2;

	t10 = ((x41+(x42/x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x47 = INT64_MIN;
	int64_t x48 = -20468798636965256LL;

	t11 = ((x45+(x46/x47))<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x52 = INT8_MIN;
	int32_t t12 = 188;

	t12 = ((x49+(x50/x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = -10312;
	volatile int64_t x55 = 502334346218398LL;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t13 = 1786649;

	t13 = ((x53+(x54/x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x58 = UINT64_MAX;
	uint32_t x60 = 33809399U;
	volatile int32_t t14 = 530;

	t14 = ((x57+(x58/x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = 955426999LLU;
	int16_t x63 = -1;
	static volatile int64_t x64 = -1LL;
	volatile int32_t t15 = -712;

	t15 = ((x61+(x62/x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x65 = INT8_MIN;
	static int64_t x66 = 15041232216LL;
	int64_t x67 = -1LL;

	t16 = ((x65+(x66/x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	int8_t x70 = INT8_MIN;
	int8_t x71 = -1;
	int8_t x72 = INT8_MIN;
	volatile int32_t t17 = -128131279;

	t17 = ((x69+(x70/x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	uint32_t x74 = 1191561472U;
	uint16_t x75 = 38U;

	t18 = ((x73+(x74/x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	volatile uint16_t x78 = 400U;
	int8_t x80 = 0;
	volatile int32_t t19 = -124;

	t19 = ((x77+(x78/x79))<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x82 = 0LLU;
	int16_t x83 = -439;
	static uint64_t x84 = 48970LLU;
	int32_t t20 = 3774275;

	t20 = ((x81+(x82/x83))<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	volatile int32_t x86 = INT32_MAX;
	int64_t x87 = INT64_MIN;
	uint64_t x88 = 71608962853800743LLU;

	t21 = ((x85+(x86/x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x90 = 6291247138LLU;
	uint8_t x91 = 49U;
	volatile int32_t x92 = 40295;
	int32_t t22 = 29603;

	t22 = ((x89+(x90/x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 9U;
	volatile int16_t x94 = INT16_MIN;
	int32_t x95 = INT32_MAX;
	int8_t x96 = INT8_MIN;
	int32_t t23 = -1;

	t23 = ((x93+(x94/x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 377279851LL;
	volatile int32_t x99 = INT32_MIN;
	int8_t x100 = INT8_MAX;
	int32_t t24 = 644816686;

	t24 = ((x97+(x98/x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 1187U;
	static uint64_t x104 = UINT64_MAX;
	volatile int32_t t25 = -199;

	t25 = ((x101+(x102/x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = INT8_MAX;
	volatile int8_t x106 = INT8_MIN;
	int8_t x107 = INT8_MIN;
	int16_t x108 = -781;
	static volatile int32_t t26 = 698954;

	t26 = ((x105+(x106/x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = -22570623387402619LL;
	uint64_t x110 = 4093510393713LLU;
	static uint16_t x111 = 1912U;
	volatile int32_t x112 = INT32_MIN;
	volatile int32_t t27 = -76172;

	t27 = ((x109+(x110/x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = 129826LL;
	volatile int64_t x116 = 117LL;
	int32_t t28 = 2847541;

	t28 = ((x113+(x114/x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -976;
	static int8_t x118 = -1;
	int64_t x119 = -1706339278406817LL;
	volatile uint64_t x120 = 177520008202730932LLU;
	int32_t t29 = 5637;

	t29 = ((x117+(x118/x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = -1;
	static int64_t x122 = 124LL;
	static uint8_t x123 = 60U;
	volatile int32_t t30 = -31;

	t30 = ((x121+(x122/x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x125 = UINT8_MAX;
	volatile int64_t x126 = -2691LL;
	static uint16_t x127 = UINT16_MAX;
	static int8_t x128 = 0;
	volatile int32_t t31 = -710;

	t31 = ((x125+(x126/x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 29U;
	static int8_t x131 = INT8_MIN;
	int32_t x132 = INT32_MIN;
	static int32_t t32 = -237755690;

	t32 = ((x129+(x130/x131))<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int32_t x134 = -1;

	t33 = ((x133+(x134/x135))<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 27970U;
	static int32_t x138 = -1;
	volatile int8_t x139 = 9;
	uint32_t x140 = 1634670379U;
	volatile int32_t t34 = -317;

	t34 = ((x137+(x138/x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 6U;
	int16_t x142 = 91;
	int64_t x143 = -1LL;
	int16_t x144 = -1;
	int32_t t35 = 2;

	t35 = ((x141+(x142/x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 0U;
	int16_t x146 = INT16_MIN;
	volatile int64_t x147 = INT64_MIN;
	static int64_t x148 = INT64_MIN;

	t36 = ((x145+(x146/x147))<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x149 = 47386295370LLU;
	uint16_t x151 = 12U;
	static volatile int64_t x152 = INT64_MIN;

	t37 = ((x149+(x150/x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = -1;
	int8_t x155 = INT8_MIN;
	int8_t x156 = -1;
	int32_t t38 = -5174278;

	t38 = ((x153+(x154/x155))<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	int16_t x159 = INT16_MIN;
	int64_t x160 = INT64_MIN;
	int32_t t39 = 3477473;

	t39 = ((x157+(x158/x159))<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x161 = 218LL;
	static int16_t x162 = -8;
	int8_t x163 = 2;
	uint8_t x164 = 27U;
	int32_t t40 = -11019;

	t40 = ((x161+(x162/x163))<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	uint32_t x166 = 253831U;
	static int16_t x168 = INT16_MAX;
	static volatile int32_t t41 = 33205;

	t41 = ((x165+(x166/x167))<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x171 = INT16_MIN;
	uint64_t x172 = 899965709181257506LLU;
	int32_t t42 = -1019;

	t42 = ((x169+(x170/x171))<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x175 = 3U;
	uint32_t x176 = 3265111U;
	volatile int32_t t43 = 1061232039;

	t43 = ((x173+(x174/x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -917432782099LL;
	static uint32_t x178 = 9U;
	volatile uint32_t x179 = 6682U;
	int64_t x180 = -1LL;
	int32_t t44 = 2172;

	t44 = ((x177+(x178/x179))<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 8;
	int16_t x182 = INT16_MIN;
	static volatile uint8_t x184 = 39U;
	static int32_t t45 = -748642728;

	t45 = ((x181+(x182/x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	static int8_t x186 = INT8_MAX;
	int32_t x187 = 669578419;
	int64_t x188 = INT64_MIN;
	volatile int32_t t46 = -1573658;

	t46 = ((x185+(x186/x187))<=x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x190 = 1351338559LL;
	volatile int16_t x191 = INT16_MAX;
	uint16_t x192 = 5U;
	static int32_t t47 = 46865288;

	t47 = ((x189+(x190/x191))<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = 17670804583973LL;
	uint32_t x195 = UINT32_MAX;
	volatile int64_t x196 = INT64_MIN;
	static int32_t t48 = -53083;

	t48 = ((x193+(x194/x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x197 = INT8_MIN;
	static volatile int8_t x198 = INT8_MIN;
	volatile uint16_t x199 = 2199U;
	volatile int64_t x200 = -1LL;

	t49 = ((x197+(x198/x199))<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -1LL;
	uint64_t x202 = UINT64_MAX;
	static volatile int32_t x204 = INT32_MIN;
	volatile int32_t t50 = -1;

	t50 = ((x201+(x202/x203))<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	int16_t x207 = INT16_MIN;

	t51 = ((x205+(x206/x207))<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x210 = 4494LLU;
	volatile int64_t x211 = -1LL;
	volatile int32_t x212 = INT32_MIN;
	int32_t t52 = 10289497;

	t52 = ((x209+(x210/x211))<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 1;
	volatile int64_t x214 = INT64_MIN;
	volatile int8_t x215 = INT8_MIN;
	int8_t x216 = 11;
	static volatile int32_t t53 = 24451832;

	t53 = ((x213+(x214/x215))<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = -52;
	volatile int32_t t54 = 84328035;

	t54 = ((x217+(x218/x219))<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = 2150526071193384LL;
	volatile int8_t x222 = INT8_MIN;
	int8_t x223 = INT8_MIN;
	volatile uint32_t x224 = UINT32_MAX;

	t55 = ((x221+(x222/x223))<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 240146;
	uint64_t x226 = 307871724235LLU;
	int8_t x227 = INT8_MAX;

	t56 = ((x225+(x226/x227))<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = -1;
	int32_t x230 = INT32_MIN;
	uint16_t x231 = 27U;

	t57 = ((x229+(x230/x231))<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x238 = 14898U;
	int64_t x239 = -1LL;
	static volatile int32_t x240 = INT32_MAX;
	int32_t t58 = -286;

	t58 = ((x237+(x238/x239))<=x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x244 = -9807;
	volatile int32_t t59 = 13;

	t59 = ((x241+(x242/x243))<=x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x245 = -1LL;
	uint32_t x246 = 26U;
	int16_t x248 = INT16_MIN;
	volatile int32_t t60 = -4276;

	t60 = ((x245+(x246/x247))<=x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x249 = UINT16_MAX;
	static uint16_t x250 = 1732U;
	uint16_t x251 = UINT16_MAX;
	volatile int32_t x252 = INT32_MIN;
	int32_t t61 = 7735;

	t61 = ((x249+(x250/x251))<=x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = -389612807884952136LL;
	int8_t x259 = INT8_MIN;
	static int32_t t62 = 2;

	t62 = ((x257+(x258/x259))<=x260);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = 2473;
	int16_t x264 = INT16_MIN;
	int32_t t63 = -38336033;

	t63 = ((x261+(x262/x263))<=x264);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x269 = UINT32_MAX;
	uint32_t x270 = 48U;
	int8_t x272 = -1;
	int32_t t64 = -78596;

	t64 = ((x269+(x270/x271))<=x272);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x274 = INT64_MIN;
	static uint32_t x275 = 298566U;
	int32_t t65 = -49;

	t65 = ((x273+(x274/x275))<=x276);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = -51;
	uint16_t x278 = UINT16_MAX;
	volatile int16_t x279 = INT16_MIN;
	int8_t x280 = -1;
	static int32_t t66 = 20;

	t66 = ((x277+(x278/x279))<=x280);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x281 = -1LL;
	uint32_t x282 = 3U;
	int16_t x284 = INT16_MIN;
	int32_t t67 = 15515979;

	t67 = ((x281+(x282/x283))<=x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x285 = INT16_MIN;
	int16_t x287 = 3;
	int64_t x288 = INT64_MIN;
	volatile int32_t t68 = 4345958;

	t68 = ((x285+(x286/x287))<=x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = INT16_MIN;
	volatile int32_t x290 = 50524;
	int64_t x291 = INT64_MIN;

	t69 = ((x289+(x290/x291))<=x292);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x293 = 437326350;
	int8_t x294 = 1;
	uint8_t x295 = 94U;
	static int32_t x296 = -60103170;
	int32_t t70 = -13;

	t70 = ((x293+(x294/x295))<=x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x301 = UINT32_MAX;
	static uint64_t x302 = UINT64_MAX;
	volatile int32_t x303 = INT32_MIN;
	volatile uint8_t x304 = UINT8_MAX;
	volatile int32_t t71 = 269;

	t71 = ((x301+(x302/x303))<=x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x305 = -1LL;
	static int32_t x306 = -27436;
	int32_t t72 = 410;

	t72 = ((x305+(x306/x307))<=x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = -7722197817LL;
	volatile uint16_t x310 = 2U;
	int8_t x311 = 1;
	uint16_t x312 = 146U;
	int32_t t73 = -20751;

	t73 = ((x309+(x310/x311))<=x312);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x313 = 73324659067616LLU;
	volatile uint64_t x314 = 3679707LLU;
	static int16_t x315 = INT16_MAX;
	int16_t x316 = -239;

	t74 = ((x313+(x314/x315))<=x316);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = 0;
	uint64_t x318 = UINT64_MAX;
	uint64_t x319 = 22LLU;
	int32_t x320 = INT32_MIN;
	volatile int32_t t75 = -268;

	t75 = ((x317+(x318/x319))<=x320);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x321 = INT32_MAX;
	volatile int8_t x323 = 2;
	volatile uint64_t x324 = UINT64_MAX;
	int32_t t76 = 11378;

	t76 = ((x321+(x322/x323))<=x324);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x325 = INT16_MAX;
	static volatile uint16_t x326 = 1U;
	int8_t x328 = INT8_MAX;

	t77 = ((x325+(x326/x327))<=x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = INT8_MAX;
	volatile int32_t x330 = INT32_MIN;
	int16_t x332 = INT16_MIN;
	volatile int32_t t78 = -3855;

	t78 = ((x329+(x330/x331))<=x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x333 = 21;
	static uint16_t x334 = 13010U;
	volatile int32_t x335 = INT32_MIN;
	static int16_t x336 = 11;
	volatile int32_t t79 = -20;

	t79 = ((x333+(x334/x335))<=x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = -1;
	static volatile int64_t x338 = -1LL;
	int32_t x339 = INT32_MIN;
	static int8_t x340 = -1;
	volatile int32_t t80 = -11242283;

	t80 = ((x337+(x338/x339))<=x340);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = -1;
	int64_t x342 = INT64_MIN;
	volatile int32_t t81 = -957574;

	t81 = ((x341+(x342/x343))<=x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = 196;
	int64_t x346 = INT64_MIN;
	uint8_t x347 = 62U;
	int8_t x348 = 15;
	volatile int32_t t82 = -6;

	t82 = ((x345+(x346/x347))<=x348);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x349 = 19U;
	int32_t x350 = -1354207;
	int32_t x351 = 3934696;
	int16_t x352 = INT16_MIN;
	int32_t t83 = -6;

	t83 = ((x349+(x350/x351))<=x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x354 = 3894U;
	static volatile int32_t x355 = INT32_MIN;
	int16_t x356 = 1;
	volatile int32_t t84 = 0;

	t84 = ((x353+(x354/x355))<=x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x358 = INT64_MAX;
	uint32_t x359 = 18270382U;
	int32_t x360 = 18162706;
	volatile int32_t t85 = 24186137;

	t85 = ((x357+(x358/x359))<=x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = 148LL;
	int8_t x362 = 1;
	volatile int64_t x363 = -1LL;
	volatile uint64_t x364 = 35974737450502603LLU;
	volatile int32_t t86 = -6437396;

	t86 = ((x361+(x362/x363))<=x364);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x365 = 11119448956527LLU;
	volatile int8_t x366 = INT8_MIN;
	int8_t x367 = INT8_MIN;
	static uint64_t x368 = 283268074LLU;
	volatile int32_t t87 = 1510087;

	t87 = ((x365+(x366/x367))<=x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x369 = 393U;
	int8_t x370 = INT8_MAX;
	int8_t x372 = 1;

	t88 = ((x369+(x370/x371))<=x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = 10;
	uint16_t x374 = 218U;
	static uint64_t x375 = UINT64_MAX;
	int32_t x376 = INT32_MIN;

	t89 = ((x373+(x374/x375))<=x376);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x377 = INT32_MIN;
	static int8_t x378 = 12;
	int16_t x379 = -35;
	volatile int64_t x380 = -1LL;

	t90 = ((x377+(x378/x379))<=x380);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x381 = 2U;
	int64_t x382 = -1LL;
	int32_t x383 = INT32_MIN;

	t91 = ((x381+(x382/x383))<=x384);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x385 = INT32_MIN;
	int64_t x386 = INT64_MIN;
	volatile int32_t x387 = INT32_MIN;
	uint8_t x388 = 2U;
	int32_t t92 = 1556052;

	t92 = ((x385+(x386/x387))<=x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x389 = -942;
	uint16_t x390 = 59U;
	static int64_t x391 = INT64_MAX;
	volatile int32_t t93 = -792304;

	t93 = ((x389+(x390/x391))<=x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x393 = INT16_MIN;
	static int8_t x394 = INT8_MIN;
	uint8_t x395 = 31U;
	static uint8_t x396 = 89U;
	volatile int32_t t94 = -4396910;

	t94 = ((x393+(x394/x395))<=x396);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x398 = INT8_MAX;

	t95 = ((x397+(x398/x399))<=x400);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x401 = -1LL;
	volatile int8_t x402 = INT8_MIN;
	int64_t x403 = INT64_MIN;

	t96 = ((x401+(x402/x403))<=x404);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x405 = INT32_MAX;
	uint32_t x406 = UINT32_MAX;
	int16_t x408 = -1;
	volatile int32_t t97 = -15107;

	t97 = ((x405+(x406/x407))<=x408);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x410 = 234848807LL;
	uint32_t x411 = 549U;
	volatile int32_t t98 = -63;

	t98 = ((x409+(x410/x411))<=x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x413 = 26LL;
	int64_t x414 = INT64_MIN;
	int8_t x415 = INT8_MIN;
	int64_t x416 = INT64_MIN;

	t99 = ((x413+(x414/x415))<=x416);

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

