#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x17 = -23372;
int64_t x19 = 285LL;
static int32_t x23 = -15792932;
uint8_t x29 = 3U;
int32_t t6 = -12617882;
volatile int64_t x39 = 3180LL;
uint16_t x40 = UINT16_MAX;
static int64_t x48 = -9434969577LL;
static volatile int32_t t12 = 166;
volatile uint8_t x57 = UINT8_MAX;
volatile int32_t t14 = -15081;
volatile uint32_t x65 = 149015U;
volatile int16_t x66 = INT16_MAX;
static uint16_t x69 = 1U;
volatile int32_t x87 = INT32_MIN;
volatile uint16_t x88 = UINT16_MAX;
uint16_t x93 = 258U;
int16_t x99 = INT16_MAX;
int32_t x104 = -3;
volatile int8_t x106 = -1;
uint16_t x107 = 20875U;
volatile uint64_t t25 = 2540983788524LLU;
int64_t x118 = INT64_MIN;
static uint16_t x124 = 2U;
int32_t x131 = -1;
int64_t x140 = INT64_MAX;
uint8_t x142 = 0U;
static int64_t t37 = -13250LL;
int32_t x158 = INT32_MIN;
uint32_t x159 = 1U;
volatile int32_t t38 = 54340;
volatile int8_t x163 = -1;
static uint8_t x166 = 42U;
int64_t t40 = 10197884050LL;
volatile uint16_t x169 = 1U;
int64_t t43 = -45230LL;
static volatile int64_t x189 = -1LL;
int32_t x191 = INT32_MIN;
volatile int32_t t46 = 7894;
volatile int8_t x194 = 0;
uint64_t x198 = 158631832042157845LLU;
int32_t t48 = 97906;
volatile int64_t x201 = 0LL;
uint8_t x212 = 2U;
uint32_t x213 = UINT32_MAX;
int16_t x220 = -689;
int8_t x228 = -1;
uint8_t x230 = 31U;
uint32_t x235 = 4469942U;
volatile int16_t x236 = 1405;
uint64_t x242 = 85187192602762LLU;
volatile uint16_t x251 = 7U;
uint16_t x252 = UINT16_MAX;
volatile int8_t x258 = -6;
int32_t t63 = 41067887;
static uint32_t x265 = 45770583U;
int64_t x266 = INT64_MIN;
int16_t x271 = INT16_MIN;
static int64_t x272 = -13236609927LL;
int8_t x273 = INT8_MIN;
uint32_t x282 = 1544069U;
int16_t x293 = -1;
uint16_t x295 = UINT16_MAX;
static uint64_t x306 = 586LLU;
uint8_t x308 = 1U;
int64_t t76 = -729LL;
int16_t x322 = 1;
static int8_t x325 = INT8_MAX;
int16_t x328 = -1;
volatile int32_t x330 = INT32_MIN;
int32_t t80 = 4;
int64_t t82 = 80123613LL;
int16_t x343 = -1;
int16_t x344 = INT16_MIN;
int16_t x348 = INT16_MAX;
int16_t x352 = INT16_MIN;
static volatile int64_t x362 = INT64_MIN;
uint16_t x364 = UINT16_MAX;
volatile uint64_t t89 = 1LLU;
int64_t x369 = -387711315LL;
int16_t x371 = -1;
int64_t x372 = -1LL;
uint16_t x378 = UINT16_MAX;
int8_t x379 = -4;
int16_t x381 = INT16_MIN;
uint64_t x382 = 353977LLU;
int8_t x385 = -1;
static int32_t x387 = 7527;
int16_t x390 = INT16_MIN;
static uint64_t x392 = 3452LLU;
uint64_t x397 = UINT64_MAX;


void f0(void) {
	uint32_t x5 = UINT32_MAX;
	static int16_t x6 = INT16_MAX;
	uint8_t x7 = UINT8_MAX;
	uint32_t x8 = UINT32_MAX;
	volatile uint32_t t0 = 3194597U;

	t0 = (((x5&x6)<x7)/x8);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x9 = INT8_MIN;
	uint64_t x10 = 2LLU;
	uint64_t x11 = UINT64_MAX;
	static volatile uint8_t x12 = 125U;
	int32_t t1 = -1;

	t1 = (((x9&x10)<x11)/x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MAX;
	int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MIN;
	static volatile uint8_t x16 = 66U;
	volatile int32_t t2 = -9;

	t2 = (((x13&x14)<x15)/x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = INT8_MIN;
	static int16_t x20 = -1;
	static int32_t t3 = -1601967;

	t3 = (((x17&x18)<x19)/x20);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = 19;
	uint16_t x22 = UINT16_MAX;
	int8_t x24 = -1;
	int32_t t4 = 0;

	t4 = (((x21&x22)<x23)/x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = 0;
	int64_t x26 = 931691098483673995LL;
	uint16_t x27 = 12U;
	int8_t x28 = -33;
	int32_t t5 = 1221;

	t5 = (((x25&x26)<x27)/x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x30 = -1;
	uint8_t x31 = 54U;
	static int16_t x32 = -1;

	t6 = (((x29&x30)<x31)/x32);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x33 = 42;
	int8_t x34 = INT8_MIN;
	int32_t x35 = INT32_MIN;
	volatile int8_t x36 = INT8_MIN;
	static int32_t t7 = 11554658;

	t7 = (((x33&x34)<x35)/x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	int32_t x38 = INT32_MIN;
	volatile int32_t t8 = -1;

	t8 = (((x37&x38)<x39)/x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 16307LL;
	int16_t x42 = 1107;
	uint16_t x43 = 1U;
	static uint16_t x44 = 1645U;
	volatile int32_t t9 = 0;

	t9 = (((x41&x42)<x43)/x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x45 = 169955951248170586LLU;
	int16_t x46 = INT16_MIN;
	volatile uint32_t x47 = 130647702U;
	int64_t t10 = 1LL;

	t10 = (((x45&x46)<x47)/x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = UINT64_MAX;
	volatile int8_t x50 = INT8_MIN;
	int16_t x51 = INT16_MAX;
	int64_t x52 = INT64_MIN;
	volatile int64_t t11 = 207LL;

	t11 = (((x49&x50)<x51)/x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MIN;
	volatile int16_t x54 = INT16_MIN;
	int8_t x55 = INT8_MIN;
	int32_t x56 = -1;

	t12 = (((x53&x54)<x55)/x56);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x58 = INT8_MIN;
	static volatile int64_t x59 = INT64_MIN;
	int64_t x60 = -2590133004LL;
	volatile int64_t t13 = 18LL;

	t13 = (((x57&x58)<x59)/x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -1;
	uint32_t x62 = 27211U;
	int8_t x63 = INT8_MAX;
	static int16_t x64 = -1;

	t14 = (((x61&x62)<x63)/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x67 = INT8_MIN;
	int8_t x68 = INT8_MAX;
	int32_t t15 = 11771003;

	t15 = (((x65&x66)<x67)/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x70 = -1598075;
	int16_t x71 = INT16_MIN;
	int64_t x72 = INT64_MIN;
	static int64_t t16 = 140745835204426LL;

	t16 = (((x69&x70)<x71)/x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = UINT8_MAX;
	uint16_t x74 = 155U;
	int32_t x75 = INT32_MIN;
	int64_t x76 = 36LL;
	int64_t t17 = -12793LL;

	t17 = (((x73&x74)<x75)/x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x77 = -4;
	int8_t x78 = -1;
	static uint32_t x79 = 2100944966U;
	int64_t x80 = 1477972461336809580LL;
	volatile int64_t t18 = 53577589128473LL;

	t18 = (((x77&x78)<x79)/x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = UINT64_MAX;
	uint16_t x82 = 119U;
	volatile uint16_t x83 = 12U;
	uint32_t x84 = 71U;
	uint32_t t19 = 1020U;

	t19 = (((x81&x82)<x83)/x84);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 30535643166172LLU;
	static uint32_t x86 = UINT32_MAX;
	int32_t t20 = -8679689;

	t20 = (((x85&x86)<x87)/x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 510U;
	static uint32_t x90 = 1056591491U;
	static int16_t x91 = INT16_MIN;
	int16_t x92 = INT16_MIN;
	volatile int32_t t21 = 0;

	t21 = (((x89&x90)<x91)/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x94 = INT16_MAX;
	uint64_t x95 = UINT64_MAX;
	int64_t x96 = INT64_MIN;
	static volatile int64_t t22 = 55905960312091LL;

	t22 = (((x93&x94)<x95)/x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -2209648618354922LL;
	int16_t x98 = INT16_MAX;
	uint64_t x100 = 453700LLU;
	uint64_t t23 = 122670239LLU;

	t23 = (((x97&x98)<x99)/x100);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MAX;
	int32_t x102 = INT32_MAX;
	int16_t x103 = INT16_MIN;
	static volatile int32_t t24 = 3100;

	t24 = (((x101&x102)<x103)/x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MIN;
	static volatile uint64_t x108 = 114854292LLU;

	t25 = (((x105&x106)<x107)/x108);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x109 = UINT64_MAX;
	volatile uint32_t x110 = 2241U;
	int16_t x111 = -4987;
	int64_t x112 = INT64_MAX;
	int64_t t26 = 0LL;

	t26 = (((x109&x110)<x111)/x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MAX;
	int8_t x114 = 0;
	int16_t x115 = INT16_MIN;
	volatile uint64_t x116 = 3LLU;
	uint64_t t27 = 16977173052792LLU;

	t27 = (((x113&x114)<x115)/x116);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x117 = -1;
	volatile uint16_t x119 = 0U;
	volatile int32_t x120 = INT32_MIN;
	int32_t t28 = -2602421;

	t28 = (((x117&x118)<x119)/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x121 = 152U;
	static volatile uint64_t x122 = 10580877701172253LLU;
	int32_t x123 = 15;
	static volatile int32_t t29 = 730;

	t29 = (((x121&x122)<x123)/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x125 = -24340654303LL;
	int64_t x126 = -1LL;
	static int32_t x127 = -54358;
	int64_t x128 = -1LL;
	volatile int64_t t30 = -62991352335020LL;

	t30 = (((x125&x126)<x127)/x128);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = INT64_MIN;
	volatile uint64_t x130 = 4307890LLU;
	static int64_t x132 = -319391LL;
	static volatile int64_t t31 = -134LL;

	t31 = (((x129&x130)<x131)/x132);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = INT8_MAX;
	uint64_t x134 = 12824028350578LLU;
	uint8_t x135 = UINT8_MAX;
	int8_t x136 = 44;
	int32_t t32 = -55;

	t32 = (((x133&x134)<x135)/x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = 1411141;
	int8_t x138 = -1;
	uint16_t x139 = 18U;
	static int64_t t33 = 83045970LL;

	t33 = (((x137&x138)<x139)/x140);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MIN;
	int8_t x143 = -1;
	volatile int64_t x144 = -387712LL;
	int64_t t34 = -421348261082804LL;

	t34 = (((x141&x142)<x143)/x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = 26788;
	uint8_t x146 = UINT8_MAX;
	int32_t x147 = INT32_MIN;
	uint16_t x148 = 14332U;
	int32_t t35 = -12047;

	t35 = (((x145&x146)<x147)/x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x149 = UINT16_MAX;
	int8_t x150 = INT8_MIN;
	volatile uint64_t x151 = 107LLU;
	volatile uint32_t x152 = UINT32_MAX;
	uint32_t t36 = 1185U;

	t36 = (((x149&x150)<x151)/x152);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = -1;
	static volatile int8_t x154 = INT8_MAX;
	int64_t x155 = INT64_MIN;
	int64_t x156 = 622715LL;

	t37 = (((x153&x154)<x155)/x156);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x157 = 134761974721LLU;
	volatile uint8_t x160 = 97U;

	t38 = (((x157&x158)<x159)/x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MAX;
	int32_t x162 = 1637;
	int32_t x164 = -1;
	int32_t t39 = -623239;

	t39 = (((x161&x162)<x163)/x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = INT64_MAX;
	int16_t x167 = INT16_MAX;
	int64_t x168 = INT64_MAX;

	t40 = (((x165&x166)<x167)/x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x170 = -1;
	uint16_t x171 = 1101U;
	int32_t x172 = -153478;
	int32_t t41 = 1;

	t41 = (((x169&x170)<x171)/x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x173 = 1463383012849LLU;
	uint32_t x174 = 12064140U;
	uint32_t x175 = 29U;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t42 = 15;

	t42 = (((x173&x174)<x175)/x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x177 = -12282;
	uint64_t x178 = 45359794835780LLU;
	volatile uint32_t x179 = UINT32_MAX;
	volatile int64_t x180 = 1601019277227979943LL;

	t43 = (((x177&x178)<x179)/x180);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x181 = 60U;
	static int8_t x182 = INT8_MAX;
	int16_t x183 = 3730;
	volatile int64_t x184 = 49790479469333LL;
	int64_t t44 = 15142LL;

	t44 = (((x181&x182)<x183)/x184);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x185 = 89496004982669561LLU;
	int32_t x186 = INT32_MIN;
	static volatile int16_t x187 = -1;
	int64_t x188 = INT64_MAX;
	int64_t t45 = 7554989670672912LL;

	t45 = (((x185&x186)<x187)/x188);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x190 = INT8_MIN;
	int16_t x192 = INT16_MIN;

	t46 = (((x189&x190)<x191)/x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = 553553125022836809LLU;
	uint16_t x195 = 1U;
	uint16_t x196 = UINT16_MAX;
	int32_t t47 = -240233049;

	t47 = (((x193&x194)<x195)/x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = INT32_MIN;
	static volatile int32_t x199 = -1;
	int16_t x200 = INT16_MIN;

	t48 = (((x197&x198)<x199)/x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x202 = 7314958694818331LL;
	int64_t x203 = -4826396442717448LL;
	volatile uint8_t x204 = 1U;
	int32_t t49 = 12;

	t49 = (((x201&x202)<x203)/x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = INT16_MIN;
	int32_t x210 = INT32_MAX;
	uint64_t x211 = 620LLU;
	volatile int32_t t50 = 2107187;

	t50 = (((x209&x210)<x211)/x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x214 = INT64_MAX;
	int64_t x215 = INT64_MIN;
	static uint16_t x216 = UINT16_MAX;
	volatile int32_t t51 = -624;

	t51 = (((x213&x214)<x215)/x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x217 = INT8_MAX;
	int8_t x218 = INT8_MIN;
	volatile uint16_t x219 = UINT16_MAX;
	volatile int32_t t52 = 0;

	t52 = (((x217&x218)<x219)/x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x221 = 1LLU;
	volatile int32_t x222 = INT32_MAX;
	static uint8_t x223 = 7U;
	static int8_t x224 = 3;
	volatile int32_t t53 = 83013852;

	t53 = (((x221&x222)<x223)/x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x225 = INT16_MAX;
	static int32_t x226 = INT32_MAX;
	volatile uint8_t x227 = 2U;
	int32_t t54 = -169;

	t54 = (((x225&x226)<x227)/x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = INT32_MIN;
	volatile uint64_t x231 = UINT64_MAX;
	volatile int8_t x232 = INT8_MIN;
	int32_t t55 = -59038;

	t55 = (((x229&x230)<x231)/x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x233 = INT32_MIN;
	volatile int32_t x234 = -1;
	int32_t t56 = 2195325;

	t56 = (((x233&x234)<x235)/x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = -1;
	int32_t x238 = -1;
	int16_t x239 = -1;
	int32_t x240 = -1189176;
	volatile int32_t t57 = -157106;

	t57 = (((x237&x238)<x239)/x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = -16393099;
	static volatile int64_t x243 = 11LL;
	int8_t x244 = -16;
	int32_t t58 = -250;

	t58 = (((x241&x242)<x243)/x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x245 = -5;
	static int8_t x246 = INT8_MIN;
	int32_t x247 = INT32_MIN;
	uint8_t x248 = UINT8_MAX;
	static int32_t t59 = 10038394;

	t59 = (((x245&x246)<x247)/x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x249 = 2543010557766LLU;
	uint32_t x250 = 0U;
	int32_t t60 = -86253;

	t60 = (((x249&x250)<x251)/x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = 6;
	static int64_t x254 = INT64_MIN;
	volatile uint16_t x255 = UINT16_MAX;
	static int32_t x256 = -2008;
	int32_t t61 = -246810103;

	t61 = (((x253&x254)<x255)/x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x257 = 751994581LL;
	int8_t x259 = 1;
	static int64_t x260 = -1LL;
	int64_t t62 = -963227989598105LL;

	t62 = (((x257&x258)<x259)/x260);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = 6098;
	static uint32_t x262 = 77914330U;
	int8_t x263 = INT8_MIN;
	int16_t x264 = -1;

	t63 = (((x261&x262)<x263)/x264);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x267 = 1212U;
	int32_t x268 = INT32_MAX;
	volatile int32_t t64 = 82276;

	t64 = (((x265&x266)<x267)/x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x269 = INT16_MIN;
	int32_t x270 = INT32_MAX;
	volatile int64_t t65 = 106730LL;

	t65 = (((x269&x270)<x271)/x272);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x274 = INT32_MIN;
	uint32_t x275 = UINT32_MAX;
	static int16_t x276 = -1;
	volatile int32_t t66 = 552;

	t66 = (((x273&x274)<x275)/x276);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x277 = UINT32_MAX;
	int8_t x278 = INT8_MIN;
	int64_t x279 = INT64_MAX;
	int8_t x280 = -1;
	int32_t t67 = 33521341;

	t67 = (((x277&x278)<x279)/x280);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x281 = UINT16_MAX;
	int8_t x283 = 8;
	uint64_t x284 = UINT64_MAX;
	volatile uint64_t t68 = 2804294037710LLU;

	t68 = (((x281&x282)<x283)/x284);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = -1LL;
	int64_t x286 = -1LL;
	volatile uint16_t x287 = UINT16_MAX;
	uint32_t x288 = UINT32_MAX;
	uint32_t t69 = 1363233U;

	t69 = (((x285&x286)<x287)/x288);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = INT16_MIN;
	int32_t x290 = INT32_MIN;
	int16_t x291 = 1;
	int8_t x292 = INT8_MAX;
	int32_t t70 = -121;

	t70 = (((x289&x290)<x291)/x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x294 = INT16_MIN;
	int8_t x296 = -56;
	static volatile int32_t t71 = 0;

	t71 = (((x293&x294)<x295)/x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x297 = 114U;
	int16_t x298 = INT16_MIN;
	volatile int32_t x299 = -1;
	static uint8_t x300 = UINT8_MAX;
	int32_t t72 = -2;

	t72 = (((x297&x298)<x299)/x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x301 = 1427167362348042461LLU;
	static int64_t x302 = INT64_MIN;
	static uint16_t x303 = 92U;
	uint64_t x304 = UINT64_MAX;
	static volatile uint64_t t73 = 1794LLU;

	t73 = (((x301&x302)<x303)/x304);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = INT32_MIN;
	int64_t x307 = -579418520471163254LL;
	volatile int32_t t74 = 53427846;

	t74 = (((x305&x306)<x307)/x308);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = -1;
	volatile int32_t x310 = -1;
	volatile int16_t x311 = INT16_MAX;
	int8_t x312 = INT8_MIN;
	volatile int32_t t75 = 60899776;

	t75 = (((x309&x310)<x311)/x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x313 = -6480131;
	int8_t x314 = -1;
	volatile uint16_t x315 = UINT16_MAX;
	int64_t x316 = -7823090390500806LL;

	t76 = (((x313&x314)<x315)/x316);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x317 = INT64_MAX;
	int16_t x318 = -1;
	uint64_t x319 = UINT64_MAX;
	static int16_t x320 = -249;
	int32_t t77 = 1024176776;

	t77 = (((x317&x318)<x319)/x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x321 = INT32_MIN;
	uint64_t x323 = 1775230LLU;
	int32_t x324 = -1;
	int32_t t78 = 68870;

	t78 = (((x321&x322)<x323)/x324);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x326 = INT32_MAX;
	int16_t x327 = INT16_MIN;
	volatile int32_t t79 = 1713;

	t79 = (((x325&x326)<x327)/x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x329 = UINT16_MAX;
	int32_t x331 = INT32_MAX;
	static volatile int16_t x332 = INT16_MIN;

	t80 = (((x329&x330)<x331)/x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x333 = 1U;
	int16_t x334 = INT16_MAX;
	int8_t x335 = INT8_MIN;
	int32_t x336 = 248;
	volatile int32_t t81 = -225940;

	t81 = (((x333&x334)<x335)/x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x337 = UINT8_MAX;
	static int32_t x338 = -1;
	int16_t x339 = 386;
	int64_t x340 = INT64_MIN;

	t82 = (((x337&x338)<x339)/x340);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x341 = 56703LLU;
	volatile int16_t x342 = INT16_MAX;
	int32_t t83 = -298;

	t83 = (((x341&x342)<x343)/x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = 49095;
	static int16_t x346 = -1;
	static volatile uint64_t x347 = 10688591164825LLU;
	volatile int32_t t84 = 222447531;

	t84 = (((x345&x346)<x347)/x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x349 = 189054LLU;
	int64_t x350 = -1LL;
	int16_t x351 = INT16_MIN;
	volatile int32_t t85 = -2013832;

	t85 = (((x349&x350)<x351)/x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x353 = 22LLU;
	static uint16_t x354 = 2666U;
	int16_t x355 = -514;
	volatile int64_t x356 = INT64_MIN;
	volatile int64_t t86 = -11344442102LL;

	t86 = (((x353&x354)<x355)/x356);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = -237842093069650285LL;
	int64_t x358 = INT64_MAX;
	static volatile int8_t x359 = INT8_MIN;
	int8_t x360 = INT8_MIN;
	volatile int32_t t87 = -402589436;

	t87 = (((x357&x358)<x359)/x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x361 = -1;
	uint8_t x363 = 88U;
	static int32_t t88 = 31242;

	t88 = (((x361&x362)<x363)/x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x365 = INT32_MIN;
	static volatile uint64_t x366 = 9122231LLU;
	int8_t x367 = INT8_MIN;
	uint64_t x368 = 115517140LLU;

	t89 = (((x365&x366)<x367)/x368);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x370 = -1;
	static int64_t t90 = -15218123LL;

	t90 = (((x369&x370)<x371)/x372);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x373 = 8471856U;
	volatile uint32_t x374 = 8255697U;
	volatile int32_t x375 = -1;
	static int16_t x376 = -40;
	volatile int32_t t91 = -1770;

	t91 = (((x373&x374)<x375)/x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x377 = 5LLU;
	int32_t x380 = 29013;
	int32_t t92 = 6531;

	t92 = (((x377&x378)<x379)/x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x383 = INT8_MIN;
	int64_t x384 = 53641LL;
	int64_t t93 = -1LL;

	t93 = (((x381&x382)<x383)/x384);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x386 = INT64_MAX;
	static int16_t x388 = INT16_MIN;
	int32_t t94 = -5442;

	t94 = (((x385&x386)<x387)/x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x389 = 234U;
	static uint8_t x391 = UINT8_MAX;
	volatile uint64_t t95 = 247883LLU;

	t95 = (((x389&x390)<x391)/x392);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = INT32_MAX;
	int8_t x394 = INT8_MIN;
	static int8_t x395 = -5;
	int32_t x396 = -146;
	volatile int32_t t96 = 40161717;

	t96 = (((x393&x394)<x395)/x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x398 = UINT32_MAX;
	volatile int32_t x399 = INT32_MIN;
	static volatile uint8_t x400 = 4U;
	int32_t t97 = 1956;

	t97 = (((x397&x398)<x399)/x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x405 = 13717U;
	int64_t x406 = INT64_MAX;
	uint16_t x407 = 31U;
	uint16_t x408 = 30U;
	int32_t t98 = 846878;

	t98 = (((x405&x406)<x407)/x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x409 = -1;
	int32_t x410 = INT32_MIN;
	int64_t x411 = INT64_MIN;
	static uint16_t x412 = 17U;
	int32_t t99 = 235346525;

	t99 = (((x409&x410)<x411)/x412);

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

