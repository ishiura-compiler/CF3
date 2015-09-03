#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x2 = UINT8_MAX;
uint64_t x5 = UINT64_MAX;
uint16_t x7 = 9U;
int16_t x14 = -1;
volatile int16_t x27 = INT16_MIN;
int64_t x33 = -1LL;
uint32_t x34 = 1U;
volatile int64_t t6 = 655818692676570LL;
uint64_t x39 = 60LLU;
static int16_t x41 = -571;
int32_t x42 = -8;
int64_t t8 = INT64_MAX;
int8_t x47 = -1;
static uint64_t x48 = 822821033LLU;
int32_t x53 = -1;
static int32_t x55 = -398953;
static volatile int8_t x57 = INT8_MAX;
int8_t x59 = 25;
volatile uint32_t x66 = 963494U;
int8_t x67 = INT8_MIN;
static uint16_t x73 = 40U;
static int32_t x80 = -1;
uint64_t x87 = 38947084720LLU;
static volatile uint64_t t20 = 976580LLU;
uint8_t x110 = 1U;
int32_t x112 = INT32_MAX;
uint32_t x117 = 165416U;
uint32_t x118 = 2266633U;
static volatile int16_t x119 = -1;
static volatile uint64_t t25 = 1949737LLU;
uint32_t x122 = 29786U;
uint16_t x132 = UINT16_MAX;
uint32_t t27 = 28024244U;
volatile int16_t x133 = INT16_MAX;
volatile int32_t x138 = INT32_MAX;
uint8_t x141 = 1U;
uint8_t x147 = 0U;
volatile uint32_t t31 = 53505423U;
uint64_t x155 = 12458242LLU;
volatile int32_t t33 = 3;
volatile uint32_t t34 = 833692U;
volatile uint64_t x167 = 15466541LLU;
int8_t x168 = INT8_MAX;
uint64_t t35 = 6LLU;
static volatile uint64_t t36 = 440068785905266006LLU;
int8_t x176 = -1;
static volatile uint64_t t37 = UINT64_MAX;
int16_t x177 = INT16_MIN;
int8_t x178 = 8;
uint16_t x179 = 926U;
uint32_t x180 = 11016642U;
volatile uint64_t x201 = 350LLU;
uint32_t x213 = 261U;
int16_t x223 = -2;
int8_t x227 = INT8_MIN;
int8_t x229 = INT8_MIN;
int32_t x234 = -1;
int16_t x235 = INT16_MIN;
static int8_t x236 = -8;
int16_t x241 = -1;
static uint8_t x246 = UINT8_MAX;
uint16_t x252 = 10377U;
static volatile int64_t t54 = -6107145716733LL;
uint16_t x257 = UINT16_MAX;
uint16_t x262 = UINT16_MAX;
int64_t x271 = 1LL;
int8_t x272 = INT8_MAX;
int16_t x275 = -1646;
static int8_t x285 = -1;
static volatile uint32_t x290 = 57196U;
uint64_t x299 = UINT64_MAX;
int64_t x302 = INT64_MIN;
int32_t x303 = 32845392;
uint64_t x304 = 15732380771910LLU;
volatile uint64_t x305 = 244789596087LLU;
static volatile uint64_t t68 = UINT64_MAX;
int64_t x315 = -1LL;
uint16_t x318 = UINT16_MAX;
volatile int32_t t71 = 433015953;
volatile int64_t x326 = INT64_MIN;
volatile uint64_t x335 = 761608683393651643LLU;
uint64_t t75 = 4161763LLU;
int16_t x345 = INT16_MIN;
static volatile uint32_t t77 = UINT32_MAX;
int16_t x350 = INT16_MAX;
uint8_t x352 = 48U;
int32_t x353 = -1;
int8_t x361 = -1;
uint64_t x367 = 263990544234056LLU;
volatile uint32_t t82 = UINT32_MAX;
static volatile uint8_t x381 = 2U;
uint64_t t84 = 6152227194721LLU;
int8_t x395 = INT8_MIN;
uint64_t x406 = 50LLU;
int64_t x407 = -1LL;
int32_t t88 = 1433501;
static int16_t x414 = INT16_MIN;
int64_t x418 = -1171545229370LL;
int32_t x433 = 11;
static uint64_t t92 = 186883028LLU;
int32_t x438 = -1;
int64_t x445 = -353LL;
volatile int8_t x463 = INT8_MAX;
int16_t x471 = INT16_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile int8_t x3 = INT8_MAX;
	uint32_t x4 = 34008137U;
	static uint32_t t0 = 7U;

	t0 = ((x1*(x2&x3))|x4);

	if (t0 != 4294962377U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 41U;
	int8_t x8 = INT8_MIN;
	uint64_t t1 = 8402686278756LLU;

	t1 = ((x5*(x6&x7))|x8);

	if (t1 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int8_t x10 = INT8_MAX;
	uint32_t x11 = 13280082U;
	uint64_t x12 = 133920555LLU;
	uint64_t t2 = 14049262490160LLU;

	t2 = ((x9*(x10&x11))|x12);

	if (t2 != 4294967215LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int8_t x15 = INT8_MIN;
	int32_t x16 = 472;
	volatile int32_t t3 = -222193080;

	t3 = ((x13*(x14&x15))|x16);

	if (t3 != 4194776) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = -1;
	uint32_t x22 = 35U;
	static int8_t x23 = 1;
	static int16_t x24 = -1;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = ((x21*(x22&x23))|x24);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = 211;
	static uint64_t x26 = UINT64_MAX;
	volatile int8_t x28 = INT8_MIN;
	static uint64_t t5 = 46657040766917LLU;

	t5 = ((x25*(x26&x27))|x28);

	if (t5 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x35 = 12726U;
	uint16_t x36 = 281U;

	t6 = ((x33*(x34&x35))|x36);

	if (t6 != 281LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x37 = -9184;
	int8_t x38 = INT8_MIN;
	volatile uint8_t x40 = UINT8_MAX;
	volatile uint64_t t7 = 142998991115LLU;

	t7 = ((x37*(x38&x39))|x40);

	if (t7 != 255LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x43 = INT8_MIN;
	volatile int64_t x44 = INT64_MAX;

	t8 = ((x41*(x42&x43))|x44);

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = UINT32_MAX;
	uint32_t x46 = UINT32_MAX;
	uint64_t t9 = 508837645795LLU;

	t9 = ((x45*(x46&x47))|x48);

	if (t9 != 822821033LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = 730LL;
	uint64_t x50 = UINT64_MAX;
	static int32_t x51 = -127;
	int16_t x52 = -11187;
	uint64_t t10 = 106776496524178879LLU;

	t10 = ((x49*(x50&x51))|x52);

	if (t10 != 18446744073709540831LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x54 = -1LL;
	int8_t x56 = -4;
	int64_t t11 = -496794412LL;

	t11 = ((x53*(x54&x55))|x56);

	if (t11 != -3LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x58 = 2264U;
	uint64_t x60 = 36824721LLU;
	volatile uint64_t t12 = 138787523886357575LLU;

	t12 = ((x57*(x58&x59))|x60);

	if (t12 != 36827129LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = -8;
	volatile uint32_t x62 = UINT32_MAX;
	volatile int32_t x63 = INT32_MIN;
	static int8_t x64 = INT8_MIN;
	volatile uint32_t t13 = 1751442280U;

	t13 = ((x61*(x62&x63))|x64);

	if (t13 != 4294967168U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = -476475610LL;
	int8_t x68 = -1;
	volatile int64_t t14 = -343710124991375211LL;

	t14 = ((x65*(x66&x67))|x68);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 30535U;
	int64_t x70 = INT64_MIN;
	static uint32_t x71 = UINT32_MAX;
	int32_t x72 = INT32_MIN;
	int64_t t15 = -775060160LL;

	t15 = ((x69*(x70&x71))|x72);

	if (t15 != -2147483648LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x74 = INT32_MIN;
	int16_t x75 = INT16_MAX;
	volatile uint16_t x76 = 3U;
	int32_t t16 = 158138723;

	t16 = ((x73*(x74&x75))|x76);

	if (t16 != 3) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x77 = INT16_MAX;
	uint16_t x78 = 19U;
	static uint32_t x79 = 400218U;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = ((x77*(x78&x79))|x80);

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 93742381U;
	int32_t x82 = -19;
	uint16_t x83 = UINT16_MAX;
	int16_t x84 = -3;
	volatile uint32_t t18 = 19U;

	t18 = ((x81*(x82&x83))|x84);

	if (t18 != 4294967293U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x85 = 971006206U;
	uint32_t x86 = 2013418U;
	int8_t x88 = INT8_MIN;
	volatile uint64_t t19 = 4970978744124LLU;

	t19 = ((x85*(x86&x87))|x88);

	if (t19 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x89 = INT32_MIN;
	volatile uint32_t x90 = 295588U;
	int8_t x91 = INT8_MAX;
	uint64_t x92 = 624791LLU;

	t20 = ((x89*(x90&x91))|x92);

	if (t20 != 624791LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = 301;
	volatile int16_t x94 = INT16_MIN;
	uint64_t x95 = UINT64_MAX;
	int8_t x96 = 1;
	uint64_t t21 = 13LLU;

	t21 = ((x93*(x94&x95))|x96);

	if (t21 != 18446744073699688449LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x101 = 32779243914457160LLU;
	uint8_t x102 = 41U;
	int64_t x103 = -1LL;
	int16_t x104 = INT16_MAX;
	uint64_t t22 = 1749811923299670LLU;

	t22 = ((x101*(x102&x103))|x104);

	if (t22 != 1343949000492744703LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = 7;
	static int64_t x106 = INT64_MIN;
	int16_t x107 = 43;
	uint32_t x108 = 712064373U;
	int64_t t23 = 6757709LL;

	t23 = ((x105*(x106&x107))|x108);

	if (t23 != 712064373LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x109 = 211445LLU;
	static int64_t x111 = -2616299941LL;
	uint64_t t24 = 19250279920LLU;

	t24 = ((x109*(x110&x111))|x112);

	if (t24 != 2147483647LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x120 = 314920355308251LLU;

	t25 = ((x117*(x118&x119))|x120);

	if (t25 != 314921496291323LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MIN;
	volatile int64_t x123 = -1LL;
	int8_t x124 = -1;
	int64_t t26 = 633806LL;

	t26 = ((x121*(x122&x123))|x124);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x129 = 1237U;
	static uint8_t x130 = 0U;
	int8_t x131 = -1;

	t27 = ((x129*(x130&x131))|x132);

	if (t27 != 65535U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x134 = -1;
	volatile int16_t x135 = 0;
	volatile uint8_t x136 = 99U;
	volatile int32_t t28 = 1;

	t28 = ((x133*(x134&x135))|x136);

	if (t28 != 99) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x137 = UINT64_MAX;
	static int8_t x139 = INT8_MIN;
	volatile int32_t x140 = -1;
	uint64_t t29 = UINT64_MAX;

	t29 = ((x137*(x138&x139))|x140);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x142 = INT32_MIN;
	int8_t x143 = -1;
	uint8_t x144 = 118U;
	static volatile int32_t t30 = -478;

	t30 = ((x141*(x142&x143))|x144);

	if (t30 != -2147483530) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = INT8_MIN;
	static uint32_t x146 = 122601U;
	int8_t x148 = -14;

	t31 = ((x145*(x146&x147))|x148);

	if (t31 != 4294967282U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x153 = INT64_MIN;
	int32_t x154 = -1;
	int32_t x156 = -7696;
	uint64_t t32 = 5880273951LLU;

	t32 = ((x153*(x154&x155))|x156);

	if (t32 != 18446744073709543920LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = -1;
	uint16_t x158 = 298U;
	uint16_t x159 = UINT16_MAX;
	volatile int32_t x160 = -4115895;

	t33 = ((x157*(x158&x159))|x160);

	if (t33 != -289) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x161 = -1;
	int16_t x162 = -1;
	uint32_t x163 = 4633U;
	int32_t x164 = -56;

	t34 = ((x161*(x162&x163))|x164);

	if (t34 != 4294967279U) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x165 = -1;
	int8_t x166 = INT8_MIN;

	t35 = ((x165*(x166&x167))|x168);

	if (t35 != 18446744073694085247LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x169 = INT8_MIN;
	int64_t x170 = INT64_MAX;
	volatile uint64_t x171 = 15672564457LLU;
	int32_t x172 = 14556;

	t36 = ((x169*(x170&x171))|x172);

	if (t36 != 18446742067621313500LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x173 = 370U;
	uint32_t x174 = 2652281U;
	volatile uint64_t x175 = 1312LLU;

	t37 = ((x173*(x174&x175))|x176);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t t38 = 565757126U;

	t38 = ((x177*(x178&x179))|x180);

	if (t38 != 4294711746U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = INT32_MIN;
	uint32_t x182 = 19963U;
	volatile int16_t x183 = INT16_MIN;
	int32_t x184 = INT32_MIN;
	static volatile uint32_t t39 = 3U;

	t39 = ((x181*(x182&x183))|x184);

	if (t39 != 2147483648U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x185 = -1LL;
	static int32_t x186 = INT32_MAX;
	uint16_t x187 = 12573U;
	int32_t x188 = INT32_MIN;
	static volatile int64_t t40 = 576677LL;

	t40 = ((x185*(x186&x187))|x188);

	if (t40 != -12573LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = INT16_MIN;
	uint16_t x190 = 8U;
	int64_t x191 = 1025792215948318LL;
	int16_t x192 = 6365;
	volatile int64_t t41 = 8LL;

	t41 = ((x189*(x190&x191))|x192);

	if (t41 != -255779LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x193 = 3202581096528LLU;
	int32_t x194 = INT32_MIN;
	volatile int16_t x195 = INT16_MAX;
	uint64_t x196 = 7950LLU;
	static volatile uint64_t t42 = 1LLU;

	t42 = ((x193*(x194&x195))|x196);

	if (t42 != 7950LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x197 = -1;
	uint32_t x198 = UINT32_MAX;
	int8_t x199 = INT8_MIN;
	uint16_t x200 = 2U;
	uint32_t t43 = 1604U;

	t43 = ((x197*(x198&x199))|x200);

	if (t43 != 130U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x202 = -962675904049LL;
	uint16_t x203 = 702U;
	volatile uint16_t x204 = UINT16_MAX;
	uint64_t t44 = 4741728117818LLU;

	t44 = ((x201*(x202&x203))|x204);

	if (t44 != 65535LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x209 = 855293598U;
	int16_t x210 = INT16_MAX;
	volatile int32_t x211 = -32417950;
	int64_t x212 = -7852021LL;
	int64_t t45 = -13560163718621755LL;

	t45 = ((x209*(x210&x211))|x212);

	if (t45 != -3360129LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x214 = UINT8_MAX;
	volatile int8_t x215 = 63;
	int32_t x216 = INT32_MIN;
	volatile uint32_t t46 = 1U;

	t46 = ((x213*(x214&x215))|x216);

	if (t46 != 2147500091U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x221 = 3264779916176LLU;
	uint8_t x222 = 4U;
	int64_t x224 = INT64_MAX;
	static uint64_t t47 = 57LLU;

	t47 = ((x221*(x222&x223))|x224);

	if (t47 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x225 = 0U;
	int16_t x226 = 12406;
	volatile uint32_t x228 = 18033520U;
	volatile uint32_t t48 = 1941574U;

	t48 = ((x225*(x226&x227))|x228);

	if (t48 != 18033520U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x230 = 21583882LL;
	static int8_t x231 = INT8_MIN;
	int16_t x232 = INT16_MIN;
	static volatile int64_t t49 = 4015LL;

	t49 = ((x229*(x230&x231))|x232);

	if (t49 != -32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x233 = 568608035LLU;
	volatile uint64_t t50 = 84250LLU;

	t50 = ((x233*(x234&x235))|x236);

	if (t50 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x237 = 118995024818LLU;
	int16_t x238 = 3;
	uint8_t x239 = 0U;
	static uint64_t x240 = UINT64_MAX;
	static volatile uint64_t t51 = UINT64_MAX;

	t51 = ((x237*(x238&x239))|x240);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x242 = INT32_MIN;
	static uint16_t x243 = 77U;
	int16_t x244 = INT16_MAX;
	volatile int32_t t52 = -5425;

	t52 = ((x241*(x242&x243))|x244);

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x245 = -643201893LL;
	uint32_t x247 = UINT32_MAX;
	volatile int64_t x248 = INT64_MAX;
	static volatile int64_t t53 = -1LL;

	t53 = ((x245*(x246&x247))|x248);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x249 = INT64_MIN;
	int64_t x250 = INT64_MIN;
	int8_t x251 = INT8_MAX;

	t54 = ((x249*(x250&x251))|x252);

	if (t54 != 10377LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x253 = 9;
	static int64_t x254 = 1748979379LL;
	static uint16_t x255 = 16U;
	static int64_t x256 = -1LL;
	int64_t t55 = -117204LL;

	t55 = ((x253*(x254&x255))|x256);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x258 = -1;
	int64_t x259 = -3285178444322LL;
	int16_t x260 = 1721;
	volatile int64_t t56 = -3110254957581LL;

	t56 = ((x257*(x258&x259))|x260);

	if (t56 != -215294169348641093LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x261 = INT8_MIN;
	volatile int16_t x263 = -1;
	uint64_t x264 = UINT64_MAX;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = ((x261*(x262&x263))|x264);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x265 = 2010;
	int64_t x266 = -1LL;
	int32_t x267 = -1;
	int32_t x268 = INT32_MIN;
	int64_t t58 = 50248743790754LL;

	t58 = ((x265*(x266&x267))|x268);

	if (t58 != -2010LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x269 = -1;
	volatile int8_t x270 = INT8_MAX;
	int64_t t59 = 9316311115522049LL;

	t59 = ((x269*(x270&x271))|x272);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x273 = 0;
	uint8_t x274 = 1U;
	static int16_t x276 = 0;
	volatile int32_t t60 = -27423;

	t60 = ((x273*(x274&x275))|x276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x277 = INT16_MAX;
	static int64_t x278 = INT64_MAX;
	static uint64_t x279 = UINT64_MAX;
	uint16_t x280 = UINT16_MAX;
	static volatile uint64_t t61 = 3288833550680LLU;

	t61 = ((x277*(x278&x279))|x280);

	if (t61 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x281 = -1LL;
	int32_t x282 = -1;
	int16_t x283 = INT16_MAX;
	int64_t x284 = INT64_MAX;
	static int64_t t62 = 13LL;

	t62 = ((x281*(x282&x283))|x284);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x286 = UINT64_MAX;
	uint64_t x287 = 60LLU;
	int16_t x288 = INT16_MIN;
	uint64_t t63 = 4300685569LLU;

	t63 = ((x285*(x286&x287))|x288);

	if (t63 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x289 = UINT64_MAX;
	static int32_t x291 = -356854508;
	static int16_t x292 = INT16_MIN;
	static uint64_t t64 = 104207458258LLU;

	t64 = ((x289*(x290&x291))|x292);

	if (t64 != 18446744073709529852LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x293 = 256035193220647808LLU;
	static int32_t x294 = INT32_MIN;
	volatile uint8_t x295 = UINT8_MAX;
	uint32_t x296 = 287U;
	static uint64_t t65 = 5309874LLU;

	t65 = ((x293*(x294&x295))|x296);

	if (t65 != 287LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x297 = -1;
	int64_t x298 = -1LL;
	volatile int32_t x300 = INT32_MIN;
	static volatile uint64_t t66 = 939568LLU;

	t66 = ((x297*(x298&x299))|x300);

	if (t66 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x301 = -3420;
	uint64_t t67 = 734539709028451LLU;

	t67 = ((x301*(x302&x303))|x304);

	if (t67 != 15732380771910LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x306 = -1;
	int32_t x307 = INT32_MIN;
	int32_t x308 = -1;

	t68 = ((x305*(x306&x307))|x308);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x309 = 136625796313439599LLU;
	int32_t x310 = INT32_MIN;
	volatile uint32_t x311 = UINT32_MAX;
	uint32_t x312 = UINT32_MAX;
	uint64_t t69 = 52200136LLU;

	t69 = ((x309*(x310&x311))|x312);

	if (t69 != 879731038773837823LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x313 = -1LL;
	int64_t x314 = -1LL;
	uint16_t x316 = 3970U;
	static volatile int64_t t70 = 61657LL;

	t70 = ((x313*(x314&x315))|x316);

	if (t70 != 3971LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x317 = -1;
	static int8_t x319 = INT8_MAX;
	int16_t x320 = -1;

	t71 = ((x317*(x318&x319))|x320);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x321 = INT16_MIN;
	static int64_t x322 = INT64_MIN;
	uint32_t x323 = 133867U;
	uint64_t x324 = 108320878410LLU;
	volatile uint64_t t72 = 159LLU;

	t72 = ((x321*(x322&x323))|x324);

	if (t72 != 108320878410LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x325 = INT16_MAX;
	int8_t x327 = INT8_MAX;
	uint32_t x328 = 43771063U;
	volatile int64_t t73 = 0LL;

	t73 = ((x325*(x326&x327))|x328);

	if (t73 != 43771063LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MIN;
	uint32_t x331 = 261U;
	int8_t x332 = INT8_MIN;
	volatile uint32_t t74 = 1000038U;

	t74 = ((x329*(x330&x331))|x332);

	if (t74 != 4294967168U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x333 = UINT64_MAX;
	int64_t x334 = INT64_MIN;
	int16_t x336 = 217;

	t75 = ((x333*(x334&x335))|x336);

	if (t75 != 217LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x337 = 334542839U;
	static int32_t x338 = INT32_MAX;
	static int64_t x339 = INT64_MIN;
	int16_t x340 = -1;
	volatile int64_t t76 = -15545067115LL;

	t76 = ((x337*(x338&x339))|x340);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x346 = 13789585;
	volatile int32_t x347 = INT32_MIN;
	uint32_t x348 = UINT32_MAX;

	t77 = ((x345*(x346&x347))|x348);

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x349 = 19U;
	static uint8_t x351 = UINT8_MAX;
	static int32_t t78 = -15410881;

	t78 = ((x349*(x350&x351))|x352);

	if (t78 != 4861) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x354 = INT16_MAX;
	static int8_t x355 = -1;
	volatile int32_t x356 = -1;
	volatile int32_t t79 = -236076;

	t79 = ((x353*(x354&x355))|x356);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x362 = 12452667;
	int16_t x363 = INT16_MIN;
	static int8_t x364 = -1;
	volatile int32_t t80 = -62;

	t80 = ((x361*(x362&x363))|x364);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x365 = 1U;
	static int16_t x366 = INT16_MIN;
	int32_t x368 = -277703;
	volatile uint64_t t81 = 505623153990LLU;

	t81 = ((x365*(x366&x367))|x368);

	if (t81 != 18446744073709536057LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x369 = 60328045;
	volatile uint32_t x370 = 11503072U;
	int8_t x371 = INT8_MIN;
	int8_t x372 = -1;

	t82 = ((x369*(x370&x371))|x372);

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x382 = -10;
	volatile int16_t x383 = 9;
	volatile uint32_t x384 = 23858114U;
	uint32_t t83 = 0U;

	t83 = ((x381*(x382&x383))|x384);

	if (t83 != 23858114U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x389 = 6022LLU;
	uint32_t x390 = 3825381U;
	volatile int32_t x391 = INT32_MAX;
	int32_t x392 = INT32_MAX;

	t84 = ((x389*(x390&x391))|x392);

	if (t84 != 23622320127LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x393 = 222U;
	uint16_t x394 = UINT16_MAX;
	static int8_t x396 = 25;
	volatile int32_t t85 = -137259698;

	t85 = ((x393*(x394&x395))|x396);

	if (t85 != 14520601) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x401 = 26720319781480164LLU;
	uint64_t x402 = 9369850654931LLU;
	int64_t x403 = INT64_MAX;
	volatile int32_t x404 = -1;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = ((x401*(x402&x403))|x404);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x405 = -1;
	int16_t x408 = -1;
	uint64_t t87 = UINT64_MAX;

	t87 = ((x405*(x406&x407))|x408);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x409 = 3U;
	int16_t x410 = INT16_MIN;
	static uint16_t x411 = UINT16_MAX;
	static int16_t x412 = -1;

	t88 = ((x409*(x410&x411))|x412);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x413 = UINT16_MAX;
	int64_t x415 = -1LL;
	int32_t x416 = INT32_MIN;
	static volatile int64_t t89 = 423836468799312LL;

	t89 = ((x413*(x414&x415))|x416);

	if (t89 != -2147450880LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x417 = 0LL;
	static int32_t x419 = INT32_MIN;
	uint16_t x420 = 964U;
	static int64_t t90 = -66140LL;

	t90 = ((x417*(x418&x419))|x420);

	if (t90 != 964LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x429 = 1571903LLU;
	int32_t x430 = INT32_MIN;
	static int32_t x431 = INT32_MIN;
	volatile int16_t x432 = 61;
	uint64_t t91 = 558226156857LLU;

	t91 = ((x429*(x430&x431))|x432);

	if (t91 != 18443368437720809533LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x434 = INT8_MAX;
	volatile uint64_t x435 = UINT64_MAX;
	uint8_t x436 = 0U;

	t92 = ((x433*(x434&x435))|x436);

	if (t92 != 1397LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x437 = INT32_MIN;
	static uint64_t x439 = 18LLU;
	int16_t x440 = INT16_MIN;
	uint64_t t93 = 12995466262386502LLU;

	t93 = ((x437*(x438&x439))|x440);

	if (t93 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x446 = -11LL;
	uint16_t x447 = UINT16_MAX;
	int64_t x448 = -1LL;
	static int64_t t94 = 1639LL;

	t94 = ((x445*(x446&x447))|x448);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x453 = UINT16_MAX;
	static volatile uint16_t x454 = 2835U;
	uint16_t x455 = 0U;
	int64_t x456 = -1LL;
	int64_t t95 = 8254LL;

	t95 = ((x453*(x454&x455))|x456);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x457 = -1;
	static volatile int8_t x458 = -1;
	static uint32_t x459 = 22259U;
	static uint64_t x460 = UINT64_MAX;
	uint64_t t96 = UINT64_MAX;

	t96 = ((x457*(x458&x459))|x460);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x461 = -43464622;
	int8_t x462 = INT8_MIN;
	uint32_t x464 = 316647940U;
	volatile uint32_t t97 = 4061547U;

	t97 = ((x461*(x462&x463))|x464);

	if (t97 != 316647940U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x465 = -400706;
	int16_t x466 = INT16_MIN;
	uint64_t x467 = 91328028LLU;
	uint8_t x468 = 0U;
	static uint64_t t98 = 100941706194013LLU;

	t98 = ((x465*(x466&x467))|x468);

	if (t98 != 18446707479468113920LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x469 = -1362;
	uint64_t x470 = UINT64_MAX;
	static int64_t x472 = 415574243694961184LL;
	static uint64_t t99 = 1964162LLU;

	t99 = ((x469*(x470&x471))|x472);

	if (t99 != 18446744073667569522LLU) { NG(); } else { ; }
	
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

