#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -1;
volatile int64_t t1 = 15LL;
int64_t x10 = -1LL;
uint64_t t3 = 36LLU;
uint64_t x17 = 6745238LLU;
int64_t x18 = -1LL;
static uint64_t x22 = 37329150662430467LLU;
uint64_t x28 = UINT64_MAX;
static int16_t x29 = -1;
int64_t x31 = -1LL;
int8_t x35 = -1;
static int16_t x39 = 180;
int64_t x45 = INT64_MAX;
uint64_t x50 = UINT64_MAX;
static int32_t x51 = 297;
volatile uint64_t t12 = 0LLU;
int32_t x59 = INT32_MAX;
static uint64_t t15 = 119279644261434192LLU;
uint16_t x79 = 24U;
int8_t x89 = INT8_MAX;
int8_t x91 = 0;
int64_t t22 = -235609LL;
int8_t x100 = 2;
volatile int8_t x102 = -1;
volatile int16_t x103 = INT16_MIN;
static int32_t t25 = 181271959;
int16_t x109 = 12649;
volatile uint32_t t26 = 6U;
int16_t x115 = INT16_MIN;
volatile uint64_t t28 = 2345127516LLU;
volatile int8_t x130 = INT8_MAX;
int64_t x132 = -1LL;
static int32_t x139 = INT32_MAX;
volatile int32_t x140 = -4030745;
int8_t x142 = INT8_MAX;
int64_t x150 = INT64_MAX;
volatile uint64_t x151 = UINT64_MAX;
int16_t x155 = INT16_MIN;
volatile int32_t t39 = 7493906;
volatile uint64_t x170 = UINT64_MAX;
static int64_t x173 = INT64_MIN;
int8_t x179 = -1;
uint64_t x183 = 2LLU;
uint16_t x184 = UINT16_MAX;
int64_t t46 = -1795369206357LL;
int64_t x200 = INT64_MAX;
volatile uint64_t t47 = 146LLU;
uint64_t t48 = 1633505LLU;
static int64_t x205 = INT64_MIN;
static volatile int32_t x206 = INT32_MIN;
volatile int8_t x213 = -1;
int16_t x221 = INT16_MIN;
uint32_t x222 = 289442902U;
uint8_t x224 = 89U;
uint16_t x225 = 2710U;
int16_t x233 = 5;
int64_t x236 = INT64_MAX;
int64_t t55 = 13586LL;
uint8_t x244 = UINT8_MAX;
uint16_t x252 = 3U;
volatile int32_t t59 = 1551006;
volatile int8_t x261 = -1;
int64_t x268 = INT64_MIN;
volatile int8_t x274 = INT8_MIN;
int64_t x278 = 109480LL;
int16_t x288 = 0;
volatile uint8_t x289 = 7U;
volatile int16_t x295 = INT16_MIN;
uint64_t t70 = 321714806697484055LLU;
int8_t x298 = INT8_MIN;
int32_t x304 = -1;
int8_t x305 = 1;
volatile uint8_t x308 = UINT8_MAX;
uint8_t x315 = 30U;
volatile int16_t x330 = INT16_MIN;
volatile uint8_t x333 = UINT8_MAX;
int16_t x338 = INT16_MIN;
static int8_t x344 = -1;
int32_t t81 = INT32_MIN;
static volatile uint16_t x348 = UINT16_MAX;
int8_t x350 = 38;
volatile int16_t x357 = INT16_MIN;
uint32_t x360 = 4809781U;
int8_t x372 = INT8_MAX;
static uint16_t x375 = 36U;
int64_t x378 = INT64_MAX;
static uint64_t t90 = UINT64_MAX;
uint16_t x381 = 221U;
int32_t x382 = INT32_MAX;
int8_t x384 = -1;
volatile int32_t t91 = 701620709;
volatile int32_t t92 = 5629;
int64_t x391 = -5020265593406765LL;
static int8_t x394 = INT8_MIN;
int32_t x402 = 283582;
volatile int16_t x405 = INT16_MIN;
static int32_t x408 = INT32_MAX;
uint32_t t98 = 15U;
int8_t x416 = INT8_MIN;
static volatile int64_t t99 = 58806149466709891LL;


void f0(void) {
	uint16_t x1 = 33U;
	int64_t x2 = 118490LL;
	uint8_t x3 = 85U;
	int64_t t0 = -37373604671LL;

	t0 = (x1-(x2%(x3|x4)));

	if (t0 != 33LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	uint16_t x6 = 369U;
	int8_t x7 = -9;
	int64_t x8 = -1LL;

	t1 = (x5-(x6%(x7|x8)));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 115;
	static int16_t x11 = -249;
	volatile uint16_t x12 = 0U;
	volatile int64_t t2 = -13402LL;

	t2 = (x9-(x10%(x11|x12)));

	if (t2 != 116LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int8_t x14 = -2;
	static uint64_t x15 = 902121783212448481LLU;
	static uint32_t x16 = UINT32_MAX;

	t3 = (x13-(x14%(x15|x16)));

	if (t3 != 18042435712392888429LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x19 = 123322677764LL;
	uint32_t x20 = 22398817U;
	uint64_t t4 = 238840072438LLU;

	t4 = (x17-(x18%(x19|x20)));

	if (t4 != 6745239LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int16_t x23 = -2;
	int8_t x24 = INT8_MIN;
	uint64_t t5 = 919LLU;

	t5 = (x21-(x22%(x23|x24)));

	if (t5 != 18409414923047121404LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	static int64_t x26 = INT64_MAX;
	static int64_t x27 = INT64_MIN;
	volatile uint64_t t6 = 55485211580111494LLU;

	t6 = (x25-(x26%(x27|x28)));

	if (t6 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = INT32_MIN;
	int8_t x32 = -1;
	volatile int64_t t7 = -90702487050LL;

	t7 = (x29-(x30%(x31|x32)));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	static int8_t x34 = INT8_MAX;
	int16_t x36 = INT16_MAX;
	int32_t t8 = -1055;

	t8 = (x33-(x34%(x35|x36)));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -31772644;
	static int32_t x38 = -1;
	int16_t x40 = -232;
	volatile int32_t t9 = -649101;

	t9 = (x37-(x38%(x39|x40)));

	if (t9 != -31772643) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 31U;
	uint16_t x42 = UINT16_MAX;
	static volatile int32_t x43 = -44283;
	volatile int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 3956816;

	t10 = (x41-(x42%(x43|x44)));

	if (t10 != -21221) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MAX;
	static int16_t x47 = INT16_MAX;
	int64_t x48 = -1LL;
	volatile int64_t t11 = INT64_MAX;

	t11 = (x45-(x46%(x47|x48)));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = -1;
	volatile int16_t x52 = 15;

	t12 = (x49-(x50%(x51|x52)));

	if (t12 != 18446744073709551537LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = UINT8_MAX;
	uint32_t x58 = 9091U;
	uint8_t x60 = UINT8_MAX;
	uint32_t t13 = 1U;

	t13 = (x57-(x58%(x59|x60)));

	if (t13 != 4294958460U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -30807LL;
	int16_t x62 = -1;
	volatile int64_t x63 = INT64_MIN;
	static uint8_t x64 = UINT8_MAX;
	int64_t t14 = -16938536960369LL;

	t14 = (x61-(x62%(x63|x64)));

	if (t14 != -30806LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = UINT32_MAX;
	uint64_t x66 = UINT64_MAX;
	uint8_t x67 = 1U;
	int8_t x68 = INT8_MAX;

	t15 = (x65-(x66%(x67|x68)));

	if (t15 != 4294967294LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MAX;
	int8_t x70 = -1;
	static int64_t x71 = -1LL;
	volatile int8_t x72 = INT8_MAX;
	volatile int64_t t16 = -1154978428036302LL;

	t16 = (x69-(x70%(x71|x72)));

	if (t16 != 2147483647LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x73 = INT16_MAX;
	static volatile int64_t x74 = -1LL;
	volatile int32_t x75 = INT32_MIN;
	int64_t x76 = -1LL;
	volatile int64_t t17 = 13193828LL;

	t17 = (x73-(x74%(x75|x76)));

	if (t17 != 32767LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = 7404254U;
	uint16_t x78 = UINT16_MAX;
	int64_t x80 = -213271121LL;
	static volatile int64_t t18 = -132545011LL;

	t18 = (x77-(x78%(x79|x80)));

	if (t18 != 7338719LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MIN;
	volatile uint32_t x82 = UINT32_MAX;
	static uint16_t x83 = 0U;
	int32_t x84 = INT32_MAX;
	uint32_t t19 = 5U;

	t19 = (x81-(x82%(x83|x84)));

	if (t19 != 4294967167U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = 36648454;
	static int8_t x86 = INT8_MIN;
	uint16_t x87 = UINT16_MAX;
	int32_t x88 = INT32_MAX;
	volatile int32_t t20 = -38373934;

	t20 = (x85-(x86%(x87|x88)));

	if (t20 != 36648582) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x90 = 3U;
	volatile int32_t x92 = -1;
	volatile int32_t t21 = -176;

	t21 = (x89-(x90%(x91|x92)));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x93 = -1LL;
	int16_t x94 = INT16_MIN;
	int32_t x95 = INT32_MIN;
	volatile int8_t x96 = -1;

	t22 = (x93-(x94%(x95|x96)));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = UINT32_MAX;
	static int64_t x98 = 50078415LL;
	int32_t x99 = -3581;
	int64_t t23 = -3825661775517220LL;

	t23 = (x97-(x98%(x99|x100)));

	if (t23 != 4294965584LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x101 = -1;
	uint8_t x104 = 15U;
	int32_t t24 = -501386158;

	t24 = (x101-(x102%(x103|x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = -1;
	int32_t x106 = INT32_MIN;
	volatile int8_t x107 = -11;
	int8_t x108 = 1;

	t25 = (x105-(x106%(x107|x108)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x110 = -1;
	static uint8_t x111 = 0U;
	uint32_t x112 = 82U;

	t26 = (x109-(x110%(x111|x112)));

	if (t26 != 12572U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x113 = UINT16_MAX;
	static int64_t x114 = -20223LL;
	int64_t x116 = -1LL;
	int64_t t27 = 111153LL;

	t27 = (x113-(x114%(x115|x116)));

	if (t27 != 65535LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = UINT64_MAX;
	int64_t x118 = INT64_MIN;
	uint32_t x119 = UINT32_MAX;
	volatile uint32_t x120 = 13U;

	t28 = (x117-(x118%(x119|x120)));

	if (t28 != 2147483647LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = 5U;
	int64_t x122 = INT64_MIN;
	uint32_t x123 = 200754U;
	uint16_t x124 = UINT16_MAX;
	volatile int64_t t29 = -37536LL;

	t29 = (x121-(x122%(x123|x124)));

	if (t29 != 517LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x125 = INT16_MAX;
	uint8_t x126 = 0U;
	int32_t x127 = 1;
	uint64_t x128 = UINT64_MAX;
	uint64_t t30 = 2990976790523417LLU;

	t30 = (x125-(x126%(x127|x128)));

	if (t30 != 32767LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x129 = UINT64_MAX;
	static int16_t x131 = INT16_MAX;
	static volatile uint64_t t31 = UINT64_MAX;

	t31 = (x129-(x130%(x131|x132)));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = 1098995;
	int16_t x134 = 19;
	static volatile int8_t x135 = -6;
	uint64_t x136 = 37979701035642168LLU;
	volatile uint64_t t32 = 60658LLU;

	t32 = (x133-(x134%(x135|x136)));

	if (t32 != 1098976LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MIN;
	static int64_t x138 = -1LL;
	int64_t t33 = 177763140891LL;

	t33 = (x137-(x138%(x139|x140)));

	if (t33 != -32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x141 = 73U;
	static int32_t x143 = 1;
	int16_t x144 = INT16_MIN;
	volatile int32_t t34 = -4800;

	t34 = (x141-(x142%(x143|x144)));

	if (t34 != -54) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = INT32_MAX;
	static int32_t x146 = -1;
	int8_t x147 = -1;
	int8_t x148 = INT8_MAX;
	volatile int32_t t35 = INT32_MAX;

	t35 = (x145-(x146%(x147|x148)));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x149 = 53U;
	uint32_t x152 = UINT32_MAX;
	volatile uint64_t t36 = 1263491623LLU;

	t36 = (x149-(x150%(x151|x152)));

	if (t36 != 9223372036854775862LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x153 = INT16_MIN;
	int16_t x154 = INT16_MIN;
	int16_t x156 = INT16_MIN;
	static volatile int32_t t37 = -3655;

	t37 = (x153-(x154%(x155|x156)));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 7U;
	uint32_t x158 = UINT32_MAX;
	static uint32_t x159 = UINT32_MAX;
	uint32_t x160 = UINT32_MAX;
	static uint32_t t38 = 1187U;

	t38 = (x157-(x158%(x159|x160)));

	if (t38 != 7U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x161 = INT8_MAX;
	volatile int16_t x162 = INT16_MAX;
	int32_t x163 = 226750469;
	static int16_t x164 = INT16_MAX;

	t39 = (x161-(x162%(x163|x164)));

	if (t39 != -32640) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x165 = 296676990U;
	uint32_t x166 = UINT32_MAX;
	volatile int32_t x167 = INT32_MIN;
	static volatile uint16_t x168 = UINT16_MAX;
	uint32_t t40 = 433U;

	t40 = (x165-(x166%(x167|x168)));

	if (t40 != 2444226174U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x169 = INT16_MIN;
	uint16_t x171 = 16277U;
	uint8_t x172 = UINT8_MAX;
	volatile uint64_t t41 = 203569555LLU;

	t41 = (x169-(x170%(x171|x172)));

	if (t41 != 18446744073709518593LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x174 = 51734;
	int32_t x175 = -7721;
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t42 = 32915920585LLU;

	t42 = (x173-(x174%(x175|x176)));

	if (t42 != 9223372036854724074LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MIN;
	uint16_t x178 = 21U;
	int64_t x180 = INT64_MIN;
	int64_t t43 = -16324523154013536LL;

	t43 = (x177-(x178%(x179|x180)));

	if (t43 != -128LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = 36445305515266LLU;
	static int64_t x182 = INT64_MAX;
	uint64_t t44 = 11015097103971LLU;

	t44 = (x181-(x182%(x183|x184)));

	if (t44 != 36445305482499LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x185 = 83184LLU;
	uint16_t x186 = 838U;
	int32_t x187 = INT32_MIN;
	int8_t x188 = INT8_MIN;
	volatile uint64_t t45 = 279965118962295454LLU;

	t45 = (x185-(x186%(x187|x188)));

	if (t45 != 83114LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = -2799098;
	uint8_t x194 = 0U;
	volatile int64_t x195 = -1LL;
	int8_t x196 = INT8_MIN;

	t46 = (x193-(x194%(x195|x196)));

	if (t46 != -2799098LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x197 = 8LLU;
	uint8_t x198 = 4U;
	int8_t x199 = INT8_MAX;

	t47 = (x197-(x198%(x199|x200)));

	if (t47 != 4LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = INT16_MIN;
	uint64_t x202 = 19LLU;
	static uint64_t x203 = 11505LLU;
	uint64_t x204 = 1LLU;

	t48 = (x201-(x202%(x203|x204)));

	if (t48 != 18446744073709518829LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x207 = 0U;
	int8_t x208 = INT8_MIN;
	int64_t t49 = INT64_MIN;

	t49 = (x205-(x206%(x207|x208)));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = INT8_MIN;
	int64_t x210 = 256872232685650277LL;
	static volatile int64_t x211 = INT64_MIN;
	int8_t x212 = 20;
	volatile int64_t t50 = -3803420181LL;

	t50 = (x209-(x210%(x211|x212)));

	if (t50 != -256872232685650405LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x214 = UINT8_MAX;
	static int64_t x215 = -43099408652LL;
	int32_t x216 = INT32_MAX;
	volatile int64_t t51 = -422479LL;

	t51 = (x213-(x214%(x215|x216)));

	if (t51 != -256LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = 0;
	int8_t x218 = INT8_MIN;
	int64_t x219 = 467108LL;
	int16_t x220 = INT16_MIN;
	static int64_t t52 = 2887049048LL;

	t52 = (x217-(x218%(x219|x220)));

	if (t52 != 128LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x223 = -1;
	volatile uint32_t t53 = 25U;

	t53 = (x221-(x222%(x223|x224)));

	if (t53 != 4005491626U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x226 = UINT32_MAX;
	uint16_t x227 = 179U;
	int16_t x228 = INT16_MIN;
	volatile uint32_t t54 = 51227140U;

	t54 = (x225-(x226%(x227|x228)));

	if (t54 != 4294937418U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x234 = -3LL;
	static volatile int16_t x235 = INT16_MIN;

	t55 = (x233-(x234%(x235|x236)));

	if (t55 != 5LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x237 = UINT16_MAX;
	volatile uint16_t x238 = 1U;
	static int32_t x239 = -1;
	uint32_t x240 = UINT32_MAX;
	volatile uint32_t t56 = 18U;

	t56 = (x237-(x238%(x239|x240)));

	if (t56 != 65534U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = -1;
	int16_t x242 = -3352;
	static volatile int8_t x243 = INT8_MIN;
	static volatile int32_t t57 = -4705;

	t57 = (x241-(x242%(x243|x244)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = INT64_MAX;
	static volatile uint16_t x246 = 7U;
	int8_t x247 = INT8_MIN;
	volatile int64_t x248 = INT64_MIN;
	volatile int64_t t58 = 41LL;

	t58 = (x245-(x246%(x247|x248)));

	if (t58 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x249 = 2;
	int8_t x250 = -1;
	int16_t x251 = INT16_MAX;

	t59 = (x249-(x250%(x251|x252)));

	if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x253 = UINT32_MAX;
	volatile int16_t x254 = -58;
	int32_t x255 = 0;
	static volatile uint16_t x256 = 25U;
	uint32_t t60 = 126650221U;

	t60 = (x253-(x254%(x255|x256)));

	if (t60 != 7U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x257 = INT32_MIN;
	int32_t x258 = -1;
	uint32_t x259 = UINT32_MAX;
	int32_t x260 = INT32_MAX;
	volatile uint32_t t61 = 3561623U;

	t61 = (x257-(x258%(x259|x260)));

	if (t61 != 2147483648U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x262 = INT32_MIN;
	uint8_t x263 = 54U;
	uint8_t x264 = 0U;
	int32_t t62 = -261265015;

	t62 = (x261-(x262%(x263|x264)));

	if (t62 != 37) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x265 = 20U;
	volatile int16_t x266 = INT16_MIN;
	int32_t x267 = INT32_MIN;
	int64_t t63 = -645781068LL;

	t63 = (x265-(x266%(x267|x268)));

	if (t63 != 32788LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = INT32_MIN;
	static uint64_t x270 = UINT64_MAX;
	int64_t x271 = INT64_MIN;
	volatile int32_t x272 = -1;
	uint64_t t64 = 883741341344LLU;

	t64 = (x269-(x270%(x271|x272)));

	if (t64 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x273 = INT32_MIN;
	uint8_t x275 = 20U;
	static int8_t x276 = -1;
	volatile int32_t t65 = INT32_MIN;

	t65 = (x273-(x274%(x275|x276)));

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x277 = UINT8_MAX;
	volatile int64_t x279 = -1LL;
	uint64_t x280 = 144LLU;
	volatile uint64_t t66 = 1966274738744134LLU;

	t66 = (x277-(x278%(x279|x280)));

	if (t66 != 18446744073709442391LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x281 = -1LL;
	int8_t x282 = INT8_MIN;
	static volatile uint16_t x283 = 3U;
	volatile int16_t x284 = -1;
	static int64_t t67 = -3091380LL;

	t67 = (x281-(x282%(x283|x284)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = INT32_MIN;
	static volatile int32_t x286 = -1;
	int32_t x287 = -4766886;
	static int32_t t68 = 1;

	t68 = (x285-(x286%(x287|x288)));

	if (t68 != -2147483647) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x290 = UINT32_MAX;
	uint16_t x291 = 21U;
	int32_t x292 = 2;
	volatile uint32_t t69 = 100863U;

	t69 = (x289-(x290%(x291|x292)));

	if (t69 != 4294967292U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x293 = 2U;
	uint64_t x294 = UINT64_MAX;
	int8_t x296 = INT8_MIN;

	t70 = (x293-(x294%(x295|x296)));

	if (t70 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x297 = 1U;
	int32_t x299 = INT32_MIN;
	int16_t x300 = -1;
	volatile int32_t t71 = -7;

	t71 = (x297-(x298%(x299|x300)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = INT64_MIN;
	static int16_t x302 = INT16_MIN;
	int16_t x303 = -1;
	volatile int64_t t72 = INT64_MIN;

	t72 = (x301-(x302%(x303|x304)));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x306 = 1357U;
	int16_t x307 = INT16_MIN;
	int32_t t73 = 1;

	t73 = (x305-(x306%(x307|x308)));

	if (t73 != -1356) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = -7128;
	static int64_t x314 = -1LL;
	volatile uint8_t x316 = 1U;
	volatile int64_t t74 = -3938LL;

	t74 = (x313-(x314%(x315|x316)));

	if (t74 != -7127LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x317 = -1LL;
	int64_t x318 = -1LL;
	volatile uint8_t x319 = 1U;
	int8_t x320 = -1;
	volatile int64_t t75 = 744910027LL;

	t75 = (x317-(x318%(x319|x320)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x321 = -1;
	static uint16_t x322 = UINT16_MAX;
	static int64_t x323 = -1LL;
	volatile int64_t x324 = -3854876LL;
	int64_t t76 = -6LL;

	t76 = (x321-(x322%(x323|x324)));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = INT64_MAX;
	volatile int64_t x326 = 459536681926169392LL;
	int16_t x327 = INT16_MIN;
	int64_t x328 = INT64_MAX;
	static volatile int64_t t77 = INT64_MAX;

	t77 = (x325-(x326%(x327|x328)));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x329 = 1762092;
	int8_t x331 = INT8_MAX;
	static uint8_t x332 = UINT8_MAX;
	int32_t t78 = -15;

	t78 = (x329-(x330%(x331|x332)));

	if (t78 != 1762220) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x334 = 52;
	static int8_t x335 = -1;
	int16_t x336 = -42;
	volatile int32_t t79 = -2724;

	t79 = (x333-(x334%(x335|x336)));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = INT8_MIN;
	int32_t x339 = INT32_MAX;
	int32_t x340 = INT32_MIN;
	static volatile int32_t t80 = 955881917;

	t80 = (x337-(x338%(x339|x340)));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = INT32_MIN;
	static uint16_t x342 = 29459U;
	volatile int32_t x343 = 345787;

	t81 = (x341-(x342%(x343|x344)));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x345 = 0LLU;
	static int8_t x346 = INT8_MAX;
	volatile int32_t x347 = 6279;
	static uint64_t t82 = 5LLU;

	t82 = (x345-(x346%(x347|x348)));

	if (t82 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x349 = 62U;
	int16_t x351 = 12;
	int8_t x352 = INT8_MIN;
	int32_t t83 = -3732795;

	t83 = (x349-(x350%(x351|x352)));

	if (t83 != 24) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = -1;
	static volatile uint64_t x354 = 3399LLU;
	uint64_t x355 = UINT64_MAX;
	uint32_t x356 = 350723826U;
	uint64_t t84 = 600699766LLU;

	t84 = (x353-(x354%(x355|x356)));

	if (t84 != 18446744073709548216LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x358 = INT32_MAX;
	static volatile uint32_t x359 = UINT32_MAX;
	volatile uint32_t t85 = 1518225U;

	t85 = (x357-(x358%(x359|x360)));

	if (t85 != 2147450881U) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x361 = 55;
	uint64_t x362 = 1LLU;
	int64_t x363 = INT64_MIN;
	static int64_t x364 = INT64_MAX;
	volatile uint64_t t86 = 3966152057417628LLU;

	t86 = (x361-(x362%(x363|x364)));

	if (t86 != 54LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x365 = -1;
	int64_t x366 = INT64_MIN;
	static int32_t x367 = INT32_MIN;
	uint16_t x368 = 1853U;
	volatile int64_t t87 = 871764331961LL;

	t87 = (x365-(x366%(x367|x368)));

	if (t87 != 6867217LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x369 = 3784U;
	int32_t x370 = 1;
	uint16_t x371 = 1328U;
	int32_t t88 = 7745474;

	t88 = (x369-(x370%(x371|x372)));

	if (t88 != 3783) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x373 = INT32_MIN;
	uint64_t x374 = 532155210231253LLU;
	uint64_t x376 = UINT64_MAX;
	volatile uint64_t t89 = 7050548296LLU;

	t89 = (x373-(x374%(x375|x376)));

	if (t89 != 18446211916351836715LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x377 = UINT64_MAX;
	static int64_t x379 = 3478720688374905LL;
	static int16_t x380 = -55;

	t90 = (x377-(x378%(x379|x380)));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x383 = -243;

	t91 = (x381-(x382%(x383|x384)));

	if (t91 != 221) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x385 = 31U;
	int16_t x386 = -1;
	uint16_t x387 = 1U;
	int8_t x388 = -1;

	t92 = (x385-(x386%(x387|x388)));

	if (t92 != 31) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = INT16_MAX;
	static volatile int64_t x390 = INT64_MIN;
	uint64_t x392 = 1019086822650061642LLU;
	uint64_t t93 = 841617891065021LLU;

	t93 = (x389-(x390%(x391|x392)));

	if (t93 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x393 = INT16_MAX;
	int16_t x395 = INT16_MIN;
	int16_t x396 = 3;
	int32_t t94 = 9;

	t94 = (x393-(x394%(x395|x396)));

	if (t94 != 32895) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = -1LL;
	volatile uint32_t x398 = UINT32_MAX;
	volatile uint8_t x399 = UINT8_MAX;
	volatile uint8_t x400 = UINT8_MAX;
	volatile int64_t t95 = -10975004918363LL;

	t95 = (x397-(x398%(x399|x400)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x401 = 19U;
	int8_t x403 = 6;
	volatile uint64_t x404 = UINT64_MAX;
	uint64_t t96 = 7839LLU;

	t96 = (x401-(x402%(x403|x404)));

	if (t96 != 18446744073709268053LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x406 = 574LLU;
	uint64_t x407 = 3LLU;
	uint64_t t97 = 12978772129LLU;

	t97 = (x405-(x406%(x407|x408)));

	if (t97 != 18446744073709518274LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x409 = INT32_MIN;
	int32_t x410 = INT32_MIN;
	static int16_t x411 = INT16_MIN;
	volatile uint32_t x412 = UINT32_MAX;

	t98 = (x409-(x410%(x411|x412)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x413 = 235120127U;
	volatile int64_t x414 = -1LL;
	uint16_t x415 = UINT16_MAX;

	t99 = (x413-(x414%(x415|x416)));

	if (t99 != 235120127LL) { NG(); } else { ; }
	
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

