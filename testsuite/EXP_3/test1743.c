#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = 3624;
static volatile uint8_t x9 = 81U;
int8_t x12 = INT8_MAX;
int8_t x17 = INT8_MIN;
volatile uint16_t x18 = 5U;
uint16_t x20 = UINT16_MAX;
volatile int32_t t3 = -59039084;
int64_t x24 = 23045518877110LL;
uint32_t x30 = UINT32_MAX;
int32_t x32 = INT32_MAX;
volatile int64_t t8 = -11752468LL;
volatile int8_t x46 = -1;
uint8_t x53 = 7U;
volatile uint64_t x55 = 1226447805598061LLU;
uint32_t x56 = 2424U;
uint16_t x60 = 968U;
uint32_t x72 = 472906U;
volatile int16_t x77 = -1;
uint16_t x92 = 7053U;
int64_t x93 = 8457541202727LL;
static uint16_t x98 = 564U;
int32_t t21 = 31;
int64_t x105 = INT64_MIN;
int8_t x106 = INT8_MIN;
static int32_t x120 = 33608609;
static volatile uint64_t t25 = 55020LLU;
int8_t x122 = INT8_MAX;
volatile int64_t t27 = -8769518513359LL;
volatile int32_t x135 = INT32_MAX;
volatile uint8_t x136 = 10U;
uint16_t x137 = 0U;
volatile int64_t t31 = -114940061LL;
volatile int16_t x149 = INT16_MIN;
int8_t x152 = INT8_MAX;
volatile int32_t t33 = -7;
int16_t x154 = INT16_MIN;
uint64_t x159 = UINT64_MAX;
int16_t x165 = -1;
uint32_t x170 = 1U;
volatile int64_t x175 = -52436982675986LL;
volatile int32_t x178 = -1;
uint32_t t40 = 14U;
volatile int8_t x183 = -19;
int8_t x185 = INT8_MAX;
volatile uint64_t t42 = 8467521913339LLU;
int16_t x193 = 44;
int32_t x199 = -1;
static int8_t x200 = INT8_MAX;
volatile uint64_t x212 = 17787042LLU;
int64_t t48 = -355243LL;
volatile int64_t x217 = INT64_MAX;
volatile uint8_t x219 = UINT8_MAX;
int8_t x220 = -1;
volatile uint8_t x230 = 7U;
static volatile int32_t x234 = INT32_MIN;
static uint16_t x237 = 16279U;
int32_t x242 = INT32_MIN;
static int16_t x250 = -2;
static int64_t x253 = -581241190613546LL;
static int64_t x256 = INT64_MAX;
uint32_t x263 = 31U;
int32_t x267 = INT32_MIN;
volatile uint16_t x268 = 6938U;
uint8_t x274 = 15U;
int16_t x275 = INT16_MIN;
int64_t x286 = INT64_MIN;
int32_t x289 = INT32_MIN;
static int8_t x294 = INT8_MAX;
volatile uint32_t x297 = 1993575881U;
uint64_t t69 = 48576522107918LLU;
static int32_t x309 = 1621226;
int16_t x310 = -1616;
int16_t x312 = INT16_MAX;
int64_t x324 = -1LL;
static int32_t x337 = -3512591;
static int16_t x342 = INT16_MIN;
int32_t x343 = 17;
uint8_t x346 = 13U;
volatile int64_t t79 = 7927069LL;
uint16_t x360 = 391U;
volatile uint64_t t82 = 50506854714592LLU;
static uint16_t x364 = 1U;
uint32_t x377 = 97030250U;
volatile int64_t x378 = INT64_MAX;
int32_t x381 = INT32_MAX;
static uint64_t x388 = 611993946269LLU;
static uint64_t t91 = 169118LLU;
volatile int64_t t93 = 2181995612088LL;
int32_t x420 = -1;
static int64_t x430 = 1711LL;
int32_t x437 = INT32_MIN;
static int64_t x440 = INT64_MAX;


void f0(void) {
	int8_t x5 = -1;
	volatile uint16_t x6 = 1894U;
	int64_t x7 = INT64_MAX;
	static volatile int64_t t0 = -15460LL;

	t0 = ((x5%x6)+(x7&x8));

	if (t0 != 3623LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x10 = 1913U;
	uint32_t x11 = UINT32_MAX;
	uint32_t t1 = 7589326U;

	t1 = ((x9%x10)+(x11&x12));

	if (t1 != 208U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = INT32_MIN;
	volatile int16_t x14 = -59;
	static uint64_t x15 = UINT64_MAX;
	static int32_t x16 = -649828;
	volatile uint64_t t2 = 1491238128503312LLU;

	t2 = ((x13%x14)+(x15&x16));

	if (t2 != 18446744073708901733LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x19 = 1663U;

	t3 = ((x17%x18)+(x19&x20));

	if (t3 != 1660) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	int8_t x22 = INT8_MIN;
	int8_t x23 = -1;
	static int64_t t4 = -848179LL;

	t4 = ((x21%x22)+(x23&x24));

	if (t4 != 23045518877237LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = -104293;
	uint32_t x26 = 230U;
	static volatile int32_t x27 = INT32_MIN;
	int64_t x28 = -1LL;
	int64_t t5 = -4566991643LL;

	t5 = ((x25%x26)+(x27&x28));

	if (t5 != -2147483555LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MAX;
	int32_t x31 = INT32_MAX;
	static uint32_t t6 = 29699U;

	t6 = ((x29%x30)+(x31&x32));

	if (t6 != 2147483774U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 35U;
	uint16_t x34 = 2332U;
	int32_t x35 = INT32_MIN;
	int16_t x36 = -6880;
	volatile uint32_t t7 = 111365461U;

	t7 = ((x33%x34)+(x35&x36));

	if (t7 != 2147483683U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -1;
	int16_t x38 = -5;
	int64_t x39 = INT64_MAX;
	static int32_t x40 = 2799;

	t8 = ((x37%x38)+(x39&x40));

	if (t8 != 2798LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = -1;
	int32_t x42 = INT32_MAX;
	int32_t x43 = INT32_MAX;
	int8_t x44 = -58;
	static int32_t t9 = 3;

	t9 = ((x41%x42)+(x43&x44));

	if (t9 != 2147483589) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = 5LL;
	volatile uint32_t x47 = 11725589U;
	volatile int64_t x48 = 993965263LL;
	volatile int64_t t10 = -1759105281LL;

	t10 = ((x45%x46)+(x47&x48));

	if (t10 != 3317765LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 7LLU;
	static int32_t x50 = -1;
	static uint32_t x51 = 5972U;
	volatile uint16_t x52 = 104U;
	volatile uint64_t t11 = 39939111LLU;

	t11 = ((x49%x50)+(x51&x52));

	if (t11 != 71LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x54 = UINT16_MAX;
	uint64_t t12 = 1608090707712LLU;

	t12 = ((x53%x54)+(x55&x56));

	if (t12 != 2415LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -1;
	int16_t x58 = 34;
	static volatile uint32_t x59 = UINT32_MAX;
	uint32_t t13 = 2197U;

	t13 = ((x57%x58)+(x59&x60));

	if (t13 != 967U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = 6;
	volatile int32_t x62 = -7037;
	volatile uint8_t x63 = 11U;
	int8_t x64 = INT8_MIN;
	volatile int32_t t14 = -8185097;

	t14 = ((x61%x62)+(x63&x64));

	if (t14 != 6) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MAX;
	volatile int32_t x66 = INT32_MIN;
	int16_t x67 = INT16_MIN;
	uint32_t x68 = 107U;
	volatile uint32_t t15 = 181012727U;

	t15 = ((x65%x66)+(x67&x68));

	if (t15 != 32767U) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x69 = -1;
	static int32_t x70 = 1295;
	uint32_t x71 = 4U;
	uint32_t t16 = UINT32_MAX;

	t16 = ((x69%x70)+(x71&x72));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x78 = 17U;
	uint32_t x79 = 3U;
	int32_t x80 = INT32_MIN;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = ((x77%x78)+(x79&x80));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x89 = -26215;
	uint8_t x90 = UINT8_MAX;
	int32_t x91 = 1635244;
	int32_t t18 = -5419555;

	t18 = ((x89%x90)+(x91&x92));

	if (t18 != 4799) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x94 = 4478;
	static int16_t x95 = -13;
	uint8_t x96 = 0U;
	int64_t t19 = -19174084570LL;

	t19 = ((x93%x94)+(x95&x96));

	if (t19 != 1731LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x97 = 9U;
	int32_t x99 = -1;
	volatile uint32_t x100 = 6507U;
	static volatile uint32_t t20 = 101398U;

	t20 = ((x97%x98)+(x99&x100));

	if (t20 != 6516U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x101 = 14U;
	int8_t x102 = -8;
	int16_t x103 = 357;
	int8_t x104 = -1;

	t21 = ((x101%x102)+(x103&x104));

	if (t21 != 363) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x107 = -153907;
	volatile int64_t x108 = 1LL;
	int64_t t22 = 44537230398LL;

	t22 = ((x105%x106)+(x107&x108));

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x109 = UINT8_MAX;
	static uint64_t x110 = UINT64_MAX;
	uint32_t x111 = 43814856U;
	static volatile int8_t x112 = -6;
	volatile uint64_t t23 = 659LLU;

	t23 = ((x109%x110)+(x111&x112));

	if (t23 != 43815111LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x113 = UINT64_MAX;
	int32_t x114 = 560307;
	int8_t x115 = -1;
	uint32_t x116 = UINT32_MAX;
	volatile uint64_t t24 = 64924843614521LLU;

	t24 = ((x113%x114)+(x115&x116));

	if (t24 != 4295249988LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = INT32_MIN;
	uint64_t x118 = UINT64_MAX;
	int64_t x119 = -1LL;

	t25 = ((x117%x118)+(x119&x120));

	if (t25 != 18446744071595676577LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = 13829741550445LL;
	int64_t x123 = -5830493LL;
	uint8_t x124 = 56U;
	int64_t t26 = -2083822747965LL;

	t26 = ((x121%x122)+(x123&x124));

	if (t26 != 84LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = 5312489298158LL;
	int8_t x126 = INT8_MIN;
	static int64_t x127 = -23594949389669LL;
	int16_t x128 = 881;

	t27 = ((x125%x126)+(x127&x128));

	if (t27 != 639LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = INT32_MIN;
	volatile int8_t x130 = 1;
	int16_t x131 = -3229;
	uint16_t x132 = 53U;
	volatile int32_t t28 = -1182396;

	t28 = ((x129%x130)+(x131&x132));

	if (t28 != 33) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = INT8_MAX;
	static volatile int16_t x134 = INT16_MIN;
	static volatile int32_t t29 = -13;

	t29 = ((x133%x134)+(x135&x136));

	if (t29 != 137) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x138 = UINT8_MAX;
	uint16_t x139 = UINT16_MAX;
	static int32_t x140 = INT32_MIN;
	int32_t t30 = 91801092;

	t30 = ((x137%x138)+(x139&x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x141 = UINT16_MAX;
	static int64_t x142 = -8426031345LL;
	static volatile uint8_t x143 = UINT8_MAX;
	int64_t x144 = INT64_MAX;

	t31 = ((x141%x142)+(x143&x144));

	if (t31 != 65790LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x145 = INT32_MIN;
	static int64_t x146 = -436435298LL;
	uint16_t x147 = UINT16_MAX;
	volatile int16_t x148 = INT16_MIN;
	volatile int64_t t32 = -41498371LL;

	t32 = ((x145%x146)+(x147&x148));

	if (t32 != -401709688LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x150 = INT8_MAX;
	int8_t x151 = -41;

	t33 = ((x149%x150)+(x151&x152));

	if (t33 != 85) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x153 = INT8_MIN;
	int64_t x155 = INT64_MIN;
	uint32_t x156 = UINT32_MAX;
	int64_t t34 = 5649879LL;

	t34 = ((x153%x154)+(x155&x156));

	if (t34 != -128LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = -1;
	uint64_t x158 = 3296245134112LLU;
	volatile int32_t x160 = INT32_MIN;
	uint64_t t35 = 4LLU;

	t35 = ((x157%x158)+(x159&x160));

	if (t35 != 389982423487LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = -116522;
	static volatile int8_t x162 = INT8_MIN;
	volatile int8_t x163 = -1;
	volatile uint16_t x164 = 957U;
	volatile int32_t t36 = 2826;

	t36 = ((x161%x162)+(x163&x164));

	if (t36 != 915) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x166 = 61775929U;
	int16_t x167 = INT16_MAX;
	int64_t x168 = -1351LL;
	volatile int64_t t37 = -4484701896479LL;

	t37 = ((x165%x166)+(x167&x168));

	if (t37 != 32459611LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x169 = 73U;
	int64_t x171 = INT64_MIN;
	volatile int32_t x172 = -16742181;
	int64_t t38 = INT64_MIN;

	t38 = ((x169%x170)+(x171&x172));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x173 = 260068212954501366LLU;
	int32_t x174 = 59643806;
	int64_t x176 = INT64_MIN;
	uint64_t t39 = 1471LLU;

	t39 = ((x173%x174)+(x175&x176));

	if (t39 != 9223372036888142226LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x177 = INT16_MAX;
	int8_t x179 = INT8_MAX;
	uint32_t x180 = UINT32_MAX;

	t40 = ((x177%x178)+(x179&x180));

	if (t40 != 127U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x181 = 393U;
	static int8_t x182 = INT8_MIN;
	int64_t x184 = INT64_MIN;
	int64_t t41 = -86306851265LL;

	t41 = ((x181%x182)+(x183&x184));

	if (t41 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x186 = -8627;
	static uint64_t x187 = UINT64_MAX;
	int8_t x188 = 0;

	t42 = ((x185%x186)+(x187&x188));

	if (t42 != 127LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x189 = UINT32_MAX;
	uint8_t x190 = 1U;
	int32_t x191 = -1;
	uint64_t x192 = 3679221059211910709LLU;
	volatile uint64_t t43 = 15900477270450880LLU;

	t43 = ((x189%x190)+(x191&x192));

	if (t43 != 3679221059211910709LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x194 = -1;
	int16_t x195 = 1;
	uint32_t x196 = 1U;
	uint32_t t44 = 1358896U;

	t44 = ((x193%x194)+(x195&x196));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = -1;
	volatile int32_t x198 = INT32_MIN;
	int32_t t45 = 0;

	t45 = ((x197%x198)+(x199&x200));

	if (t45 != 126) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = 1114793622648001964LLU;
	int8_t x202 = INT8_MIN;
	volatile int32_t x203 = INT32_MIN;
	static uint32_t x204 = 128U;
	volatile uint64_t t46 = 207906510581918964LLU;

	t46 = ((x201%x202)+(x203&x204));

	if (t46 != 1114793622648001964LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x209 = INT32_MIN;
	int64_t x210 = 22676318079LL;
	int16_t x211 = INT16_MIN;
	static volatile uint64_t t47 = 28900473337258594LLU;

	t47 = ((x209%x210)+(x211&x212));

	if (t47 != 18446744071579828224LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x213 = 12U;
	int64_t x214 = INT64_MAX;
	int32_t x215 = INT32_MIN;
	static volatile uint32_t x216 = 1028264U;

	t48 = ((x213%x214)+(x215&x216));

	if (t48 != 12LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x218 = -4331854525208970LL;
	int64_t t49 = 53090338101LL;

	t49 = ((x217%x218)+(x219&x220));

	if (t49 != 853752684878932LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x221 = 0U;
	static int8_t x222 = 1;
	int32_t x223 = -1;
	volatile uint64_t x224 = UINT64_MAX;
	uint64_t t50 = UINT64_MAX;

	t50 = ((x221%x222)+(x223&x224));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x225 = UINT32_MAX;
	int16_t x226 = INT16_MIN;
	int16_t x227 = -7110;
	uint8_t x228 = UINT8_MAX;
	uint32_t t51 = 1U;

	t51 = ((x225%x226)+(x227&x228));

	if (t51 != 32825U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x229 = UINT16_MAX;
	volatile int8_t x231 = -33;
	int16_t x232 = 6586;
	int32_t t52 = 6165932;

	t52 = ((x229%x230)+(x231&x232));

	if (t52 != 6555) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x233 = UINT32_MAX;
	int16_t x235 = INT16_MAX;
	int8_t x236 = INT8_MIN;
	uint32_t t53 = 7918350U;

	t53 = ((x233%x234)+(x235&x236));

	if (t53 != 2147516287U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x238 = INT8_MIN;
	static int16_t x239 = -1;
	static volatile uint32_t x240 = 740724628U;
	static uint32_t t54 = 16U;

	t54 = ((x237%x238)+(x239&x240));

	if (t54 != 740724651U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x241 = INT32_MAX;
	uint64_t x243 = 109LLU;
	static uint16_t x244 = UINT16_MAX;
	static uint64_t t55 = 15426LLU;

	t55 = ((x241%x242)+(x243&x244));

	if (t55 != 2147483756LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x245 = -12430732LL;
	static volatile uint8_t x246 = UINT8_MAX;
	uint8_t x247 = 14U;
	volatile int16_t x248 = 1;
	static volatile int64_t t56 = -128768891LL;

	t56 = ((x245%x246)+(x247&x248));

	if (t56 != -247LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x249 = INT32_MIN;
	int8_t x251 = INT8_MIN;
	int16_t x252 = 13;
	volatile int32_t t57 = 0;

	t57 = ((x249%x250)+(x251&x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x254 = INT64_MIN;
	uint16_t x255 = 30922U;
	volatile int64_t t58 = -1163842047004963188LL;

	t58 = ((x253%x254)+(x255&x256));

	if (t58 != -581241190582624LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x257 = INT8_MIN;
	uint32_t x258 = UINT32_MAX;
	uint16_t x259 = 199U;
	int8_t x260 = INT8_MIN;
	uint32_t t59 = 28U;

	t59 = ((x257%x258)+(x259&x260));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = INT32_MAX;
	static int8_t x262 = -1;
	uint16_t x264 = 24913U;
	static uint32_t t60 = 1U;

	t60 = ((x261%x262)+(x263&x264));

	if (t60 != 17U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = INT32_MAX;
	uint32_t x266 = 88033U;
	uint32_t t61 = 509078U;

	t61 = ((x265%x266)+(x267&x268));

	if (t61 != 6645U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = 368;
	int32_t x270 = INT32_MAX;
	static volatile int64_t x271 = INT64_MIN;
	volatile int8_t x272 = -1;
	volatile int64_t t62 = -108263LL;

	t62 = ((x269%x270)+(x271&x272));

	if (t62 != -9223372036854775440LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x273 = 87U;
	int64_t x276 = -404930060846LL;
	volatile int64_t t63 = -420026LL;

	t63 = ((x273%x274)+(x275&x276));

	if (t63 != -404930068468LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x277 = 7819;
	int16_t x278 = -1677;
	int64_t x279 = -1LL;
	int16_t x280 = -51;
	int64_t t64 = -17031LL;

	t64 = ((x277%x278)+(x279&x280));

	if (t64 != 1060LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = INT64_MIN;
	int16_t x287 = -182;
	volatile int8_t x288 = -11;
	int64_t t65 = -43243LL;

	t65 = ((x285%x286)+(x287&x288));

	if (t65 != -192LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x290 = INT32_MIN;
	int64_t x291 = -1LL;
	static int64_t x292 = INT64_MIN;
	volatile int64_t t66 = INT64_MIN;

	t66 = ((x289%x290)+(x291&x292));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x293 = INT32_MIN;
	volatile uint8_t x295 = 1U;
	uint64_t x296 = UINT64_MAX;
	static uint64_t t67 = 12LLU;

	t67 = ((x293%x294)+(x295&x296));

	if (t67 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x298 = INT16_MIN;
	int8_t x299 = -1;
	static uint32_t x300 = 31138635U;
	uint32_t t68 = 4155638U;

	t68 = ((x297%x298)+(x299&x300));

	if (t68 != 2024714516U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x301 = 252LL;
	int16_t x302 = 2631;
	uint64_t x303 = 28133786417453LLU;
	int16_t x304 = INT16_MAX;

	t69 = ((x301%x302)+(x303&x304));

	if (t69 != 31273LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x305 = UINT32_MAX;
	int8_t x306 = -55;
	int64_t x307 = INT64_MAX;
	static uint16_t x308 = 1061U;
	int64_t t70 = -67352990188324LL;

	t70 = ((x305%x306)+(x307&x308));

	if (t70 != 1115LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x311 = 25U;
	volatile int32_t t71 = -1184657;

	t71 = ((x309%x310)+(x311&x312));

	if (t71 != 403) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x313 = 1435859529797787LLU;
	uint32_t x314 = 2833855U;
	static uint64_t x315 = 94LLU;
	volatile int32_t x316 = INT32_MIN;
	static uint64_t t72 = 2777310096475399LLU;

	t72 = ((x313%x314)+(x315&x316));

	if (t72 != 2385777LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x317 = -3;
	static volatile uint32_t x318 = UINT32_MAX;
	uint64_t x319 = 2188LLU;
	int8_t x320 = -1;
	uint64_t t73 = 25LLU;

	t73 = ((x317%x318)+(x319&x320));

	if (t73 != 4294969481LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x321 = 0U;
	volatile int8_t x322 = INT8_MAX;
	int8_t x323 = INT8_MAX;
	static volatile int64_t t74 = -648655172673LL;

	t74 = ((x321%x322)+(x323&x324));

	if (t74 != 127LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = -25650484628131442LL;
	int64_t x330 = -1LL;
	static int16_t x331 = INT16_MIN;
	static int8_t x332 = 0;
	static volatile int64_t t75 = -1072504834027LL;

	t75 = ((x329%x330)+(x331&x332));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x333 = INT16_MIN;
	volatile int8_t x334 = INT8_MIN;
	int8_t x335 = INT8_MIN;
	int16_t x336 = -8023;
	int32_t t76 = 424341;

	t76 = ((x333%x334)+(x335&x336));

	if (t76 != -8064) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x338 = -1LL;
	int8_t x339 = INT8_MIN;
	int8_t x340 = INT8_MIN;
	int64_t t77 = -3110473080676492886LL;

	t77 = ((x337%x338)+(x339&x340));

	if (t77 != -128LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x341 = INT8_MAX;
	static uint8_t x344 = UINT8_MAX;
	static int32_t t78 = 678302;

	t78 = ((x341%x342)+(x343&x344));

	if (t78 != 144) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x345 = 0;
	uint32_t x347 = 406581346U;
	static int64_t x348 = INT64_MIN;

	t79 = ((x345%x346)+(x347&x348));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x349 = -3;
	static volatile int64_t x350 = INT64_MIN;
	static uint64_t x351 = 70261213112196LLU;
	int32_t x352 = INT32_MIN;
	volatile uint64_t t80 = 69LLU;

	t80 = ((x349%x350)+(x351&x352));

	if (t80 != 70259222511613LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x353 = INT8_MIN;
	volatile int64_t x354 = 124430437299109842LL;
	int8_t x355 = -1;
	int8_t x356 = INT8_MAX;
	volatile int64_t t81 = -167528064387LL;

	t81 = ((x353%x354)+(x355&x356));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x357 = UINT64_MAX;
	int16_t x358 = -13617;
	volatile int64_t x359 = 2533859LL;

	t82 = ((x357%x358)+(x359&x360));

	if (t82 != 14003LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = INT32_MIN;
	int64_t x362 = 24642551145LL;
	uint64_t x363 = UINT64_MAX;
	volatile uint64_t t83 = 40034170264374709LLU;

	t83 = ((x361%x362)+(x363&x364));

	if (t83 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x365 = UINT32_MAX;
	uint32_t x366 = 18747573U;
	int32_t x367 = -165424253;
	volatile int64_t x368 = INT64_MAX;
	int64_t t84 = -1734849875986701LL;

	t84 = ((x365%x366)+(x367&x368));

	if (t84 != 9223372036691124633LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x369 = -1;
	int32_t x370 = INT32_MIN;
	volatile int64_t x371 = 4307567201418LL;
	int64_t x372 = -1LL;
	volatile int64_t t85 = 2052680734931207LL;

	t85 = ((x369%x370)+(x371&x372));

	if (t85 != 4307567201417LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x379 = 12LL;
	int8_t x380 = -31;
	volatile int64_t t86 = -121749902101854404LL;

	t86 = ((x377%x378)+(x379&x380));

	if (t86 != 97030250LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x382 = -1LL;
	uint16_t x383 = 12U;
	uint8_t x384 = 8U;
	int64_t t87 = 7015776445LL;

	t87 = ((x381%x382)+(x383&x384));

	if (t87 != 8LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x385 = INT64_MIN;
	int64_t x386 = 8320052616643349LL;
	static int8_t x387 = -1;
	uint64_t t88 = 2145300224437175LLU;

	t88 = ((x385%x386)+(x387&x388));

	if (t88 != 18441990948089552769LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x389 = INT8_MAX;
	int32_t x390 = -5101;
	uint8_t x391 = 1U;
	uint16_t x392 = 5753U;
	int32_t t89 = -14085455;

	t89 = ((x389%x390)+(x391&x392));

	if (t89 != 128) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x393 = 97U;
	int32_t x394 = -8008;
	int16_t x395 = -1678;
	static int8_t x396 = INT8_MAX;
	volatile int32_t t90 = 45879168;

	t90 = ((x393%x394)+(x395&x396));

	if (t90 != 211) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x397 = INT64_MAX;
	volatile int32_t x398 = 1024290070;
	int32_t x399 = INT32_MIN;
	uint64_t x400 = 34218826607492LLU;

	t91 = ((x397%x398)+(x399&x400));

	if (t91 != 34218614568459LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x405 = 13U;
	int16_t x406 = 291;
	volatile int64_t x407 = -12513334LL;
	uint16_t x408 = 12421U;
	int64_t t92 = -20LL;

	t92 = ((x405%x406)+(x407&x408));

	if (t92 != 141LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x409 = 1;
	int64_t x410 = INT64_MIN;
	uint32_t x411 = UINT32_MAX;
	volatile uint16_t x412 = UINT16_MAX;

	t93 = ((x409%x410)+(x411&x412));

	if (t93 != 65536LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x413 = UINT64_MAX;
	uint32_t x414 = UINT32_MAX;
	static int8_t x415 = INT8_MIN;
	uint16_t x416 = UINT16_MAX;
	volatile uint64_t t94 = 3962859016LLU;

	t94 = ((x413%x414)+(x415&x416));

	if (t94 != 65408LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = INT32_MAX;
	int64_t x418 = INT64_MAX;
	uint8_t x419 = UINT8_MAX;
	volatile int64_t t95 = -1669792847LL;

	t95 = ((x417%x418)+(x419&x420));

	if (t95 != 2147483902LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x421 = INT32_MIN;
	static uint8_t x422 = UINT8_MAX;
	volatile uint32_t x423 = UINT32_MAX;
	static int64_t x424 = -1LL;
	volatile int64_t t96 = -789LL;

	t96 = ((x421%x422)+(x423&x424));

	if (t96 != 4294967167LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x425 = -1285;
	volatile int8_t x426 = INT8_MIN;
	int64_t x427 = INT64_MIN;
	uint32_t x428 = 411493829U;
	int64_t t97 = -9LL;

	t97 = ((x425%x426)+(x427&x428));

	if (t97 != -5LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x429 = -2;
	int32_t x431 = INT32_MIN;
	static volatile int64_t x432 = INT64_MAX;
	volatile int64_t t98 = -12LL;

	t98 = ((x429%x430)+(x431&x432));

	if (t98 != 9223372034707292158LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x438 = 4U;
	uint32_t x439 = UINT32_MAX;
	volatile int64_t t99 = 31306135LL;

	t99 = ((x437%x438)+(x439&x440));

	if (t99 != 4294967295LL) { NG(); } else { ; }
	
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

