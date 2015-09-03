#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x12 = 127U;
uint8_t x16 = UINT8_MAX;
uint64_t x17 = 505LLU;
uint16_t x22 = UINT16_MAX;
int64_t x28 = 1529680851LL;
volatile uint64_t t5 = 1085LLU;
static int16_t x36 = INT16_MAX;
int32_t x39 = -1;
int64_t x40 = -1LL;
uint32_t x47 = UINT32_MAX;
int64_t x49 = -4357922751092311726LL;
int8_t x57 = INT8_MIN;
static int64_t x62 = INT64_MIN;
int8_t x63 = -1;
int8_t x65 = INT8_MAX;
int8_t x77 = INT8_MAX;
static uint8_t x79 = 4U;
uint8_t x89 = 0U;
volatile int16_t x108 = INT16_MIN;
int8_t x111 = INT8_MAX;
uint64_t t22 = 738191149455897LLU;
int16_t x115 = INT16_MIN;
uint64_t t23 = 23571025691479759LLU;
uint8_t x117 = 27U;
static int64_t x119 = INT64_MIN;
volatile uint32_t x122 = 12585645U;
uint16_t x126 = 32U;
uint64_t t26 = 15655LLU;
int32_t x130 = -7859757;
static uint64_t t28 = 1172069499536460952LLU;
static int16_t x149 = 27;
int32_t x161 = -1;
int32_t x170 = INT32_MIN;
uint32_t x173 = 943002654U;
volatile int64_t x179 = INT64_MIN;
int64_t x180 = -70LL;
uint64_t x184 = 1402335LLU;
volatile uint32_t t40 = 819020U;
volatile int32_t x204 = -1;
volatile uint8_t x209 = 50U;
int32_t x210 = -1;
int64_t x215 = INT64_MAX;
uint16_t x227 = 1U;
int32_t x229 = -11847248;
uint8_t x230 = 6U;
int32_t x245 = -1;
static volatile int32_t t50 = 22613;
int16_t x255 = -3;
int32_t x257 = INT32_MIN;
static int16_t x273 = INT16_MIN;
uint64_t x280 = 1383130300949LLU;
static int16_t x281 = -1;
static uint8_t x285 = 0U;
volatile int16_t x307 = INT16_MIN;
volatile int16_t x308 = -1;
int8_t x315 = -5;
int64_t x316 = -13970513144807LL;
int64_t x317 = 1061894925LL;
static int16_t x328 = -303;
int32_t x329 = -16377787;
static int64_t x330 = -37017058LL;
static volatile uint64_t t69 = 118430LLU;
static int16_t x341 = -1932;
volatile uint32_t x344 = UINT32_MAX;
int32_t x358 = INT32_MIN;
uint8_t x360 = UINT8_MAX;
static int16_t x366 = INT16_MAX;
int8_t x369 = 1;
static int8_t x372 = INT8_MIN;
volatile int32_t x375 = 456551;
int32_t x388 = 710;
volatile int32_t t77 = 0;
int32_t x394 = -59192;
uint64_t x396 = UINT64_MAX;
int8_t x420 = INT8_MAX;
volatile int32_t x425 = 307;
int64_t x426 = -1LL;
int64_t t83 = 22801654346575LL;
int32_t x430 = 5;
static int8_t x434 = -36;
int64_t x435 = 1LL;
int16_t x439 = INT16_MAX;
int16_t x443 = 1;
int16_t x447 = -1;
int32_t x448 = -900927;
uint8_t x452 = 2U;
volatile uint64_t t89 = 51LLU;
int64_t x461 = 1097LL;
static uint64_t x462 = 519828571705383LLU;
uint16_t x463 = 213U;
int16_t x464 = INT16_MIN;
volatile int16_t x469 = -26;
static volatile uint8_t x470 = 2U;
volatile int32_t t93 = 387210;
int32_t x477 = INT32_MIN;
int32_t x478 = INT32_MAX;
static uint8_t x486 = UINT8_MAX;
static volatile int32_t x487 = 17842;
int8_t x495 = INT8_MAX;


void f0(void) {
	int16_t x1 = -30;
	int8_t x2 = -1;
	int64_t x3 = -1LL;
	uint8_t x4 = 16U;
	int64_t t0 = -147469263937668LL;

	t0 = ((x1&(x2|x3))*x4);

	if (t0 != -480LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 1LL;
	int64_t x10 = INT64_MAX;
	int32_t x11 = INT32_MIN;
	static int64_t t1 = -6099604228534LL;

	t1 = ((x9&(x10|x11))*x12);

	if (t1 != 127LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = 61639840;
	int64_t x14 = -3087LL;
	int16_t x15 = INT16_MAX;
	volatile int64_t t2 = 4054962927LL;

	t2 = ((x13&(x14|x15))*x16);

	if (t2 != 15718159200LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x18 = UINT64_MAX;
	int8_t x19 = INT8_MIN;
	int64_t x20 = INT64_MAX;
	uint64_t t3 = 1864923988552862LLU;

	t3 = ((x17&(x18|x19))*x20);

	if (t3 != 9223372036854775303LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 374273U;
	volatile int16_t x23 = INT16_MIN;
	static volatile int32_t x24 = -59;
	volatile uint32_t t4 = 602465215U;

	t4 = ((x21&(x22|x23))*x24);

	if (t4 != 4272885189U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x25 = -1LL;
	volatile uint64_t x26 = 2659828221955LLU;
	int8_t x27 = INT8_MIN;

	t5 = ((x25&(x26|x27))*x28);

	if (t5 != 18446743882499445241LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x29 = 30U;
	int8_t x30 = -1;
	uint16_t x31 = UINT16_MAX;
	uint16_t x32 = 1121U;
	static int32_t t6 = -3420;

	t6 = ((x29&(x30|x31))*x32);

	if (t6 != 33630) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x33 = 3486LL;
	uint16_t x34 = UINT16_MAX;
	uint64_t x35 = 2050111840077LLU;
	volatile uint64_t t7 = 5180779022LLU;

	t7 = ((x33&(x34|x35))*x36);

	if (t7 != 114225762LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = INT16_MIN;
	int16_t x38 = INT16_MAX;
	int64_t t8 = 2094231443165LL;

	t8 = ((x37&(x38|x39))*x40);

	if (t8 != 32768LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	int64_t x42 = -4289730960667LL;
	uint64_t x43 = UINT64_MAX;
	static int8_t x44 = -3;
	volatile uint64_t t9 = 2183878LLU;

	t9 = ((x41&(x42|x43))*x44);

	if (t9 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x45 = 384U;
	int32_t x46 = INT32_MIN;
	int32_t x48 = INT32_MIN;
	uint32_t t10 = 12036010U;

	t10 = ((x45&(x46|x47))*x48);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x50 = UINT64_MAX;
	volatile int8_t x51 = -6;
	uint8_t x52 = UINT8_MAX;
	volatile uint64_t t11 = 16221712LLU;

	t11 = ((x49&(x50|x51))*x52);

	if (t11 != 13981086967743158446LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x58 = INT8_MIN;
	static int32_t x59 = INT32_MAX;
	int16_t x60 = INT16_MAX;
	int32_t t12 = -611020552;

	t12 = ((x57&(x58|x59))*x60);

	if (t12 != -4194176) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x61 = -1;
	static uint8_t x64 = 31U;
	volatile int64_t t13 = -7502064LL;

	t13 = ((x61&(x62|x63))*x64);

	if (t13 != -31LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x66 = -1;
	int64_t x67 = INT64_MIN;
	uint16_t x68 = 15581U;
	volatile int64_t t14 = -260295LL;

	t14 = ((x65&(x66|x67))*x68);

	if (t14 != 1978787LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MAX;
	volatile uint32_t x70 = 395917U;
	volatile int8_t x71 = INT8_MIN;
	volatile int32_t x72 = INT32_MIN;
	volatile int64_t t15 = 400847506LL;

	t15 = ((x69&(x70|x71))*x72);

	if (t15 != -9223371789894156288LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MAX;
	int16_t x74 = -1;
	int8_t x75 = INT8_MIN;
	uint16_t x76 = 108U;
	static volatile int32_t t16 = 61168129;

	t16 = ((x73&(x74|x75))*x76);

	if (t16 != 13716) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x78 = INT16_MIN;
	uint16_t x80 = UINT16_MAX;
	int32_t t17 = 6943;

	t17 = ((x77&(x78|x79))*x80);

	if (t17 != 262140) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = UINT16_MAX;
	static int16_t x82 = 21;
	static volatile uint32_t x83 = 186022U;
	volatile uint16_t x84 = UINT16_MAX;
	uint32_t t18 = 4846U;

	t18 = ((x81&(x82|x83))*x84);

	if (t18 != 3602262345U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = 0;
	uint64_t x86 = 225147294963LLU;
	volatile uint8_t x87 = 98U;
	volatile int32_t x88 = 968569412;
	volatile uint64_t t19 = 232885LLU;

	t19 = ((x85&(x86|x87))*x88);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x90 = UINT16_MAX;
	int8_t x91 = -1;
	static volatile int32_t x92 = INT32_MIN;
	int32_t t20 = 1;

	t20 = ((x89&(x90|x91))*x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = INT8_MIN;
	volatile int8_t x106 = 1;
	int8_t x107 = 1;
	int32_t t21 = 14508779;

	t21 = ((x105&(x106|x107))*x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x109 = 3943397615LLU;
	int8_t x110 = INT8_MIN;
	volatile int64_t x112 = INT64_MIN;

	t22 = ((x109&(x110|x111))*x112);

	if (t22 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = -1LL;
	int8_t x114 = INT8_MIN;
	uint64_t x116 = 47LLU;

	t23 = ((x113&(x114|x115))*x116);

	if (t23 != 18446744073709545600LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x118 = INT64_MIN;
	static int16_t x120 = INT16_MAX;
	volatile int64_t t24 = 769286493269063LL;

	t24 = ((x117&(x118|x119))*x120);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = -1;
	volatile int32_t x123 = -1;
	static int32_t x124 = -1;
	uint32_t t25 = 134U;

	t25 = ((x121&(x122|x123))*x124);

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x125 = 0U;
	uint64_t x127 = UINT64_MAX;
	int16_t x128 = INT16_MIN;

	t26 = ((x125&(x126|x127))*x128);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x129 = 1788458859LLU;
	uint16_t x131 = UINT16_MAX;
	int64_t x132 = -2942740392126902LL;
	uint64_t t27 = 28977919284761163LLU;

	t27 = ((x129&(x130|x131))*x132);

	if (t27 != 10109339992295634670LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = INT64_MAX;
	static uint64_t x134 = UINT64_MAX;
	uint8_t x135 = UINT8_MAX;
	uint16_t x136 = 184U;

	t28 = ((x133&(x134|x135))*x136);

	if (t28 != 18446744073709551432LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x145 = 76U;
	static int8_t x146 = 56;
	volatile int64_t x147 = INT64_MAX;
	uint32_t x148 = 11359134U;
	static volatile int64_t t29 = 4907015129LL;

	t29 = ((x145&(x146|x147))*x148);

	if (t29 != 863294184LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x150 = INT8_MIN;
	int64_t x151 = 7366801020308109LL;
	int64_t x152 = -1081221009318LL;
	volatile int64_t t30 = 257627588LL;

	t30 = ((x149&(x150|x151))*x152);

	if (t30 != -9730989083862LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x157 = INT64_MIN;
	uint64_t x158 = 166653LLU;
	volatile int64_t x159 = INT64_MIN;
	static int16_t x160 = INT16_MIN;
	uint64_t t31 = 7178737212648481LLU;

	t31 = ((x157&(x158|x159))*x160);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x162 = -1;
	int16_t x163 = 8249;
	int8_t x164 = INT8_MIN;
	static volatile int32_t t32 = -13197;

	t32 = ((x161&(x162|x163))*x164);

	if (t32 != 128) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x165 = 57838725LL;
	volatile uint8_t x166 = 54U;
	int16_t x167 = INT16_MIN;
	int16_t x168 = 3308;
	int64_t t33 = 250LL;

	t33 = ((x165&(x166|x167))*x168);

	if (t33 != 191319913392LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint32_t x169 = 849U;
	int32_t x171 = -13;
	int8_t x172 = -6;
	uint32_t t34 = 278U;

	t34 = ((x169&(x170|x171))*x172);

	if (t34 != 4294962202U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x174 = -1;
	int8_t x175 = INT8_MIN;
	uint64_t x176 = 1494LLU;
	static uint64_t t35 = 3489217LLU;

	t35 = ((x173&(x174|x175))*x176);

	if (t35 != 1408845965076LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x177 = UINT16_MAX;
	volatile int8_t x178 = INT8_MIN;
	volatile int64_t t36 = 67542724LL;

	t36 = ((x177&(x178|x179))*x180);

	if (t36 != -4578560LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x181 = INT32_MIN;
	int8_t x182 = -1;
	int64_t x183 = -1LL;
	volatile uint64_t t37 = 5LLU;

	t37 = ((x181&(x182|x183))*x184);

	if (t37 != 18443732582228033536LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x185 = 17U;
	int8_t x186 = 14;
	volatile int8_t x187 = INT8_MIN;
	static uint16_t x188 = UINT16_MAX;
	int32_t t38 = -1932;

	t38 = ((x185&(x186|x187))*x188);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x189 = 24643790889LLU;
	int32_t x190 = INT32_MIN;
	int64_t x191 = INT64_MAX;
	static int64_t x192 = INT64_MIN;
	uint64_t t39 = 16080856069200LLU;

	t39 = ((x189&(x190|x191))*x192);

	if (t39 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x197 = 418U;
	int8_t x198 = 1;
	static int16_t x199 = 1;
	int8_t x200 = INT8_MIN;

	t40 = ((x197&(x198|x199))*x200);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x201 = INT16_MIN;
	uint64_t x202 = 789073016484391LLU;
	int8_t x203 = -1;
	uint64_t t41 = 1LLU;

	t41 = ((x201&(x202|x203))*x204);

	if (t41 != 32768LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x205 = -56570635568LL;
	volatile int16_t x206 = -7616;
	int32_t x207 = INT32_MAX;
	static uint64_t x208 = 10555966444699LLU;
	uint64_t t42 = 15465992LLU;

	t42 = ((x205&(x206|x207))*x208);

	if (t42 != 268343021850459120LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x211 = INT64_MAX;
	int32_t x212 = 7868898;
	static volatile int64_t t43 = -11273LL;

	t43 = ((x209&(x210|x211))*x212);

	if (t43 != 393444900LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x213 = 35942U;
	static int64_t x214 = INT64_MIN;
	static int8_t x216 = -53;
	static int64_t t44 = 7806556105101LL;

	t44 = ((x213&(x214|x215))*x216);

	if (t44 != -1904926LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x217 = 3678;
	static volatile int64_t x218 = INT64_MIN;
	uint8_t x219 = 1U;
	uint64_t x220 = 60LLU;
	uint64_t t45 = 60469758LLU;

	t45 = ((x217&(x218|x219))*x220);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x221 = INT16_MAX;
	int32_t x222 = -63506;
	static volatile uint16_t x223 = 1U;
	int8_t x224 = INT8_MIN;
	volatile int32_t t46 = 0;

	t46 = ((x221&(x222|x223))*x224);

	if (t46 != -259968) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x225 = 15258;
	int8_t x226 = INT8_MAX;
	volatile uint16_t x228 = UINT16_MAX;
	volatile int32_t t47 = -502205953;

	t47 = ((x225&(x226|x227))*x228);

	if (t47 != 1703910) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x231 = INT16_MAX;
	uint32_t x232 = 1U;
	static uint32_t t48 = 464U;

	t48 = ((x229&(x230|x231))*x232);

	if (t48 != 14768U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x246 = 18196U;
	int64_t x247 = -1LL;
	int64_t x248 = INT64_MAX;
	int64_t t49 = 13375388653LL;

	t49 = ((x245&(x246|x247))*x248);

	if (t49 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x249 = -54;
	int32_t x250 = -1;
	int8_t x251 = INT8_MIN;
	volatile int8_t x252 = -26;

	t50 = ((x249&(x250|x251))*x252);

	if (t50 != 1404) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x253 = 8125;
	int64_t x254 = 39305753065LL;
	int16_t x256 = -1;
	volatile int64_t t51 = -468591LL;

	t51 = ((x253&(x254|x255))*x256);

	if (t51 != -8125LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x258 = INT32_MAX;
	uint8_t x259 = UINT8_MAX;
	static int64_t x260 = INT64_MAX;
	volatile int64_t t52 = -733912517886663029LL;

	t52 = ((x257&(x258|x259))*x260);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x261 = INT16_MIN;
	int32_t x262 = INT32_MIN;
	volatile int16_t x263 = 13662;
	uint64_t x264 = UINT64_MAX;
	volatile uint64_t t53 = 359LLU;

	t53 = ((x261&(x262|x263))*x264);

	if (t53 != 2147483648LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x265 = 3LL;
	int16_t x266 = INT16_MIN;
	uint16_t x267 = 1759U;
	volatile uint64_t x268 = 10273LLU;
	static volatile uint64_t t54 = 1175922561505146746LLU;

	t54 = ((x265&(x266|x267))*x268);

	if (t54 != 30819LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x269 = -930186LL;
	int32_t x270 = -1;
	uint16_t x271 = UINT16_MAX;
	uint64_t x272 = 15985074LLU;
	uint64_t t55 = 531307232400342500LLU;

	t55 = ((x269&(x270|x271))*x272);

	if (t55 != 18446729204617507852LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x274 = 101U;
	volatile int32_t x275 = INT32_MIN;
	static uint64_t x276 = 1297299049748LLU;
	uint64_t t56 = 14LLU;

	t56 = ((x273&(x274|x275))*x276);

	if (t56 != 17976603304083324928LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x277 = 28;
	volatile uint16_t x278 = 14364U;
	uint64_t x279 = 5936976991972949286LLU;
	uint64_t t57 = 69LLU;

	t57 = ((x277&(x278|x279))*x280);

	if (t57 != 38727648426572LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x282 = -1;
	int8_t x283 = INT8_MIN;
	uint32_t x284 = 489U;
	uint32_t t58 = 9U;

	t58 = ((x281&(x282|x283))*x284);

	if (t58 != 4294966807U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x286 = INT16_MIN;
	int8_t x287 = 2;
	int32_t x288 = -1;
	int32_t t59 = 1026066;

	t59 = ((x285&(x286|x287))*x288);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x289 = INT64_MIN;
	uint64_t x290 = 0LLU;
	int64_t x291 = INT64_MIN;
	int64_t x292 = INT64_MAX;
	static volatile uint64_t t60 = 1151763LLU;

	t60 = ((x289&(x290|x291))*x292);

	if (t60 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x297 = -1;
	int8_t x298 = -1;
	volatile int32_t x299 = INT32_MAX;
	int64_t x300 = -3LL;
	int64_t t61 = 79587164871LL;

	t61 = ((x297&(x298|x299))*x300);

	if (t61 != 3LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x301 = INT16_MIN;
	int16_t x302 = 10145;
	int32_t x303 = -12638922;
	int8_t x304 = -1;
	int32_t t62 = 0;

	t62 = ((x301&(x302|x303))*x304);

	if (t62 != 12648448) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x305 = 0U;
	int64_t x306 = INT64_MAX;
	int64_t t63 = -261503638302508739LL;

	t63 = ((x305&(x306|x307))*x308);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x309 = 999951LLU;
	uint8_t x310 = 1U;
	volatile uint16_t x311 = UINT16_MAX;
	static uint8_t x312 = UINT8_MAX;
	static uint64_t t64 = 1106197061927155LLU;

	t64 = ((x309&(x310|x311))*x312);

	if (t64 != 4312305LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x313 = 0U;
	volatile uint32_t x314 = 21265U;
	static volatile int64_t t65 = 18256LL;

	t65 = ((x313&(x314|x315))*x316);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x318 = 40082934U;
	uint32_t x319 = 280U;
	int16_t x320 = INT16_MIN;
	int64_t t66 = -3392LL;

	t66 = ((x317&(x318|x319))*x320);

	if (t66 != -1243603140608LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x321 = UINT16_MAX;
	uint32_t x322 = 4U;
	uint32_t x323 = 9697U;
	uint16_t x324 = 185U;
	uint32_t t67 = 552U;

	t67 = ((x321&(x322|x323))*x324);

	if (t67 != 1794685U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x325 = -1;
	static volatile int32_t x326 = 0;
	uint8_t x327 = UINT8_MAX;
	volatile int32_t t68 = 390;

	t68 = ((x325&(x326|x327))*x328);

	if (t68 != -77265) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x331 = 122431U;
	static uint64_t x332 = 3LLU;

	t69 = ((x329&(x330|x331))*x332);

	if (t69 != 18446744073558968335LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x337 = 5;
	uint8_t x338 = UINT8_MAX;
	static int64_t x339 = 104652957621LL;
	int64_t x340 = 26701LL;
	int64_t t70 = 204068LL;

	t70 = ((x337&(x338|x339))*x340);

	if (t70 != 133505LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x342 = -1;
	uint8_t x343 = 51U;
	uint32_t t71 = 648020U;

	t71 = ((x341&(x342|x343))*x344);

	if (t71 != 1932U) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x345 = INT64_MIN;
	uint64_t x346 = UINT64_MAX;
	int64_t x347 = -1LL;
	uint16_t x348 = 239U;
	volatile uint64_t t72 = 160769LLU;

	t72 = ((x345&(x346|x347))*x348);

	if (t72 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x357 = INT64_MIN;
	uint32_t x359 = 10568769U;
	volatile int64_t t73 = 12LL;

	t73 = ((x357&(x358|x359))*x360);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x365 = 83454955249736LLU;
	int32_t x367 = -14;
	static int32_t x368 = INT32_MAX;
	uint64_t t74 = 32532113552811955LLU;

	t74 = ((x365&(x366|x367))*x368);

	if (t74 != 8032983836567117752LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x370 = INT8_MIN;
	static int32_t x371 = -1;
	int32_t t75 = 6;

	t75 = ((x369&(x370|x371))*x372);

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x373 = 24U;
	int8_t x374 = INT8_MIN;
	uint32_t x376 = 4U;
	static volatile uint32_t t76 = 466U;

	t76 = ((x373&(x374|x375))*x376);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = INT16_MAX;
	volatile uint8_t x387 = 0U;

	t77 = ((x385&(x386|x387))*x388);

	if (t77 != 23174400) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x389 = -1;
	volatile int64_t x390 = -1566877313291LL;
	volatile int64_t x391 = -46964664185519LL;
	volatile uint16_t x392 = 149U;
	volatile int64_t t78 = -1LL;

	t78 = ((x389&(x390|x391))*x392);

	if (t78 != -23558477751911LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x393 = INT16_MAX;
	int8_t x395 = INT8_MAX;
	static uint64_t t79 = 10051591002637400LLU;

	t79 = ((x393&(x394|x395))*x396);

	if (t79 != 18446744073709545217LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x405 = INT32_MIN;
	int8_t x406 = INT8_MIN;
	int64_t x407 = INT64_MIN;
	volatile int16_t x408 = -1;
	static int64_t t80 = 128596939034LL;

	t80 = ((x405&(x406|x407))*x408);

	if (t80 != 2147483648LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x417 = INT16_MIN;
	static int16_t x418 = -1;
	int16_t x419 = 2917;
	int32_t t81 = -178118;

	t81 = ((x417&(x418|x419))*x420);

	if (t81 != -4161536) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x421 = UINT16_MAX;
	int8_t x422 = 48;
	int32_t x423 = INT32_MIN;
	int8_t x424 = INT8_MIN;
	int32_t t82 = -35;

	t82 = ((x421&(x422|x423))*x424);

	if (t82 != -6144) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x427 = 127414603U;
	int16_t x428 = 2445;

	t83 = ((x425&(x426|x427))*x428);

	if (t83 != 750615LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x429 = INT32_MIN;
	int64_t x431 = -859543733024LL;
	int64_t x432 = -1LL;
	volatile int64_t t84 = -129292542706LL;

	t84 = ((x429&(x430|x431))*x432);

	if (t84 != 861140942848LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x433 = INT16_MIN;
	static uint64_t x436 = UINT64_MAX;
	uint64_t t85 = 90045521901271LLU;

	t85 = ((x433&(x434|x435))*x436);

	if (t85 != 32768LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x437 = 2;
	static volatile int32_t x438 = INT32_MIN;
	int8_t x440 = INT8_MIN;
	int32_t t86 = 7;

	t86 = ((x437&(x438|x439))*x440);

	if (t86 != -256) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x441 = 30U;
	int64_t x442 = INT64_MIN;
	static volatile int16_t x444 = -203;
	volatile int64_t t87 = 114LL;

	t87 = ((x441&(x442|x443))*x444);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x445 = -1;
	int8_t x446 = INT8_MIN;
	volatile int32_t t88 = 257283794;

	t88 = ((x445&(x446|x447))*x448);

	if (t88 != 900927) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x449 = 157LLU;
	volatile int64_t x450 = INT64_MAX;
	int16_t x451 = -1;

	t89 = ((x449&(x450|x451))*x452);

	if (t89 != 314LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x457 = INT64_MIN;
	uint8_t x458 = 1U;
	int8_t x459 = INT8_MAX;
	int16_t x460 = -1;
	int64_t t90 = -3310573672LL;

	t90 = ((x457&(x458|x459))*x460);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t t91 = 6620010104078LLU;

	t91 = ((x461&(x462|x463))*x464);

	if (t91 != 18446744073707421696LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x465 = 233U;
	int32_t x466 = INT32_MAX;
	int16_t x467 = INT16_MAX;
	int64_t x468 = 0LL;
	volatile int64_t t92 = 69LL;

	t92 = ((x465&(x466|x467))*x468);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x471 = -1;
	static uint16_t x472 = 2991U;

	t93 = ((x469&(x470|x471))*x472);

	if (t93 != -77766) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x479 = UINT16_MAX;
	int8_t x480 = -31;
	volatile int32_t t94 = -117;

	t94 = ((x477&(x478|x479))*x480);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x481 = 26U;
	volatile uint16_t x482 = UINT16_MAX;
	volatile int64_t x483 = 14980941990036853LL;
	volatile uint16_t x484 = 8210U;
	volatile int64_t t95 = 109403378780285226LL;

	t95 = ((x481&(x482|x483))*x484);

	if (t95 != 213460LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x485 = UINT8_MAX;
	int64_t x488 = 145LL;
	volatile int64_t t96 = -1199026104006LL;

	t96 = ((x485&(x486|x487))*x488);

	if (t96 != 36975LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x489 = 1;
	int8_t x490 = 9;
	int32_t x491 = INT32_MIN;
	int32_t x492 = INT32_MAX;
	volatile int32_t t97 = INT32_MAX;

	t97 = ((x489&(x490|x491))*x492);

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x493 = INT16_MIN;
	static uint64_t x494 = UINT64_MAX;
	uint32_t x496 = 120616892U;
	volatile uint64_t t98 = 36LLU;

	t98 = ((x493&(x494|x495))*x496);

	if (t98 != 18446740121335234560LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x497 = INT16_MIN;
	int64_t x498 = 12972901365046LL;
	int8_t x499 = INT8_MIN;
	static volatile uint64_t x500 = 3311646026LLU;
	static uint64_t t99 = 20582444588LLU;

	t99 = ((x497&(x498|x499))*x500);

	if (t99 != 18446635557692571648LLU) { NG(); } else { ; }
	
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

