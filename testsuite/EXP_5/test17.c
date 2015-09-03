#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = -1611624223963076LL;
uint32_t x6 = UINT32_MAX;
int64_t t1 = 1505874LL;
static int8_t x18 = INT8_MIN;
static uint16_t x20 = 23U;
volatile uint32_t t4 = 754U;
int8_t x22 = 0;
static int64_t t5 = 444922412023171437LL;
int64_t x28 = 12789494934322593LL;
int8_t x39 = -1;
static int8_t x40 = -1;
static int32_t x41 = 4;
uint32_t x45 = 170319564U;
static int32_t x47 = -3;
static volatile uint32_t t11 = 143U;
int64_t x53 = INT64_MIN;
int64_t x57 = -19LL;
int64_t t13 = 1062104571097LL;
uint8_t x63 = 18U;
static int64_t t14 = -596857LL;
volatile uint32_t t15 = 2094178523U;
int8_t x93 = 13;
volatile int32_t t19 = 53;
uint32_t x98 = 656942316U;
volatile int8_t x103 = INT8_MAX;
static volatile int16_t x108 = 35;
uint16_t x115 = 1790U;
int64_t x121 = 20474098768LL;
uint64_t x135 = 1609LLU;
static volatile int16_t x136 = -3269;
int16_t x137 = INT16_MAX;
volatile uint16_t x142 = 2U;
int8_t x149 = INT8_MIN;
volatile int8_t x152 = INT8_MIN;
volatile int32_t t31 = -28529;
int8_t x158 = INT8_MIN;
static int32_t x162 = INT32_MIN;
uint8_t x165 = 49U;
static volatile int64_t x166 = -1LL;
volatile uint8_t x171 = 5U;
int16_t x174 = -876;
uint64_t x176 = 445816LLU;
uint64_t t37 = 9173805222238063922LLU;
int32_t x180 = -1;
int8_t x191 = INT8_MAX;
uint64_t x192 = 1LLU;
int16_t x194 = -223;
int64_t x196 = 11892682LL;
int64_t x200 = -11LL;
static uint16_t x204 = UINT16_MAX;
int64_t x216 = INT64_MAX;
uint64_t x221 = UINT64_MAX;
volatile int16_t x224 = -856;
int64_t x229 = -1LL;
volatile uint32_t x231 = 0U;
int64_t x235 = 38LL;
int64_t x239 = -1LL;
static uint32_t x240 = 124678U;
volatile int8_t x243 = INT8_MIN;
uint64_t t52 = 124567190LLU;
uint16_t x255 = UINT16_MAX;
volatile int64_t t54 = 150593LL;
uint64_t t55 = 15265626634LLU;
uint64_t x270 = 11LLU;
static volatile uint64_t t57 = 526189652793LLU;
static int64_t x280 = 348668538893LL;
volatile int16_t x284 = -15134;
volatile int32_t t59 = 11719;
int16_t x287 = -1;
uint64_t x288 = 1150636196LLU;
static uint16_t x292 = 19869U;
volatile uint64_t t61 = 102001LLU;
int64_t x297 = -1LL;
volatile uint32_t x299 = 1311740U;
int64_t x301 = INT64_MIN;
volatile int8_t x303 = INT8_MIN;
int64_t x315 = 94015855LL;
int8_t x318 = INT8_MIN;
volatile int64_t t69 = 615274426458662LL;
static int8_t x336 = INT8_MIN;
volatile int32_t t70 = 178;
volatile int32_t x341 = INT32_MIN;
int64_t x359 = 135103220761452399LL;
int8_t x368 = -8;
volatile int32_t t77 = -547;
uint16_t x378 = UINT16_MAX;
int16_t x384 = 330;
uint16_t x387 = 1444U;
static uint64_t x394 = UINT64_MAX;
volatile uint64_t t83 = 232LLU;
volatile int8_t x399 = 1;
int32_t t87 = -376582;
int16_t x424 = INT16_MAX;
volatile uint64_t t88 = 7192141209866513072LLU;
int32_t x426 = -1808;
uint8_t x432 = 1U;
int8_t x441 = INT8_MIN;
int64_t x443 = -1LL;
volatile int64_t t94 = 110215LL;
static volatile int16_t x457 = 1197;
uint32_t x458 = UINT32_MAX;
volatile uint8_t x459 = UINT8_MAX;
uint8_t x460 = 37U;
volatile uint32_t t95 = 27U;
int64_t x469 = INT64_MIN;
static int64_t x485 = 6711520223608678LL;
int32_t x493 = -1;
volatile int64_t t99 = 490177972625LL;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	uint8_t x2 = 1U;
	uint16_t x3 = UINT16_MAX;
	int64_t t0 = 0LL;

	t0 = (x1/((x2+x3)-x4));

	if (t0 != -5723LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 35LL;
	int16_t x7 = INT16_MIN;
	static uint32_t x8 = 937U;

	t1 = (x5/((x6+x7)-x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -1;
	static int64_t x10 = INT64_MAX;
	int16_t x11 = INT16_MIN;
	volatile int32_t x12 = 1223891;
	int64_t t2 = 569738691122184726LL;

	t2 = (x9/((x10+x11)-x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	volatile int64_t x14 = INT64_MIN;
	uint64_t x15 = 2997665096742581LLU;
	int64_t x16 = INT64_MIN;
	volatile uint64_t t3 = 15833136LLU;

	t3 = (x13/((x14+x15)-x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 100973937U;
	int8_t x19 = INT8_MIN;

	t4 = (x17/((x18+x19)-x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	int32_t x23 = INT32_MIN;
	int8_t x24 = -1;

	t5 = (x21/((x22+x23)-x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MIN;
	static int8_t x26 = INT8_MAX;
	static uint8_t x27 = 80U;
	static int64_t t6 = -30LL;

	t6 = (x25/((x26+x27)-x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -63560LL;
	int32_t x30 = 95726711;
	volatile int64_t x31 = INT64_MIN;
	static uint32_t x32 = 221568U;
	static volatile int64_t t7 = -12514497901624287LL;

	t7 = (x29/((x30+x31)-x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	volatile uint16_t x38 = UINT16_MAX;
	int64_t t8 = 18851LL;

	t8 = (x37/((x38+x39)-x40));

	if (t8 != -140739635871744LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = INT32_MIN;
	int64_t x43 = -761119746LL;
	int16_t x44 = INT16_MAX;
	static volatile int64_t t9 = -2615364019248016805LL;

	t9 = (x41/((x42+x43)-x44));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = -1;
	int16_t x48 = -1;
	volatile uint32_t t10 = 608U;

	t10 = (x45/((x46+x47)-x48));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MAX;
	static volatile int16_t x50 = 3;
	int16_t x51 = -1;
	static volatile uint32_t x52 = UINT32_MAX;

	t11 = (x49/((x50+x51)-x52));

	if (t11 != 10922U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x54 = -1;
	int64_t x55 = -38429LL;
	uint16_t x56 = 30455U;
	volatile int64_t t12 = -2286264367671262552LL;

	t12 = (x53/((x54+x55)-x56));

	if (t12 != 133895217200475LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x58 = INT32_MIN;
	int64_t x59 = -1LL;
	static volatile int32_t x60 = 2264856;

	t13 = (x57/((x58+x59)-x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = 3043332650345LL;
	int32_t x62 = 443368;
	uint32_t x64 = 217652U;

	t14 = (x61/((x62+x63)-x64));

	if (t14 != 13481941LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = UINT16_MAX;
	uint32_t x66 = 67081U;
	int32_t x67 = INT32_MAX;
	uint16_t x68 = 3940U;

	t15 = (x65/((x66+x67)-x68));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x69 = 4;
	uint8_t x70 = 2U;
	int32_t x71 = INT32_MIN;
	static int64_t x72 = 3963LL;
	int64_t t16 = -936LL;

	t16 = (x69/((x70+x71)-x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -1;
	int16_t x74 = -1;
	uint32_t x75 = 181907U;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t17 = 6225209291LLU;

	t17 = (x73/((x74+x75)-x76));

	if (t17 != 101407554814875LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = -1;
	static uint8_t x86 = UINT8_MAX;
	int8_t x87 = INT8_MIN;
	static int16_t x88 = INT16_MIN;
	int32_t t18 = -2400;

	t18 = (x85/((x86+x87)-x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x94 = 0U;
	int8_t x95 = INT8_MIN;
	int16_t x96 = INT16_MIN;

	t19 = (x93/((x94+x95)-x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x97 = INT8_MIN;
	int16_t x99 = INT16_MIN;
	int32_t x100 = -1;
	static volatile uint32_t t20 = 196783U;

	t20 = (x97/((x98+x99)-x100));

	if (t20 != 6U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x101 = UINT32_MAX;
	int32_t x102 = INT32_MIN;
	int32_t x104 = INT32_MIN;
	static uint32_t t21 = 40308884U;

	t21 = (x101/((x102+x103)-x104));

	if (t21 != 33818640U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x105 = UINT32_MAX;
	volatile int32_t x106 = -1;
	uint64_t x107 = UINT64_MAX;
	static volatile uint64_t t22 = 80410LLU;

	t22 = (x105/((x106+x107)-x108));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x109 = 0U;
	int16_t x110 = INT16_MIN;
	volatile int64_t x111 = -1LL;
	static uint64_t x112 = UINT64_MAX;
	volatile uint64_t t23 = 1063440575169586LLU;

	t23 = (x109/((x110+x111)-x112));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x113 = 8U;
	int8_t x114 = -1;
	uint64_t x116 = 8123788287LLU;
	static volatile uint64_t t24 = 116469805158327534LLU;

	t24 = (x113/((x114+x115)-x116));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x122 = INT64_MAX;
	uint64_t x123 = 101366678527859855LLU;
	uint32_t x124 = 64U;
	volatile uint64_t t25 = 579713500155351245LLU;

	t25 = (x121/((x122+x123)-x124));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = 22743185LL;
	int64_t x126 = 1489361313294LL;
	volatile uint64_t x127 = 548339338LLU;
	int8_t x128 = -2;
	uint64_t t26 = 1261128309660LLU;

	t26 = (x125/((x126+x127)-x128));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x133 = -1LL;
	volatile int32_t x134 = 48788;
	uint64_t t27 = 78LLU;

	t27 = (x133/((x134+x135)-x136));

	if (t27 != 343732420409748LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x138 = UINT16_MAX;
	uint64_t x139 = UINT64_MAX;
	int32_t x140 = -7099;
	uint64_t t28 = 52709LLU;

	t28 = (x137/((x138+x139)-x140));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x141 = UINT8_MAX;
	static int64_t x143 = -1LL;
	int8_t x144 = INT8_MIN;
	volatile int64_t t29 = 14805964545345032LL;

	t29 = (x141/((x142+x143)-x144));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x145 = 200539781680639574LL;
	int16_t x146 = INT16_MIN;
	uint64_t x147 = 84987LLU;
	int8_t x148 = 1;
	volatile uint64_t t30 = 411890543231LLU;

	t30 = (x145/((x146+x147)-x148));

	if (t30 != 3840433982163LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x150 = 20627U;
	volatile int8_t x151 = 6;

	t31 = (x149/((x150+x151)-x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x153 = -1LL;
	int64_t x154 = -88811819433882LL;
	static int16_t x155 = -15084;
	int16_t x156 = -1;
	volatile int64_t t32 = 6784180LL;

	t32 = (x153/((x154+x155)-x156));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x157 = 1858;
	uint32_t x159 = UINT32_MAX;
	volatile uint32_t x160 = 57463313U;
	volatile uint32_t t33 = 3776944U;

	t33 = (x157/((x158+x159)-x160));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x161 = 0U;
	int64_t x163 = 666LL;
	uint32_t x164 = UINT32_MAX;
	volatile int64_t t34 = 23778907482LL;

	t34 = (x161/((x162+x163)-x164));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x167 = INT64_MAX;
	uint64_t x168 = 38971646LLU;
	uint64_t t35 = 1566571LLU;

	t35 = (x165/((x166+x167)-x168));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = -1LL;
	int32_t x170 = -1;
	int16_t x172 = -91;
	int64_t t36 = -55472842598217149LL;

	t36 = (x169/((x170+x171)-x172));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x173 = 1U;
	static int8_t x175 = INT8_MIN;

	t37 = (x173/((x174+x175)-x176));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = INT16_MAX;
	int32_t x178 = INT32_MAX;
	static int32_t x179 = -1;
	static int32_t t38 = -941;

	t38 = (x177/((x178+x179)-x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x189 = 79U;
	static int32_t x190 = 1354;
	volatile uint64_t t39 = 46092258LLU;

	t39 = (x189/((x190+x191)-x192));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x193 = -45086;
	uint64_t x195 = UINT64_MAX;
	uint64_t t40 = 66LLU;

	t40 = (x193/((x194+x195)-x196));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x197 = 115376496LLU;
	volatile int32_t x198 = 957800;
	int16_t x199 = -1;
	volatile uint64_t t41 = 235201311104LLU;

	t41 = (x197/((x198+x199)-x200));

	if (t41 != 120LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x201 = INT16_MAX;
	static int16_t x202 = -1;
	int32_t x203 = INT32_MAX;
	static volatile int32_t t42 = 3389;

	t42 = (x201/((x202+x203)-x204));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x205 = -26;
	volatile int8_t x206 = INT8_MIN;
	int8_t x207 = -1;
	int32_t x208 = INT32_MIN;
	int32_t t43 = 7;

	t43 = (x205/((x206+x207)-x208));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x209 = 968598LLU;
	uint32_t x210 = 8U;
	static int64_t x211 = INT64_MIN;
	int8_t x212 = -1;
	uint64_t t44 = 1468738410515389990LLU;

	t44 = (x209/((x210+x211)-x212));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x213 = INT64_MIN;
	static volatile int64_t x214 = 3LL;
	uint64_t x215 = UINT64_MAX;
	uint64_t t45 = 7LLU;

	t45 = (x213/((x214+x215)-x216));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x222 = -421;
	int8_t x223 = INT8_MIN;
	volatile uint64_t t46 = 420193954183661738LLU;

	t46 = (x221/((x222+x223)-x224));

	if (t46 != 60087114246610917LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x225 = 9307U;
	int16_t x226 = -1;
	static int32_t x227 = 13924;
	int8_t x228 = -1;
	static int32_t t47 = -243947;

	t47 = (x225/((x226+x227)-x228));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x230 = UINT8_MAX;
	int8_t x232 = INT8_MAX;
	int64_t t48 = -540105753LL;

	t48 = (x229/((x230+x231)-x232));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x233 = INT8_MIN;
	static volatile uint64_t x234 = 62065584094LLU;
	static uint32_t x236 = 6647556U;
	volatile uint64_t t49 = 37957985493077125LLU;

	t49 = (x233/((x234+x235)-x236));

	if (t49 != 297245571LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x237 = 0;
	uint16_t x238 = 299U;
	int64_t t50 = -1269697536341360043LL;

	t50 = (x237/((x238+x239)-x240));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x241 = UINT16_MAX;
	volatile int16_t x242 = 28;
	uint32_t x244 = UINT32_MAX;
	uint32_t t51 = 106871U;

	t51 = (x241/((x242+x243)-x244));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x249 = UINT32_MAX;
	uint64_t x250 = UINT64_MAX;
	int64_t x251 = -1208531039384LL;
	int16_t x252 = INT16_MAX;

	t52 = (x249/((x250+x251)-x252));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x253 = INT16_MIN;
	uint8_t x254 = UINT8_MAX;
	uint16_t x256 = 2987U;
	int32_t t53 = 13365;

	t53 = (x253/((x254+x255)-x256));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x257 = -2;
	volatile int64_t x258 = -1LL;
	uint16_t x259 = 23895U;
	uint32_t x260 = 283999U;

	t54 = (x257/((x258+x259)-x260));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x261 = INT16_MAX;
	int32_t x262 = -1;
	int32_t x263 = 5769;
	volatile uint64_t x264 = UINT64_MAX;

	t55 = (x261/((x262+x263)-x264));

	if (t55 != 5LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x265 = -1;
	int32_t x266 = 7266;
	int16_t x267 = -6;
	uint8_t x268 = UINT8_MAX;
	static volatile int32_t t56 = -6989;

	t56 = (x265/((x266+x267)-x268));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x269 = 12U;
	int32_t x271 = -360982530;
	static volatile uint32_t x272 = UINT32_MAX;

	t57 = (x269/((x270+x271)-x272));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x277 = INT8_MIN;
	int32_t x278 = INT32_MIN;
	uint16_t x279 = 21U;
	static int64_t t58 = 35959445LL;

	t58 = (x277/((x278+x279)-x280));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x281 = INT32_MIN;
	int32_t x282 = -6352;
	int32_t x283 = -1685361;

	t59 = (x281/((x282+x283)-x284));

	if (t59 != 1280) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x285 = UINT64_MAX;
	int32_t x286 = INT32_MAX;
	volatile uint64_t t60 = 411544246LLU;

	t60 = (x285/((x286+x287)-x288));

	if (t60 != 18505082270LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x289 = INT64_MIN;
	volatile uint64_t x290 = 21866LLU;
	volatile uint32_t x291 = 2545U;

	t61 = (x289/((x290+x291)-x292));

	if (t61 != 2030685168836366LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x293 = 1;
	static uint64_t x294 = UINT64_MAX;
	static volatile int8_t x295 = 2;
	static int8_t x296 = -37;
	volatile uint64_t t62 = 432869099466LLU;

	t62 = (x293/((x294+x295)-x296));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x298 = INT16_MAX;
	volatile int8_t x300 = INT8_MAX;
	volatile int64_t t63 = 210447737LL;

	t63 = (x297/((x298+x299)-x300));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x302 = UINT16_MAX;
	uint8_t x304 = 1U;
	int64_t t64 = -310640834128LL;

	t64 = (x301/((x302+x303)-x304));

	if (t64 != -141017216109451LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x305 = -1LL;
	int8_t x306 = INT8_MIN;
	int64_t x307 = -1LL;
	uint32_t x308 = 523U;
	volatile int64_t t65 = 13042118733620446LL;

	t65 = (x305/((x306+x307)-x308));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x309 = INT8_MIN;
	int16_t x310 = INT16_MIN;
	int8_t x311 = INT8_MIN;
	uint32_t x312 = 1363U;
	volatile uint32_t t66 = 510358U;

	t66 = (x309/((x310+x311)-x312));

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x313 = 20219LLU;
	uint64_t x314 = UINT64_MAX;
	static int16_t x316 = -1;
	uint64_t t67 = 1LLU;

	t67 = (x313/((x314+x315)-x316));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x317 = 8184LL;
	int8_t x319 = INT8_MIN;
	volatile uint8_t x320 = UINT8_MAX;
	int64_t t68 = 1LL;

	t68 = (x317/((x318+x319)-x320));

	if (t68 != -16LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x329 = 1U;
	int16_t x330 = 7893;
	int16_t x331 = INT16_MIN;
	volatile int64_t x332 = INT64_MIN;

	t69 = (x329/((x330+x331)-x332));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x333 = INT8_MIN;
	int16_t x334 = -1;
	volatile int16_t x335 = -1;

	t70 = (x333/((x334+x335)-x336));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x337 = INT32_MIN;
	int16_t x338 = INT16_MIN;
	uint32_t x339 = 6934U;
	static int64_t x340 = -1LL;
	int64_t t71 = -136620889150LL;

	t71 = (x337/((x338+x339)-x340));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x342 = INT32_MIN;
	int16_t x343 = INT16_MAX;
	static uint8_t x344 = UINT8_MAX;
	static int32_t t72 = -114032534;

	t72 = (x341/((x342+x343)-x344));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x345 = 14;
	static volatile int16_t x346 = INT16_MAX;
	uint64_t x347 = 318LLU;
	int16_t x348 = INT16_MIN;
	uint64_t t73 = 30357LLU;

	t73 = (x345/((x346+x347)-x348));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x353 = INT64_MAX;
	uint16_t x354 = 10U;
	uint16_t x355 = 231U;
	uint32_t x356 = UINT32_MAX;
	volatile int64_t t74 = 12723978823121LL;

	t74 = (x353/((x354+x355)-x356));

	if (t74 != 38113107590308990LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x357 = INT32_MIN;
	uint32_t x358 = 3413U;
	volatile int32_t x360 = INT32_MIN;
	static int64_t t75 = 12779LL;

	t75 = (x357/((x358+x359)-x360));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x361 = -1;
	uint16_t x362 = UINT16_MAX;
	volatile uint32_t x363 = 71U;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t76 = 374494643782768LLU;

	t76 = (x361/((x362+x363)-x364));

	if (t76 != 281170364042092LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x365 = INT32_MIN;
	int32_t x366 = INT32_MAX;
	int8_t x367 = -50;

	t77 = (x365/((x366+x367)-x368));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x369 = -1;
	uint8_t x370 = 62U;
	uint16_t x371 = 26887U;
	static volatile int16_t x372 = -1;
	static volatile int32_t t78 = -6300895;

	t78 = (x369/((x370+x371)-x372));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x373 = -255856127978126LL;
	int8_t x374 = 1;
	uint8_t x375 = 18U;
	static volatile uint32_t x376 = UINT32_MAX;
	volatile int64_t t79 = 5490712777340951LL;

	t79 = (x373/((x374+x375)-x376));

	if (t79 != -12792806398906LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x377 = -1LL;
	static int64_t x379 = 1292341988LL;
	uint8_t x380 = 9U;
	static int64_t t80 = -6153LL;

	t80 = (x377/((x378+x379)-x380));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x381 = 1U;
	static uint32_t x382 = 7800021U;
	int16_t x383 = INT16_MAX;
	static volatile uint32_t t81 = 26177U;

	t81 = (x381/((x382+x383)-x384));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x385 = UINT32_MAX;
	static uint32_t x386 = 205U;
	uint8_t x388 = UINT8_MAX;
	uint32_t t82 = 78651U;

	t82 = (x385/((x386+x387)-x388));

	if (t82 != 3081038U) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x393 = INT32_MAX;
	int16_t x395 = INT16_MIN;
	static int16_t x396 = -3;

	t83 = (x393/((x394+x395)-x396));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x397 = 489U;
	static uint64_t x398 = 2048333191643LLU;
	int32_t x400 = 0;
	uint64_t t84 = 305LLU;

	t84 = (x397/((x398+x399)-x400));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x405 = -344;
	int64_t x406 = 1373LL;
	uint32_t x407 = UINT32_MAX;
	volatile int32_t x408 = INT32_MIN;
	volatile int64_t t85 = 637027639428940138LL;

	t85 = (x405/((x406+x407)-x408));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x409 = INT8_MIN;
	uint32_t x410 = UINT32_MAX;
	int16_t x411 = -155;
	volatile uint64_t x412 = 61LLU;
	volatile uint64_t t86 = 31LLU;

	t86 = (x409/((x410+x411)-x412));

	if (t86 != 4294967513LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x413 = 17U;
	int32_t x414 = INT32_MIN;
	static int8_t x415 = 1;
	int32_t x416 = INT32_MIN;

	t87 = (x413/((x414+x415)-x416));

	if (t87 != 17) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x421 = 841911943128LLU;
	volatile int8_t x422 = INT8_MIN;
	volatile int8_t x423 = INT8_MIN;

	t88 = (x421/((x422+x423)-x424));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x425 = 321193U;
	volatile int32_t x427 = 740154;
	static int64_t x428 = -13105671LL;
	int64_t t89 = 20LL;

	t89 = (x425/((x426+x427)-x428));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x429 = INT64_MIN;
	volatile int16_t x430 = -1;
	int16_t x431 = -11130;
	volatile int64_t t90 = -31669LL;

	t90 = (x429/((x430+x431)-x432));

	if (t90 != 828545817180630LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x433 = -1;
	volatile uint32_t x434 = UINT32_MAX;
	int16_t x435 = INT16_MAX;
	int16_t x436 = INT16_MIN;
	static volatile uint32_t t91 = 2782040U;

	t91 = (x433/((x434+x435)-x436));

	if (t91 != 65538U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x437 = 17U;
	uint16_t x438 = 0U;
	int64_t x439 = INT64_MIN;
	int16_t x440 = -1;
	static int64_t t92 = -742LL;

	t92 = (x437/((x438+x439)-x440));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x442 = -504815572;
	int16_t x444 = -2175;
	static volatile int64_t t93 = -843595LL;

	t93 = (x441/((x442+x443)-x444));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x445 = INT64_MIN;
	volatile uint32_t x446 = 214U;
	volatile int16_t x447 = -1;
	static int8_t x448 = 24;

	t94 = (x445/((x446+x447)-x448));

	if (t94 != -48800910247908866LL) { NG(); } else { ; }
	
}

void f95(void) {


	t95 = (x457/((x458+x459)-x460));

	if (t95 != 5U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x470 = 422190085LL;
	uint32_t x471 = 31719639U;
	uint32_t x472 = 54U;
	int64_t t96 = -1LL;

	t96 = (x469/((x470+x471)-x472));

	if (t96 != -20319840370LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x486 = 1LLU;
	static int32_t x487 = 0;
	int16_t x488 = INT16_MIN;
	volatile uint64_t t97 = 31350911490LLU;

	t97 = (x485/((x486+x487)-x488));

	if (t97 != 204813092361LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x489 = -1;
	int32_t x490 = INT32_MAX;
	static uint64_t x491 = UINT64_MAX;
	uint32_t x492 = UINT32_MAX;
	static volatile uint64_t t98 = 2164784LLU;

	t98 = (x489/((x490+x491)-x492));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x494 = INT16_MIN;
	int16_t x495 = INT16_MAX;
	int64_t x496 = 464570LL;

	t99 = (x493/((x494+x495)-x496));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

