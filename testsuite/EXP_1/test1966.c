#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 4698U;
static int32_t x3 = INT32_MIN;
static int16_t x7 = -1;
volatile int8_t x9 = 52;
static uint16_t x11 = 50U;
uint32_t x24 = 1U;
int8_t x25 = -1;
volatile uint64_t x26 = 20126148LLU;
uint16_t x27 = UINT16_MAX;
int64_t x29 = INT64_MAX;
int32_t x31 = 158882;
int8_t x32 = -2;
int8_t x34 = INT8_MAX;
uint64_t x35 = 21LLU;
static volatile int64_t x36 = INT64_MAX;
int32_t x40 = INT32_MIN;
volatile int32_t t9 = INT32_MIN;
int64_t t10 = INT64_MAX;
static uint32_t x47 = 7932781U;
uint16_t x48 = UINT16_MAX;
int32_t x49 = INT32_MAX;
volatile int16_t x51 = -1;
int32_t t14 = -327600304;
int64_t x63 = -1LL;
uint64_t x68 = 1263LLU;
volatile int16_t x82 = INT16_MIN;
uint64_t t23 = 9LLU;
int64_t x101 = INT64_MAX;
static volatile int64_t x104 = INT64_MAX;
int64_t t25 = INT64_MAX;
uint64_t x107 = 0LLU;
volatile int8_t x109 = INT8_MIN;
static int16_t x117 = INT16_MAX;
int32_t x122 = -1;
static uint32_t x125 = 122999326U;
uint32_t x131 = UINT32_MAX;
static uint8_t x140 = UINT8_MAX;
uint8_t x146 = UINT8_MAX;
uint64_t x148 = UINT64_MAX;
int64_t x154 = -4155309442179LL;
static int64_t x155 = -1LL;
uint64_t t39 = UINT64_MAX;
int64_t x168 = INT64_MAX;
uint16_t x174 = UINT16_MAX;
volatile int16_t x175 = -1;
static volatile int32_t t43 = -16;
int16_t x177 = INT16_MIN;
uint16_t x179 = 6209U;
static int16_t x187 = -1;
uint8_t x191 = 121U;
int32_t t47 = -559844;
volatile uint8_t x195 = 1U;
uint16_t x196 = 165U;
int32_t x201 = INT32_MIN;
int8_t x204 = -1;
volatile int32_t t50 = 0;
uint16_t x207 = 3878U;
int64_t x208 = INT64_MIN;
int32_t x211 = INT32_MIN;
static int8_t x213 = INT8_MIN;
int64_t x217 = INT64_MIN;
int64_t x221 = -82476LL;
uint32_t x222 = 1U;
volatile int32_t t56 = -5326337;
int64_t x232 = -1LL;
int32_t x240 = INT32_MAX;
uint32_t x242 = 365U;
volatile uint64_t x244 = 6953680396248973LLU;
volatile int32_t t61 = 200411061;
uint8_t x255 = 0U;
volatile int32_t x257 = INT32_MAX;
int64_t x258 = INT64_MIN;
uint16_t x259 = UINT16_MAX;
static int16_t x260 = 1;
uint8_t x261 = UINT8_MAX;
static int32_t x264 = INT32_MIN;
static int8_t x265 = INT8_MIN;
volatile uint64_t t67 = 517287684LLU;
static uint8_t x273 = UINT8_MAX;
uint16_t x274 = 5U;
static uint64_t x279 = 3908037157LLU;
volatile uint64_t x283 = 55535559806LLU;
int8_t x285 = -2;
uint16_t x286 = 1712U;
volatile int16_t x288 = -10627;
int64_t x293 = INT64_MIN;
static uint32_t x296 = UINT32_MAX;
static uint16_t x301 = 10U;
int32_t t76 = -214080;
uint16_t x309 = 13220U;
uint8_t x312 = 1U;
volatile uint32_t x315 = 1623437105U;
volatile uint32_t t78 = 8U;
int8_t x330 = INT8_MAX;
uint64_t x336 = 8LLU;
static uint32_t x345 = 509U;
int64_t x349 = -1LL;
volatile uint32_t x351 = 20466790U;
int32_t t87 = 6994;
int64_t x353 = -1LL;
int8_t x356 = INT8_MIN;
volatile int16_t x360 = 307;
static volatile int32_t t89 = -41983012;
uint8_t x375 = UINT8_MAX;
static volatile int32_t t93 = 224976;
int64_t x380 = INT64_MIN;
static int64_t t94 = INT64_MIN;
static int16_t x381 = -31;
static volatile int32_t x396 = -188;
volatile int8_t x398 = INT8_MIN;


void f0(void) {
	int8_t x2 = -1;
	static int32_t x4 = -1;
	volatile int32_t t0 = -1;

	t0 = (((x1|x2)<x3)*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile int64_t x6 = -1LL;
	static uint32_t x8 = UINT32_MAX;
	volatile uint32_t t1 = 1712346U;

	t1 = (((x5|x6)<x7)*x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x10 = INT16_MIN;
	volatile uint64_t x12 = 401828LLU;
	static uint64_t t2 = 105154982543580082LLU;

	t2 = (((x9|x10)<x11)*x12);

	if (t2 != 401828LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	static uint32_t x14 = UINT32_MAX;
	volatile uint32_t x15 = UINT32_MAX;
	static volatile int8_t x16 = 3;
	volatile int32_t t3 = -25315;

	t3 = (((x13|x14)<x15)*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	volatile uint32_t x18 = 1362U;
	int16_t x19 = INT16_MAX;
	int8_t x20 = INT8_MIN;
	int32_t t4 = 1;

	t4 = (((x17|x18)<x19)*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 32U;
	int8_t x22 = INT8_MIN;
	volatile int32_t x23 = INT32_MAX;
	volatile uint32_t t5 = 79616664U;

	t5 = (((x21|x22)<x23)*x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x28 = -1220;
	volatile int32_t t6 = -114;

	t6 = (((x25|x26)<x27)*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x30 = INT32_MIN;
	volatile int32_t t7 = -1523;

	t7 = (((x29|x30)<x31)*x32);

	if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	volatile int64_t t8 = -1033448137942195LL;

	t8 = (((x33|x34)<x35)*x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -182;
	int16_t x38 = -5952;
	int64_t x39 = INT64_MAX;

	t9 = (((x37|x38)<x39)*x40);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int64_t x42 = INT64_MIN;
	int8_t x43 = -1;
	int64_t x44 = INT64_MAX;

	t10 = (((x41|x42)<x43)*x44);

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	static uint8_t x46 = UINT8_MAX;
	int32_t t11 = -198486392;

	t11 = (((x45|x46)<x47)*x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = 21;
	uint16_t x52 = 5250U;
	int32_t t12 = -60;

	t12 = (((x49|x50)<x51)*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x53 = 2058U;
	volatile uint8_t x54 = 5U;
	int8_t x55 = INT8_MIN;
	uint8_t x56 = 127U;
	volatile int32_t t13 = -17609078;

	t13 = (((x53|x54)<x55)*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	static int32_t x58 = -1;
	int16_t x59 = INT16_MIN;
	static uint8_t x60 = 8U;

	t14 = (((x57|x58)<x59)*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	static int16_t x62 = 2;
	volatile int32_t x64 = -1;
	int32_t t15 = -1026437;

	t15 = (((x61|x62)<x63)*x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = -1LL;
	int32_t x66 = INT32_MIN;
	volatile int32_t x67 = -1;
	static volatile uint64_t t16 = 104853LLU;

	t16 = (((x65|x66)<x67)*x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	int8_t x70 = INT8_MAX;
	static int64_t x71 = -59697280440LL;
	uint32_t x72 = 915485395U;
	uint32_t t17 = 84748U;

	t17 = (((x69|x70)<x71)*x72);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	static uint16_t x74 = 3854U;
	int8_t x75 = INT8_MIN;
	uint32_t x76 = UINT32_MAX;
	uint32_t t18 = 119212U;

	t18 = (((x73|x74)<x75)*x76);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	uint32_t x78 = UINT32_MAX;
	int16_t x79 = INT16_MAX;
	static int16_t x80 = -1;
	int32_t t19 = 139216800;

	t19 = (((x77|x78)<x79)*x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	static int32_t x83 = -156;
	static int64_t x84 = INT64_MIN;
	int64_t t20 = INT64_MIN;

	t20 = (((x81|x82)<x83)*x84);

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -15LL;
	uint32_t x86 = 848U;
	int8_t x87 = -1;
	static volatile int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 3;

	t21 = (((x85|x86)<x87)*x88);

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 239929U;
	volatile int8_t x90 = INT8_MIN;
	uint64_t x91 = 242LLU;
	static volatile int32_t x92 = INT32_MIN;
	int32_t t22 = 2422562;

	t22 = (((x89|x90)<x91)*x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 21U;
	int64_t x94 = INT64_MIN;
	static uint8_t x95 = 38U;
	static uint64_t x96 = 1052778512LLU;

	t23 = (((x93|x94)<x95)*x96);

	if (t23 != 1052778512LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -22094386262LL;
	uint16_t x98 = 2985U;
	static int64_t x99 = INT64_MIN;
	uint64_t x100 = 6778898LLU;
	volatile uint64_t t24 = 690LLU;

	t24 = (((x97|x98)<x99)*x100);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x102 = INT16_MIN;
	uint8_t x103 = 0U;

	t25 = (((x101|x102)<x103)*x104);

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 4U;
	int16_t x106 = -1;
	int8_t x108 = INT8_MIN;
	static int32_t t26 = 5009107;

	t26 = (((x105|x106)<x107)*x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = INT64_MIN;
	int16_t x111 = INT16_MIN;
	uint64_t x112 = UINT64_MAX;
	static volatile uint64_t t27 = 10360098335LLU;

	t27 = (((x109|x110)<x111)*x112);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x113 = 16655U;
	int8_t x114 = -35;
	static int8_t x115 = INT8_MIN;
	uint64_t x116 = UINT64_MAX;
	static volatile uint64_t t28 = 5568588155LLU;

	t28 = (((x113|x114)<x115)*x116);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x118 = UINT16_MAX;
	int32_t x119 = -1;
	static int64_t x120 = -3866LL;
	int64_t t29 = -228451008253865405LL;

	t29 = (((x117|x118)<x119)*x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x121 = -175204241144LL;
	int8_t x123 = -1;
	int64_t x124 = INT64_MAX;
	int64_t t30 = 5654381150LL;

	t30 = (((x121|x122)<x123)*x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x126 = 1931U;
	int8_t x127 = INT8_MIN;
	static uint8_t x128 = 1U;
	int32_t t31 = -1012870621;

	t31 = (((x125|x126)<x127)*x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 302006U;
	static volatile uint64_t x130 = 848LLU;
	int64_t x132 = INT64_MIN;
	int64_t t32 = INT64_MIN;

	t32 = (((x129|x130)<x131)*x132);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int8_t x134 = 1;
	static int64_t x135 = -543251153962057LL;
	volatile uint64_t x136 = 582961LLU;
	uint64_t t33 = 17564455682900LLU;

	t33 = (((x133|x134)<x135)*x136);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	volatile int16_t x138 = INT16_MAX;
	static volatile int64_t x139 = INT64_MIN;
	int32_t t34 = -24430;

	t34 = (((x137|x138)<x139)*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x141 = -1LL;
	int8_t x142 = INT8_MIN;
	uint16_t x143 = 6034U;
	uint64_t x144 = UINT64_MAX;
	uint64_t t35 = UINT64_MAX;

	t35 = (((x141|x142)<x143)*x144);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	static volatile int8_t x147 = INT8_MAX;
	volatile uint64_t t36 = 296372475229LLU;

	t36 = (((x145|x146)<x147)*x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	int8_t x150 = 4;
	volatile int32_t x151 = -16994391;
	int64_t x152 = INT64_MAX;
	static volatile int64_t t37 = 949681LL;

	t37 = (((x149|x150)<x151)*x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 48;
	volatile int64_t x156 = -1LL;
	volatile int64_t t38 = 77LL;

	t38 = (((x153|x154)<x155)*x156);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x157 = 465189011449LLU;
	volatile int64_t x158 = -15366600319803160LL;
	static int16_t x159 = -1;
	static uint64_t x160 = UINT64_MAX;

	t39 = (((x157|x158)<x159)*x160);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 34;
	int8_t x162 = INT8_MIN;
	static uint16_t x163 = 7176U;
	int16_t x164 = INT16_MAX;
	static int32_t t40 = 3;

	t40 = (((x161|x162)<x163)*x164);

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = UINT64_MAX;
	uint32_t x166 = 54924U;
	int32_t x167 = -1;
	volatile int64_t t41 = 491349LL;

	t41 = (((x165|x166)<x167)*x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = -211;
	int8_t x170 = -1;
	uint16_t x171 = 2029U;
	int32_t x172 = -1;
	int32_t t42 = 0;

	t42 = (((x169|x170)<x171)*x172);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = UINT64_MAX;
	int32_t x176 = -4;

	t43 = (((x173|x174)<x175)*x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x178 = -1;
	int32_t x180 = INT32_MIN;
	int32_t t44 = INT32_MIN;

	t44 = (((x177|x178)<x179)*x180);

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -52670460;
	static int16_t x182 = 4369;
	int32_t x183 = 4153;
	volatile uint8_t x184 = UINT8_MAX;
	volatile int32_t t45 = -1;

	t45 = (((x181|x182)<x183)*x184);

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = INT8_MIN;
	uint64_t x186 = UINT64_MAX;
	static volatile int64_t x188 = 71889123839249924LL;
	int64_t t46 = 9LL;

	t46 = (((x185|x186)<x187)*x188);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 10U;
	static uint8_t x190 = 20U;
	uint16_t x192 = UINT16_MAX;

	t47 = (((x189|x190)<x191)*x192);

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -337;
	uint64_t x194 = 110341702366119LLU;
	volatile int32_t t48 = -189340996;

	t48 = (((x193|x194)<x195)*x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 746614409943789LLU;
	uint32_t x198 = 72293U;
	static uint16_t x199 = UINT16_MAX;
	static volatile int8_t x200 = -1;
	static int32_t t49 = 61;

	t49 = (((x197|x198)<x199)*x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x202 = 6063107815903163950LLU;
	volatile int32_t x203 = INT32_MAX;

	t50 = (((x201|x202)<x203)*x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MAX;
	int32_t x206 = -567;
	volatile int64_t t51 = INT64_MIN;

	t51 = (((x205|x206)<x207)*x208);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x209 = 6U;
	static uint32_t x210 = 4008U;
	volatile int8_t x212 = -61;
	volatile int32_t t52 = 819493588;

	t52 = (((x209|x210)<x211)*x212);

	if (t52 != -61) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = -105801503;
	volatile uint32_t x215 = 194744U;
	static int64_t x216 = 6825601342968LL;
	int64_t t53 = -14591LL;

	t53 = (((x213|x214)<x215)*x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x218 = INT32_MIN;
	static volatile uint32_t x219 = UINT32_MAX;
	int64_t x220 = INT64_MIN;
	static int64_t t54 = INT64_MIN;

	t54 = (((x217|x218)<x219)*x220);

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x223 = INT16_MIN;
	static int64_t x224 = INT64_MIN;
	volatile int64_t t55 = INT64_MIN;

	t55 = (((x221|x222)<x223)*x224);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	uint8_t x226 = UINT8_MAX;
	uint32_t x227 = 1U;
	int32_t x228 = -1;

	t56 = (((x225|x226)<x227)*x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -40820LL;
	int32_t x230 = INT32_MAX;
	uint64_t x231 = 12240386713786710LLU;
	volatile int64_t t57 = -63607386LL;

	t57 = (((x229|x230)<x231)*x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int32_t x234 = INT32_MIN;
	int64_t x235 = INT64_MIN;
	volatile uint32_t x236 = 3U;
	uint32_t t58 = 61732135U;

	t58 = (((x233|x234)<x235)*x236);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x237 = INT16_MIN;
	static uint8_t x238 = 67U;
	int64_t x239 = -1LL;
	int32_t t59 = INT32_MAX;

	t59 = (((x237|x238)<x239)*x240);

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 18U;
	int64_t x243 = INT64_MIN;
	volatile uint64_t t60 = 7643492645827673LLU;

	t60 = (((x241|x242)<x243)*x244);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x245 = 59U;
	int16_t x246 = 13350;
	uint32_t x247 = 5U;
	int32_t x248 = INT32_MIN;

	t61 = (((x245|x246)<x247)*x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	static int32_t x250 = INT32_MAX;
	static int64_t x251 = -1LL;
	int16_t x252 = -131;
	int32_t t62 = -1952;

	t62 = (((x249|x250)<x251)*x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	volatile uint8_t x254 = UINT8_MAX;
	int16_t x256 = -625;
	int32_t t63 = 157728509;

	t63 = (((x253|x254)<x255)*x256);

	if (t63 != -625) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t t64 = 9790;

	t64 = (((x257|x258)<x259)*x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = INT16_MAX;
	int32_t x263 = INT32_MIN;
	int32_t t65 = -104;

	t65 = (((x261|x262)<x263)*x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x266 = UINT32_MAX;
	uint16_t x267 = UINT16_MAX;
	static volatile int64_t x268 = 1LL;
	int64_t t66 = -8134927886LL;

	t66 = (((x265|x266)<x267)*x268);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	static uint16_t x270 = UINT16_MAX;
	volatile int64_t x271 = INT64_MIN;
	uint64_t x272 = UINT64_MAX;

	t67 = (((x269|x270)<x271)*x272);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x275 = INT8_MIN;
	int8_t x276 = 1;
	static int32_t t68 = 158068;

	t68 = (((x273|x274)<x275)*x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x277 = -1;
	uint32_t x278 = UINT32_MAX;
	static int16_t x280 = -1;
	int32_t t69 = -24;

	t69 = (((x277|x278)<x279)*x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = 294126302229947LL;
	static int64_t x282 = INT64_MIN;
	int8_t x284 = 5;
	static volatile int32_t t70 = 7278;

	t70 = (((x281|x282)<x283)*x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x287 = 442039280LLU;
	int32_t t71 = 2;

	t71 = (((x285|x286)<x287)*x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MAX;
	volatile uint32_t x290 = UINT32_MAX;
	uint8_t x291 = 3U;
	static int16_t x292 = -7610;
	int32_t t72 = 157010184;

	t72 = (((x289|x290)<x291)*x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = INT32_MIN;
	volatile int64_t x295 = -4320388817634654761LL;
	uint32_t t73 = 54U;

	t73 = (((x293|x294)<x295)*x296);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	int16_t x298 = 720;
	uint16_t x299 = UINT16_MAX;
	uint8_t x300 = 71U;
	volatile int32_t t74 = -796446477;

	t74 = (((x297|x298)<x299)*x300);

	if (t74 != 71) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = INT8_MIN;
	uint8_t x303 = UINT8_MAX;
	int16_t x304 = -1;
	int32_t t75 = -2085;

	t75 = (((x301|x302)<x303)*x304);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x305 = 53U;
	uint32_t x306 = 267U;
	int8_t x307 = -1;
	volatile int16_t x308 = INT16_MIN;

	t76 = (((x305|x306)<x307)*x308);

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = INT32_MIN;
	static int64_t x311 = INT64_MIN;
	int32_t t77 = 161;

	t77 = (((x309|x310)<x311)*x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = INT16_MIN;
	static int8_t x314 = INT8_MIN;
	static uint32_t x316 = 2450504U;

	t78 = (((x313|x314)<x315)*x316);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	static int8_t x318 = INT8_MIN;
	volatile int8_t x319 = INT8_MAX;
	int64_t x320 = INT64_MIN;
	static int64_t t79 = INT64_MIN;

	t79 = (((x317|x318)<x319)*x320);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = INT8_MIN;
	static int8_t x322 = INT8_MIN;
	uint8_t x323 = 81U;
	static int32_t x324 = INT32_MIN;
	int32_t t80 = INT32_MIN;

	t80 = (((x321|x322)<x323)*x324);

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MAX;
	int32_t x326 = INT32_MIN;
	uint64_t x327 = 986002LLU;
	volatile uint32_t x328 = UINT32_MAX;
	volatile uint32_t t81 = 1041U;

	t81 = (((x325|x326)<x327)*x328);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = -2982445385678457LL;
	int8_t x331 = INT8_MAX;
	uint64_t x332 = 2LLU;
	volatile uint64_t t82 = 6LLU;

	t82 = (((x329|x330)<x331)*x332);

	if (t82 != 2LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = 194;
	int32_t x334 = 1015;
	int8_t x335 = INT8_MAX;
	static volatile uint64_t t83 = 4LLU;

	t83 = (((x333|x334)<x335)*x336);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MIN;
	int8_t x338 = INT8_MIN;
	volatile int64_t x339 = INT64_MIN;
	int32_t x340 = INT32_MIN;
	volatile int32_t t84 = -14;

	t84 = (((x337|x338)<x339)*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MAX;
	uint64_t x342 = UINT64_MAX;
	uint16_t x343 = 94U;
	uint32_t x344 = 13820U;
	volatile uint32_t t85 = 15105U;

	t85 = (((x341|x342)<x343)*x344);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x346 = INT16_MAX;
	int8_t x347 = -1;
	static int64_t x348 = INT64_MIN;
	int64_t t86 = INT64_MIN;

	t86 = (((x345|x346)<x347)*x348);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x350 = INT32_MIN;
	int16_t x352 = INT16_MIN;

	t87 = (((x349|x350)<x351)*x352);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x354 = 63897824U;
	int32_t x355 = INT32_MAX;
	volatile int32_t t88 = -730;

	t88 = (((x353|x354)<x355)*x356);

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x357 = -1LL;
	int64_t x358 = INT64_MIN;
	int16_t x359 = -1;

	t89 = (((x357|x358)<x359)*x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = INT32_MIN;
	uint16_t x362 = 9119U;
	static int32_t x363 = INT32_MIN;
	uint32_t x364 = UINT32_MAX;
	static volatile uint32_t t90 = 69808845U;

	t90 = (((x361|x362)<x363)*x364);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	volatile int16_t x366 = INT16_MIN;
	volatile int16_t x367 = INT16_MIN;
	static uint32_t x368 = 572863134U;
	volatile uint32_t t91 = 5843633U;

	t91 = (((x365|x366)<x367)*x368);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 16U;
	int32_t x370 = -1;
	uint8_t x371 = 117U;
	uint64_t x372 = 506588736792236LLU;
	volatile uint64_t t92 = 481907842LLU;

	t92 = (((x369|x370)<x371)*x372);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 103209217872864LLU;
	int64_t x374 = INT64_MAX;
	int16_t x376 = -883;

	t93 = (((x373|x374)<x375)*x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x377 = 21151U;
	uint8_t x378 = 1U;
	static int8_t x379 = INT8_MIN;

	t94 = (((x377|x378)<x379)*x380);

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = INT8_MIN;
	volatile uint32_t x383 = 4672U;
	volatile uint8_t x384 = 62U;
	static int32_t t95 = 0;

	t95 = (((x381|x382)<x383)*x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MAX;
	int8_t x386 = -1;
	volatile int32_t x387 = -1;
	int64_t x388 = -1LL;
	volatile int64_t t96 = 13991LL;

	t96 = (((x385|x386)<x387)*x388);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 14332284604179LLU;
	volatile int16_t x390 = INT16_MIN;
	uint32_t x391 = UINT32_MAX;
	static volatile int64_t x392 = INT64_MIN;
	static int64_t t97 = 478399913729490LL;

	t97 = (((x389|x390)<x391)*x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x393 = 1U;
	static uint16_t x394 = 3570U;
	int8_t x395 = INT8_MIN;
	int32_t t98 = -227962;

	t98 = (((x393|x394)<x395)*x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x397 = 2U;
	int8_t x399 = INT8_MIN;
	volatile uint8_t x400 = 12U;
	int32_t t99 = 9455756;

	t99 = (((x397|x398)<x399)*x400);

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

