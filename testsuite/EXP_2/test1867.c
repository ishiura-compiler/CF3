#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x1 = 209LLU;
uint8_t x3 = 16U;
int32_t t0 = 51401929;
static volatile int32_t t1 = -5;
static uint8_t x15 = 0U;
static int32_t x18 = -3;
static int32_t x19 = INT32_MIN;
volatile int64_t x29 = -1LL;
volatile int8_t x31 = -1;
static volatile int16_t x33 = -8;
static int64_t x34 = INT64_MIN;
static int32_t x37 = -1;
uint16_t x39 = UINT16_MAX;
int8_t x48 = -1;
static uint32_t x51 = 7506U;
int32_t t11 = 1759919;
int16_t x55 = -2160;
int8_t x62 = -1;
static int64_t x85 = INT64_MIN;
int32_t x89 = INT32_MAX;
volatile uint8_t x94 = 4U;
int32_t t20 = -3731295;
int32_t x106 = INT32_MAX;
volatile int32_t x118 = -1;
int16_t x122 = 1;
int8_t x131 = -18;
static int64_t x136 = INT64_MIN;
int32_t t31 = 29120;
volatile int8_t x141 = INT8_MIN;
static volatile uint8_t x143 = 29U;
static volatile int32_t t32 = -2;
int64_t x146 = INT64_MAX;
int16_t x163 = INT16_MAX;
int8_t x166 = 2;
int16_t x169 = 0;
uint16_t x171 = 0U;
volatile int32_t t39 = -655739851;
int64_t x175 = 36LL;
volatile int64_t x180 = INT64_MIN;
uint16_t x181 = UINT16_MAX;
int8_t x182 = -5;
volatile int32_t x191 = 890;
uint16_t x192 = 2866U;
int32_t t46 = 91969;
static uint32_t x206 = 687266196U;
int64_t x208 = INT64_MIN;
volatile int32_t t48 = 556742;
volatile int32_t t50 = 6;
int64_t x223 = -1LL;
int8_t x232 = INT8_MIN;
volatile int32_t t55 = -624820118;
int8_t x242 = INT8_MAX;
uint32_t x255 = 5435831U;
static uint8_t x258 = 92U;
static int32_t x261 = 13;
int64_t x263 = -1LL;
uint64_t x264 = 467729094LLU;
uint16_t x270 = 27U;
uint32_t x271 = 233990529U;
int32_t x274 = -142245;
uint8_t x277 = UINT8_MAX;
int16_t x282 = 3;
volatile int8_t x295 = INT8_MIN;
volatile int32_t t69 = 48;
uint8_t x311 = 3U;
int32_t t71 = -242124;
uint16_t x317 = 16668U;
uint32_t x320 = 4013170U;
int32_t x329 = 15338159;
volatile int32_t t76 = -8;
static int8_t x336 = -1;
int32_t x342 = -125019148;
volatile int32_t t79 = -5;
uint64_t x345 = UINT64_MAX;
static volatile int32_t t81 = 190;
int8_t x353 = 2;
volatile uint16_t x356 = UINT16_MAX;
static uint32_t x358 = UINT32_MAX;
uint8_t x359 = UINT8_MAX;
int64_t x370 = -46891792587LL;
uint16_t x374 = 313U;
static int32_t t86 = 818;
uint64_t x377 = 6261LLU;
int64_t x378 = INT64_MIN;
int32_t x383 = -1;
int32_t t88 = 99;
uint16_t x398 = 30567U;
int8_t x401 = -1;
int8_t x405 = INT8_MIN;
volatile uint8_t x406 = 0U;
uint32_t x407 = 7U;
volatile int16_t x408 = INT16_MIN;
static int32_t x410 = -30400195;
int8_t x412 = INT8_MIN;
uint8_t x415 = 62U;
int32_t t96 = 159044;
static volatile int8_t x424 = -7;


void f0(void) {
	static uint64_t x2 = 42698189580LLU;
	static uint8_t x4 = UINT8_MAX;

	t0 = ((x1+(x2|x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 1U;
	int16_t x6 = -3;
	uint64_t x7 = 362500LLU;
	uint32_t x8 = 848U;

	t1 = ((x5+(x6|x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 225U;
	int32_t x10 = INT32_MIN;
	volatile uint16_t x11 = UINT16_MAX;
	static uint8_t x12 = 4U;
	static volatile int32_t t2 = 11;

	t2 = ((x9+(x10|x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	uint8_t x14 = UINT8_MAX;
	int64_t x16 = -1LL;
	volatile int32_t t3 = 3560723;

	t3 = ((x13+(x14|x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 168339828LLU;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -799;

	t4 = ((x17+(x18|x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 7225;
	volatile uint16_t x22 = 1U;
	static int16_t x23 = INT16_MIN;
	int16_t x24 = -1;
	int32_t t5 = 1;

	t5 = ((x21+(x22|x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = -1;
	int32_t x26 = -1;
	static uint32_t x27 = UINT32_MAX;
	int8_t x28 = -1;
	volatile int32_t t6 = -8;

	t6 = ((x25+(x26|x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = 82U;
	static uint16_t x32 = 14736U;
	volatile int32_t t7 = -43704335;

	t7 = ((x29+(x30|x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x35 = -113;
	uint64_t x36 = 13065193463850461LLU;
	volatile int32_t t8 = 6;

	t8 = ((x33+(x34|x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MIN;
	uint64_t x40 = 50487996650LLU;
	int32_t t9 = 262139;

	t9 = ((x37+(x38|x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x45 = UINT8_MAX;
	int8_t x46 = -1;
	uint32_t x47 = 10361213U;
	volatile int32_t t10 = -229228;

	t10 = ((x45+(x46|x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 2U;
	uint32_t x50 = 0U;
	static int32_t x52 = INT32_MIN;

	t11 = ((x49+(x50|x51))==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x53 = -24;
	uint16_t x54 = 1U;
	int64_t x56 = INT64_MIN;
	volatile int32_t t12 = 53;

	t12 = ((x53+(x54|x55))==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -1;
	volatile uint16_t x58 = 10U;
	static uint16_t x59 = UINT16_MAX;
	volatile int16_t x60 = INT16_MIN;
	int32_t t13 = 11;

	t13 = ((x57+(x58|x59))==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x61 = INT64_MAX;
	int64_t x63 = INT64_MAX;
	int8_t x64 = -1;
	volatile int32_t t14 = -2;

	t14 = ((x61+(x62|x63))==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x69 = -1;
	uint64_t x70 = 15769478334196LLU;
	int8_t x71 = INT8_MIN;
	uint64_t x72 = 5397829LLU;
	int32_t t15 = 799040017;

	t15 = ((x69+(x70|x71))==x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = 115U;
	int8_t x78 = INT8_MAX;
	int64_t x79 = -1LL;
	static int32_t x80 = INT32_MIN;
	volatile int32_t t16 = 69280960;

	t16 = ((x77+(x78|x79))==x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = 8409821926144569014LLU;
	int64_t x82 = -1LL;
	volatile int64_t x83 = -1LL;
	int32_t x84 = INT32_MIN;
	static int32_t t17 = -778;

	t17 = ((x81+(x82|x83))==x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x86 = UINT32_MAX;
	int32_t x87 = INT32_MIN;
	static int8_t x88 = 1;
	int32_t t18 = -387;

	t18 = ((x85+(x86|x87))==x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x90 = UINT16_MAX;
	static int16_t x91 = INT16_MIN;
	int32_t x92 = -201021814;
	static volatile int32_t t19 = -6582;

	t19 = ((x89+(x90|x91))==x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = 10068;
	int32_t x95 = 96;
	static int8_t x96 = 1;

	t20 = ((x93+(x94|x95))==x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x97 = UINT64_MAX;
	uint8_t x98 = 53U;
	int64_t x99 = 3709862447421LL;
	static int64_t x100 = -2531LL;
	volatile int32_t t21 = 4;

	t21 = ((x97+(x98|x99))==x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = 2328;
	uint64_t x102 = UINT64_MAX;
	int64_t x103 = 61723420277022219LL;
	int32_t x104 = INT32_MIN;
	volatile int32_t t22 = 185;

	t22 = ((x101+(x102|x103))==x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = INT8_MAX;
	static int64_t x107 = INT64_MIN;
	static volatile int16_t x108 = -1;
	int32_t t23 = 163896169;

	t23 = ((x105+(x106|x107))==x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 7837U;
	static uint8_t x110 = 7U;
	int64_t x111 = -1LL;
	static int16_t x112 = INT16_MAX;
	int32_t t24 = -349;

	t24 = ((x109+(x110|x111))==x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x113 = 288776796U;
	volatile int16_t x114 = -1258;
	uint16_t x115 = 11U;
	volatile int16_t x116 = INT16_MIN;
	int32_t t25 = -125569;

	t25 = ((x113+(x114|x115))==x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x117 = -1LL;
	volatile int64_t x119 = INT64_MAX;
	uint64_t x120 = UINT64_MAX;
	int32_t t26 = 7;

	t26 = ((x117+(x118|x119))==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x121 = 9146000U;
	volatile int8_t x123 = INT8_MAX;
	uint16_t x124 = 124U;
	int32_t t27 = -364157248;

	t27 = ((x121+(x122|x123))==x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x125 = UINT16_MAX;
	int8_t x126 = INT8_MAX;
	int16_t x127 = -1;
	static volatile uint32_t x128 = UINT32_MAX;
	volatile int32_t t28 = -222900632;

	t28 = ((x125+(x126|x127))==x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MIN;
	volatile int8_t x130 = INT8_MIN;
	int16_t x132 = 231;
	static volatile int32_t t29 = 58;

	t29 = ((x129+(x130|x131))==x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MIN;
	uint32_t x134 = 98U;
	uint32_t x135 = 1365802U;
	int32_t t30 = -1303;

	t30 = ((x133+(x134|x135))==x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = INT16_MIN;
	static int16_t x138 = INT16_MAX;
	int8_t x139 = 0;
	static int64_t x140 = 203LL;

	t31 = ((x137+(x138|x139))==x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x142 = -1;
	int8_t x144 = -1;

	t32 = ((x141+(x142|x143))==x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x145 = 320038732U;
	static int64_t x147 = -3435997LL;
	static volatile uint32_t x148 = 1640337564U;
	volatile int32_t t33 = -1;

	t33 = ((x145+(x146|x147))==x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MIN;
	volatile uint64_t x150 = 30886735296865LLU;
	int8_t x151 = -1;
	static volatile int32_t x152 = INT32_MIN;
	static volatile int32_t t34 = 489721;

	t34 = ((x149+(x150|x151))==x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = INT16_MAX;
	volatile int64_t x154 = INT64_MIN;
	uint16_t x155 = 1U;
	volatile uint32_t x156 = UINT32_MAX;
	volatile int32_t t35 = -2198066;

	t35 = ((x153+(x154|x155))==x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x157 = 0U;
	int64_t x158 = -1LL;
	uint16_t x159 = UINT16_MAX;
	int32_t x160 = INT32_MAX;
	volatile int32_t t36 = 64600774;

	t36 = ((x157+(x158|x159))==x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x161 = 37875428LLU;
	uint64_t x162 = 572359LLU;
	uint32_t x164 = UINT32_MAX;
	int32_t t37 = -1;

	t37 = ((x161+(x162|x163))==x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x165 = INT32_MIN;
	static int16_t x167 = 9;
	int32_t x168 = INT32_MAX;
	int32_t t38 = 2;

	t38 = ((x165+(x166|x167))==x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x170 = 1270;
	int64_t x172 = INT64_MIN;

	t39 = ((x169+(x170|x171))==x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = 61;
	int8_t x174 = 40;
	uint32_t x176 = 132556225U;
	int32_t t40 = 877969905;

	t40 = ((x173+(x174|x175))==x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = 14;
	volatile int16_t x178 = INT16_MIN;
	static uint64_t x179 = 261288694117030379LLU;
	volatile int32_t t41 = 2801;

	t41 = ((x177+(x178|x179))==x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x183 = 3094027176LL;
	volatile uint16_t x184 = 177U;
	int32_t t42 = -943;

	t42 = ((x181+(x182|x183))==x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x185 = 1U;
	volatile int32_t x186 = INT32_MIN;
	static int32_t x187 = INT32_MIN;
	int64_t x188 = -1LL;
	int32_t t43 = 247840294;

	t43 = ((x185+(x186|x187))==x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = 7;
	uint16_t x190 = UINT16_MAX;
	int32_t t44 = 2668;

	t44 = ((x189+(x190|x191))==x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = -60;
	int32_t x194 = INT32_MIN;
	static int64_t x195 = INT64_MIN;
	int32_t x196 = -1;
	static int32_t t45 = 4;

	t45 = ((x193+(x194|x195))==x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = INT16_MIN;
	uint64_t x198 = 193076475497LLU;
	static uint32_t x199 = 1U;
	static int8_t x200 = INT8_MAX;

	t46 = ((x197+(x198|x199))==x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x201 = UINT64_MAX;
	int8_t x202 = -11;
	static int32_t x203 = INT32_MIN;
	volatile int32_t x204 = -2752;
	int32_t t47 = -779970;

	t47 = ((x201+(x202|x203))==x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = INT8_MAX;
	int32_t x207 = INT32_MAX;

	t48 = ((x205+(x206|x207))==x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x209 = UINT64_MAX;
	uint64_t x210 = 568937987221448793LLU;
	int64_t x211 = INT64_MIN;
	uint16_t x212 = UINT16_MAX;
	volatile int32_t t49 = -23;

	t49 = ((x209+(x210|x211))==x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x213 = INT16_MIN;
	static uint16_t x214 = 16U;
	uint16_t x215 = 12U;
	int8_t x216 = 5;

	t50 = ((x213+(x214|x215))==x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = INT8_MAX;
	int8_t x218 = INT8_MIN;
	volatile int16_t x219 = INT16_MIN;
	static uint8_t x220 = 11U;
	volatile int32_t t51 = -29393;

	t51 = ((x217+(x218|x219))==x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x221 = 3269728U;
	int64_t x222 = -1LL;
	uint64_t x224 = 56405649717134616LLU;
	volatile int32_t t52 = 0;

	t52 = ((x221+(x222|x223))==x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = -179;
	int32_t x230 = -110;
	int32_t x231 = INT32_MAX;
	int32_t t53 = -669013803;

	t53 = ((x229+(x230|x231))==x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x233 = INT64_MAX;
	uint16_t x234 = 208U;
	volatile int8_t x235 = -19;
	int64_t x236 = INT64_MIN;
	int32_t t54 = -29956;

	t54 = ((x233+(x234|x235))==x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = -1;
	int64_t x238 = INT64_MIN;
	int16_t x239 = INT16_MAX;
	int32_t x240 = INT32_MIN;

	t55 = ((x237+(x238|x239))==x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x241 = 2197308U;
	volatile int8_t x243 = INT8_MIN;
	static int32_t x244 = INT32_MIN;
	static int32_t t56 = 937469443;

	t56 = ((x241+(x242|x243))==x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x245 = INT32_MIN;
	uint32_t x246 = UINT32_MAX;
	int32_t x247 = INT32_MIN;
	volatile uint64_t x248 = 466LLU;
	volatile int32_t t57 = -21195789;

	t57 = ((x245+(x246|x247))==x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x249 = 11809U;
	uint64_t x250 = 246LLU;
	int32_t x251 = INT32_MAX;
	uint8_t x252 = 2U;
	volatile int32_t t58 = 61;

	t58 = ((x249+(x250|x251))==x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x253 = 51U;
	volatile uint16_t x254 = UINT16_MAX;
	volatile int32_t x256 = INT32_MAX;
	volatile int32_t t59 = 577;

	t59 = ((x253+(x254|x255))==x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x257 = 4U;
	int8_t x259 = INT8_MAX;
	int8_t x260 = INT8_MIN;
	volatile int32_t t60 = 8472;

	t60 = ((x257+(x258|x259))==x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x262 = INT64_MAX;
	int32_t t61 = 28847550;

	t61 = ((x261+(x262|x263))==x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x265 = -496;
	static uint32_t x266 = 4271199U;
	static int8_t x267 = 0;
	int32_t x268 = -1;
	volatile int32_t t62 = 8;

	t62 = ((x265+(x266|x267))==x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x269 = 379507246135775260LLU;
	int64_t x272 = -1LL;
	int32_t t63 = -107;

	t63 = ((x269+(x270|x271))==x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x273 = 26;
	int32_t x275 = INT32_MAX;
	uint8_t x276 = 15U;
	volatile int32_t t64 = 164;

	t64 = ((x273+(x274|x275))==x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x278 = 847;
	uint32_t x279 = 1297007827U;
	uint64_t x280 = 1005065942LLU;
	int32_t t65 = -3063053;

	t65 = ((x277+(x278|x279))==x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x281 = UINT64_MAX;
	static uint32_t x283 = 55U;
	int8_t x284 = 3;
	volatile int32_t t66 = 1;

	t66 = ((x281+(x282|x283))==x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x289 = UINT8_MAX;
	int64_t x290 = INT64_MIN;
	static uint64_t x291 = 393956LLU;
	int32_t x292 = INT32_MIN;
	int32_t t67 = -29011680;

	t67 = ((x289+(x290|x291))==x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = -1;
	static int16_t x294 = -1;
	int8_t x296 = -1;
	volatile int32_t t68 = 226714732;

	t68 = ((x293+(x294|x295))==x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x297 = 440035487U;
	static int64_t x298 = -1LL;
	uint16_t x299 = 3386U;
	uint32_t x300 = 6971U;

	t69 = ((x297+(x298|x299))==x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x305 = -1;
	static volatile int8_t x306 = -12;
	int8_t x307 = INT8_MAX;
	int16_t x308 = INT16_MAX;
	int32_t t70 = -4;

	t70 = ((x305+(x306|x307))==x308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x309 = 1;
	int16_t x310 = -1;
	int8_t x312 = INT8_MIN;

	t71 = ((x309+(x310|x311))==x312);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x313 = 141745U;
	int16_t x314 = -1529;
	uint64_t x315 = 1513239646557LLU;
	uint16_t x316 = 1U;
	int32_t t72 = 2139377;

	t72 = ((x313+(x314|x315))==x316);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x318 = -1;
	static int32_t x319 = -1;
	volatile int32_t t73 = 1157;

	t73 = ((x317+(x318|x319))==x320);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x321 = INT64_MIN;
	static uint8_t x322 = 0U;
	int8_t x323 = 35;
	int16_t x324 = 0;
	int32_t t74 = 732282;

	t74 = ((x321+(x322|x323))==x324);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x325 = 0;
	volatile int64_t x326 = 226614184242768982LL;
	int32_t x327 = INT32_MIN;
	static uint32_t x328 = UINT32_MAX;
	int32_t t75 = 112580;

	t75 = ((x325+(x326|x327))==x328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x330 = 35151469U;
	int64_t x331 = INT64_MIN;
	uint32_t x332 = 761U;

	t76 = ((x329+(x330|x331))==x332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x333 = INT16_MIN;
	uint16_t x334 = 3U;
	static uint16_t x335 = UINT16_MAX;
	int32_t t77 = 37350561;

	t77 = ((x333+(x334|x335))==x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x337 = 95425711908720502LL;
	volatile int8_t x338 = -2;
	volatile int16_t x339 = INT16_MIN;
	int16_t x340 = 8172;
	static volatile int32_t t78 = 38;

	t78 = ((x337+(x338|x339))==x340);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x341 = -1;
	int64_t x343 = 515249328354038456LL;
	int64_t x344 = -1LL;

	t79 = ((x341+(x342|x343))==x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x346 = 89951U;
	uint16_t x347 = 1759U;
	static volatile uint8_t x348 = UINT8_MAX;
	int32_t t80 = 28861;

	t80 = ((x345+(x346|x347))==x348);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x349 = INT64_MIN;
	int8_t x350 = -6;
	uint32_t x351 = 480618192U;
	uint32_t x352 = 125037663U;

	t81 = ((x349+(x350|x351))==x352);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x354 = -233798820;
	uint16_t x355 = 8U;
	volatile int32_t t82 = -136;

	t82 = ((x353+(x354|x355))==x356);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x357 = 53U;
	int16_t x360 = INT16_MIN;
	volatile int32_t t83 = 119544;

	t83 = ((x357+(x358|x359))==x360);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x361 = -1LL;
	int32_t x362 = INT32_MIN;
	int16_t x363 = INT16_MIN;
	int8_t x364 = -1;
	int32_t t84 = -714137716;

	t84 = ((x361+(x362|x363))==x364);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x369 = -1;
	int64_t x371 = INT64_MAX;
	static uint16_t x372 = 1971U;
	volatile int32_t t85 = 340347683;

	t85 = ((x369+(x370|x371))==x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x373 = -3623LL;
	int8_t x375 = 0;
	volatile int16_t x376 = 11058;

	t86 = ((x373+(x374|x375))==x376);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x379 = -1LL;
	uint16_t x380 = 34U;
	volatile int32_t t87 = -4;

	t87 = ((x377+(x378|x379))==x380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x381 = 3;
	static volatile uint8_t x382 = 9U;
	uint64_t x384 = UINT64_MAX;

	t88 = ((x381+(x382|x383))==x384);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x385 = UINT64_MAX;
	static int64_t x386 = 15919531LL;
	static uint16_t x387 = UINT16_MAX;
	int16_t x388 = INT16_MIN;
	volatile int32_t t89 = 1;

	t89 = ((x385+(x386|x387))==x388);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x389 = INT8_MIN;
	volatile int8_t x390 = -3;
	static uint8_t x391 = 12U;
	static uint64_t x392 = 41581268415496289LLU;
	static volatile int32_t t90 = -4058;

	t90 = ((x389+(x390|x391))==x392);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x393 = -122;
	uint16_t x394 = UINT16_MAX;
	int32_t x395 = -1;
	static uint16_t x396 = 5955U;
	volatile int32_t t91 = -5369300;

	t91 = ((x393+(x394|x395))==x396);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x397 = 1;
	static volatile uint64_t x399 = 4688LLU;
	uint64_t x400 = 42765219496LLU;
	volatile int32_t t92 = 7814;

	t92 = ((x397+(x398|x399))==x400);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x402 = -236878LL;
	int32_t x403 = INT32_MIN;
	static uint8_t x404 = 114U;
	volatile int32_t t93 = 266;

	t93 = ((x401+(x402|x403))==x404);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t t94 = 131002;

	t94 = ((x405+(x406|x407))==x408);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x409 = -1;
	static uint16_t x411 = 270U;
	volatile int32_t t95 = 11;

	t95 = ((x409+(x410|x411))==x412);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x413 = INT8_MAX;
	volatile int32_t x414 = INT32_MIN;
	volatile int16_t x416 = INT16_MIN;

	t96 = ((x413+(x414|x415))==x416);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x417 = INT32_MAX;
	uint64_t x418 = UINT64_MAX;
	int16_t x419 = 1;
	int32_t x420 = INT32_MIN;
	volatile int32_t t97 = -1;

	t97 = ((x417+(x418|x419))==x420);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x421 = 0U;
	volatile int8_t x422 = INT8_MIN;
	uint16_t x423 = 20139U;
	volatile int32_t t98 = -13;

	t98 = ((x421+(x422|x423))==x424);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x425 = 696907350451172LLU;
	int64_t x426 = INT64_MAX;
	static uint32_t x427 = 21U;
	int32_t x428 = 125916;
	static volatile int32_t t99 = -3782;

	t99 = ((x425+(x426|x427))==x428);

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

