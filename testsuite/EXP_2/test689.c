#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = INT32_MIN;
int64_t x2 = 3344735LL;
static int32_t x3 = INT32_MIN;
int32_t x10 = INT32_MAX;
volatile uint64_t x12 = UINT64_MAX;
int32_t x13 = -1;
int8_t x17 = 62;
static uint32_t x20 = UINT32_MAX;
volatile int8_t x23 = INT8_MIN;
int16_t x24 = INT16_MAX;
int64_t t6 = -1LL;
uint64_t t7 = 189464716097300366LLU;
uint8_t x33 = UINT8_MAX;
uint32_t x38 = UINT32_MAX;
static uint16_t x39 = 63U;
uint8_t x45 = UINT8_MAX;
int8_t x49 = INT8_MAX;
int64_t x53 = INT64_MIN;
int32_t x72 = INT32_MAX;
static uint8_t x80 = 100U;
int32_t x81 = INT32_MIN;
static uint64_t t19 = 1096334657252LLU;
volatile int8_t x89 = 50;
uint16_t x92 = 5U;
static int32_t t20 = 1;
volatile int64_t t22 = 26142207LL;
static uint8_t x102 = 0U;
uint8_t x105 = UINT8_MAX;
int32_t x111 = INT32_MIN;
int64_t x115 = INT64_MIN;
int8_t x120 = INT8_MAX;
uint64_t x127 = 1869553130270234639LLU;
uint32_t x128 = UINT32_MAX;
int16_t x137 = INT16_MIN;
volatile uint64_t x142 = 0LLU;
volatile int64_t x143 = 40512349LL;
uint8_t x146 = 1U;
static uint64_t t34 = 40888LLU;
uint8_t x151 = UINT8_MAX;
int32_t x153 = INT32_MAX;
static uint16_t x154 = UINT16_MAX;
static volatile uint64_t x157 = UINT64_MAX;
uint16_t x165 = 748U;
int64_t x166 = INT64_MIN;
int64_t t40 = 1779915274136LL;
volatile int16_t x173 = -1;
int64_t x181 = INT64_MIN;
static int8_t x182 = INT8_MAX;
uint8_t x200 = 2U;
int16_t x212 = 1;
uint32_t t51 = 22U;
volatile uint64_t x221 = 683419592710124LLU;
static int32_t x225 = INT32_MAX;
volatile int32_t t54 = 9;
int64_t x231 = -1LL;
int64_t x242 = INT64_MIN;
uint16_t x247 = 3995U;
int64_t x249 = -238157681405895LL;
static int16_t x252 = INT16_MIN;
volatile int16_t x274 = INT16_MAX;
int8_t x276 = -1;
uint32_t x278 = UINT32_MAX;
uint8_t x285 = 116U;
volatile uint16_t x287 = 5U;
volatile int32_t x291 = -2661490;
static int64_t x304 = 1874497928726LL;
volatile int16_t x310 = 21;
int16_t x312 = -1;
uint8_t x314 = UINT8_MAX;
uint16_t x316 = UINT16_MAX;
int64_t t79 = -574253172608540736LL;
static uint8_t x335 = 3U;
static volatile int64_t x341 = INT64_MIN;
int64_t x346 = INT64_MAX;
volatile uint32_t x355 = 389722U;
volatile uint64_t t86 = 4075LLU;
int16_t x361 = -609;
int32_t x364 = INT32_MAX;
int64_t x376 = INT64_MIN;
volatile int64_t x377 = INT64_MAX;
static int64_t t91 = -366048034577373LL;
static uint16_t x387 = 97U;
volatile uint32_t x402 = 7185U;
static int16_t x407 = -1;
int32_t t97 = 1;
static int16_t x410 = INT16_MIN;


void f0(void) {
	int8_t x4 = INT8_MIN;
	volatile int64_t t0 = -43633LL;

	t0 = ((x1+(x2%x3))^x4);

	if (t0 != 2144138975LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 15U;
	volatile int64_t x6 = 181864720874LL;
	int64_t x7 = INT64_MIN;
	volatile int64_t x8 = -780325901134LL;
	volatile int64_t t1 = 9LL;

	t1 = ((x5+(x6%x7))^x8);

	if (t1 != -687076752053LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	volatile uint16_t x11 = 35U;
	uint64_t t2 = 2537647529LLU;

	t2 = ((x9+(x10%x11))^x12);

	if (t2 != 32745LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MAX;
	static int8_t x15 = -5;
	static uint32_t x16 = 182326U;
	uint32_t t3 = 558U;

	t3 = ((x13+(x14%x15))^x16);

	if (t3 != 182327U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x18 = INT8_MIN;
	volatile int32_t x19 = INT32_MIN;
	uint32_t t4 = 2907404U;

	t4 = ((x17+(x18%x19))^x20);

	if (t4 != 65U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	volatile uint32_t x22 = UINT32_MAX;
	uint32_t t5 = 1247817162U;

	t5 = ((x21+(x22%x23))^x24);

	if (t5 != 32641U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -6123;
	static volatile int64_t x26 = INT64_MIN;
	int16_t x27 = INT16_MIN;
	static volatile int16_t x28 = INT16_MAX;

	t6 = ((x25+(x26%x27))^x28);

	if (t6 != -26646LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	volatile uint64_t x30 = 4067LLU;
	int32_t x31 = -19364;
	int64_t x32 = 161883LL;

	t7 = ((x29+(x30%x31))^x32);

	if (t7 != 161592LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x34 = 45U;
	int32_t x35 = -1;
	int32_t x36 = 3628610;
	int32_t t8 = -246;

	t8 = ((x33+(x34%x35))^x36);

	if (t8 != 3628733) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MIN;
	static int32_t x40 = INT32_MIN;
	int64_t t9 = -383723LL;

	t9 = ((x37+(x38%x39))^x40);

	if (t9 != 9223372034707292163LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 243U;
	int32_t x42 = INT32_MIN;
	static int8_t x43 = INT8_MIN;
	volatile uint32_t x44 = 12232U;
	volatile uint32_t t10 = 190U;

	t10 = ((x41+(x42%x43))^x44);

	if (t10 != 12091U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = 401U;
	static uint32_t x47 = UINT32_MAX;
	int8_t x48 = -3;
	uint32_t t11 = 891838U;

	t11 = ((x45+(x46%x47))^x48);

	if (t11 != 4294966637U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = 772;
	int16_t x51 = INT16_MAX;
	int32_t x52 = 447740;
	volatile int32_t t12 = -3229;

	t12 = ((x49+(x50%x51))^x52);

	if (t12 != 448383) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = 104;
	int64_t x55 = INT64_MIN;
	int8_t x56 = INT8_MIN;
	int64_t t13 = -366139LL;

	t13 = ((x53+(x54%x55))^x56);

	if (t13 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	uint32_t x62 = 1550662301U;
	int64_t x63 = INT64_MAX;
	volatile int32_t x64 = INT32_MIN;
	int64_t t14 = -304LL;

	t14 = ((x61+(x62%x63))^x64);

	if (t14 != -596821475LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = 66050559559812LL;
	int32_t x66 = INT32_MAX;
	static uint32_t x67 = 1U;
	uint8_t x68 = UINT8_MAX;
	static volatile int64_t t15 = -10197800829079483LL;

	t15 = ((x65+(x66%x67))^x68);

	if (t15 != 66050559559803LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	volatile int16_t x70 = INT16_MAX;
	int16_t x71 = -1;
	volatile int64_t t16 = 646604712381667LL;

	t16 = ((x69+(x70%x71))^x72);

	if (t16 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x73 = INT64_MIN;
	static int8_t x74 = -1;
	static int16_t x75 = -1;
	int64_t x76 = INT64_MIN;
	volatile int64_t t17 = 183LL;

	t17 = ((x73+(x74%x75))^x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x77 = 14595552U;
	static int16_t x78 = 627;
	uint64_t x79 = 37856017LLU;
	static volatile uint64_t t18 = 6514LLU;

	t18 = ((x77+(x78%x79))^x80);

	if (t18 != 14596151LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x82 = 495425175988096344LLU;
	int16_t x83 = -1;
	uint8_t x84 = 6U;

	t19 = ((x81+(x82%x83))^x84);

	if (t19 != 495425173840612702LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x90 = 29013U;
	int8_t x91 = INT8_MAX;

	t20 = ((x89+(x90%x91))^x92);

	if (t20 != 110) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x93 = 0U;
	static int64_t x94 = -1LL;
	static volatile uint32_t x95 = 146170U;
	uint8_t x96 = 28U;
	static volatile int64_t t21 = 4LL;

	t21 = ((x93+(x94%x95))^x96);

	if (t21 != -29LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MAX;
	volatile int64_t x98 = -1LL;
	volatile int64_t x99 = -1LL;
	volatile int32_t x100 = 460;

	t22 = ((x97+(x98%x99))^x100);

	if (t22 != 32307LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = 0U;
	int32_t x103 = INT32_MAX;
	int32_t x104 = 349580;
	volatile int32_t t23 = 23255343;

	t23 = ((x101+(x102%x103))^x104);

	if (t23 != 349580) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x106 = 301U;
	static int64_t x107 = -1237749777384LL;
	int64_t x108 = 726740782153065275LL;
	static int64_t t24 = 86898198LL;

	t24 = ((x105+(x106%x107))^x108);

	if (t24 != 726740782153064727LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = UINT64_MAX;
	int64_t x110 = 40190514LL;
	int16_t x112 = -1;
	volatile uint64_t t25 = 21644569394257911LLU;

	t25 = ((x109+(x110%x111))^x112);

	if (t25 != 18446744073669361102LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = -1;
	int32_t x114 = INT32_MIN;
	int8_t x116 = INT8_MIN;
	int64_t t26 = -3198010413LL;

	t26 = ((x113+(x114%x115))^x116);

	if (t26 != 2147483775LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MIN;
	int32_t x118 = INT32_MAX;
	static int8_t x119 = INT8_MIN;
	volatile int32_t t27 = 2804213;

	t27 = ((x117+(x118%x119))^x120);

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x121 = INT16_MIN;
	int32_t x122 = INT32_MIN;
	volatile int8_t x123 = INT8_MIN;
	int8_t x124 = -56;
	int32_t t28 = 27;

	t28 = ((x121+(x122%x123))^x124);

	if (t28 != 32712) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = -2236396909110LL;
	int32_t x126 = 140293742;
	uint64_t t29 = 6117896221925261314LLU;

	t29 = ((x125+(x126%x127))^x128);

	if (t29 != 18446741838905211847LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = INT16_MAX;
	int8_t x130 = -3;
	int8_t x131 = INT8_MIN;
	static volatile uint8_t x132 = 3U;
	volatile int32_t t30 = 1;

	t30 = ((x129+(x130%x131))^x132);

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = 43U;
	static int32_t x134 = -114;
	int16_t x135 = -1;
	static int16_t x136 = INT16_MAX;
	int32_t t31 = 3544;

	t31 = ((x133+(x134%x135))^x136);

	if (t31 != 32724) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x138 = 7529;
	uint32_t x139 = 5U;
	int64_t x140 = -1LL;
	static volatile int64_t t32 = -289LL;

	t32 = ((x137+(x138%x139))^x140);

	if (t32 != -4294934533LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = 1724LLU;
	int32_t x144 = -513;
	volatile uint64_t t33 = 634762590403LLU;

	t33 = ((x141+(x142%x143))^x144);

	if (t33 != 18446744073709550403LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x145 = UINT16_MAX;
	int8_t x147 = -1;
	uint64_t x148 = 1316662098487LLU;

	t34 = ((x145+(x146%x147))^x148);

	if (t34 != 1316662134216LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MIN;
	int64_t x150 = 1617021682LL;
	int16_t x152 = -7;
	int64_t t35 = -442LL;

	t35 = ((x149+(x150%x151))^x152);

	if (t35 != 9223372036854775686LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x155 = INT64_MAX;
	uint64_t x156 = UINT64_MAX;
	static uint64_t t36 = 33414290LLU;

	t36 = ((x153+(x154%x155))^x156);

	if (t36 != 18446744071562002433LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x158 = -8389LL;
	static int8_t x159 = INT8_MIN;
	int16_t x160 = INT16_MIN;
	volatile uint64_t t37 = 5313LLU;

	t37 = ((x157+(x158%x159))^x160);

	if (t37 != 32698LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = INT64_MIN;
	static uint32_t x162 = 663633057U;
	static int16_t x163 = INT16_MAX;
	int16_t x164 = INT16_MAX;
	int64_t t38 = 893815232853880676LL;

	t38 = ((x161+(x162%x163))^x164);

	if (t38 != -9223372036854746047LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x167 = INT8_MIN;
	uint8_t x168 = UINT8_MAX;
	volatile int64_t t39 = 396700417160LL;

	t39 = ((x165+(x166%x167))^x168);

	if (t39 != 531LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = 0U;
	int64_t x170 = 358396603608LL;
	volatile uint8_t x171 = UINT8_MAX;
	volatile uint32_t x172 = UINT32_MAX;

	t40 = ((x169+(x170%x171))^x172);

	if (t40 != 4294967067LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x174 = INT32_MIN;
	uint64_t x175 = 494781570LLU;
	uint16_t x176 = UINT16_MAX;
	static volatile uint64_t t41 = 8LLU;

	t41 = ((x173+(x174%x175))^x176);

	if (t41 != 363301044LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = 8633U;
	uint8_t x178 = 71U;
	int8_t x179 = INT8_MIN;
	int16_t x180 = INT16_MIN;
	static int32_t t42 = 5635;

	t42 = ((x177+(x178%x179))^x180);

	if (t42 != -24064) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x183 = 12472374758326854LLU;
	int64_t x184 = 15238129680LL;
	volatile uint64_t t43 = 2877229348285461LLU;

	t43 = ((x181+(x182%x183))^x184);

	if (t43 != 9223372052092905583LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = -18052287854952LL;
	int8_t x186 = INT8_MIN;
	uint16_t x187 = 12101U;
	volatile int16_t x188 = -630;
	int64_t t44 = 11923978218983LL;

	t44 = ((x185+(x186%x187))^x188);

	if (t44 != 18052287855506LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = -5;
	int16_t x190 = INT16_MIN;
	int8_t x191 = 1;
	static int16_t x192 = INT16_MIN;
	int32_t t45 = 415;

	t45 = ((x189+(x190%x191))^x192);

	if (t45 != 32763) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x193 = INT16_MIN;
	volatile int16_t x194 = INT16_MIN;
	int64_t x195 = -1LL;
	int64_t x196 = INT64_MIN;
	volatile int64_t t46 = -6054562262017524LL;

	t46 = ((x193+(x194%x195))^x196);

	if (t46 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = INT32_MIN;
	int16_t x198 = 12;
	static int16_t x199 = 1;
	volatile int32_t t47 = 8045;

	t47 = ((x197+(x198%x199))^x200);

	if (t47 != -2147483646) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = -1;
	volatile int16_t x202 = INT16_MAX;
	static int16_t x203 = 5;
	int32_t x204 = -1;
	int32_t t48 = 1;

	t48 = ((x201+(x202%x203))^x204);

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x205 = 1003U;
	static uint8_t x206 = UINT8_MAX;
	int8_t x207 = -1;
	int16_t x208 = INT16_MIN;
	uint32_t t49 = 10U;

	t49 = ((x205+(x206%x207))^x208);

	if (t49 != 4294935531U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x209 = 1415367265395LLU;
	int64_t x210 = INT64_MIN;
	int16_t x211 = INT16_MAX;
	volatile uint64_t t50 = 2181700588979547LLU;

	t50 = ((x209+(x210%x211))^x212);

	if (t50 != 1415367265386LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x213 = INT32_MIN;
	uint32_t x214 = UINT32_MAX;
	int32_t x215 = -1;
	volatile int8_t x216 = INT8_MIN;

	t51 = ((x213+(x214%x215))^x216);

	if (t51 != 2147483520U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x217 = 3U;
	int8_t x218 = -1;
	static uint16_t x219 = 7U;
	int64_t x220 = -7133411630155232LL;
	int64_t t52 = 453501685129LL;

	t52 = ((x217+(x218%x219))^x220);

	if (t52 != -7133411630155230LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x222 = INT32_MIN;
	int64_t x223 = INT64_MIN;
	uint8_t x224 = 1U;
	volatile uint64_t t53 = 92204348149382083LLU;

	t53 = ((x221+(x222%x223))^x224);

	if (t53 != 683417445226477LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x226 = INT8_MIN;
	int16_t x227 = -1042;
	static int16_t x228 = -3;

	t54 = ((x225+(x226%x227))^x228);

	if (t54 != -2147483518) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x229 = UINT32_MAX;
	int32_t x230 = 44;
	static volatile int8_t x232 = INT8_MIN;
	int64_t t55 = 2079460102LL;

	t55 = ((x229+(x230%x231))^x232);

	if (t55 != -4294967169LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MIN;
	static uint64_t x238 = UINT64_MAX;
	int64_t x239 = INT64_MAX;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t56 = 7428288102402LLU;

	t56 = ((x237+(x238%x239))^x240);

	if (t56 != 2147483646LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x241 = INT32_MIN;
	volatile uint8_t x243 = 33U;
	volatile int16_t x244 = INT16_MAX;
	volatile int64_t t57 = 2116706361LL;

	t57 = ((x241+(x242%x243))^x244);

	if (t57 != -2147516409LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x245 = 24878352LL;
	static uint16_t x246 = 1U;
	static volatile uint8_t x248 = 30U;
	static volatile int64_t t58 = -12151265105687110LL;

	t58 = ((x245+(x246%x247))^x248);

	if (t58 != 24878351LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x250 = -104;
	static uint64_t x251 = 7LLU;
	volatile uint64_t t59 = 944465292LLU;

	t59 = ((x249+(x250%x251))^x252);

	if (t59 != 238157681414204LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = 0;
	uint8_t x254 = UINT8_MAX;
	int64_t x255 = INT64_MAX;
	static uint8_t x256 = UINT8_MAX;
	volatile int64_t t60 = -407219180524579318LL;

	t60 = ((x253+(x254%x255))^x256);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x257 = 1U;
	int64_t x258 = -1LL;
	int32_t x259 = INT32_MIN;
	int64_t x260 = INT64_MAX;
	volatile int64_t t61 = INT64_MAX;

	t61 = ((x257+(x258%x259))^x260);

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x261 = -1LL;
	static uint64_t x262 = 187954628LLU;
	int16_t x263 = -5591;
	static uint16_t x264 = 1U;
	volatile uint64_t t62 = 242004064155LLU;

	t62 = ((x261+(x262%x263))^x264);

	if (t62 != 187954626LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x265 = 1019U;
	volatile int32_t x266 = -1;
	static volatile uint32_t x267 = 2979U;
	uint16_t x268 = UINT16_MAX;
	volatile uint32_t t63 = 307000395U;

	t63 = ((x265+(x266%x267))^x268);

	if (t63 != 64513U) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x269 = INT64_MIN;
	uint8_t x270 = 76U;
	int64_t x271 = -1LL;
	int32_t x272 = INT32_MAX;
	int64_t t64 = -29716139604LL;

	t64 = ((x269+(x270%x271))^x272);

	if (t64 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x273 = 973U;
	uint8_t x275 = 3U;
	int32_t t65 = -127;

	t65 = ((x273+(x274%x275))^x276);

	if (t65 != -975) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x277 = 0;
	static volatile uint16_t x279 = 324U;
	static uint64_t x280 = UINT64_MAX;
	uint64_t t66 = 36944235630980381LLU;

	t66 = ((x277+(x278%x279))^x280);

	if (t66 != 18446744073709551324LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x281 = 1465U;
	volatile int8_t x282 = -1;
	int64_t x283 = -126546LL;
	int64_t x284 = -1LL;
	volatile int64_t t67 = -90424LL;

	t67 = ((x281+(x282%x283))^x284);

	if (t67 != -1465LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x286 = INT8_MIN;
	uint32_t x288 = 7215770U;
	volatile uint32_t t68 = 36930260U;

	t68 = ((x285+(x286%x287))^x288);

	if (t68 != 7215851U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x289 = 375U;
	static int8_t x290 = INT8_MAX;
	volatile int32_t x292 = -1704644;
	int32_t t69 = 12406934;

	t69 = ((x289+(x290%x291))^x292);

	if (t69 != -1704758) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x293 = 138711642312LLU;
	uint8_t x294 = UINT8_MAX;
	static int8_t x295 = INT8_MIN;
	int32_t x296 = INT32_MIN;
	volatile uint64_t t70 = 898908580125LLU;

	t70 = ((x293+(x294%x295))^x296);

	if (t70 != 18446743935395803463LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = INT64_MIN;
	volatile int16_t x298 = INT16_MIN;
	uint64_t x299 = 32087308227196LLU;
	static uint32_t x300 = 11U;
	uint64_t t71 = 747747103890984394LLU;

	t71 = ((x297+(x298%x299))^x300);

	if (t71 != 9223379309215131835LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int32_t x302 = -1;
	uint32_t x303 = UINT32_MAX;
	int64_t t72 = -5515458554172646LL;

	t72 = ((x301+(x302%x303))^x304);

	if (t72 != 1874497929705LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x305 = 3U;
	int32_t x306 = INT32_MIN;
	int16_t x307 = -2827;
	int32_t x308 = -44904;
	static int32_t t73 = 32;

	t73 = ((x305+(x306%x307))^x308);

	if (t73 != 44006) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x309 = 0U;
	int16_t x311 = INT16_MIN;
	static volatile int32_t t74 = 80988;

	t74 = ((x309+(x310%x311))^x312);

	if (t74 != -22) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x313 = 2;
	int64_t x315 = INT64_MAX;
	volatile int64_t t75 = 1574437LL;

	t75 = ((x313+(x314%x315))^x316);

	if (t75 != 65278LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x317 = UINT8_MAX;
	int16_t x318 = INT16_MIN;
	static int32_t x319 = INT32_MIN;
	volatile int64_t x320 = -134310003LL;
	volatile int64_t t76 = -5442637LL;

	t76 = ((x317+(x318%x319))^x320);

	if (t76 != 134289266LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x321 = INT16_MAX;
	volatile int16_t x322 = INT16_MIN;
	int32_t x323 = -354383394;
	int32_t x324 = INT32_MIN;
	volatile int32_t t77 = INT32_MAX;

	t77 = ((x321+(x322%x323))^x324);

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = -7;
	int32_t x326 = 3342;
	int32_t x327 = INT32_MIN;
	static uint64_t x328 = UINT64_MAX;
	volatile uint64_t t78 = 13081307453LLU;

	t78 = ((x325+(x326%x327))^x328);

	if (t78 != 18446744073709548280LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = -13479;
	uint16_t x330 = 5064U;
	volatile uint16_t x331 = 769U;
	volatile int64_t x332 = -1LL;

	t79 = ((x329+(x330%x331))^x332);

	if (t79 != 13028LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x333 = 0U;
	int64_t x334 = -1LL;
	static uint8_t x336 = 5U;
	int64_t t80 = 1848334LL;

	t80 = ((x333+(x334%x335))^x336);

	if (t80 != -6LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = 85087072419653326LL;
	static uint64_t x338 = UINT64_MAX;
	int32_t x339 = INT32_MIN;
	static int16_t x340 = 102;
	uint64_t t81 = 156715149653LLU;

	t81 = ((x337+(x338%x339))^x340);

	if (t81 != 85087074567136939LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x342 = UINT8_MAX;
	int8_t x343 = -1;
	int64_t x344 = INT64_MAX;
	int64_t t82 = 66338608455067111LL;

	t82 = ((x341+(x342%x343))^x344);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x345 = 47U;
	int8_t x347 = INT8_MIN;
	static volatile uint32_t x348 = 2396U;
	volatile int64_t t83 = 7677561777LL;

	t83 = ((x345+(x346%x347))^x348);

	if (t83 != 2546LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x349 = -1;
	int32_t x350 = -1;
	static uint8_t x351 = UINT8_MAX;
	uint32_t x352 = 132U;
	uint32_t t84 = 1U;

	t84 = ((x349+(x350%x351))^x352);

	if (t84 != 4294967162U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = INT16_MIN;
	uint8_t x354 = UINT8_MAX;
	static uint32_t x356 = UINT32_MAX;
	volatile uint32_t t85 = 75991663U;

	t85 = ((x353+(x354%x355))^x356);

	if (t85 != 32512U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = 121;
	static uint8_t x358 = 86U;
	int16_t x359 = INT16_MAX;
	volatile uint64_t x360 = UINT64_MAX;

	t86 = ((x357+(x358%x359))^x360);

	if (t86 != 18446744073709551408LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x362 = 543692U;
	volatile int8_t x363 = INT8_MIN;
	volatile uint32_t t87 = 30810114U;

	t87 = ((x361+(x362%x363))^x364);

	if (t87 != 2146940564U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x365 = 55LLU;
	int8_t x366 = INT8_MAX;
	volatile uint64_t x367 = 247798LLU;
	int16_t x368 = INT16_MIN;
	static volatile uint64_t t88 = 0LLU;

	t88 = ((x365+(x366%x367))^x368);

	if (t88 != 18446744073709519030LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x369 = INT8_MIN;
	static int8_t x370 = 0;
	uint16_t x371 = 1012U;
	volatile int8_t x372 = -1;
	int32_t t89 = -8;

	t89 = ((x369+(x370%x371))^x372);

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x373 = INT32_MIN;
	int32_t x374 = INT32_MAX;
	int8_t x375 = -1;
	static volatile int64_t t90 = -1453877262554LL;

	t90 = ((x373+(x374%x375))^x376);

	if (t90 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x378 = -232;
	uint8_t x379 = 82U;
	int32_t x380 = -1;

	t91 = ((x377+(x378%x379))^x380);

	if (t91 != -9223372036854775740LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x381 = INT32_MIN;
	int8_t x382 = 27;
	static int32_t x383 = -1;
	int8_t x384 = INT8_MIN;
	int32_t t92 = 141;

	t92 = ((x381+(x382%x383))^x384);

	if (t92 != 2147483520) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x385 = UINT64_MAX;
	int8_t x386 = INT8_MIN;
	volatile uint8_t x388 = 1U;
	uint64_t t93 = 1003848823343LLU;

	t93 = ((x385+(x386%x387))^x388);

	if (t93 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = 184701970787LL;
	int64_t x390 = INT64_MAX;
	int16_t x391 = -7;
	int32_t x392 = INT32_MAX;
	volatile int64_t t94 = 68250305094LL;

	t94 = ((x389+(x390%x391))^x392);

	if (t94 != 186812700316LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x397 = -1LL;
	int32_t x398 = INT32_MIN;
	int32_t x399 = INT32_MIN;
	int16_t x400 = 7393;
	int64_t t95 = 8193020385821LL;

	t95 = ((x397+(x398%x399))^x400);

	if (t95 != -7394LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = INT8_MIN;
	int64_t x403 = INT64_MAX;
	volatile uint64_t x404 = UINT64_MAX;
	volatile uint64_t t96 = 303LLU;

	t96 = ((x401+(x402%x403))^x404);

	if (t96 != 18446744073709544558LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x405 = -6362;
	int16_t x406 = -1;
	int8_t x408 = -1;

	t97 = ((x405+(x406%x407))^x408);

	if (t97 != 6361) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x409 = 27;
	int8_t x411 = INT8_MIN;
	uint16_t x412 = UINT16_MAX;
	int32_t t98 = 1;

	t98 = ((x409+(x410%x411))^x412);

	if (t98 != 65508) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = INT8_MIN;
	int16_t x414 = INT16_MIN;
	int8_t x415 = -3;
	int64_t x416 = INT64_MIN;
	static volatile int64_t t99 = 41273889LL;

	t99 = ((x413+(x414%x415))^x416);

	if (t99 != 9223372036854775678LL) { NG(); } else { ; }
	
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

