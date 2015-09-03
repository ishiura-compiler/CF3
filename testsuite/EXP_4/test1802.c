#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t2 = 2554;
int8_t x18 = -1;
int64_t x22 = INT64_MIN;
volatile int8_t x23 = INT8_MIN;
static volatile int8_t x24 = 63;
int32_t t5 = 110114969;
static int16_t x40 = INT16_MAX;
static int8_t x45 = INT8_MIN;
int32_t t11 = 21868;
uint64_t x49 = 43685903LLU;
int32_t x50 = INT32_MAX;
uint8_t x51 = 3U;
uint16_t x57 = 0U;
int16_t x61 = INT16_MIN;
int32_t x64 = 393600;
uint16_t x66 = 3587U;
int16_t x71 = 49;
int8_t x74 = INT8_MAX;
volatile int64_t x80 = INT64_MAX;
uint32_t x82 = 13U;
static volatile int32_t t20 = 493493831;
volatile int64_t x89 = INT64_MIN;
int8_t x90 = INT8_MIN;
uint32_t x94 = 2U;
int16_t x96 = INT16_MIN;
int32_t t23 = -194;
int32_t x97 = INT32_MAX;
static volatile int32_t t24 = 3841;
static int32_t x102 = -99502;
int16_t x108 = 970;
static uint64_t x112 = 10264547599360628LLU;
int32_t x114 = INT32_MIN;
uint8_t x118 = 4U;
uint8_t x119 = 0U;
int16_t x122 = INT16_MIN;
volatile int32_t t30 = 20069;
static uint64_t x140 = 57327776LLU;
uint8_t x142 = 107U;
uint32_t x146 = 0U;
static uint64_t x150 = UINT64_MAX;
int16_t x154 = 2625;
static int32_t x158 = 51627;
int32_t x166 = 7580;
int8_t x169 = 2;
uint8_t x171 = 4U;
volatile int8_t x176 = 0;
int32_t t43 = 47296154;
volatile uint8_t x181 = 7U;
int64_t x183 = INT64_MAX;
volatile int32_t t45 = -3;
int64_t x187 = INT64_MIN;
int32_t t46 = 87698484;
uint8_t x193 = 96U;
uint32_t x201 = 8497U;
int8_t x202 = 12;
volatile uint8_t x206 = 0U;
uint8_t x209 = 0U;
uint32_t x214 = UINT32_MAX;
int64_t x217 = 421LL;
int16_t x220 = -1;
uint64_t x223 = 222099775LLU;
volatile int32_t t56 = -2848924;
uint16_t x231 = 69U;
volatile int64_t x237 = 190778139533LL;
volatile int32_t t63 = 1;
static uint8_t x270 = UINT8_MAX;
int32_t t67 = -71638;
static int64_t x273 = 1093278414878394LL;
int32_t x274 = INT32_MIN;
static volatile int16_t x281 = INT16_MAX;
int32_t x289 = -191;
uint64_t x295 = 5LLU;
int64_t x305 = -880077366955LL;
uint64_t x308 = 2172190876539080LLU;
uint64_t x311 = 4392306468LLU;
volatile int32_t t77 = 3;
uint8_t x314 = UINT8_MAX;
int32_t t78 = -4132;
int8_t x326 = 47;
static int64_t x331 = INT64_MAX;
int32_t t82 = -19;
int16_t x340 = -10802;
volatile uint8_t x342 = 17U;
static uint8_t x352 = 31U;
static int64_t x353 = -1LL;
int64_t x356 = INT64_MIN;
uint16_t x361 = 3U;
volatile int16_t x363 = INT16_MIN;
static int16_t x364 = INT16_MIN;
volatile uint16_t x373 = 106U;
static uint32_t x377 = 23U;
volatile int32_t t95 = 161685979;
uint64_t x386 = 3358792LLU;
volatile int64_t x394 = INT64_MAX;


void f0(void) {
	int64_t x1 = 2024520LL;
	int64_t x2 = INT64_MIN;
	int64_t x3 = -5506356LL;
	static int64_t x4 = -5795384934310LL;
	static int32_t t0 = -16792637;

	t0 = (x1==(x2<(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int8_t x6 = -1;
	uint32_t x7 = 991U;
	int32_t x8 = INT32_MAX;
	static volatile int32_t t1 = 1936502;

	t1 = (x5==(x6<(x7&x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int32_t x10 = INT32_MIN;
	int32_t x11 = INT32_MIN;
	int64_t x12 = -721167LL;

	t2 = (x9==(x10<(x11&x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MIN;
	volatile uint32_t x14 = 363U;
	uint8_t x15 = UINT8_MAX;
	uint16_t x16 = 2499U;
	int32_t t3 = -334613;

	t3 = (x13==(x14<(x15&x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	uint16_t x19 = 885U;
	static volatile int8_t x20 = INT8_MIN;
	int32_t t4 = 566978;

	t4 = (x17==(x18<(x19&x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;

	t5 = (x21==(x22<(x23&x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 505557671332LL;
	int64_t x26 = INT64_MAX;
	volatile int8_t x27 = 58;
	static volatile int16_t x28 = -1;
	static volatile int32_t t6 = 537151587;

	t6 = (x25==(x26<(x27&x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = UINT8_MAX;
	int32_t x30 = INT32_MAX;
	int16_t x31 = INT16_MAX;
	int8_t x32 = INT8_MIN;
	int32_t t7 = 218;

	t7 = (x29==(x30<(x31&x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x33 = INT64_MAX;
	static uint64_t x34 = 24942064113186LLU;
	uint16_t x35 = 26U;
	static int32_t x36 = 730306507;
	static volatile int32_t t8 = 16101113;

	t8 = (x33==(x34<(x35&x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	volatile uint16_t x38 = 22401U;
	uint8_t x39 = 6U;
	int32_t t9 = 319;

	t9 = (x37==(x38<(x39&x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x41 = INT32_MIN;
	int16_t x42 = INT16_MIN;
	int8_t x43 = -1;
	static int8_t x44 = INT8_MIN;
	static volatile int32_t t10 = -826;

	t10 = (x41==(x42<(x43&x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = UINT64_MAX;
	static volatile int8_t x47 = INT8_MIN;
	static uint8_t x48 = 61U;

	t11 = (x45==(x46<(x47&x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x52 = INT16_MAX;
	int32_t t12 = -1438;

	t12 = (x49==(x50<(x51&x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 5799796;
	int64_t x54 = INT64_MAX;
	uint64_t x55 = 3213326843264499LLU;
	int32_t x56 = 135;
	int32_t t13 = 3365;

	t13 = (x53==(x54<(x55&x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = UINT32_MAX;
	static int8_t x59 = INT8_MIN;
	static volatile int64_t x60 = INT64_MAX;
	int32_t t14 = 2237;

	t14 = (x57==(x58<(x59&x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x62 = 183U;
	int8_t x63 = INT8_MAX;
	volatile int32_t t15 = 189886;

	t15 = (x61==(x62<(x63&x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = UINT8_MAX;
	uint8_t x67 = UINT8_MAX;
	volatile int64_t x68 = -1535LL;
	int32_t t16 = 1179;

	t16 = (x65==(x66<(x67&x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int16_t x70 = INT16_MAX;
	int64_t x72 = 240789200270741LL;
	volatile int32_t t17 = 975714120;

	t17 = (x69==(x70<(x71&x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MIN;
	int32_t x75 = INT32_MIN;
	int16_t x76 = INT16_MAX;
	int32_t t18 = 7;

	t18 = (x73==(x74<(x75&x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 1058360968LLU;
	int32_t x78 = INT32_MAX;
	uint8_t x79 = 7U;
	int32_t t19 = 689466;

	t19 = (x77==(x78<(x79&x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 1U;
	static int64_t x83 = INT64_MIN;
	static uint8_t x84 = 1U;

	t20 = (x81==(x82<(x83&x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	volatile int32_t x86 = INT32_MIN;
	int64_t x87 = -1LL;
	volatile int8_t x88 = INT8_MIN;
	int32_t t21 = 65790678;

	t21 = (x85==(x86<(x87&x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x91 = INT16_MIN;
	uint16_t x92 = 3515U;
	volatile int32_t t22 = 35742;

	t22 = (x89==(x90<(x91&x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	int8_t x95 = INT8_MIN;

	t23 = (x93==(x94<(x95&x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x98 = 0U;
	static int32_t x99 = INT32_MIN;
	static uint32_t x100 = UINT32_MAX;

	t24 = (x97==(x98<(x99&x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = 58184894;
	int32_t x103 = INT32_MIN;
	int16_t x104 = 11;
	int32_t t25 = 986350;

	t25 = (x101==(x102<(x103&x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	static int8_t x106 = INT8_MIN;
	uint64_t x107 = 3LLU;
	static volatile int32_t t26 = 92750140;

	t26 = (x105==(x106<(x107&x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 2U;
	static volatile int16_t x110 = INT16_MAX;
	int64_t x111 = -121129406118285876LL;
	int32_t t27 = 0;

	t27 = (x109==(x110<(x111&x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	static uint32_t x115 = 393121U;
	static int32_t x116 = INT32_MIN;
	volatile int32_t t28 = -27930;

	t28 = (x113==(x114<(x115&x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	static int16_t x120 = -9402;
	static int32_t t29 = -963931843;

	t29 = (x117==(x118<(x119&x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 0U;
	int32_t x123 = INT32_MIN;
	int8_t x124 = -1;

	t30 = (x121==(x122<(x123&x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	uint16_t x126 = 0U;
	int64_t x127 = INT64_MAX;
	int8_t x128 = INT8_MAX;
	volatile int32_t t31 = 313992254;

	t31 = (x125==(x126<(x127&x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -6693030;
	uint16_t x130 = 1U;
	uint32_t x131 = 13U;
	volatile int64_t x132 = -1LL;
	static int32_t t32 = -28827;

	t32 = (x129==(x130<(x131&x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = -1;
	volatile int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MIN;
	volatile uint32_t x136 = 73233849U;
	volatile int32_t t33 = -309;

	t33 = (x133==(x134<(x135&x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	int8_t x138 = -24;
	int32_t x139 = INT32_MIN;
	int32_t t34 = 24;

	t34 = (x137==(x138<(x139&x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	int16_t x143 = INT16_MIN;
	int16_t x144 = 157;
	volatile int32_t t35 = 18;

	t35 = (x141==(x142<(x143&x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = -1;
	volatile int32_t x147 = INT32_MAX;
	volatile int32_t x148 = 4077025;
	int32_t t36 = -1;

	t36 = (x145==(x146<(x147&x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MAX;
	volatile uint32_t x151 = 1010626817U;
	volatile uint16_t x152 = UINT16_MAX;
	int32_t t37 = 49934;

	t37 = (x149==(x150<(x151&x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = INT64_MIN;
	int64_t x155 = INT64_MIN;
	static int32_t x156 = -40121;
	volatile int32_t t38 = -218579210;

	t38 = (x153==(x154<(x155&x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x157 = UINT64_MAX;
	static int32_t x159 = INT32_MAX;
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = -86829958;

	t39 = (x157==(x158<(x159&x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	uint32_t x162 = UINT32_MAX;
	static uint8_t x163 = 13U;
	int32_t x164 = INT32_MAX;
	int32_t t40 = 2795;

	t40 = (x161==(x162<(x163&x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = 50393228254LLU;
	int16_t x167 = -1;
	uint8_t x168 = 2U;
	int32_t t41 = -32;

	t41 = (x165==(x166<(x167&x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x170 = INT64_MAX;
	volatile int64_t x172 = INT64_MIN;
	volatile int32_t t42 = -5509901;

	t42 = (x169==(x170<(x171&x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x173 = 0U;
	uint32_t x174 = 14U;
	static int16_t x175 = INT16_MIN;

	t43 = (x173==(x174<(x175&x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x177 = INT32_MIN;
	volatile int64_t x178 = INT64_MAX;
	int8_t x179 = -15;
	volatile uint64_t x180 = 16129LLU;
	volatile int32_t t44 = 30043;

	t44 = (x177==(x178<(x179&x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x182 = 33U;
	int16_t x184 = 215;

	t45 = (x181==(x182<(x183&x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	static int32_t x186 = -1;
	static int32_t x188 = INT32_MIN;

	t46 = (x185==(x186<(x187&x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	static int32_t x190 = -121;
	volatile uint8_t x191 = UINT8_MAX;
	int64_t x192 = 800461017389LL;
	volatile int32_t t47 = -9;

	t47 = (x189==(x190<(x191&x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x194 = UINT16_MAX;
	uint32_t x195 = UINT32_MAX;
	uint8_t x196 = 1U;
	int32_t t48 = 1914927;

	t48 = (x193==(x194<(x195&x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = -1;
	int64_t x198 = 188613897347793LL;
	uint8_t x199 = 6U;
	int64_t x200 = -3392909009LL;
	volatile int32_t t49 = 1;

	t49 = (x197==(x198<(x199&x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x203 = 20U;
	volatile int8_t x204 = -19;
	int32_t t50 = 234354;

	t50 = (x201==(x202<(x203&x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MAX;
	int8_t x207 = INT8_MIN;
	static uint16_t x208 = UINT16_MAX;
	static volatile int32_t t51 = -219685;

	t51 = (x205==(x206<(x207&x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x210 = 37U;
	volatile uint16_t x211 = UINT16_MAX;
	int8_t x212 = -1;
	volatile int32_t t52 = -3;

	t52 = (x209==(x210<(x211&x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = INT8_MIN;
	uint32_t x215 = 240450U;
	int64_t x216 = 2568183071844989LL;
	int32_t t53 = 18341266;

	t53 = (x213==(x214<(x215&x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x218 = INT64_MAX;
	uint32_t x219 = 801U;
	volatile int32_t t54 = 50462173;

	t54 = (x217==(x218<(x219&x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x221 = -3786550394401LL;
	int64_t x222 = -420440656269887587LL;
	volatile int32_t x224 = INT32_MIN;
	volatile int32_t t55 = -674744131;

	t55 = (x221==(x222<(x223&x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x225 = INT16_MAX;
	int64_t x226 = INT64_MIN;
	int32_t x227 = INT32_MIN;
	volatile int16_t x228 = INT16_MIN;

	t56 = (x225==(x226<(x227&x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = 141760164836647LL;
	uint32_t x230 = 10U;
	uint32_t x232 = UINT32_MAX;
	int32_t t57 = -322438819;

	t57 = (x229==(x230<(x231&x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	uint64_t x234 = 232574337LLU;
	static uint32_t x235 = 3U;
	int8_t x236 = INT8_MIN;
	volatile int32_t t58 = 81;

	t58 = (x233==(x234<(x235&x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = INT8_MAX;
	int32_t x239 = -2678398;
	int32_t x240 = INT32_MIN;
	static volatile int32_t t59 = 31167;

	t59 = (x237==(x238<(x239&x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x241 = 2041169388U;
	uint64_t x242 = UINT64_MAX;
	int8_t x243 = 26;
	int16_t x244 = 1694;
	int32_t t60 = 133861259;

	t60 = (x241==(x242<(x243&x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 1;
	volatile uint8_t x246 = 0U;
	int64_t x247 = INT64_MAX;
	static int8_t x248 = -1;
	int32_t t61 = 12751329;

	t61 = (x245==(x246<(x247&x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 1U;
	int8_t x250 = INT8_MIN;
	int8_t x251 = INT8_MIN;
	static int32_t x252 = 1;
	volatile int32_t t62 = -31785;

	t62 = (x249==(x250<(x251&x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x253 = 267LLU;
	static int16_t x254 = 85;
	int64_t x255 = INT64_MIN;
	volatile int16_t x256 = 0;

	t63 = (x253==(x254<(x255&x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = INT8_MAX;
	uint16_t x258 = UINT16_MAX;
	static int16_t x259 = 176;
	uint32_t x260 = 1068949933U;
	volatile int32_t t64 = -499733;

	t64 = (x257==(x258<(x259&x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 13;
	static int32_t x262 = 1;
	static uint32_t x263 = UINT32_MAX;
	int32_t x264 = -1;
	int32_t t65 = 0;

	t65 = (x261==(x262<(x263&x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 92U;
	int16_t x266 = INT16_MIN;
	uint32_t x267 = 354491U;
	uint32_t x268 = 1U;
	static int32_t t66 = -53537;

	t66 = (x265==(x266<(x267&x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x269 = 58817950LLU;
	int16_t x271 = -3;
	static int32_t x272 = 5;

	t67 = (x269==(x270<(x271&x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x275 = 148;
	uint8_t x276 = UINT8_MAX;
	int32_t t68 = 183019;

	t68 = (x273==(x274<(x275&x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x277 = -1LL;
	static uint64_t x278 = UINT64_MAX;
	int16_t x279 = -1;
	int64_t x280 = INT64_MIN;
	int32_t t69 = 179823469;

	t69 = (x277==(x278<(x279&x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x282 = -63;
	static int16_t x283 = INT16_MIN;
	int16_t x284 = INT16_MIN;
	int32_t t70 = 5502;

	t70 = (x281==(x282<(x283&x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -167896;
	static volatile int64_t x286 = INT64_MIN;
	uint8_t x287 = 1U;
	volatile int64_t x288 = INT64_MIN;
	volatile int32_t t71 = 97618390;

	t71 = (x285==(x286<(x287&x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = INT16_MIN;
	uint64_t x291 = 104668497259445806LLU;
	int64_t x292 = INT64_MIN;
	int32_t t72 = -4245;

	t72 = (x289==(x290<(x291&x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = 10583LL;
	int32_t x294 = -345645;
	static int64_t x296 = INT64_MIN;
	int32_t t73 = 1;

	t73 = (x293==(x294<(x295&x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	static int64_t x298 = INT64_MAX;
	int32_t x299 = INT32_MIN;
	uint64_t x300 = 3LLU;
	volatile int32_t t74 = 5;

	t74 = (x297==(x298<(x299&x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 519973U;
	uint64_t x302 = 29262151659223LLU;
	int32_t x303 = INT32_MIN;
	uint32_t x304 = UINT32_MAX;
	volatile int32_t t75 = -15303;

	t75 = (x301==(x302<(x303&x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x306 = UINT16_MAX;
	int32_t x307 = INT32_MIN;
	static int32_t t76 = 334433;

	t76 = (x305==(x306<(x307&x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -2;
	int64_t x310 = INT64_MAX;
	uint32_t x312 = 512U;

	t77 = (x309==(x310<(x311&x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 2;
	volatile uint32_t x315 = UINT32_MAX;
	uint64_t x316 = 817LLU;

	t78 = (x313==(x314<(x315&x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	int16_t x318 = -1;
	static int16_t x319 = INT16_MIN;
	volatile int64_t x320 = -1LL;
	int32_t t79 = 2160;

	t79 = (x317==(x318<(x319&x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 3823U;
	int32_t x322 = INT32_MAX;
	int64_t x323 = INT64_MIN;
	int64_t x324 = INT64_MAX;
	static int32_t t80 = 1;

	t80 = (x321==(x322<(x323&x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = 4397286573858304552LL;
	static volatile int64_t x327 = -1LL;
	uint64_t x328 = UINT64_MAX;
	static int32_t t81 = 48;

	t81 = (x325==(x326<(x327&x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MAX;
	int8_t x330 = INT8_MIN;
	uint32_t x332 = 56227U;

	t82 = (x329==(x330<(x331&x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = -1;
	uint64_t x334 = 41012219437LLU;
	static uint8_t x335 = 112U;
	int8_t x336 = -1;
	int32_t t83 = 49410;

	t83 = (x333==(x334<(x335&x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x337 = 0LLU;
	static volatile int8_t x338 = 4;
	int16_t x339 = 3;
	volatile int32_t t84 = 35771;

	t84 = (x337==(x338<(x339&x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x341 = INT8_MAX;
	uint16_t x343 = 11906U;
	uint16_t x344 = 20U;
	static int32_t t85 = 54410;

	t85 = (x341==(x342<(x343&x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = -1;
	int16_t x346 = -1;
	static int64_t x347 = -1LL;
	uint16_t x348 = UINT16_MAX;
	static volatile int32_t t86 = -27267;

	t86 = (x345==(x346<(x347&x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = INT32_MAX;
	uint64_t x350 = 103956LLU;
	int32_t x351 = INT32_MIN;
	int32_t t87 = -2991052;

	t87 = (x349==(x350<(x351&x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x354 = INT8_MIN;
	static int8_t x355 = -20;
	int32_t t88 = 25;

	t88 = (x353==(x354<(x355&x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = INT16_MIN;
	volatile int8_t x358 = INT8_MIN;
	int32_t x359 = -1;
	volatile int8_t x360 = INT8_MIN;
	int32_t t89 = -61;

	t89 = (x357==(x358<(x359&x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x362 = INT16_MIN;
	volatile int32_t t90 = -1;

	t90 = (x361==(x362<(x363&x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	static volatile uint32_t x366 = 106457722U;
	int16_t x367 = INT16_MAX;
	static uint32_t x368 = 8024U;
	int32_t t91 = 6556949;

	t91 = (x365==(x366<(x367&x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -379;
	int32_t x370 = INT32_MIN;
	int32_t x371 = INT32_MIN;
	int32_t x372 = -5;
	int32_t t92 = 53837487;

	t92 = (x369==(x370<(x371&x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x374 = 0U;
	int32_t x375 = INT32_MIN;
	int8_t x376 = 0;
	int32_t t93 = 51314581;

	t93 = (x373==(x374<(x375&x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x378 = 125665LL;
	volatile uint8_t x379 = 3U;
	uint16_t x380 = 2227U;
	static int32_t t94 = -3;

	t94 = (x377==(x378<(x379&x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 5119U;
	static int16_t x382 = -1;
	int16_t x383 = -1;
	volatile int16_t x384 = INT16_MIN;

	t95 = (x381==(x382<(x383&x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = UINT32_MAX;
	static int16_t x387 = 12;
	uint32_t x388 = 3U;
	volatile int32_t t96 = 87;

	t96 = (x385==(x386<(x387&x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = 1;
	int16_t x390 = INT16_MIN;
	uint8_t x391 = 26U;
	uint8_t x392 = 8U;
	volatile int32_t t97 = 12291;

	t97 = (x389==(x390<(x391&x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 149LLU;
	int32_t x395 = -1;
	uint64_t x396 = 714507990807LLU;
	static volatile int32_t t98 = -1313525;

	t98 = (x393==(x394<(x395&x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MAX;
	volatile uint64_t x398 = 227304929010028LLU;
	volatile int16_t x399 = INT16_MIN;
	volatile uint16_t x400 = 16380U;
	static volatile int32_t t99 = 19594247;

	t99 = (x397==(x398<(x399&x400)));

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

