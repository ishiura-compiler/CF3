#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = UINT64_MAX;
uint64_t x9 = 416013297LLU;
int16_t x10 = INT16_MAX;
int32_t x21 = INT32_MIN;
int16_t x23 = INT16_MIN;
int8_t x30 = INT8_MAX;
static int16_t x42 = INT16_MIN;
uint32_t t7 = 34U;
uint32_t x57 = 0U;
static volatile int16_t x75 = 13;
int32_t t12 = -4240010;
int64_t x78 = -1LL;
int8_t x80 = 1;
volatile uint64_t x90 = 2LLU;
int64_t x93 = 254766324841LL;
int8_t x94 = -3;
volatile int32_t x96 = INT32_MIN;
uint64_t x100 = 206388629116LLU;
int8_t x103 = INT8_MAX;
volatile int16_t x113 = -1;
static volatile int16_t x116 = INT16_MIN;
uint16_t x118 = 21U;
uint64_t x119 = 3197428710LLU;
int32_t x125 = 1971816;
static int32_t t25 = 0;
volatile int16_t x135 = INT16_MAX;
int16_t x146 = 41;
int16_t x152 = -2411;
volatile uint64_t t30 = UINT64_MAX;
volatile int8_t x160 = -1;
int16_t x166 = 83;
int64_t x171 = -7458LL;
volatile uint32_t t34 = 51937U;
volatile int64_t x180 = INT64_MAX;
int64_t x183 = -3051299685295652LL;
int64_t t36 = 254LL;
int8_t x186 = -25;
int32_t x188 = INT32_MIN;
uint16_t x190 = UINT16_MAX;
uint8_t x191 = 13U;
int64_t x192 = 48412LL;
int16_t x200 = INT16_MIN;
int16_t x201 = -1;
int16_t x202 = -1;
static uint8_t x205 = UINT8_MAX;
int64_t x207 = 122228LL;
static volatile int16_t x215 = INT16_MAX;
volatile int8_t x223 = INT8_MIN;
static volatile uint64_t t45 = 363289522LLU;
volatile int8_t x226 = 3;
int32_t x233 = INT32_MIN;
uint32_t t48 = UINT32_MAX;
static uint8_t x237 = UINT8_MAX;
static uint16_t x239 = UINT16_MAX;
volatile uint32_t t49 = UINT32_MAX;
int64_t x241 = INT64_MIN;
volatile uint64_t x245 = 6100786422LLU;
static uint32_t x252 = 4U;
int16_t x256 = INT16_MIN;
uint8_t x257 = 2U;
uint32_t x267 = 1354U;
volatile uint64_t t55 = 6LLU;
static volatile int8_t x271 = INT8_MIN;
volatile uint16_t x281 = 30U;
uint64_t x282 = 1727290LLU;
int16_t x283 = 0;
volatile uint32_t x290 = 664996U;
volatile int32_t x299 = 5629355;
volatile int32_t t64 = -1;
static int8_t x322 = 2;
uint64_t x323 = 21184LLU;
volatile int32_t t67 = -11128;
volatile uint64_t t69 = UINT64_MAX;
int16_t x338 = INT16_MIN;
uint64_t x339 = UINT64_MAX;
int8_t x341 = 3;
static uint64_t x348 = 113LLU;
static int32_t x352 = INT32_MIN;
int64_t t74 = -20278046906948LL;
volatile int64_t x368 = -857618900824370LL;
volatile int32_t t78 = -14061;
int32_t x382 = INT32_MAX;
int32_t x383 = 0;
static int32_t x388 = INT32_MAX;
static int16_t x391 = INT16_MAX;
volatile uint64_t t85 = UINT64_MAX;
int32_t x412 = -1;
static volatile int32_t t86 = 16136;
uint32_t x416 = 1U;
static uint64_t x427 = 1LLU;
int32_t x430 = 1257373;
int16_t x431 = -1;
volatile uint32_t t91 = 17610U;
int8_t x440 = -1;
static uint64_t t92 = UINT64_MAX;
uint64_t t93 = UINT64_MAX;
volatile int64_t x449 = INT64_MIN;
static int8_t x452 = INT8_MIN;
int16_t x455 = INT16_MIN;
static int8_t x463 = INT8_MAX;
int64_t x468 = INT64_MIN;
static int64_t t98 = 346168460948LL;


void f0(void) {
	uint32_t x1 = 306352567U;
	uint64_t x2 = 369951293477964894LLU;
	int8_t x3 = -1;
	static int16_t x4 = -1;

	t0 = ((x1+(x2-x3))|x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x11 = 1;
	int32_t x12 = INT32_MAX;
	static volatile uint64_t t1 = 7577LLU;

	t1 = ((x9+(x10-x11))|x12);

	if (t1 != 2147483647LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x13 = 76U;
	uint8_t x14 = 5U;
	volatile int32_t x15 = INT32_MAX;
	uint32_t x16 = UINT32_MAX;
	uint32_t t2 = UINT32_MAX;

	t2 = ((x13+(x14-x15))|x16);

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	int64_t x18 = -1353LL;
	static int16_t x19 = INT16_MIN;
	int64_t x20 = INT64_MIN;
	int64_t t3 = -14022465LL;

	t3 = ((x17+(x18-x19))|x20);

	if (t3 != -9223372036854744138LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x22 = 9LLU;
	volatile uint8_t x24 = 29U;
	uint64_t t4 = 959836181183710190LLU;

	t4 = ((x21+(x22-x23))|x24);

	if (t4 != 18446744071562100765LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = UINT8_MAX;
	uint8_t x26 = UINT8_MAX;
	int16_t x27 = 1931;
	int8_t x28 = 9;
	static int32_t t5 = 6622;

	t5 = ((x25+(x26-x27))|x28);

	if (t5 != -1413) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 0;
	uint32_t x31 = UINT32_MAX;
	int64_t x32 = INT64_MIN;
	volatile int64_t t6 = -387047624126LL;

	t6 = ((x29+(x30-x31))|x32);

	if (t6 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x41 = UINT32_MAX;
	int8_t x43 = INT8_MIN;
	int16_t x44 = 185;

	t7 = ((x41+(x42-x43))|x44);

	if (t7 != 4294934783U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = -1LL;
	int64_t x46 = 5534951LL;
	volatile int8_t x47 = INT8_MIN;
	uint8_t x48 = 49U;
	int64_t t8 = 10649658372742520LL;

	t8 = ((x45+(x46-x47))|x48);

	if (t8 != 5535095LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x58 = -1;
	static int64_t x59 = -1LL;
	uint32_t x60 = 5293661U;
	volatile int64_t t9 = -37113LL;

	t9 = ((x57+(x58-x59))|x60);

	if (t9 != 5293661LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x65 = INT64_MIN;
	int64_t x66 = INT64_MAX;
	volatile int64_t x67 = INT64_MAX;
	int8_t x68 = 0;
	volatile int64_t t10 = INT64_MIN;

	t10 = ((x65+(x66-x67))|x68);

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = INT16_MAX;
	volatile int16_t x70 = INT16_MIN;
	int64_t x71 = 903643LL;
	uint8_t x72 = UINT8_MAX;
	int64_t t11 = -9297581LL;

	t11 = ((x69+(x70-x71))|x72);

	if (t11 != -903425LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x73 = INT16_MAX;
	int32_t x74 = -1;
	int16_t x76 = 1892;

	t12 = ((x73+(x74-x75))|x76);

	if (t12 != 32757) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x77 = INT16_MIN;
	int16_t x79 = INT16_MIN;
	static volatile int64_t t13 = 97699502312294982LL;

	t13 = ((x77+(x78-x79))|x80);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x81 = -1;
	static uint64_t x82 = 3908351482LLU;
	volatile uint16_t x83 = 13U;
	volatile int64_t x84 = INT64_MIN;
	uint64_t t14 = 1LLU;

	t14 = ((x81+(x82-x83))|x84);

	if (t14 != 9223372040763127276LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x85 = 9150U;
	static uint16_t x86 = 79U;
	int8_t x87 = -1;
	static int16_t x88 = 1399;
	volatile uint32_t t15 = 8360894U;

	t15 = ((x85+(x86-x87))|x88);

	if (t15 != 9599U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = INT8_MAX;
	static int32_t x91 = INT32_MIN;
	volatile int64_t x92 = -1LL;
	static uint64_t t16 = UINT64_MAX;

	t16 = ((x89+(x90-x91))|x92);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x95 = INT8_MIN;
	volatile int64_t t17 = 352LL;

	t17 = ((x93+(x94-x95))|x96);

	if (t17 != -784229146LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x97 = -1;
	int16_t x98 = INT16_MIN;
	static int32_t x99 = 15;
	volatile uint64_t t18 = 109712203318689LLU;

	t18 = ((x97+(x98-x99))|x100);

	if (t18 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x101 = -45;
	uint32_t x102 = 4126681U;
	int8_t x104 = INT8_MIN;
	uint32_t t19 = 78U;

	t19 = ((x101+(x102-x103))|x104);

	if (t19 != 4294967213U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x105 = -1;
	int16_t x106 = 26;
	static int32_t x107 = -24607;
	volatile uint32_t x108 = 116575732U;
	uint32_t t20 = 3U;

	t20 = ((x105+(x106-x107))|x108);

	if (t20 != 116583932U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x109 = INT8_MIN;
	int64_t x110 = -59859083855248957LL;
	static int16_t x111 = -1;
	uint32_t x112 = 1281U;
	int64_t t21 = 231481555938221175LL;

	t21 = ((x109+(x110-x111))|x112);

	if (t21 != -59859083855248059LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x114 = INT8_MIN;
	static uint64_t x115 = 376715869559172LLU;
	uint64_t t22 = 76LLU;

	t22 = ((x113+(x114-x115))|x116);

	if (t22 != 18446744073709544955LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x117 = 64401236483624LLU;
	static int8_t x120 = INT8_MAX;
	uint64_t t23 = 77LLU;

	t23 = ((x117+(x118-x119))|x120);

	if (t23 != 64398039054975LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x121 = -1;
	int16_t x122 = -4662;
	uint8_t x123 = 0U;
	static int64_t x124 = 83LL;
	volatile int64_t t24 = -11LL;

	t24 = ((x121+(x122-x123))|x124);

	if (t24 != -4645LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x126 = INT16_MIN;
	int8_t x127 = INT8_MIN;
	static int32_t x128 = INT32_MIN;

	t25 = ((x125+(x126-x127))|x128);

	if (t25 != -2145544472) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = 124;
	int64_t x134 = 36LL;
	int64_t x136 = 4646246135202887LL;
	volatile int64_t t26 = 29108874707019512LL;

	t26 = ((x133+(x134-x135))|x136);

	if (t26 != -31513LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x137 = 4LLU;
	static int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MAX;
	int64_t x140 = INT64_MIN;
	volatile uint64_t t27 = 1241LLU;

	t27 = ((x137+(x138-x139))|x140);

	if (t27 != 18446744073709486085LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x145 = 9028436387576LLU;
	int8_t x147 = INT8_MIN;
	volatile int8_t x148 = INT8_MAX;
	uint64_t t28 = 1030547455372LLU;

	t28 = ((x145+(x146-x147))|x148);

	if (t28 != 9028436387839LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x149 = -1LL;
	int8_t x150 = -9;
	int64_t x151 = 8070131417LL;
	static volatile int64_t t29 = 7476347516254072LL;

	t29 = ((x149+(x150-x151))|x152);

	if (t29 != -2147LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x153 = INT64_MIN;
	uint32_t x154 = 44658U;
	static uint64_t x155 = 968470029516621428LLU;
	volatile uint64_t x156 = UINT64_MAX;

	t30 = ((x153+(x154-x155))|x156);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x157 = INT16_MAX;
	int32_t x158 = -1;
	static int32_t x159 = -1;
	volatile int32_t t31 = -178118766;

	t31 = ((x157+(x158-x159))|x160);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x165 = 3461U;
	uint64_t x167 = 26698443809960192LLU;
	int8_t x168 = -1;
	static volatile uint64_t t32 = UINT64_MAX;

	t32 = ((x165+(x166-x167))|x168);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x169 = 1376U;
	static int32_t x170 = -2;
	volatile int8_t x172 = INT8_MIN;
	volatile int64_t t33 = -1482251719059145070LL;

	t33 = ((x169+(x170-x171))|x172);

	if (t33 != -128LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x173 = -3;
	static int32_t x174 = -1;
	uint32_t x175 = 5U;
	static volatile int8_t x176 = INT8_MIN;

	t34 = ((x173+(x174-x175))|x176);

	if (t34 != 4294967287U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x177 = -1019008938826125LL;
	volatile int8_t x178 = INT8_MAX;
	volatile uint64_t x179 = UINT64_MAX;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = ((x177+(x178-x179))|x180);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x181 = INT8_MAX;
	volatile int8_t x182 = INT8_MAX;
	static uint32_t x184 = UINT32_MAX;

	t36 = ((x181+(x182-x183))|x184);

	if (t36 != 3051303680868351LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x185 = -1;
	volatile int16_t x187 = INT16_MIN;
	volatile int32_t t37 = 3;

	t37 = ((x185+(x186-x187))|x188);

	if (t37 != -2147450906) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x189 = -1;
	int64_t t38 = -437830LL;

	t38 = ((x189+(x190-x191))|x192);

	if (t38 != 65533LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x197 = -1LL;
	uint64_t x198 = 45790988LLU;
	int8_t x199 = INT8_MIN;
	static volatile uint64_t t39 = 67694484684077LLU;

	t39 = ((x197+(x198-x199))|x200);

	if (t39 != 18446744073709533067LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x203 = 32991961U;
	volatile int8_t x204 = -1;
	uint32_t t40 = UINT32_MAX;

	t40 = ((x201+(x202-x203))|x204);

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x206 = 241620U;
	int16_t x208 = INT16_MAX;
	volatile int64_t t41 = -718399236LL;

	t41 = ((x205+(x206-x207))|x208);

	if (t41 != 131071LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x209 = 1003U;
	uint64_t x210 = UINT64_MAX;
	int8_t x211 = 1;
	volatile int8_t x212 = INT8_MAX;
	uint64_t t42 = 25804106815564LLU;

	t42 = ((x209+(x210-x211))|x212);

	if (t42 != 1023LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x213 = 5U;
	uint64_t x214 = 6LLU;
	int8_t x216 = INT8_MIN;
	uint64_t t43 = 711394029669475LLU;

	t43 = ((x213+(x214-x215))|x216);

	if (t43 != 18446744073709551500LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x217 = INT32_MAX;
	uint64_t x218 = 3LLU;
	int16_t x219 = INT16_MAX;
	int16_t x220 = -1;
	volatile uint64_t t44 = UINT64_MAX;

	t44 = ((x217+(x218-x219))|x220);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x221 = INT32_MIN;
	uint64_t x222 = 27105939925498LLU;
	static volatile int16_t x224 = 2;

	t45 = ((x221+(x222-x223))|x224);

	if (t45 != 27103792441978LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x225 = INT32_MAX;
	static uint16_t x227 = 437U;
	int8_t x228 = -1;
	int32_t t46 = 8;

	t46 = ((x225+(x226-x227))|x228);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = INT32_MIN;
	static uint64_t x230 = UINT64_MAX;
	volatile uint32_t x231 = 546286378U;
	int8_t x232 = INT8_MIN;
	volatile uint64_t t47 = 4LLU;

	t47 = ((x229+(x230-x231))|x232);

	if (t47 != 18446744073709551573LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x234 = 1U;
	int32_t x235 = INT32_MIN;
	int8_t x236 = -1;

	t48 = ((x233+(x234-x235))|x236);

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x238 = UINT32_MAX;
	static volatile int8_t x240 = INT8_MIN;

	t49 = ((x237+(x238-x239))|x240);

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x242 = 114707308U;
	static uint64_t x243 = UINT64_MAX;
	int16_t x244 = INT16_MAX;
	volatile uint64_t t50 = 325055708107LLU;

	t50 = ((x241+(x242-x243))|x244);

	if (t50 != 9223372036969496575LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x246 = INT32_MIN;
	int64_t x247 = -1LL;
	int32_t x248 = INT32_MAX;
	static volatile uint64_t t51 = 285145024399LLU;

	t51 = ((x245+(x246-x247))|x248);

	if (t51 != 4294967295LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x249 = -1188LL;
	uint16_t x250 = 14U;
	volatile int64_t x251 = -1LL;
	static volatile int64_t t52 = 241328192534916LL;

	t52 = ((x249+(x250-x251))|x252);

	if (t52 != -1169LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x253 = 281408LLU;
	static volatile int16_t x254 = -1;
	uint64_t x255 = 63612719435024412LLU;
	volatile uint64_t t53 = 64413759045816LLU;

	t53 = ((x253+(x254-x255))|x256);

	if (t53 != 18446744073709536035LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x258 = UINT16_MAX;
	int8_t x259 = 42;
	volatile int8_t x260 = -1;
	volatile int32_t t54 = 384;

	t54 = ((x257+(x258-x259))|x260);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x265 = INT8_MIN;
	volatile uint64_t x266 = 25LLU;
	static uint16_t x268 = 292U;

	t55 = ((x265+(x266-x267))|x268);

	if (t55 != 18446744073709550447LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x269 = UINT64_MAX;
	volatile int16_t x270 = INT16_MAX;
	static int32_t x272 = -1;
	uint64_t t56 = UINT64_MAX;

	t56 = ((x269+(x270-x271))|x272);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x273 = 3520653;
	volatile uint8_t x274 = UINT8_MAX;
	static int8_t x275 = 3;
	int16_t x276 = INT16_MAX;
	int32_t t57 = -22522;

	t57 = ((x273+(x274-x275))|x276);

	if (t57 != 3538943) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x284 = UINT8_MAX;
	static volatile uint64_t t58 = 1465913298053192LLU;

	t58 = ((x281+(x282-x283))|x284);

	if (t58 != 1727487LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x285 = 238U;
	int64_t x286 = -1043698LL;
	volatile int64_t x287 = -5092284540121546LL;
	volatile uint8_t x288 = UINT8_MAX;
	int64_t t59 = 409658001LL;

	t59 = ((x285+(x286-x287))|x288);

	if (t59 != 5092284539078143LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x289 = INT8_MAX;
	static int64_t x291 = INT64_MAX;
	uint16_t x292 = 11U;
	volatile int64_t t60 = -5LL;

	t60 = ((x289+(x290-x291))|x292);

	if (t60 != -9223372036854110673LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x293 = INT8_MIN;
	uint32_t x294 = UINT32_MAX;
	int32_t x295 = INT32_MIN;
	int32_t x296 = -1;
	volatile uint32_t t61 = UINT32_MAX;

	t61 = ((x293+(x294-x295))|x296);

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x297 = 5382601U;
	volatile int8_t x298 = -1;
	volatile uint32_t x300 = UINT32_MAX;
	volatile uint32_t t62 = UINT32_MAX;

	t62 = ((x297+(x298-x299))|x300);

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x309 = 150;
	volatile int16_t x310 = INT16_MIN;
	uint32_t x311 = 14340U;
	static int32_t x312 = INT32_MAX;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = ((x309+(x310-x311))|x312);

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x313 = -120;
	volatile int16_t x314 = INT16_MIN;
	uint8_t x315 = 19U;
	int16_t x316 = INT16_MIN;

	t64 = ((x313+(x314-x315))|x316);

	if (t64 != -139) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x317 = 107254223524129LL;
	static uint16_t x318 = 16661U;
	int64_t x319 = -2281673575022749LL;
	uint8_t x320 = UINT8_MAX;
	volatile int64_t t65 = 547925LL;

	t65 = ((x317+(x318-x319))|x320);

	if (t65 != 2388927798563583LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x321 = 4U;
	volatile int8_t x324 = INT8_MIN;
	volatile uint64_t t66 = 9LLU;

	t66 = ((x321+(x322-x323))|x324);

	if (t66 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x325 = 31U;
	int32_t x326 = -1;
	int16_t x327 = -1;
	uint8_t x328 = 13U;

	t67 = ((x325+(x326-x327))|x328);

	if (t67 != 31) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x329 = -1;
	int8_t x330 = 6;
	int16_t x331 = INT16_MAX;
	int64_t x332 = 410135342LL;
	volatile int64_t t68 = -1121726LL;

	t68 = ((x329+(x330-x331))|x332);

	if (t68 != -21714LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x333 = -110;
	int64_t x334 = -11479655LL;
	static uint64_t x335 = 7445879LLU;
	int32_t x336 = -1;

	t69 = ((x333+(x334-x335))|x336);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x337 = UINT64_MAX;
	int8_t x340 = INT8_MIN;
	volatile uint64_t t70 = 93358794LLU;

	t70 = ((x337+(x338-x339))|x340);

	if (t70 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x342 = INT16_MAX;
	int64_t x343 = -1LL;
	volatile uint64_t x344 = 395211348319231710LLU;
	volatile uint64_t t71 = 2LLU;

	t71 = ((x341+(x342-x343))|x344);

	if (t71 != 395211348319264479LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = INT32_MAX;
	static volatile int8_t x346 = INT8_MIN;
	int32_t x347 = 301;
	uint64_t t72 = 551016744802456LLU;

	t72 = ((x345+(x346-x347))|x348);

	if (t72 != 2147483251LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x349 = -25782131695886LL;
	int16_t x350 = -15;
	uint8_t x351 = 1U;
	volatile int64_t t73 = -34061284907085LL;

	t73 = ((x349+(x350-x351))|x352);

	if (t73 != -1590501662LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x353 = INT16_MIN;
	int8_t x354 = -19;
	int8_t x355 = -1;
	int64_t x356 = -50208054268924806LL;

	t74 = ((x353+(x354-x355))|x356);

	if (t74 != -2LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x357 = UINT32_MAX;
	int16_t x358 = 0;
	static volatile int8_t x359 = -1;
	uint64_t x360 = 68401588LLU;
	volatile uint64_t t75 = 77754771691LLU;

	t75 = ((x357+(x358-x359))|x360);

	if (t75 != 68401588LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x361 = INT32_MAX;
	int64_t x362 = INT64_MIN;
	static volatile int64_t x363 = INT64_MIN;
	int8_t x364 = INT8_MIN;
	volatile int64_t t76 = -265331LL;

	t76 = ((x361+(x362-x363))|x364);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x365 = INT64_MIN;
	uint32_t x366 = UINT32_MAX;
	static int32_t x367 = INT32_MAX;
	int64_t t77 = -1LL;

	t77 = ((x365+(x366-x367))|x368);

	if (t77 != -857616753340722LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x369 = INT16_MAX;
	static uint16_t x370 = 33U;
	uint8_t x371 = UINT8_MAX;
	uint16_t x372 = UINT16_MAX;

	t78 = ((x369+(x370-x371))|x372);

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x377 = INT16_MIN;
	int64_t x378 = -31307LL;
	int32_t x379 = 1;
	int64_t x380 = -3014630214667024LL;
	int64_t t79 = -12941137688619LL;

	t79 = ((x377+(x378-x379))|x380);

	if (t79 != -2572LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x381 = INT16_MIN;
	int16_t x384 = -1;
	static volatile int32_t t80 = 18411;

	t80 = ((x381+(x382-x383))|x384);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x385 = -1;
	int64_t x386 = INT64_MAX;
	int16_t x387 = 2;
	static int64_t t81 = INT64_MAX;

	t81 = ((x385+(x386-x387))|x388);

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x389 = INT16_MAX;
	static volatile int8_t x390 = -1;
	int64_t x392 = INT64_MIN;
	volatile int64_t t82 = -467LL;

	t82 = ((x389+(x390-x391))|x392);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x397 = -1;
	static int16_t x398 = 0;
	int8_t x399 = INT8_MAX;
	int64_t x400 = -225501075291LL;
	static int64_t t83 = 85847LL;

	t83 = ((x397+(x398-x399))|x400);

	if (t83 != -91LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x401 = -2;
	static uint32_t x402 = 46141375U;
	uint64_t x403 = 2740488434LLU;
	int64_t x404 = INT64_MAX;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = ((x401+(x402-x403))|x404);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x405 = -467550LL;
	int16_t x406 = -1;
	static uint64_t x407 = 693656953104362562LLU;
	int16_t x408 = -71;

	t85 = ((x405+(x406-x407))|x408);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x409 = INT16_MIN;
	int8_t x410 = INT8_MAX;
	int8_t x411 = -1;

	t86 = ((x409+(x410-x411))|x412);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x413 = -1;
	volatile uint64_t x414 = UINT64_MAX;
	int64_t x415 = -29159827843268027LL;
	volatile uint64_t t87 = 212248507421LLU;

	t87 = ((x413+(x414-x415))|x416);

	if (t87 != 29159827843268025LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x417 = UINT16_MAX;
	int32_t x418 = 61;
	int8_t x419 = -1;
	int32_t x420 = INT32_MAX;
	int32_t t88 = INT32_MAX;

	t88 = ((x417+(x418-x419))|x420);

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x425 = INT32_MAX;
	volatile uint16_t x426 = 2U;
	int16_t x428 = INT16_MAX;
	uint64_t t89 = 55985LLU;

	t89 = ((x425+(x426-x427))|x428);

	if (t89 != 2147516415LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x429 = 14724LLU;
	int64_t x432 = INT64_MAX;
	static volatile uint64_t t90 = 99372296604506LLU;

	t90 = ((x429+(x430-x431))|x432);

	if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x433 = 15857899U;
	int16_t x434 = INT16_MIN;
	int16_t x435 = 1163;
	uint32_t x436 = 20115U;

	t91 = ((x433+(x434-x435))|x436);

	if (t91 != 15826675U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x437 = UINT64_MAX;
	uint64_t x438 = 1829LLU;
	static int16_t x439 = -1;

	t92 = ((x437+(x438-x439))|x440);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x441 = 39272LLU;
	int16_t x442 = -1;
	volatile int8_t x443 = -1;
	int8_t x444 = -1;

	t93 = ((x441+(x442-x443))|x444);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x445 = -1LL;
	volatile uint16_t x446 = 371U;
	uint8_t x447 = 1U;
	volatile int16_t x448 = INT16_MIN;
	int64_t t94 = -26263013521LL;

	t94 = ((x445+(x446-x447))|x448);

	if (t94 != -32399LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x450 = UINT64_MAX;
	int16_t x451 = -1;
	uint64_t t95 = 431LLU;

	t95 = ((x449+(x450-x451))|x452);

	if (t95 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x453 = -67;
	static int64_t x454 = INT64_MIN;
	int8_t x456 = INT8_MAX;
	volatile int64_t t96 = -4727LL;

	t96 = ((x453+(x454-x455))|x456);

	if (t96 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x461 = INT8_MIN;
	uint16_t x462 = 458U;
	volatile int64_t x464 = INT64_MIN;
	static volatile int64_t t97 = -29766543081LL;

	t97 = ((x461+(x462-x463))|x464);

	if (t97 != -9223372036854775605LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x465 = 10964382;
	int16_t x466 = INT16_MIN;
	static int64_t x467 = -7544946LL;

	t98 = ((x465+(x466-x467))|x468);

	if (t98 != -9223372036836299248LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x469 = 345829U;
	int8_t x470 = INT8_MIN;
	int32_t x471 = -34;
	int8_t x472 = INT8_MIN;
	static volatile uint32_t t99 = 41943U;

	t99 = ((x469+(x470-x471))|x472);

	if (t99 != 4294967175U) { NG(); } else { ; }
	
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

