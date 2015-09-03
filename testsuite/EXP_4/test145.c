#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x6 = INT16_MIN;
static int32_t x9 = INT32_MAX;
uint8_t x13 = UINT8_MAX;
static int64_t x15 = -1LL;
static volatile uint16_t x16 = 3U;
int32_t x18 = 751;
volatile int64_t t4 = -32289959330051720LL;
static int64_t x23 = -1LL;
int64_t x31 = 35858792678LL;
uint64_t x36 = 9698366635991LLU;
uint8_t x37 = 115U;
int8_t x40 = INT8_MIN;
static int32_t x41 = INT32_MAX;
static int64_t x42 = -6121644701135078LL;
int16_t x47 = -1;
int8_t x51 = 0;
volatile int64_t t14 = 181258235020672LL;
uint64_t x68 = UINT64_MAX;
int32_t x75 = INT32_MIN;
uint8_t x78 = 22U;
volatile uint16_t x79 = UINT16_MAX;
volatile uint64_t t19 = 171296621LLU;
int8_t x85 = INT8_MIN;
volatile uint16_t x94 = 4U;
int32_t t22 = -11;
int64_t x99 = -47696194LL;
static uint64_t x107 = 4417661393LLU;
int16_t x113 = INT16_MIN;
uint64_t x122 = UINT64_MAX;
uint64_t x124 = 11039332639LLU;
uint64_t t28 = 333817723562742020LLU;
uint64_t x131 = 126LLU;
int32_t t31 = 173388075;
int16_t x138 = INT16_MAX;
int64_t x140 = -480574159LL;
volatile uint8_t x141 = UINT8_MAX;
int64_t x145 = -55108LL;
uint32_t x152 = UINT32_MAX;
static uint32_t t35 = 13219543U;
int8_t x154 = INT8_MAX;
static uint32_t x163 = 48U;
volatile int32_t t38 = 1121314;
uint32_t x172 = 1076774529U;
int16_t x184 = INT16_MAX;
int16_t x185 = INT16_MIN;
int16_t x195 = -2028;
int8_t x201 = INT8_MIN;
volatile int32_t x204 = 19427420;
int64_t x206 = -750LL;
static volatile int64_t t46 = 108454LL;
int8_t x217 = INT8_MAX;
uint64_t x225 = 3739789442805356LLU;
int16_t x232 = -153;
uint64_t x233 = UINT64_MAX;
static int16_t x238 = -1447;
static int32_t x240 = -153;
static volatile int8_t x247 = INT8_MIN;
volatile uint64_t t59 = 472144LLU;
uint64_t x286 = 5438579374101513LLU;
static int8_t x287 = INT8_MAX;
static int32_t x293 = INT32_MIN;
int64_t x294 = INT64_MIN;
int64_t t63 = -272LL;
int8_t x300 = INT8_MAX;
int16_t x310 = -1;
int16_t x328 = -1;
int64_t x331 = -21140LL;
uint32_t x333 = 1719U;
uint32_t x340 = 4060819U;
int64_t x341 = INT64_MAX;
static uint32_t x342 = 53959U;
volatile int8_t x344 = INT8_MIN;
volatile int64_t t74 = 15340452307456LL;
int8_t x349 = INT8_MIN;
int8_t x352 = INT8_MAX;
int64_t t76 = 9136290386943569LL;
int8_t x361 = -5;
uint32_t x368 = 1526884U;
int16_t x373 = 165;
volatile uint32_t t81 = 1U;
uint16_t x384 = 3U;
int8_t x391 = -1;
volatile int16_t x397 = -1;
volatile int32_t x399 = -1;
volatile int64_t t85 = 20LL;
int64_t t86 = 3009206076476LL;
static int8_t x416 = INT8_MIN;
static volatile uint32_t x425 = 4190518U;
int32_t x433 = INT32_MIN;
int8_t x440 = -1;
uint8_t x441 = 0U;
uint32_t x443 = 364261U;
static uint8_t x444 = 97U;
uint16_t x452 = 1U;
volatile uint32_t t99 = 1015775342U;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	int8_t x2 = INT8_MAX;
	uint32_t x3 = 45U;
	uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 88663593211458469LLU;

	t0 = (x1-(x2|(x3+x4)));

	if (t0 != 18446744073709518721LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	uint8_t x7 = 2U;
	int64_t x8 = 70LL;
	int64_t t1 = 2865LL;

	t1 = (x5-(x6|(x7+x8)));

	if (t1 != 2147516343LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -1;
	static volatile uint32_t x11 = 1041952U;
	uint8_t x12 = 3U;
	uint32_t t2 = 14974971U;

	t2 = (x9-(x10|(x11+x12)));

	if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	int64_t t3 = -77633142188803851LL;

	t3 = (x13-(x14|(x15+x16)));

	if (t3 != 381LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 0;
	static volatile uint8_t x19 = 15U;
	int64_t x20 = 72LL;

	t4 = (x17-(x18|(x19+x20)));

	if (t4 != -767LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 1912U;
	static int64_t x22 = 4685091715946939LL;
	uint32_t x24 = 657U;
	volatile int64_t t5 = 5222528LL;

	t5 = (x21-(x22|(x23+x24)));

	if (t5 != -4685091715945539LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = 201618723LL;
	uint64_t x26 = 78693LLU;
	int64_t x27 = -1LL;
	int8_t x28 = INT8_MIN;
	volatile uint64_t t6 = 821964331987LLU;

	t6 = (x25-(x26|(x27+x28)));

	if (t6 != 201618852LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = -30;
	int8_t x30 = 2;
	volatile int8_t x32 = 45;
	static volatile int64_t t7 = 15602454743LL;

	t7 = (x29-(x30|(x31+x32)));

	if (t7 != -35858792753LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	volatile int64_t x34 = INT64_MAX;
	int8_t x35 = INT8_MIN;
	volatile uint64_t t8 = 1315LLU;

	t8 = (x33-(x34|(x35+x36)));

	if (t8 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = 6;
	uint16_t x39 = 10U;
	int32_t t9 = 255864;

	t9 = (x37-(x38|(x39+x40)));

	if (t9 != 229) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x43 = 4800U;
	int16_t x44 = 58;
	volatile int64_t t10 = -23850423842575895LL;

	t10 = (x41-(x42|(x43+x44)));

	if (t10 != 6121646848614405LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	int16_t x46 = -4067;
	int16_t x48 = INT16_MIN;
	static volatile int32_t t11 = 451430;

	t11 = (x45-(x46|(x47+x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = -1;
	static int16_t x50 = -1385;
	int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -12360139;

	t12 = (x49-(x50|(x51+x52)));

	if (t12 != 1384) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x57 = -1;
	static int16_t x58 = INT16_MIN;
	int8_t x59 = INT8_MIN;
	volatile uint32_t x60 = 83U;
	static uint32_t t13 = 676U;

	t13 = (x57-(x58|(x59+x60)));

	if (t13 != 44U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = UINT8_MAX;
	volatile int8_t x62 = 1;
	int8_t x63 = -1;
	volatile int64_t x64 = 27948035448LL;

	t14 = (x61-(x62|(x63+x64)));

	if (t14 != -27948035192LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = -7;
	static uint32_t x66 = 88185866U;
	int64_t x67 = INT64_MAX;
	uint64_t t15 = 3568764LLU;

	t15 = (x65-(x66|(x67+x68)));

	if (t15 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = -1;
	volatile int16_t x70 = -8873;
	int16_t x71 = -1;
	uint8_t x72 = UINT8_MAX;
	int32_t t16 = -2;

	t16 = (x69-(x70|(x71+x72)));

	if (t16 != 8704) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x73 = INT8_MAX;
	uint8_t x74 = UINT8_MAX;
	int8_t x76 = INT8_MAX;
	volatile int32_t t17 = 443;

	t17 = (x73-(x74|(x75+x76)));

	if (t17 != 2147483520) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x77 = 821927807LLU;
	static int8_t x80 = INT8_MIN;
	uint64_t t18 = 408220LLU;

	t18 = (x77-(x78|(x79+x80)));

	if (t18 != 821862400LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MIN;
	int32_t x82 = -64;
	int8_t x83 = -22;
	uint64_t x84 = 166490789280606LLU;

	t19 = (x81-(x82|(x83+x84)));

	if (t19 != 18446744073709518904LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x86 = -2843792;
	int16_t x87 = -494;
	int64_t x88 = INT64_MAX;
	volatile int64_t t20 = 15454493988LL;

	t20 = (x85-(x86|(x87+x88)));

	if (t20 != 15LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = UINT64_MAX;
	uint32_t x90 = UINT32_MAX;
	volatile uint32_t x91 = 14U;
	uint32_t x92 = UINT32_MAX;
	volatile uint64_t t21 = 899LLU;

	t21 = (x89-(x90|(x91+x92)));

	if (t21 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x93 = 0U;
	static int32_t x95 = -1;
	int8_t x96 = 2;

	t22 = (x93-(x94|(x95+x96)));

	if (t22 != -5) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x97 = 6U;
	int16_t x98 = -1;
	volatile int16_t x100 = 12;
	volatile int64_t t23 = -654091LL;

	t23 = (x97-(x98|(x99+x100)));

	if (t23 != 7LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = UINT32_MAX;
	uint16_t x106 = 3350U;
	uint32_t x108 = 101029U;
	volatile uint64_t t24 = 213LLU;

	t24 = (x105-(x106|(x107+x108)));

	if (t24 != 18446744073586754185LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x109 = INT8_MIN;
	int8_t x110 = -15;
	uint16_t x111 = UINT16_MAX;
	volatile int8_t x112 = INT8_MIN;
	int32_t t25 = 37;

	t25 = (x109-(x110|(x111+x112)));

	if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x114 = 150U;
	static int16_t x115 = 1;
	volatile int32_t x116 = -14079;
	static volatile uint32_t t26 = 51424702U;

	t26 = (x113-(x114|(x115+x116)));

	if (t26 != 4294948458U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MIN;
	int16_t x118 = INT16_MAX;
	uint32_t x119 = 132916U;
	static int64_t x120 = -1LL;
	volatile int64_t t27 = 46983224185753782LL;

	t27 = (x117-(x118|(x119+x120)));

	if (t27 != -2147647487LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MAX;
	static int16_t x123 = -10;

	t28 = (x121-(x122|(x123+x124)));

	if (t28 != 32768LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x125 = 72U;
	volatile int32_t x126 = 1391;
	int32_t x127 = 779216087;
	static int64_t x128 = INT64_MIN;
	volatile int64_t t29 = 9502010017LL;

	t29 = (x125-(x126|(x127+x128)));

	if (t29 != 9223372036075559497LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = 425;
	volatile uint8_t x130 = 6U;
	uint8_t x132 = 63U;
	volatile uint64_t t30 = 17957839365232LLU;

	t30 = (x129-(x130|(x131+x132)));

	if (t30 != 234LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = 9;
	int16_t x134 = -1;
	int8_t x135 = -39;
	int8_t x136 = INT8_MIN;

	t31 = (x133-(x134|(x135+x136)));

	if (t31 != 10) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = -1LL;
	uint8_t x139 = UINT8_MAX;
	int64_t t32 = 50LL;

	t32 = (x137-(x138|(x139+x140)));

	if (t32 != 480542720LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x142 = INT64_MIN;
	uint32_t x143 = 246211256U;
	static volatile int8_t x144 = 0;
	int64_t t33 = -37890026LL;

	t33 = (x141-(x142|(x143+x144)));

	if (t33 != 9223372036608564807LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x146 = 213718976U;
	int64_t x147 = 72683241167374002LL;
	int16_t x148 = -721;
	volatile int64_t t34 = 3083LL;

	t34 = (x145-(x146|(x147+x148)));

	if (t34 != -72683241370332965LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = 179U;
	uint16_t x150 = UINT16_MAX;
	int8_t x151 = 0;

	t35 = (x149-(x150|(x151+x152)));

	if (t35 != 180U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = -1;
	uint64_t x155 = 396449LLU;
	int32_t x156 = -1;
	uint64_t t36 = 403LLU;

	t36 = (x153-(x154|(x155+x156)));

	if (t36 != 18446744073709155072LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x161 = INT64_MIN;
	int64_t x162 = INT64_MIN;
	int8_t x164 = INT8_MIN;
	static volatile int64_t t37 = -1513LL;

	t37 = (x161-(x162|(x163+x164)));

	if (t37 != -4294967216LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x165 = 418U;
	int16_t x166 = INT16_MIN;
	int8_t x167 = INT8_MAX;
	uint8_t x168 = UINT8_MAX;

	t38 = (x165-(x166|(x167+x168)));

	if (t38 != 32804) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x169 = 3177753LLU;
	uint32_t x170 = UINT32_MAX;
	uint64_t x171 = UINT64_MAX;
	volatile uint64_t t39 = 1081355608801735743LLU;

	t39 = (x169-(x170|(x171+x172)));

	if (t39 != 18446744069417762074LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x173 = 863U;
	int8_t x174 = 38;
	volatile int32_t x175 = INT32_MIN;
	int32_t x176 = INT32_MAX;
	volatile int32_t t40 = -340;

	t40 = (x173-(x174|(x175+x176)));

	if (t40 != 864) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = INT32_MIN;
	int8_t x182 = INT8_MIN;
	int32_t x183 = -5362672;
	int32_t t41 = -58470221;

	t41 = (x181-(x182|(x183+x184)));

	if (t41 != -2147483535) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x186 = INT32_MIN;
	static uint64_t x187 = UINT64_MAX;
	int16_t x188 = -1;
	volatile uint64_t t42 = 7263080404803032204LLU;

	t42 = (x185-(x186|(x187+x188)));

	if (t42 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x189 = INT8_MIN;
	int64_t x190 = INT64_MAX;
	int8_t x191 = INT8_MIN;
	static volatile uint8_t x192 = 29U;
	int64_t t43 = 974884040299076559LL;

	t43 = (x189-(x190|(x191+x192)));

	if (t43 != -127LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x193 = 8312U;
	uint16_t x194 = UINT16_MAX;
	uint8_t x196 = UINT8_MAX;
	uint32_t t44 = 253157U;

	t44 = (x193-(x194|(x195+x196)));

	if (t44 != 8313U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x202 = 9U;
	static int64_t x203 = 11LL;
	static int64_t t45 = -40434LL;

	t45 = (x201-(x202|(x203+x204)));

	if (t45 != -19427567LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = INT16_MAX;
	volatile int64_t x207 = -59486077605LL;
	int16_t x208 = INT16_MAX;

	t46 = (x205-(x206|(x207+x208)));

	if (t46 != 33445LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x209 = INT16_MAX;
	volatile uint32_t x210 = 1485899U;
	static int8_t x211 = INT8_MIN;
	int8_t x212 = INT8_MAX;
	static uint32_t t47 = 1802215760U;

	t47 = (x209-(x210|(x211+x212)));

	if (t47 != 32768U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x213 = INT8_MAX;
	int16_t x214 = INT16_MIN;
	int8_t x215 = INT8_MIN;
	int32_t x216 = 29589;
	int32_t t48 = 140719619;

	t48 = (x213-(x214|(x215+x216)));

	if (t48 != 3434) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x218 = INT32_MIN;
	uint16_t x219 = UINT16_MAX;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t49 = -14100134;

	t49 = (x217-(x218|(x219+x220)));

	if (t49 != 2147417985) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x226 = UINT32_MAX;
	static int8_t x227 = 1;
	volatile uint8_t x228 = 44U;
	static uint64_t t50 = 933382256LLU;

	t50 = (x225-(x226|(x227+x228)));

	if (t50 != 3739785147838061LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x229 = 14685515273166064LLU;
	int16_t x230 = -24;
	volatile uint64_t x231 = 4641183776LLU;
	uint64_t t51 = 571734245706182LLU;

	t51 = (x229-(x230|(x231+x232)));

	if (t51 != 14685515273166081LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x234 = 329U;
	static volatile int16_t x235 = INT16_MAX;
	uint16_t x236 = 22U;
	static uint64_t t52 = 213391998183533LLU;

	t52 = (x233-(x234|(x235+x236)));

	if (t52 != 18446744073709518498LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = INT8_MIN;
	static int16_t x239 = -1;
	volatile int32_t t53 = -63;

	t53 = (x237-(x238|(x239+x240)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x245 = UINT64_MAX;
	int16_t x246 = INT16_MIN;
	int16_t x248 = INT16_MIN;
	volatile uint64_t t54 = 8813085230252177LLU;

	t54 = (x245-(x246|(x247+x248)));

	if (t54 != 127LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x249 = UINT32_MAX;
	volatile int64_t x250 = INT64_MAX;
	static uint16_t x251 = 462U;
	int32_t x252 = -1;
	int64_t t55 = 362778371018566LL;

	t55 = (x249-(x250|(x251+x252)));

	if (t55 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x257 = -1;
	uint32_t x258 = 0U;
	uint64_t x259 = UINT64_MAX;
	uint32_t x260 = UINT32_MAX;
	static uint64_t t56 = 4754LLU;

	t56 = (x257-(x258|(x259+x260)));

	if (t56 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x261 = 2;
	volatile int8_t x262 = INT8_MAX;
	int8_t x263 = -1;
	int16_t x264 = INT16_MIN;
	int32_t t57 = 0;

	t57 = (x261-(x262|(x263+x264)));

	if (t57 != 32771) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x273 = 7U;
	static volatile int32_t x274 = -1;
	volatile int16_t x275 = INT16_MAX;
	uint32_t x276 = 68013U;
	uint32_t t58 = 508U;

	t58 = (x273-(x274|(x275+x276)));

	if (t58 != 8U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x277 = 1612796U;
	uint64_t x278 = UINT64_MAX;
	int8_t x279 = INT8_MIN;
	uint16_t x280 = 1U;

	t59 = (x277-(x278|(x279+x280)));

	if (t59 != 1612797LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x281 = UINT8_MAX;
	int8_t x282 = -30;
	static uint32_t x283 = 146952U;
	int64_t x284 = 925589913119LL;
	volatile int64_t t60 = -466513118531489LL;

	t60 = (x281-(x282|(x283+x284)));

	if (t60 != 280LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x285 = INT32_MIN;
	uint16_t x288 = UINT16_MAX;
	uint64_t t61 = 1618575LLU;

	t61 = (x285-(x286|(x287+x288)));

	if (t61 != 18441305492187966337LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x289 = INT8_MIN;
	int32_t x290 = -764846832;
	uint8_t x291 = 36U;
	static int8_t x292 = -1;
	volatile int32_t t62 = 3051892;

	t62 = (x289-(x290|(x291+x292)));

	if (t62 != 764846669) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x295 = INT8_MIN;
	int8_t x296 = INT8_MIN;

	t63 = (x293-(x294|(x295+x296)));

	if (t63 != -2147483392LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x297 = INT8_MAX;
	static uint16_t x298 = 841U;
	int64_t x299 = INT64_MIN;
	volatile int64_t t64 = 198485654896138160LL;

	t64 = (x297-(x298|(x299+x300)));

	if (t64 != 9223372036854775040LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = -3246LL;
	volatile uint64_t x302 = UINT64_MAX;
	int8_t x303 = INT8_MAX;
	uint8_t x304 = 33U;
	uint64_t t65 = 12LLU;

	t65 = (x301-(x302|(x303+x304)));

	if (t65 != 18446744073709548371LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x309 = 136296;
	volatile int32_t x311 = -2692379;
	volatile int16_t x312 = 1;
	volatile int32_t t66 = 212;

	t66 = (x309-(x310|(x311+x312)));

	if (t66 != 136297) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x313 = INT32_MAX;
	uint32_t x314 = 297415059U;
	int8_t x315 = INT8_MIN;
	uint16_t x316 = 290U;
	uint32_t t67 = 120682U;

	t67 = (x313-(x314|(x315+x316)));

	if (t67 != 1850068556U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x321 = INT8_MIN;
	int8_t x322 = INT8_MIN;
	uint8_t x323 = 0U;
	int32_t x324 = -1;
	volatile int32_t t68 = 4115;

	t68 = (x321-(x322|(x323+x324)));

	if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x325 = 3U;
	volatile int32_t x326 = -1;
	volatile uint32_t x327 = 15U;
	volatile uint32_t t69 = 11208U;

	t69 = (x325-(x326|(x327+x328)));

	if (t69 != 4U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x329 = 124710;
	static volatile uint8_t x330 = 3U;
	int8_t x332 = INT8_MIN;
	int64_t t70 = 4591LL;

	t70 = (x329-(x330|(x331+x332)));

	if (t70 != 145975LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x334 = UINT64_MAX;
	int8_t x335 = -1;
	uint16_t x336 = 187U;
	uint64_t t71 = 529504280512LLU;

	t71 = (x333-(x334|(x335+x336)));

	if (t71 != 1720LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = INT16_MIN;
	int8_t x338 = -1;
	int8_t x339 = -43;
	uint32_t t72 = 76U;

	t72 = (x337-(x338|(x339+x340)));

	if (t72 != 4294934529U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x343 = INT16_MIN;
	volatile int64_t t73 = -412870729122718LL;

	t73 = (x341-(x342|(x343+x344)));

	if (t73 != 9223372032559808568LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x345 = INT64_MIN;
	volatile int16_t x346 = INT16_MIN;
	int16_t x347 = -50;
	static volatile int32_t x348 = -21095875;

	t74 = (x345-(x346|(x347+x348)));

	if (t74 != -9223372036854749707LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x350 = 0;
	int16_t x351 = INT16_MAX;
	volatile int32_t t75 = -389179;

	t75 = (x349-(x350|(x351+x352)));

	if (t75 != -33022) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x353 = -11162053168787614LL;
	int64_t x354 = -1LL;
	volatile int32_t x355 = INT32_MAX;
	uint32_t x356 = 1453171U;

	t76 = (x353-(x354|(x355+x356)));

	if (t76 != -11162053168787613LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x357 = -119;
	volatile int16_t x358 = INT16_MAX;
	static volatile int8_t x359 = INT8_MIN;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t77 = -149218963;

	t77 = (x357-(x358|(x359+x360)));

	if (t77 != -32886) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x362 = INT16_MIN;
	volatile int8_t x363 = 14;
	volatile int32_t x364 = INT32_MIN;
	static volatile int32_t t78 = -39348;

	t78 = (x361-(x362|(x363+x364)));

	if (t78 != 32749) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x365 = 59U;
	static int32_t x366 = 35;
	int64_t x367 = -1LL;
	int64_t t79 = -11944141791403LL;

	t79 = (x365-(x366|(x367+x368)));

	if (t79 != -1526824LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x369 = -1;
	static int32_t x370 = INT32_MAX;
	uint32_t x371 = 6U;
	uint64_t x372 = 1LLU;
	volatile uint64_t t80 = 68LLU;

	t80 = (x369-(x370|(x371+x372)));

	if (t80 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x374 = INT8_MIN;
	uint32_t x375 = 72U;
	int32_t x376 = 893;

	t81 = (x373-(x374|(x375+x376)));

	if (t81 != 224U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x381 = 29296049U;
	uint64_t x382 = 1255934750093742264LLU;
	int64_t x383 = -1LL;
	volatile uint64_t t82 = 21845059LLU;

	t82 = (x381-(x382|(x383+x384)));

	if (t82 != 17190809323645105399LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x389 = -1LL;
	int16_t x390 = INT16_MAX;
	uint64_t x392 = 3947820373144LLU;
	volatile uint64_t t83 = 9717316LLU;

	t83 = (x389-(x390|(x391+x392)));

	if (t83 != 18446740125889167360LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x393 = INT64_MIN;
	volatile uint8_t x394 = 4U;
	volatile int32_t x395 = -1;
	static volatile int32_t x396 = -1;
	volatile int64_t t84 = -206LL;

	t84 = (x393-(x394|(x395+x396)));

	if (t84 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x398 = UINT8_MAX;
	int64_t x400 = -800810719711LL;

	t85 = (x397-(x398|(x399+x400)));

	if (t85 != 800810719488LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x405 = 0;
	int64_t x406 = INT64_MIN;
	int16_t x407 = 1;
	uint8_t x408 = 44U;

	t86 = (x405-(x406|(x407+x408)));

	if (t86 != 9223372036854775763LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x409 = -4270344417087421476LL;
	volatile int64_t x410 = 332527339642LL;
	uint32_t x411 = UINT32_MAX;
	int64_t x412 = INT64_MIN;
	int64_t t87 = -12282540017LL;

	t87 = (x409-(x410|(x411+x412)));

	if (t87 != 4953027284759905245LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x413 = UINT16_MAX;
	int32_t x414 = INT32_MIN;
	int32_t x415 = -1;
	volatile int32_t t88 = -1;

	t88 = (x413-(x414|(x415+x416)));

	if (t88 != 65664) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x421 = 4283462465242749LLU;
	volatile uint64_t x422 = UINT64_MAX;
	int16_t x423 = INT16_MIN;
	volatile uint32_t x424 = UINT32_MAX;
	static volatile uint64_t t89 = 477377708289597109LLU;

	t89 = (x421-(x422|(x423+x424)));

	if (t89 != 4283462465242750LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x426 = UINT8_MAX;
	volatile int64_t x427 = -1LL;
	static int32_t x428 = -1015808618;
	volatile int64_t t90 = -1813579891277628619LL;

	t90 = (x425-(x426|(x427+x428)));

	if (t90 != 1019999031LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x429 = INT16_MIN;
	uint32_t x430 = UINT32_MAX;
	uint8_t x431 = 1U;
	uint64_t x432 = 512500787740244LLU;
	uint64_t t91 = 437747443589LLU;

	t91 = (x429-(x430|(x431+x432)));

	if (t91 != 18446231572441956353LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x434 = 6800642LL;
	uint16_t x435 = UINT16_MAX;
	uint8_t x436 = 127U;
	volatile int64_t t92 = 4LL;

	t92 = (x433-(x434|(x435+x436)));

	if (t92 != -2154284414LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x437 = 266103879886222LLU;
	int32_t x438 = INT32_MIN;
	uint16_t x439 = 26563U;
	volatile uint64_t t93 = 14883216124288LLU;

	t93 = (x437-(x438|(x439+x440)));

	if (t93 != 266106027343308LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x442 = 5;
	static volatile uint32_t t94 = 8385615U;

	t94 = (x441-(x442|(x443+x444)));

	if (t94 != 4294602937U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x445 = UINT16_MAX;
	volatile uint8_t x446 = UINT8_MAX;
	uint8_t x447 = 25U;
	static uint64_t x448 = UINT64_MAX;
	uint64_t t95 = 18621018886LLU;

	t95 = (x445-(x446|(x447+x448)));

	if (t95 != 65280LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x449 = -883794;
	int8_t x450 = 23;
	int16_t x451 = INT16_MAX;
	static volatile int32_t t96 = 2;

	t96 = (x449-(x450|(x451+x452)));

	if (t96 != -916585) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x453 = 245823681;
	int8_t x454 = -7;
	uint8_t x455 = 1U;
	int64_t x456 = -70LL;
	volatile int64_t t97 = -66422996838LL;

	t97 = (x453-(x454|(x455+x456)));

	if (t97 != 245823686LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x457 = UINT32_MAX;
	volatile int16_t x458 = 6108;
	uint8_t x459 = 13U;
	volatile uint64_t x460 = 426LLU;
	volatile uint64_t t98 = 242LLU;

	t98 = (x457-(x458|(x459+x460)));

	if (t98 != 4294961152LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x461 = 29089164U;
	int32_t x462 = -5740140;
	static uint8_t x463 = 2U;
	static uint16_t x464 = UINT16_MAX;

	t99 = (x461-(x462|(x463+x464)));

	if (t99 != 34763767U) { NG(); } else { ; }
	
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

