#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = INT64_MIN;
int16_t x6 = INT16_MIN;
int64_t t1 = -2097787393479LL;
uint32_t x9 = 190199U;
int8_t x11 = 48;
volatile uint64_t t3 = 307512LLU;
uint64_t x25 = UINT64_MAX;
volatile uint64_t t5 = 18644422LLU;
int8_t x29 = 45;
int64_t x32 = 18992707874LL;
static uint64_t x34 = 2LLU;
static int64_t x35 = INT64_MIN;
static int64_t x37 = -1LL;
int16_t x38 = INT16_MAX;
static int16_t x39 = -7509;
int64_t t8 = -78296907298164LL;
uint16_t x42 = UINT16_MAX;
uint32_t x44 = 6U;
volatile int8_t x46 = INT8_MIN;
volatile int32_t x47 = INT32_MIN;
int8_t x48 = 52;
int8_t x51 = -1;
int64_t x52 = -225890LL;
int16_t x53 = INT16_MAX;
int32_t x61 = INT32_MAX;
uint64_t x62 = UINT64_MAX;
int8_t x66 = 36;
uint32_t t15 = 2305U;
uint64_t x79 = 0LLU;
uint64_t t18 = 97LLU;
int8_t x94 = -1;
uint64_t x101 = 138LLU;
int32_t x110 = -1;
uint8_t x111 = UINT8_MAX;
volatile int64_t t25 = 177084364LL;
int16_t x114 = -1;
int16_t x152 = 5;
int64_t x159 = -11594451386014LL;
int16_t x166 = 9642;
int64_t t36 = 224307964152448LL;
int8_t x169 = -1;
static volatile int64_t x172 = -1LL;
static uint32_t x174 = 17U;
uint64_t x183 = UINT64_MAX;
int32_t x190 = -1;
volatile int8_t x193 = INT8_MAX;
int32_t x196 = -1;
uint32_t x198 = 1U;
volatile int16_t x211 = INT16_MIN;
uint8_t x228 = UINT8_MAX;
int64_t x238 = INT64_MIN;
int32_t x239 = INT32_MIN;
volatile uint64_t t53 = 442505613LLU;
volatile int64_t t54 = -32666045LL;
int32_t x251 = 10487;
int64_t x257 = -1LL;
int32_t x258 = -152072;
int64_t x262 = -41LL;
static int32_t x263 = INT32_MIN;
int32_t t59 = -4417895;
int8_t x269 = -2;
int16_t x278 = INT16_MIN;
int32_t x281 = INT32_MIN;
uint64_t x283 = 537444LLU;
volatile int8_t x294 = 1;
uint16_t x297 = 13U;
volatile int64_t x305 = -130226LL;
volatile int64_t x317 = INT64_MIN;
int32_t x339 = 51471;
static volatile int32_t t75 = 30532;
volatile uint64_t t77 = 9119LLU;
int8_t x357 = -26;
int16_t x358 = INT16_MIN;
int64_t t79 = -126682899041341135LL;
volatile uint16_t x363 = 3891U;
int32_t t80 = 0;
uint32_t t81 = 1727203U;
static volatile uint16_t x371 = 2241U;
static int8_t x374 = INT8_MAX;
static volatile uint64_t t85 = 204421710LLU;
int8_t x392 = 15;
int64_t x393 = 7691434092LL;
uint32_t x401 = UINT32_MAX;
int64_t x402 = -67LL;
volatile int64_t x406 = INT64_MAX;
volatile int64_t t90 = -822091641LL;
static uint32_t x414 = UINT32_MAX;
int16_t x424 = INT16_MIN;
uint32_t x425 = UINT32_MAX;
static volatile uint64_t t96 = 65106582905801025LLU;
volatile uint64_t t98 = 58249077533093LLU;


void f0(void) {
	int16_t x1 = -1;
	static int16_t x3 = INT16_MIN;
	int32_t x4 = -26;
	volatile int64_t t0 = INT64_MIN;

	t0 = ((x1&x2)&(x3+x4));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MAX;
	int32_t x7 = 0;
	int8_t x8 = INT8_MIN;

	t1 = ((x5&x6)&(x7+x8));

	if (t1 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = -1;
	int64_t x12 = -1LL;
	int64_t t2 = -4368081953549515278LL;

	t2 = ((x9&x10)&(x11+x12));

	if (t2 != 39LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int16_t x14 = -1;
	static uint64_t x15 = 79313LLU;
	int16_t x16 = -5;

	t3 = ((x13&x14)&(x15+x16));

	if (t3 != 79308LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MIN;
	uint64_t x18 = 202201078LLU;
	int64_t x19 = 551333321896727121LL;
	volatile int32_t x20 = INT32_MIN;
	uint64_t t4 = 27068386LLU;

	t4 = ((x17&x18)&(x19+x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x26 = 0U;
	volatile uint32_t x27 = 1427685U;
	int16_t x28 = INT16_MIN;

	t5 = ((x25&x26)&(x27+x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x30 = UINT16_MAX;
	int64_t x31 = INT64_MIN;
	int64_t t6 = -543205LL;

	t6 = ((x29&x30)&(x31+x32));

	if (t6 != 32LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x33 = INT64_MAX;
	int16_t x36 = INT16_MAX;
	uint64_t t7 = 92LLU;

	t7 = ((x33&x34)&(x35+x36));

	if (t7 != 2LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x40 = 10;

	t8 = ((x37&x38)&(x39+x40));

	if (t8 != 25269LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	uint8_t x43 = UINT8_MAX;
	volatile uint32_t t9 = 678U;

	t9 = ((x41&x42)&(x43+x44));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	int32_t t10 = INT32_MIN;

	t10 = ((x45&x46)&(x47+x48));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x49 = -359;
	int8_t x50 = INT8_MAX;
	int64_t t11 = 14341986422LL;

	t11 = ((x49&x50)&(x51+x52));

	if (t11 != 25LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x54 = UINT64_MAX;
	static volatile int64_t x55 = -1LL;
	static int8_t x56 = INT8_MIN;
	volatile uint64_t t12 = 61617091467LLU;

	t12 = ((x53&x54)&(x55+x56));

	if (t12 != 32639LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 8U;
	int8_t x58 = -1;
	static int8_t x59 = INT8_MIN;
	int64_t x60 = 187LL;
	static volatile int64_t t13 = 9097317507LL;

	t13 = ((x57&x58)&(x59+x60));

	if (t13 != 8LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x63 = INT16_MIN;
	volatile int16_t x64 = INT16_MIN;
	static volatile uint64_t t14 = 32759541879280LLU;

	t14 = ((x61&x62)&(x63+x64));

	if (t14 != 2147418112LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 1975U;
	uint16_t x67 = 6325U;
	int8_t x68 = INT8_MAX;

	t15 = ((x65&x66)&(x67+x68));

	if (t15 != 36U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = UINT8_MAX;
	static int64_t x70 = INT64_MIN;
	static volatile int16_t x71 = 2928;
	volatile int16_t x72 = 4;
	static volatile int64_t t16 = 15707002LL;

	t16 = ((x69&x70)&(x71+x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 96811379LLU;
	int32_t x74 = INT32_MIN;
	int64_t x75 = -1LL;
	int8_t x76 = INT8_MAX;
	volatile uint64_t t17 = 268836139390LLU;

	t17 = ((x73&x74)&(x75+x76));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	static int16_t x78 = INT16_MIN;
	int16_t x80 = INT16_MIN;

	t18 = ((x77&x78)&(x79+x80));

	if (t18 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x81 = -2023237;
	uint64_t x82 = 2039634LLU;
	uint64_t x83 = 226257524446650658LLU;
	volatile uint8_t x84 = 1U;
	volatile uint64_t t19 = 162370449901220LLU;

	t19 = ((x81&x82)&(x83+x84));

	if (t19 != 2LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	volatile uint64_t x86 = 188512035861538547LLU;
	int64_t x87 = -254088LL;
	int8_t x88 = -15;
	volatile uint64_t t20 = 18214074931051796LLU;

	t20 = ((x85&x86)&(x87+x88));

	if (t20 != 188512035861430272LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x89 = 9837961LLU;
	int64_t x90 = -16588173429586LL;
	uint64_t x91 = 14889719LLU;
	int32_t x92 = 709;
	volatile uint64_t t21 = 520265038848983LLU;

	t21 = ((x89&x90)&(x91+x92));

	if (t21 != 8393864LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = 903;
	static int64_t x95 = 0LL;
	int16_t x96 = 1686;
	static volatile int64_t t22 = -163309573126LL;

	t22 = ((x93&x94)&(x95+x96));

	if (t22 != 646LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x102 = 166;
	int8_t x103 = INT8_MIN;
	int8_t x104 = 55;
	static uint64_t t23 = 55558348411266LLU;

	t23 = ((x101&x102)&(x103+x104));

	if (t23 != 130LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MAX;
	static volatile int8_t x106 = INT8_MAX;
	int16_t x107 = -1;
	int64_t x108 = 81422556411LL;
	int64_t t24 = -57003310LL;

	t24 = ((x105&x106)&(x107+x108));

	if (t24 != 122LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MAX;
	volatile int8_t x112 = INT8_MIN;

	t25 = ((x109&x110)&(x111+x112));

	if (t25 != 127LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x113 = UINT8_MAX;
	static int16_t x115 = -1;
	int64_t x116 = INT64_MAX;
	volatile int64_t t26 = 1196787210462085LL;

	t26 = ((x113&x114)&(x115+x116));

	if (t26 != 254LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 2656312574558400107LLU;
	volatile uint8_t x118 = 9U;
	uint16_t x119 = 924U;
	static int16_t x120 = INT16_MAX;
	volatile uint64_t t27 = 4324978645845867LLU;

	t27 = ((x117&x118)&(x119+x120));

	if (t27 != 9LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = -279;
	volatile int16_t x122 = -1;
	volatile int32_t x123 = INT32_MAX;
	volatile int64_t x124 = INT64_MIN;
	volatile int64_t t28 = -2998674640LL;

	t28 = ((x121&x122)&(x123+x124));

	if (t28 != -9223372034707292439LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = 11;
	int32_t x130 = INT32_MIN;
	uint64_t x131 = 779535659558211LLU;
	int64_t x132 = INT64_MAX;
	uint64_t t29 = 1594LLU;

	t29 = ((x129&x130)&(x131+x132));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MIN;
	volatile int64_t x134 = INT64_MIN;
	uint64_t x135 = 16909906621845298LLU;
	static int64_t x136 = 1LL;
	static uint64_t t30 = 581429LLU;

	t30 = ((x133&x134)&(x135+x136));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x145 = 14U;
	uint16_t x146 = UINT16_MAX;
	int8_t x147 = INT8_MAX;
	static uint8_t x148 = 14U;
	int32_t t31 = 6;

	t31 = ((x145&x146)&(x147+x148));

	if (t31 != 12) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = INT64_MAX;
	uint32_t x150 = 74756U;
	static int32_t x151 = -1;
	volatile int64_t t32 = 29LL;

	t32 = ((x149&x150)&(x151+x152));

	if (t32 != 4LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = INT16_MIN;
	volatile int8_t x154 = 5;
	int32_t x155 = INT32_MIN;
	uint16_t x156 = 850U;
	int32_t t33 = -2386;

	t33 = ((x153&x154)&(x155+x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = INT64_MIN;
	static int32_t x158 = INT32_MAX;
	volatile int8_t x160 = INT8_MAX;
	volatile int64_t t34 = -363783LL;

	t34 = ((x157&x158)&(x159+x160));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = -1LL;
	volatile int8_t x162 = -1;
	static uint32_t x163 = 1042214025U;
	static uint64_t x164 = 6LLU;
	static volatile uint64_t t35 = 190427705LLU;

	t35 = ((x161&x162)&(x163+x164));

	if (t35 != 1042214031LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x165 = INT64_MIN;
	static int16_t x167 = -1;
	static int32_t x168 = -1;

	t36 = ((x165&x166)&(x167+x168));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x170 = UINT8_MAX;
	int32_t x171 = INT32_MIN;
	static volatile int64_t t37 = 5512659047156LL;

	t37 = ((x169&x170)&(x171+x172));

	if (t37 != 255LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x173 = INT16_MAX;
	static int64_t x175 = -1LL;
	volatile int8_t x176 = 32;
	volatile int64_t t38 = 4332768862LL;

	t38 = ((x173&x174)&(x175+x176));

	if (t38 != 17LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = 9LL;
	volatile uint16_t x178 = UINT16_MAX;
	static uint32_t x179 = UINT32_MAX;
	uint64_t x180 = 2006LLU;
	volatile uint64_t t39 = 44746134LLU;

	t39 = ((x177&x178)&(x179+x180));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = -62;
	int8_t x182 = INT8_MAX;
	int32_t x184 = -1;
	volatile uint64_t t40 = 495515587689LLU;

	t40 = ((x181&x182)&(x183+x184));

	if (t40 != 66LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = INT8_MAX;
	int32_t x186 = INT32_MIN;
	volatile int64_t x187 = -2092694LL;
	uint8_t x188 = 2U;
	int64_t t41 = -56900418258900496LL;

	t41 = ((x185&x186)&(x187+x188));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = 1LL;
	int8_t x191 = 18;
	int16_t x192 = -1501;
	volatile int64_t t42 = -24392239967LL;

	t42 = ((x189&x190)&(x191+x192));

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x194 = 10620165U;
	int16_t x195 = 1384;
	static uint32_t t43 = 1301574184U;

	t43 = ((x193&x194)&(x195+x196));

	if (t43 != 5U) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x197 = INT16_MIN;
	int64_t x199 = INT64_MIN;
	uint32_t x200 = 756052U;
	static volatile int64_t t44 = 4492891LL;

	t44 = ((x197&x198)&(x199+x200));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = 8LL;
	uint64_t x202 = 1826004186644LLU;
	static int8_t x203 = -1;
	uint8_t x204 = 0U;
	volatile uint64_t t45 = 1610305910734LLU;

	t45 = ((x201&x202)&(x203+x204));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = INT32_MIN;
	int16_t x206 = -468;
	volatile int16_t x207 = -1;
	int16_t x208 = -349;
	int32_t t46 = INT32_MIN;

	t46 = ((x205&x206)&(x207+x208));

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x209 = UINT32_MAX;
	static int16_t x210 = INT16_MAX;
	volatile int16_t x212 = INT16_MIN;
	static volatile uint32_t t47 = 251451U;

	t47 = ((x209&x210)&(x211+x212));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x213 = UINT32_MAX;
	int16_t x214 = INT16_MIN;
	int8_t x215 = INT8_MIN;
	static uint64_t x216 = UINT64_MAX;
	volatile uint64_t t48 = 25675257627917LLU;

	t48 = ((x213&x214)&(x215+x216));

	if (t48 != 4294934528LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x221 = INT8_MIN;
	int16_t x222 = -400;
	int16_t x223 = -1;
	volatile int8_t x224 = -16;
	int32_t t49 = 387;

	t49 = ((x221&x222)&(x223+x224));

	if (t49 != -512) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x225 = -7241030;
	static volatile int16_t x226 = -827;
	int64_t x227 = -187187335073189LL;
	static volatile int64_t t50 = -112311917LL;

	t50 = ((x225&x226)&(x227+x228));

	if (t50 != -187187341524992LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = -6;
	volatile int64_t x234 = -2865527839412181LL;
	int8_t x235 = INT8_MAX;
	volatile int16_t x236 = -1;
	int64_t t51 = -23434658009LL;

	t51 = ((x233&x234)&(x235+x236));

	if (t51 != 42LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x237 = INT32_MIN;
	static int32_t x240 = INT32_MAX;
	int64_t t52 = INT64_MIN;

	t52 = ((x237&x238)&(x239+x240));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x241 = 1776;
	volatile int32_t x242 = 234750143;
	volatile uint8_t x243 = 1U;
	uint64_t x244 = 303104067587LLU;

	t53 = ((x241&x242)&(x243+x244));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x245 = 14700U;
	uint16_t x246 = 88U;
	uint16_t x247 = 1U;
	int64_t x248 = INT64_MIN;

	t54 = ((x245&x246)&(x247+x248));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x249 = 97U;
	volatile uint64_t x250 = UINT64_MAX;
	int32_t x252 = 9625079;
	static volatile uint64_t t55 = 310948018427946634LLU;

	t55 = ((x249&x250)&(x251+x252));

	if (t55 != 96LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x253 = UINT32_MAX;
	int64_t x254 = 1640815172946LL;
	uint32_t x255 = UINT32_MAX;
	volatile int64_t x256 = -22771526LL;
	volatile int64_t t56 = -232386536441346870LL;

	t56 = ((x253&x254)&(x255+x256));

	if (t56 != 136611856LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x259 = INT32_MAX;
	int8_t x260 = -1;
	int64_t t57 = -6166623002093977LL;

	t57 = ((x257&x258)&(x259+x260));

	if (t57 != 2147331576LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x261 = -12;
	uint8_t x264 = 9U;
	int64_t t58 = 472393794625LL;

	t58 = ((x261&x262)&(x263+x264));

	if (t58 != -2147483648LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x265 = -8;
	volatile int32_t x266 = 59774697;
	int16_t x267 = INT16_MIN;
	uint8_t x268 = 0U;

	t59 = ((x265&x266)&(x267+x268));

	if (t59 != 59768832) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x270 = INT16_MIN;
	static int16_t x271 = INT16_MIN;
	volatile uint32_t x272 = 207984U;
	static volatile uint32_t t60 = 31U;

	t60 = ((x269&x270)&(x271+x272));

	if (t60 != 163840U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = -1;
	volatile int32_t x274 = INT32_MIN;
	uint32_t x275 = 2U;
	int8_t x276 = INT8_MAX;
	volatile uint32_t t61 = 7375U;

	t61 = ((x273&x274)&(x275+x276));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x277 = INT16_MIN;
	int8_t x279 = INT8_MAX;
	int64_t x280 = INT64_MIN;
	volatile int64_t t62 = INT64_MIN;

	t62 = ((x277&x278)&(x279+x280));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x282 = -1;
	uint64_t x284 = UINT64_MAX;
	static uint64_t t63 = 15465728LLU;

	t63 = ((x281&x282)&(x283+x284));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x285 = INT32_MIN;
	int64_t x286 = -1LL;
	static uint8_t x287 = 15U;
	int16_t x288 = INT16_MIN;
	int64_t t64 = -521LL;

	t64 = ((x285&x286)&(x287+x288));

	if (t64 != -2147483648LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x289 = 2102419361305665152LLU;
	volatile uint32_t x290 = UINT32_MAX;
	volatile uint64_t x291 = 27166966882744LLU;
	int64_t x292 = INT64_MAX;
	uint64_t t65 = 449270821467501LLU;

	t65 = ((x289&x290)&(x291+x292));

	if (t65 != 218169472LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x293 = 0U;
	volatile int16_t x295 = INT16_MIN;
	static volatile int32_t x296 = -1;
	int32_t t66 = 14948;

	t66 = ((x293&x294)&(x295+x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x298 = 671U;
	uint8_t x299 = 7U;
	int32_t x300 = -1;
	volatile uint32_t t67 = 416414U;

	t67 = ((x297&x298)&(x299+x300));

	if (t67 != 4U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = 0;
	int8_t x302 = 0;
	uint32_t x303 = 29697993U;
	int16_t x304 = INT16_MIN;
	uint32_t t68 = 65U;

	t68 = ((x301&x302)&(x303+x304));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x306 = -2;
	int32_t x307 = -401;
	int64_t x308 = -1LL;
	int64_t t69 = 525668896817LL;

	t69 = ((x305&x306)&(x307+x308));

	if (t69 != -130482LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x309 = UINT16_MAX;
	static int16_t x310 = INT16_MIN;
	uint32_t x311 = 178U;
	uint16_t x312 = 0U;
	uint32_t t70 = 1582U;

	t70 = ((x309&x310)&(x311+x312));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x318 = 0U;
	volatile int16_t x319 = INT16_MIN;
	static int16_t x320 = -1;
	static volatile int64_t t71 = 79386525038445LL;

	t71 = ((x317&x318)&(x319+x320));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x321 = -1LL;
	uint64_t x322 = 167670LLU;
	volatile int16_t x323 = INT16_MAX;
	int8_t x324 = -1;
	volatile uint64_t t72 = 4026096176295568567LLU;

	t72 = ((x321&x322)&(x323+x324));

	if (t72 != 3830LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x329 = INT32_MIN;
	static volatile int64_t x330 = 4289254979LL;
	static int16_t x331 = 462;
	static int16_t x332 = 42;
	int64_t t73 = -232524466100444991LL;

	t73 = ((x329&x330)&(x331+x332));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x333 = INT16_MIN;
	static volatile uint32_t x334 = 1045U;
	int16_t x335 = 218;
	static uint64_t x336 = 0LLU;
	uint64_t t74 = 12269083567009403LLU;

	t74 = ((x333&x334)&(x335+x336));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x337 = INT8_MIN;
	uint16_t x338 = UINT16_MAX;
	static uint16_t x340 = UINT16_MAX;

	t75 = ((x337&x338)&(x339+x340));

	if (t75 != 51456) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x341 = 112U;
	int64_t x342 = INT64_MAX;
	static int8_t x343 = INT8_MIN;
	volatile int8_t x344 = -1;
	volatile int64_t t76 = 2068007727898589LL;

	t76 = ((x341&x342)&(x343+x344));

	if (t76 != 112LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x345 = INT64_MIN;
	uint8_t x346 = 6U;
	uint8_t x347 = 15U;
	volatile uint64_t x348 = 92666357035842LLU;

	t77 = ((x345&x346)&(x347+x348));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x349 = INT16_MAX;
	uint32_t x350 = UINT32_MAX;
	volatile uint32_t x351 = 1U;
	int16_t x352 = INT16_MAX;
	volatile uint32_t t78 = 431154U;

	t78 = ((x349&x350)&(x351+x352));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x359 = INT64_MIN;
	static uint32_t x360 = UINT32_MAX;

	t79 = ((x357&x358)&(x359+x360));

	if (t79 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x361 = INT32_MAX;
	volatile int8_t x362 = INT8_MIN;
	int16_t x364 = INT16_MIN;

	t80 = ((x361&x362)&(x363+x364));

	if (t80 != 2147454720) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x365 = -1;
	volatile int16_t x366 = INT16_MIN;
	uint32_t x367 = 65387697U;
	int16_t x368 = INT16_MIN;

	t81 = ((x365&x366)&(x367+x368));

	if (t81 != 65339392U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x369 = INT64_MAX;
	volatile uint8_t x370 = 0U;
	uint8_t x372 = UINT8_MAX;
	int64_t t82 = -267626485LL;

	t82 = ((x369&x370)&(x371+x372));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x373 = INT8_MIN;
	static int8_t x375 = 0;
	int32_t x376 = INT32_MIN;
	volatile int32_t t83 = 1;

	t83 = ((x373&x374)&(x375+x376));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x377 = UINT32_MAX;
	int8_t x378 = INT8_MIN;
	volatile int64_t x379 = -637LL;
	volatile int8_t x380 = INT8_MAX;
	int64_t t84 = 143588753111977LL;

	t84 = ((x377&x378)&(x379+x380));

	if (t84 != 4294966784LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x381 = 13790377922362LLU;
	int8_t x382 = INT8_MAX;
	int64_t x383 = INT64_MAX;
	int16_t x384 = -67;

	t85 = ((x381&x382)&(x383+x384));

	if (t85 != 56LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x389 = 85534LLU;
	int64_t x390 = -1LL;
	int8_t x391 = 12;
	static volatile uint64_t t86 = 683807LLU;

	t86 = ((x389&x390)&(x391+x392));

	if (t86 != 26LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x394 = -1;
	int32_t x395 = INT32_MIN;
	uint8_t x396 = 80U;
	int64_t t87 = 101402986LL;

	t87 = ((x393&x394)&(x395+x396));

	if (t87 != 6442451008LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x397 = INT8_MIN;
	uint32_t x398 = 460907657U;
	static int32_t x399 = 74738077;
	int8_t x400 = INT8_MIN;
	volatile uint32_t t88 = 71702U;

	t88 = ((x397&x398)&(x399+x400));

	if (t88 != 7364608U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x403 = INT32_MAX;
	int16_t x404 = -1;
	volatile int64_t t89 = 28LL;

	t89 = ((x401&x402)&(x403+x404));

	if (t89 != 2147483580LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x405 = 40000U;
	uint16_t x407 = UINT16_MAX;
	uint16_t x408 = 1228U;

	t90 = ((x405&x406)&(x407+x408));

	if (t90 != 1088LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x409 = INT8_MIN;
	uint64_t x410 = 292460421LLU;
	int16_t x411 = INT16_MAX;
	int8_t x412 = INT8_MAX;
	uint64_t t91 = 3136468LLU;

	t91 = ((x409&x410)&(x411+x412));

	if (t91 != 32768LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x413 = 42U;
	int32_t x415 = -1;
	uint64_t x416 = 6917LLU;
	uint64_t t92 = 404978045LLU;

	t92 = ((x413&x414)&(x415+x416));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x417 = 105404722U;
	int32_t x418 = 5993389;
	int8_t x419 = INT8_MAX;
	int64_t x420 = -1LL;
	int64_t t93 = -64870105497455LL;

	t93 = ((x417&x418)&(x419+x420));

	if (t93 != 32LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x421 = INT64_MIN;
	int32_t x422 = INT32_MAX;
	uint64_t x423 = 96158021566086LLU;
	volatile uint64_t t94 = 12940958378LLU;

	t94 = ((x421&x422)&(x423+x424));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x426 = UINT64_MAX;
	int64_t x427 = -1LL;
	int32_t x428 = 970712;
	volatile uint64_t t95 = 1786829509106863423LLU;

	t95 = ((x425&x426)&(x427+x428));

	if (t95 != 970711LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x429 = -20234;
	volatile uint64_t x430 = 211058504019144984LLU;
	int64_t x431 = -1LL;
	int64_t x432 = INT64_MAX;

	t96 = ((x429&x430)&(x431+x432));

	if (t96 != 211058504019128336LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x433 = INT16_MIN;
	volatile int16_t x434 = -1;
	volatile uint32_t x435 = 7006837U;
	volatile uint64_t x436 = UINT64_MAX;
	volatile uint64_t t97 = 11951932223853446LLU;

	t97 = ((x433&x434)&(x435+x436));

	if (t97 != 6979584LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x441 = 1849091748265678853LLU;
	volatile uint8_t x442 = 10U;
	int32_t x443 = -4665872;
	static int16_t x444 = 1505;

	t98 = ((x441&x442)&(x443+x444));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x449 = INT16_MIN;
	int64_t x450 = 0LL;
	uint16_t x451 = UINT16_MAX;
	int8_t x452 = 0;
	volatile int64_t t99 = 4156006400601LL;

	t99 = ((x449&x450)&(x451+x452));

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

