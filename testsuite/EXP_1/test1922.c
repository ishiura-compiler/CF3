#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
uint32_t x12 = 70U;
int64_t t2 = 3796350035689533738LL;
static int64_t t3 = 301456524008LL;
uint64_t t4 = 97LLU;
int32_t x22 = -1625;
int32_t x27 = INT32_MIN;
int16_t x33 = INT16_MIN;
uint16_t x34 = 7U;
volatile int64_t t9 = 798400356LL;
int64_t x48 = 27156447957295582LL;
volatile uint64_t t12 = 463045134797368813LLU;
static int8_t x55 = INT8_MIN;
volatile int32_t t13 = 22811709;
volatile int64_t x58 = -1555188770029LL;
static uint64_t x59 = 7358LLU;
volatile uint64_t t14 = 115733034LLU;
static int64_t x62 = INT64_MIN;
static int64_t x63 = INT64_MAX;
int8_t x65 = INT8_MIN;
int64_t x69 = 15LL;
int16_t x71 = -1;
uint8_t x75 = 1U;
int8_t x78 = INT8_MAX;
int32_t x81 = INT32_MIN;
uint16_t x85 = 7U;
int8_t x89 = INT8_MIN;
static int32_t x95 = -29;
volatile int32_t t23 = 1;
uint64_t x104 = UINT64_MAX;
int64_t x105 = INT64_MAX;
int64_t t26 = -164LL;
static int64_t x113 = INT64_MAX;
uint64_t t28 = 27232856750787808LLU;
int32_t x125 = -67180264;
static int8_t x126 = -2;
uint8_t x127 = 1U;
int16_t x131 = -1;
volatile int32_t x143 = -7471891;
int32_t x145 = INT32_MAX;
int64_t x146 = -1LL;
uint16_t x153 = 1671U;
uint32_t x161 = 26U;
int8_t x163 = -1;
static uint32_t x170 = 2470U;
volatile int32_t x172 = 108;
int16_t x180 = -1;
int32_t t43 = 579131;
volatile int32_t t45 = -7774588;
static uint8_t x193 = UINT8_MAX;
uint64_t x194 = UINT64_MAX;
uint64_t x195 = UINT64_MAX;
static uint64_t x200 = 20769970330451LLU;
int32_t x201 = 732726;
uint32_t x202 = UINT32_MAX;
int8_t x204 = INT8_MIN;
int64_t x205 = INT64_MAX;
volatile uint64_t t53 = 183465412853522600LLU;
int8_t x222 = 23;
volatile int16_t x230 = INT16_MIN;
volatile uint64_t x232 = 21LLU;
static int16_t x235 = -1;
uint32_t x238 = 30857U;
volatile uint32_t t58 = 59U;
int32_t x244 = INT32_MIN;
uint64_t x248 = 226589910616LLU;
int8_t x250 = -1;
volatile int16_t x252 = INT16_MIN;
static int8_t x257 = INT8_MIN;
volatile int64_t t65 = -866589195995LL;
static int64_t x272 = INT64_MIN;
int64_t t66 = INT64_MIN;
int64_t x279 = 61517537LL;
int64_t x280 = INT64_MIN;
int32_t x287 = INT32_MIN;
uint64_t t70 = 3456084269989165096LLU;
uint32_t t72 = 154492U;
int64_t t73 = -29251524183475981LL;
int16_t x303 = INT16_MIN;
static int32_t x304 = INT32_MIN;
volatile int64_t t74 = 1254103LL;
volatile uint64_t x307 = UINT64_MAX;
uint32_t x314 = UINT32_MAX;
static uint16_t x323 = 5451U;
uint64_t x325 = 227LLU;
uint32_t x327 = 14089826U;
static uint8_t x335 = 120U;
uint8_t x342 = UINT8_MAX;
int8_t x349 = -5;
uint8_t x360 = 62U;
int16_t x366 = -1;
int64_t t91 = 21198938044LL;
int64_t x373 = 239736604609968LL;
static uint8_t x375 = UINT8_MAX;
static int32_t x380 = INT32_MAX;
int64_t x382 = INT64_MAX;
static int32_t x384 = -1;
static int64_t x387 = INT64_MIN;
volatile int16_t x394 = -61;
uint16_t x396 = 3U;
volatile int64_t x402 = INT64_MAX;


void f0(void) {
	uint64_t x1 = 5LLU;
	volatile uint32_t x3 = 488U;
	int64_t x4 = -1LL;
	volatile uint64_t t0 = 4522256085032LLU;

	t0 = (((x1|x2)%x3)&x4);

	if (t0 != 389LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int8_t x6 = -1;
	uint32_t x7 = UINT32_MAX;
	static int32_t x8 = INT32_MAX;
	volatile uint32_t t1 = 4906U;

	t1 = (((x5|x6)%x7)&x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 1038121878U;
	int16_t x10 = -1;
	int64_t x11 = INT64_MIN;

	t2 = (((x9|x10)%x11)&x12);

	if (t2 != 70LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int32_t x14 = INT32_MIN;
	volatile int64_t x15 = -2880958438855523721LL;
	static int8_t x16 = -1;

	t3 = (((x13|x14)%x15)&x16);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 0;
	static int32_t x18 = INT32_MIN;
	int8_t x19 = -1;
	uint64_t x20 = UINT64_MAX;

	t4 = (((x17|x18)%x19)&x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 93U;
	uint8_t x23 = 63U;
	uint16_t x24 = 0U;
	volatile int32_t t5 = 13;

	t5 = (((x21|x22)%x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	static uint32_t x26 = 186920U;
	static int8_t x28 = INT8_MIN;
	volatile int64_t t6 = -24LL;

	t6 = (((x25|x26)%x27)&x28);

	if (t6 != -2147296768LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = -43298694LL;
	static int8_t x30 = 29;
	int16_t x31 = 8632;
	int8_t x32 = INT8_MIN;
	int64_t t7 = -41459697LL;

	t7 = (((x29|x30)%x31)&x32);

	if (t7 != -640LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x35 = -1;
	static int16_t x36 = -1;
	int32_t t8 = 10282;

	t8 = (((x33|x34)%x35)&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 2697U;
	volatile int32_t x38 = -4098;
	int32_t x39 = -55;
	static int64_t x40 = -1LL;

	t9 = (((x37|x38)%x39)&x40);

	if (t9 != -27LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MAX;
	static int32_t x42 = -1;
	int64_t x43 = -14431914367761LL;
	int8_t x44 = -1;
	static int64_t t10 = 154181323556211319LL;

	t10 = (((x41|x42)%x43)&x44);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int64_t x46 = -3LL;
	int32_t x47 = INT32_MIN;
	int64_t t11 = -1LL;

	t11 = (((x45|x46)%x47)&x48);

	if (t11 != 27156447957295582LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MIN;
	uint64_t x50 = 80131140031074LLU;
	int16_t x51 = -1;
	uint32_t x52 = 8084611U;

	t12 = (((x49|x50)%x51)&x52);

	if (t12 != 8084610LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	uint16_t x54 = 1221U;
	int32_t x56 = INT32_MIN;

	t13 = (((x53|x54)%x55)&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MAX;
	volatile uint8_t x60 = UINT8_MAX;

	t14 = (((x57|x58)%x59)&x60);

	if (t14 != 105LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = INT8_MAX;
	int8_t x64 = INT8_MIN;
	volatile int64_t t15 = INT64_MIN;

	t15 = (((x61|x62)%x63)&x64);

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = INT8_MIN;
	uint32_t x67 = UINT32_MAX;
	volatile int64_t x68 = 3133879LL;
	int64_t t16 = 13155063886811LL;

	t16 = (((x65|x66)%x67)&x68);

	if (t16 != 3133824LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	uint64_t x72 = UINT64_MAX;
	uint64_t t17 = 2715628LLU;

	t17 = (((x69|x70)%x71)&x72);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x73 = 290487LLU;
	static volatile int8_t x74 = 0;
	volatile uint8_t x76 = 39U;
	static uint64_t t18 = 262778050917LLU;

	t18 = (((x73|x74)%x75)&x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	int32_t x79 = 28808754;
	volatile int32_t x80 = INT32_MIN;
	volatile int32_t t19 = 2680;

	t19 = (((x77|x78)%x79)&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 1311U;
	int16_t x83 = INT16_MIN;
	int32_t x84 = INT32_MAX;
	uint32_t t20 = 9U;

	t20 = (((x81|x82)%x83)&x84);

	if (t20 != 1311U) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x86 = UINT64_MAX;
	int16_t x87 = INT16_MIN;
	int64_t x88 = INT64_MIN;
	uint64_t t21 = 1033242LLU;

	t21 = (((x85|x86)%x87)&x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = -1;
	int32_t x91 = INT32_MIN;
	int8_t x92 = INT8_MIN;
	int32_t t22 = 5759493;

	t22 = (((x89|x90)%x91)&x92);

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 5028;
	int8_t x94 = INT8_MIN;
	static int16_t x96 = -1;

	t23 = (((x93|x94)%x95)&x96);

	if (t23 != -5) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	uint16_t x98 = UINT16_MAX;
	uint8_t x99 = 3U;
	int32_t x100 = INT32_MIN;
	int32_t t24 = -1562;

	t24 = (((x97|x98)%x99)&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	volatile uint64_t x102 = 97460585887449555LLU;
	int64_t x103 = -220482597389375LL;
	volatile uint64_t t25 = 2038372601841LLU;

	t25 = (((x101|x102)%x103)&x104);

	if (t25 != 220482597389374LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x106 = -1;
	int8_t x107 = 1;
	int8_t x108 = -1;

	t26 = (((x105|x106)%x107)&x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	volatile int8_t x110 = INT8_MAX;
	int64_t x111 = INT64_MIN;
	int32_t x112 = -25511525;
	int64_t t27 = 2920LL;

	t27 = (((x109|x110)%x111)&x112);

	if (t27 != -25511525LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = -1;
	uint64_t x115 = UINT64_MAX;
	static uint64_t x116 = 1LLU;

	t28 = (((x113|x114)%x115)&x116);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 3966983;
	static volatile uint8_t x118 = UINT8_MAX;
	int64_t x119 = INT64_MIN;
	int8_t x120 = -1;
	int64_t t29 = 315133LL;

	t29 = (((x117|x118)%x119)&x120);

	if (t29 != 3967231LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 883U;
	int16_t x122 = -1;
	volatile int64_t x123 = INT64_MAX;
	uint8_t x124 = 7U;
	volatile int64_t t30 = -76125891021491LL;

	t30 = (((x121|x122)%x123)&x124);

	if (t30 != 7LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x128 = UINT64_MAX;
	static uint64_t t31 = 811118142343LLU;

	t31 = (((x125|x126)%x127)&x128);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = 1;
	int8_t x130 = INT8_MIN;
	volatile int16_t x132 = INT16_MIN;
	int32_t t32 = -41;

	t32 = (((x129|x130)%x131)&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 4;
	int8_t x134 = INT8_MAX;
	uint32_t x135 = 4675U;
	static uint8_t x136 = 25U;
	uint32_t t33 = 506430U;

	t33 = (((x133|x134)%x135)&x136);

	if (t33 != 25U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 287U;
	int64_t x142 = 38595LL;
	uint32_t x144 = UINT32_MAX;
	static volatile int64_t t34 = -4408LL;

	t34 = (((x141|x142)%x143)&x144);

	if (t34 != 38879LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x147 = -232957LL;
	static int8_t x148 = -13;
	static volatile int64_t t35 = -127184712LL;

	t35 = (((x145|x146)%x147)&x148);

	if (t35 != -13LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x149 = UINT64_MAX;
	int64_t x150 = INT64_MIN;
	volatile int16_t x151 = INT16_MIN;
	static volatile int32_t x152 = -846;
	volatile uint64_t t36 = 1192394LLU;

	t36 = (((x149|x150)%x151)&x152);

	if (t36 != 31922LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x154 = 5106823U;
	uint64_t x155 = 10867106292805LLU;
	uint64_t x156 = 4946619LLU;
	uint64_t t37 = 381884257LLU;

	t37 = (((x153|x154)%x155)&x156);

	if (t37 != 4811395LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x157 = 451U;
	volatile uint16_t x158 = UINT16_MAX;
	int8_t x159 = -1;
	volatile uint8_t x160 = 1U;
	volatile int32_t t38 = -202421695;

	t38 = (((x157|x158)%x159)&x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x162 = UINT8_MAX;
	static uint16_t x164 = 45U;
	uint32_t t39 = 1U;

	t39 = (((x161|x162)%x163)&x164);

	if (t39 != 45U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x165 = UINT32_MAX;
	int8_t x166 = INT8_MAX;
	int64_t x167 = INT64_MIN;
	volatile int8_t x168 = INT8_MIN;
	volatile int64_t t40 = -1258862901LL;

	t40 = (((x165|x166)%x167)&x168);

	if (t40 != 4294967168LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x169 = -1LL;
	volatile int16_t x171 = 3389;
	volatile int64_t t41 = -2304169578408286334LL;

	t41 = (((x169|x170)%x171)&x172);

	if (t41 != 108LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MAX;
	int16_t x174 = 25;
	int64_t x175 = INT64_MAX;
	int16_t x176 = 1;
	volatile int64_t t42 = 95932389666623749LL;

	t42 = (((x173|x174)%x175)&x176);

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x177 = 5U;
	static int32_t x178 = -1;
	int8_t x179 = INT8_MIN;

	t43 = (((x177|x178)%x179)&x180);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x181 = 1;
	int8_t x182 = -1;
	uint32_t x183 = 14185U;
	int8_t x184 = 1;
	uint32_t t44 = 2U;

	t44 = (((x181|x182)%x183)&x184);

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = 8U;
	volatile int8_t x186 = INT8_MIN;
	volatile uint16_t x187 = UINT16_MAX;
	uint16_t x188 = 3U;

	t45 = (((x185|x186)%x187)&x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = -1;
	static int32_t x190 = 1;
	volatile uint64_t x191 = 1LLU;
	uint64_t x192 = 2717LLU;
	volatile uint64_t t46 = 499874815LLU;

	t46 = (((x189|x190)%x191)&x192);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x196 = 11LLU;
	volatile uint64_t t47 = 2936666276LLU;

	t47 = (((x193|x194)%x195)&x196);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x197 = 1U;
	int16_t x198 = -1;
	volatile int8_t x199 = -53;
	uint64_t t48 = 2142257541110LLU;

	t48 = (((x197|x198)%x199)&x200);

	if (t48 != 20769970330451LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x203 = 2U;
	volatile uint32_t t49 = 4455903U;

	t49 = (((x201|x202)%x203)&x204);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x206 = 6796199951545310LLU;
	uint32_t x207 = 103U;
	int8_t x208 = INT8_MIN;
	volatile uint64_t t50 = 4471051733656510574LLU;

	t50 = (((x205|x206)%x207)&x208);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = INT8_MIN;
	volatile int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MIN;
	int64_t x212 = INT64_MAX;
	int64_t t51 = 844099LL;

	t51 = (((x209|x210)%x211)&x212);

	if (t51 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x213 = INT16_MIN;
	int16_t x214 = -1;
	static uint16_t x215 = 5U;
	int64_t x216 = INT64_MAX;
	volatile int64_t t52 = INT64_MAX;

	t52 = (((x213|x214)%x215)&x216);

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x217 = 1926791U;
	static volatile uint16_t x218 = 28U;
	volatile uint64_t x219 = 14843371318937LLU;
	volatile int16_t x220 = -1857;

	t53 = (((x217|x218)%x219)&x220);

	if (t53 != 1925279LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x221 = 0U;
	int32_t x223 = INT32_MAX;
	int32_t x224 = INT32_MAX;
	volatile int32_t t54 = -45;

	t54 = (((x221|x222)%x223)&x224);

	if (t54 != 23) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x225 = 42U;
	volatile int16_t x226 = 2674;
	int8_t x227 = -31;
	static int16_t x228 = INT16_MAX;
	volatile int32_t t55 = -34;

	t55 = (((x225|x226)%x227)&x228);

	if (t55 != 16) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x229 = UINT64_MAX;
	int8_t x231 = INT8_MIN;
	volatile uint64_t t56 = 5339431934LLU;

	t56 = (((x229|x230)%x231)&x232);

	if (t56 != 21LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x233 = -158087;
	volatile int16_t x234 = -114;
	volatile int16_t x236 = INT16_MIN;
	static volatile int32_t t57 = 6;

	t57 = (((x233|x234)%x235)&x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x237 = UINT8_MAX;
	uint16_t x239 = 5051U;
	static int32_t x240 = INT32_MAX;

	t58 = (((x237|x238)%x239)&x240);

	if (t58 != 669U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x241 = -358358706585LL;
	uint8_t x242 = 6U;
	uint8_t x243 = 13U;
	int64_t t59 = -4098LL;

	t59 = (((x241|x242)%x243)&x244);

	if (t59 != -2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = INT32_MIN;
	static int16_t x246 = INT16_MIN;
	int8_t x247 = INT8_MIN;
	volatile uint64_t t60 = 116218685LLU;

	t60 = (((x245|x246)%x247)&x248);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x249 = UINT16_MAX;
	int8_t x251 = 20;
	volatile int32_t t61 = 89603012;

	t61 = (((x249|x250)%x251)&x252);

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = -1;
	uint32_t x254 = 1584189567U;
	uint32_t x255 = 109112171U;
	int16_t x256 = 3261;
	volatile uint32_t t62 = 61834355U;

	t62 = (((x253|x254)%x255)&x256);

	if (t62 != 176U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x258 = -1LL;
	uint16_t x259 = UINT16_MAX;
	static int16_t x260 = -1;
	int64_t t63 = -387539426277LL;

	t63 = (((x257|x258)%x259)&x260);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = INT8_MIN;
	volatile uint64_t x262 = 2694850360245000LLU;
	volatile int64_t x263 = INT64_MIN;
	volatile int32_t x264 = -714854;
	static volatile uint64_t t64 = 1LLU;

	t64 = (((x261|x262)%x263)&x264);

	if (t64 != 9223372036854060936LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = 0;
	volatile uint32_t x266 = 1854U;
	volatile int64_t x267 = INT64_MIN;
	uint32_t x268 = UINT32_MAX;

	t65 = (((x265|x266)%x267)&x268);

	if (t65 != 1854LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = INT8_MIN;
	int8_t x270 = INT8_MAX;
	uint16_t x271 = 1829U;

	t66 = (((x269|x270)%x271)&x272);

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x273 = UINT32_MAX;
	static int16_t x274 = -30;
	int32_t x275 = 84;
	int32_t x276 = INT32_MAX;
	volatile uint32_t t67 = 36U;

	t67 = (((x273|x274)%x275)&x276);

	if (t67 != 3U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x277 = UINT16_MAX;
	volatile uint64_t x278 = 81017897LLU;
	volatile uint64_t t68 = 18698834752767LLU;

	t68 = (((x277|x278)%x279)&x280);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x281 = 3;
	uint8_t x282 = 4U;
	uint8_t x283 = 51U;
	int16_t x284 = -1;
	int32_t t69 = -690072635;

	t69 = (((x281|x282)%x283)&x284);

	if (t69 != 7) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x285 = 5678LLU;
	volatile uint32_t x286 = 432316U;
	int64_t x288 = INT64_MAX;

	t70 = (((x285|x286)%x287)&x288);

	if (t70 != 433854LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = 14;
	int64_t x290 = -1LL;
	int16_t x291 = 6;
	uint8_t x292 = UINT8_MAX;
	volatile int64_t t71 = 1398824107010730LL;

	t71 = (((x289|x290)%x291)&x292);

	if (t71 != 255LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x293 = 6646U;
	uint8_t x294 = UINT8_MAX;
	uint32_t x295 = UINT32_MAX;
	uint8_t x296 = 8U;

	t72 = (((x293|x294)%x295)&x296);

	if (t72 != 8U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = -1;
	static int32_t x298 = INT32_MAX;
	volatile int64_t x299 = 937120LL;
	static int8_t x300 = INT8_MIN;

	t73 = (((x297|x298)%x299)&x300);

	if (t73 != -128LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = INT16_MIN;
	int64_t x302 = 8285463090LL;

	t74 = (((x301|x302)%x303)&x304);

	if (t74 != -2147483648LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x305 = 0LL;
	int32_t x306 = -2;
	uint16_t x308 = UINT16_MAX;
	volatile uint64_t t75 = 3LLU;

	t75 = (((x305|x306)%x307)&x308);

	if (t75 != 65534LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = INT8_MAX;
	static int16_t x310 = -1;
	uint16_t x311 = 957U;
	int16_t x312 = 89;
	volatile int32_t t76 = -673171031;

	t76 = (((x309|x310)%x311)&x312);

	if (t76 != 89) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = INT64_MIN;
	volatile uint16_t x315 = 57U;
	int8_t x316 = -1;
	int64_t t77 = -2517546346766934LL;

	t77 = (((x313|x314)%x315)&x316);

	if (t77 != -32LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x317 = -33230961563191LL;
	volatile int32_t x318 = INT32_MIN;
	uint8_t x319 = UINT8_MAX;
	int16_t x320 = 7;
	int64_t t78 = 422334841749LL;

	t78 = (((x317|x318)%x319)&x320);

	if (t78 != 3LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x321 = INT64_MAX;
	int32_t x322 = INT32_MIN;
	int32_t x324 = -1;
	int64_t t79 = -269978804660393612LL;

	t79 = (((x321|x322)%x323)&x324);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x326 = -1;
	uint32_t x328 = UINT32_MAX;
	uint64_t t80 = 412LLU;

	t80 = (((x325|x326)%x327)&x328);

	if (t80 != 5603517LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x329 = 702031413379816LL;
	volatile uint8_t x330 = 89U;
	volatile int64_t x331 = -1LL;
	volatile int16_t x332 = INT16_MIN;
	int64_t t81 = 1763LL;

	t81 = (((x329|x330)%x331)&x332);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x333 = 13;
	uint16_t x334 = UINT16_MAX;
	uint16_t x336 = 1664U;
	int32_t t82 = -615000706;

	t82 = (((x333|x334)%x335)&x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = INT32_MIN;
	volatile uint64_t x338 = 133708318LLU;
	int32_t x339 = INT32_MIN;
	int16_t x340 = 0;
	uint64_t t83 = 14722027LLU;

	t83 = (((x337|x338)%x339)&x340);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x341 = -5;
	int64_t x343 = -1LL;
	static uint16_t x344 = UINT16_MAX;
	volatile int64_t t84 = -2LL;

	t84 = (((x341|x342)%x343)&x344);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = 1579790LL;
	volatile int16_t x346 = -1;
	static uint32_t x347 = UINT32_MAX;
	static int16_t x348 = INT16_MAX;
	volatile int64_t t85 = 53LL;

	t85 = (((x345|x346)%x347)&x348);

	if (t85 != 32767LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x350 = -1;
	uint8_t x351 = UINT8_MAX;
	int32_t x352 = INT32_MAX;
	volatile int32_t t86 = INT32_MAX;

	t86 = (((x349|x350)%x351)&x352);

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x353 = INT64_MIN;
	static uint8_t x354 = 1U;
	int16_t x355 = INT16_MIN;
	uint8_t x356 = 0U;
	volatile int64_t t87 = 58746LL;

	t87 = (((x353|x354)%x355)&x356);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x357 = INT8_MAX;
	static uint16_t x358 = UINT16_MAX;
	uint32_t x359 = 56U;
	uint32_t t88 = 7899U;

	t88 = (((x357|x358)%x359)&x360);

	if (t88 != 14U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x361 = 92LLU;
	uint8_t x362 = 11U;
	static int32_t x363 = INT32_MIN;
	static uint8_t x364 = 2U;
	volatile uint64_t t89 = 385294LLU;

	t89 = (((x361|x362)%x363)&x364);

	if (t89 != 2LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x365 = INT32_MAX;
	volatile int64_t x367 = -1LL;
	int64_t x368 = -1LL;
	volatile int64_t t90 = 939456093197566LL;

	t90 = (((x365|x366)%x367)&x368);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x369 = 1;
	int32_t x370 = 0;
	uint8_t x371 = 6U;
	volatile int64_t x372 = -47383396LL;

	t91 = (((x369|x370)%x371)&x372);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x374 = -8711172751709232LL;
	uint8_t x376 = 0U;
	int64_t t92 = 1LL;

	t92 = (((x373|x374)%x375)&x376);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x377 = 621;
	volatile int8_t x378 = INT8_MIN;
	uint32_t x379 = 14U;
	uint32_t t93 = 57U;

	t93 = (((x377|x378)%x379)&x380);

	if (t93 != 13U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x381 = INT8_MIN;
	static int16_t x383 = INT16_MIN;
	volatile int64_t t94 = 5LL;

	t94 = (((x381|x382)%x383)&x384);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x385 = -2171559638720LL;
	static uint16_t x386 = UINT16_MAX;
	uint8_t x388 = 103U;
	volatile int64_t t95 = -8159LL;

	t95 = (((x385|x386)%x387)&x388);

	if (t95 != 103LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x389 = 3;
	int64_t x390 = -13946036347LL;
	int32_t x391 = INT32_MIN;
	static int32_t x392 = -13;
	static volatile int64_t t96 = 2174949053566LL;

	t96 = (((x389|x390)%x391)&x392);

	if (t96 != -1061134461LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x393 = INT64_MAX;
	int8_t x395 = 3;
	static int64_t t97 = -137LL;

	t97 = (((x393|x394)%x395)&x396);

	if (t97 != 3LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x397 = UINT64_MAX;
	int16_t x398 = 1;
	volatile int16_t x399 = INT16_MAX;
	int32_t x400 = INT32_MAX;
	volatile uint64_t t98 = 12330440444143042LLU;

	t98 = (((x397|x398)%x399)&x400);

	if (t98 != 15LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x401 = INT32_MIN;
	int32_t x403 = INT32_MIN;
	int8_t x404 = -1;
	volatile int64_t t99 = -7896809709LL;

	t99 = (((x401|x402)%x403)&x404);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

