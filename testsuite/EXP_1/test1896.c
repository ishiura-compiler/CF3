#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 7;
uint16_t x3 = 2783U;
volatile uint64_t x12 = 501LLU;
int64_t x17 = INT64_MIN;
static int16_t x18 = 2;
static volatile int32_t x19 = -1;
volatile int64_t t4 = 9413LL;
int64_t x21 = 168052650LL;
uint8_t x27 = 39U;
uint32_t t6 = 605402U;
volatile uint16_t x30 = 28U;
volatile int32_t t8 = 2;
int32_t x49 = 14240;
volatile int64_t t10 = 0LL;
static uint64_t x59 = 4825153587403LLU;
static volatile int64_t x60 = INT64_MAX;
volatile uint32_t x71 = UINT32_MAX;
volatile int32_t x72 = INT32_MIN;
int32_t x76 = INT32_MAX;
int8_t x78 = 24;
static uint32_t t16 = 24U;
volatile int64_t x85 = INT64_MIN;
int32_t x87 = -1;
int64_t t19 = 1591709053850566071LL;
volatile int64_t x100 = INT64_MAX;
volatile uint16_t x107 = 762U;
uint32_t x111 = 1U;
uint64_t x125 = 118331887019292LLU;
int16_t x127 = INT16_MIN;
static int8_t x128 = -1;
volatile int32_t t26 = 83849;
uint64_t x134 = 3768499677LLU;
static int64_t x141 = -1LL;
volatile int64_t t29 = -259961828543792LL;
volatile uint64_t t30 = 1041383802849570LLU;
int32_t x161 = -4744;
uint8_t x163 = UINT8_MAX;
volatile int64_t t32 = 15090LL;
uint32_t t33 = 11U;
uint8_t x173 = UINT8_MAX;
int8_t x189 = -1;
volatile uint64_t t38 = 28663965LLU;
int64_t x196 = INT64_MIN;
int8_t x198 = -3;
int8_t x200 = 44;
uint32_t x201 = 0U;
uint32_t x206 = UINT32_MAX;
static int8_t x208 = -1;
volatile uint32_t t42 = 0U;
int32_t x211 = -1;
static int64_t x213 = INT64_MAX;
int16_t x214 = -37;
int32_t x215 = INT32_MIN;
uint64_t x216 = 417816LLU;
uint32_t x219 = 639714U;
int32_t x221 = -1;
uint16_t x227 = 6704U;
volatile uint16_t x230 = 13U;
volatile uint32_t x231 = 1817427730U;
uint8_t x235 = 7U;
int8_t x239 = INT8_MIN;
int32_t x242 = -1;
uint16_t x243 = UINT16_MAX;
int8_t x244 = INT8_MAX;
int16_t x249 = -1;
volatile int8_t x253 = INT8_MIN;
volatile int8_t x262 = INT8_MIN;
int32_t t56 = -24440619;
int16_t x269 = 1;
int64_t x275 = -916LL;
static uint32_t x286 = 3058U;
int32_t x288 = 1455662;
volatile int32_t t61 = 95690501;
volatile uint64_t x297 = 0LLU;
static uint32_t x302 = UINT32_MAX;
static int32_t x303 = INT32_MIN;
static volatile int16_t x307 = 0;
volatile uint64_t t65 = 276721409910558955LLU;
volatile uint64_t t66 = 7760894554824701LLU;
int8_t x329 = 1;
volatile int16_t x332 = 7;
static uint16_t x333 = UINT16_MAX;
static uint16_t x334 = 91U;
int8_t x343 = INT8_MIN;
int16_t x344 = INT16_MIN;
volatile uint64_t t73 = 271451346826LLU;
int8_t x368 = INT8_MIN;
static volatile int32_t x372 = INT32_MAX;
static uint32_t x374 = UINT32_MAX;
volatile uint16_t x377 = 21868U;
volatile int8_t x383 = INT8_MIN;
int64_t t80 = -9LL;
uint64_t x393 = 0LLU;
volatile uint64_t t82 = 18LLU;
uint64_t x404 = UINT64_MAX;
volatile uint64_t t83 = 967130389588LLU;
static int64_t x408 = INT64_MIN;
int64_t t84 = 60874117332LL;
static int8_t x410 = INT8_MIN;
int64_t t86 = -17240408752784414LL;
volatile int16_t x445 = -1;
static int64_t x448 = -127104817302LL;
volatile int16_t x450 = 1524;
static uint64_t t93 = 124011378LLU;
int16_t x475 = INT16_MIN;
static volatile int64_t x476 = -9LL;
uint32_t x481 = UINT32_MAX;
uint8_t x484 = 0U;


void f0(void) {
	int16_t x2 = INT16_MIN;
	uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 5U;

	t0 = (((x1|x2)*x3)&x4);

	if (t0 != 4203793433U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 28309221U;
	int32_t x6 = INT32_MIN;
	int32_t x7 = INT32_MAX;
	int8_t x8 = INT8_MIN;
	static volatile uint32_t t1 = 501245376U;

	t1 = (((x5|x6)*x7)&x8);

	if (t1 != 4266658048U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int16_t x10 = INT16_MIN;
	volatile int64_t x11 = -75885795243LL;
	volatile uint64_t t2 = 796638LLU;

	t2 = (((x9|x10)*x11)&x12);

	if (t2 != 417LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = 1;
	uint64_t x14 = UINT64_MAX;
	int8_t x15 = INT8_MIN;
	int16_t x16 = INT16_MIN;
	volatile uint64_t t3 = 188511309491LLU;

	t3 = (((x13|x14)*x15)&x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x20 = -1779;

	t4 = (((x17|x18)*x19)&x20);

	if (t4 != 9223372036854774028LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = -322292LL;
	int32_t x23 = INT32_MAX;
	int8_t x24 = INT8_MAX;
	int64_t t5 = 98225367426LL;

	t5 = (((x21|x22)*x23)&x24);

	if (t5 != 82LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 21U;
	int8_t x26 = INT8_MIN;
	static uint32_t x28 = 100635251U;

	t6 = (((x25|x26)*x27)&x28);

	if (t6 != 100631091U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -16653576796220370LL;
	static volatile int8_t x31 = INT8_MAX;
	static int32_t x32 = INT32_MAX;
	int64_t t7 = 9099894366311LL;

	t7 = (((x29|x30)*x31)&x32);

	if (t7 != 1784138434LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 1716U;
	int16_t x34 = -1;
	volatile uint16_t x35 = UINT16_MAX;
	static int8_t x36 = INT8_MIN;

	t8 = (((x33|x34)*x35)&x36);

	if (t8 != -65536) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 14U;
	static int16_t x38 = 2965;
	uint32_t x39 = 10U;
	static volatile int64_t x40 = INT64_MIN;
	volatile int64_t t9 = -1315967059829211LL;

	t9 = (((x37|x38)*x39)&x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x50 = INT16_MIN;
	int64_t x51 = 453402LL;
	static int64_t x52 = 176673601770LL;

	t10 = (((x49|x50)*x51)&x52);

	if (t10 != 171832246336LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x53 = 78802U;
	static int16_t x54 = 6;
	static int32_t x55 = -1;
	volatile uint64_t x56 = 42629520207986793LLU;
	uint64_t t11 = 369074LLU;

	t11 = (((x53|x54)*x55)&x56);

	if (t11 != 2700099624LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x57 = -1LL;
	uint16_t x58 = 57U;
	uint64_t t12 = 2485409728LLU;

	t12 = (((x57|x58)*x59)&x60);

	if (t12 != 9223367211701188405LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	int32_t x62 = INT32_MIN;
	uint8_t x63 = 16U;
	uint32_t x64 = UINT32_MAX;
	uint32_t t13 = 1510645U;

	t13 = (((x61|x62)*x63)&x64);

	if (t13 != 4294965248U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = -165;
	int64_t x70 = -353139071307058LL;
	int64_t t14 = 489427093344108LL;

	t14 = (((x69|x70)*x71)&x72);

	if (t14 != -141733920768LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = 20U;
	uint16_t x74 = 42U;
	uint16_t x75 = 762U;
	static volatile int32_t t15 = 858;

	t15 = (((x73|x74)*x75)&x76);

	if (t15 != 47244) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = 1;
	uint32_t x79 = 1610877U;
	int16_t x80 = -3;

	t16 = (((x77|x78)*x79)&x80);

	if (t16 != 40271925U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MIN;
	static int16_t x82 = INT16_MAX;
	static int8_t x83 = 1;
	uint16_t x84 = 1981U;
	volatile int64_t t17 = -8173966506146LL;

	t17 = (((x81|x82)*x83)&x84);

	if (t17 != 1981LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x86 = 6851U;
	int64_t x88 = 84214LL;
	int64_t t18 = -72213272520545135LL;

	t18 = (((x85|x86)*x87)&x88);

	if (t18 != 81972LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = INT32_MIN;
	int64_t x94 = INT64_MAX;
	volatile int8_t x95 = INT8_MAX;
	static int8_t x96 = INT8_MAX;

	t19 = (((x93|x94)*x95)&x96);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = -1;
	int8_t x98 = 0;
	static int64_t x99 = -1LL;
	volatile int64_t t20 = -2753084090988236LL;

	t20 = (((x97|x98)*x99)&x100);

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = -1;
	static uint32_t x106 = 92U;
	uint64_t x108 = 2955957884786LLU;
	uint64_t t21 = 3055297391739LLU;

	t21 = (((x105|x106)*x107)&x108);

	if (t21 != 1020384514LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x109 = -14694;
	static int32_t x110 = INT32_MAX;
	static uint64_t x112 = 4671512042LLU;
	static uint64_t t22 = 877746772877619LLU;

	t22 = (((x109|x110)*x111)&x112);

	if (t22 != 376544746LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = 30;
	volatile int32_t x118 = -1;
	uint32_t x119 = 1928814U;
	int8_t x120 = INT8_MAX;
	volatile uint32_t t23 = 7454U;

	t23 = (((x117|x118)*x119)&x120);

	if (t23 != 18U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x121 = -3836;
	int8_t x122 = INT8_MIN;
	static uint8_t x123 = 25U;
	static int64_t x124 = -4042750434289725LL;
	volatile int64_t t24 = 124588450648587881LL;

	t24 = (((x121|x122)*x123)&x124);

	if (t24 != -4042750434290752LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x126 = INT16_MIN;
	uint64_t t25 = 154366296430255086LLU;

	t25 = (((x125|x126)*x127)&x128);

	if (t25 != 225574912LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x129 = -1;
	static int32_t x130 = INT32_MAX;
	static volatile int16_t x131 = -777;
	uint16_t x132 = UINT16_MAX;

	t26 = (((x129|x130)*x131)&x132);

	if (t26 != 777) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x133 = INT16_MIN;
	uint64_t x135 = UINT64_MAX;
	int32_t x136 = -1;
	volatile uint64_t t27 = 124LLU;

	t27 = (((x133|x134)*x135)&x136);

	if (t27 != 16931LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x137 = UINT8_MAX;
	volatile int16_t x138 = 118;
	uint64_t x139 = 658281767550677LLU;
	static int64_t x140 = INT64_MIN;
	volatile uint64_t t28 = 324451497026LLU;

	t28 = (((x137|x138)*x139)&x140);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x142 = 123U;
	int64_t x143 = INT64_MAX;
	int16_t x144 = -1;

	t29 = (((x141|x142)*x143)&x144);

	if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x149 = UINT16_MAX;
	int16_t x150 = INT16_MIN;
	static volatile uint64_t x151 = UINT64_MAX;
	volatile int64_t x152 = INT64_MIN;

	t30 = (((x149|x150)*x151)&x152);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x153 = -37;
	volatile int64_t x154 = INT64_MIN;
	int64_t x155 = 220LL;
	static volatile int64_t x156 = -3762LL;
	volatile int64_t t31 = -497069LL;

	t31 = (((x153|x154)*x155)&x156);

	if (t31 != -8188LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x162 = INT64_MAX;
	int8_t x164 = 0;

	t32 = (((x161|x162)*x163)&x164);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x169 = -1;
	static int16_t x170 = -1;
	volatile int8_t x171 = -1;
	volatile uint32_t x172 = UINT32_MAX;

	t33 = (((x169|x170)*x171)&x172);

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x174 = 3510;
	int64_t x175 = -1081967329748655LL;
	uint8_t x176 = 36U;
	int64_t t34 = -214711355LL;

	t34 = (((x173|x174)*x175)&x176);

	if (t34 != 36LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x177 = INT64_MAX;
	volatile int32_t x178 = INT32_MIN;
	int32_t x179 = -1;
	static int16_t x180 = 368;
	static volatile int64_t t35 = 11126850054LL;

	t35 = (((x177|x178)*x179)&x180);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x181 = INT8_MAX;
	volatile int8_t x182 = INT8_MIN;
	static uint32_t x183 = 30183U;
	volatile uint16_t x184 = 43U;
	volatile uint32_t t36 = 1U;

	t36 = (((x181|x182)*x183)&x184);

	if (t36 != 9U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x185 = 38U;
	int16_t x186 = -41;
	int16_t x187 = INT16_MIN;
	int8_t x188 = INT8_MAX;
	volatile int32_t t37 = 11;

	t37 = (((x185|x186)*x187)&x188);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x190 = 66466U;
	static uint64_t x191 = UINT64_MAX;
	int64_t x192 = -1LL;

	t38 = (((x189|x190)*x191)&x192);

	if (t38 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x193 = INT16_MIN;
	int32_t x194 = -3;
	int16_t x195 = 10;
	volatile int64_t t39 = INT64_MIN;

	t39 = (((x193|x194)*x195)&x196);

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x197 = 4U;
	static uint16_t x199 = 53U;
	volatile int32_t t40 = 177451746;

	t40 = (((x197|x198)*x199)&x200);

	if (t40 != 32) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x202 = INT8_MAX;
	static volatile int16_t x203 = -1090;
	int8_t x204 = INT8_MIN;
	uint32_t t41 = 0U;

	t41 = (((x201|x202)*x203)&x204);

	if (t41 != 4294828800U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x205 = INT32_MAX;
	int8_t x207 = INT8_MIN;

	t42 = (((x205|x206)*x207)&x208);

	if (t42 != 128U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x209 = INT16_MAX;
	static int32_t x210 = INT32_MAX;
	uint64_t x212 = UINT64_MAX;
	uint64_t t43 = 85201740939035076LLU;

	t43 = (((x209|x210)*x211)&x212);

	if (t43 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t t44 = 649259983054LLU;

	t44 = (((x213|x214)*x215)&x216);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x217 = INT64_MIN;
	volatile int8_t x218 = INT8_MIN;
	int8_t x220 = INT8_MAX;
	int64_t t45 = 44743019LL;

	t45 = (((x217|x218)*x219)&x220);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x222 = INT8_MIN;
	int8_t x223 = INT8_MIN;
	int8_t x224 = 2;
	volatile int32_t t46 = -24241;

	t46 = (((x221|x222)*x223)&x224);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x225 = 1305U;
	uint8_t x226 = 1U;
	int8_t x228 = INT8_MIN;
	uint32_t t47 = 27U;

	t47 = (((x225|x226)*x227)&x228);

	if (t47 != 8748672U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x229 = 2021572930869LLU;
	int16_t x232 = 5;
	volatile uint64_t t48 = 6136147659705LLU;

	t48 = (((x229|x230)*x231)&x232);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x233 = -1;
	uint64_t x234 = UINT64_MAX;
	volatile int8_t x236 = INT8_MAX;
	static uint64_t t49 = 24389LLU;

	t49 = (((x233|x234)*x235)&x236);

	if (t49 != 121LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x237 = UINT64_MAX;
	uint64_t x238 = 9LLU;
	uint64_t x240 = 1945604LLU;
	volatile uint64_t t50 = 20099756LLU;

	t50 = (((x237|x238)*x239)&x240);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x241 = 0U;
	volatile int32_t t51 = 5803;

	t51 = (((x241|x242)*x243)&x244);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x245 = INT16_MIN;
	static int64_t x246 = 430994013LL;
	int16_t x247 = INT16_MIN;
	uint16_t x248 = 7899U;
	volatile int64_t t52 = 61008110461LL;

	t52 = (((x245|x246)*x247)&x248);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x250 = 106U;
	static int8_t x251 = INT8_MIN;
	volatile int32_t x252 = 1;
	int32_t t53 = 51;

	t53 = (((x249|x250)*x251)&x252);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x254 = INT32_MAX;
	uint8_t x255 = 8U;
	int32_t x256 = -1;
	static volatile int32_t t54 = 899;

	t54 = (((x253|x254)*x255)&x256);

	if (t54 != -8) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x261 = -8;
	uint8_t x263 = 1U;
	uint16_t x264 = 5U;
	int32_t t55 = 91222;

	t55 = (((x261|x262)*x263)&x264);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x265 = -1;
	volatile int16_t x266 = 2799;
	int8_t x267 = 0;
	int8_t x268 = INT8_MAX;

	t56 = (((x265|x266)*x267)&x268);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x270 = 1;
	int16_t x271 = 401;
	uint32_t x272 = UINT32_MAX;
	static uint32_t t57 = 0U;

	t57 = (((x269|x270)*x271)&x272);

	if (t57 != 401U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x273 = -204;
	int16_t x274 = INT16_MIN;
	volatile int8_t x276 = 0;
	volatile int64_t t58 = -9382252843488682LL;

	t58 = (((x273|x274)*x275)&x276);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x277 = UINT32_MAX;
	static int64_t x278 = -1LL;
	uint16_t x279 = 1888U;
	int16_t x280 = -906;
	volatile int64_t t59 = 733791280640390LL;

	t59 = (((x277|x278)*x279)&x280);

	if (t59 != -2016LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x285 = -1;
	static int32_t x287 = INT32_MIN;
	uint32_t t60 = 9111209U;

	t60 = (((x285|x286)*x287)&x288);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x289 = 12256U;
	static int16_t x290 = -1;
	volatile int32_t x291 = 2024;
	uint8_t x292 = 27U;

	t61 = (((x289|x290)*x291)&x292);

	if (t61 != 24) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x298 = INT16_MIN;
	int64_t x299 = -1LL;
	volatile int16_t x300 = INT16_MIN;
	volatile uint64_t t62 = 1926549353376LLU;

	t62 = (((x297|x298)*x299)&x300);

	if (t62 != 32768LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x301 = INT16_MAX;
	static volatile uint32_t x304 = UINT32_MAX;
	volatile uint32_t t63 = 394433505U;

	t63 = (((x301|x302)*x303)&x304);

	if (t63 != 2147483648U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x305 = UINT16_MAX;
	volatile int8_t x306 = 38;
	int32_t x308 = 0;
	volatile int32_t t64 = -1;

	t64 = (((x305|x306)*x307)&x308);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x309 = 55U;
	int8_t x310 = INT8_MIN;
	volatile int16_t x311 = 4;
	uint64_t x312 = 235709062LLU;

	t65 = (((x309|x310)*x311)&x312);

	if (t65 != 235709060LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x313 = 58U;
	int8_t x314 = -1;
	int8_t x315 = INT8_MIN;
	volatile uint64_t x316 = 29497105567353894LLU;

	t66 = (((x313|x314)*x315)&x316);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x317 = -1;
	int32_t x318 = -1;
	uint64_t x319 = UINT64_MAX;
	int32_t x320 = -1;
	static volatile uint64_t t67 = 690230490305948LLU;

	t67 = (((x317|x318)*x319)&x320);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x330 = 5260759067156LL;
	int16_t x331 = INT16_MIN;
	int64_t t68 = 323666LL;

	t68 = (((x329|x330)*x331)&x332);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x335 = 5LLU;
	uint64_t x336 = 131LLU;
	uint64_t t69 = 0LLU;

	t69 = (((x333|x334)*x335)&x336);

	if (t69 != 131LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x341 = -1;
	volatile int64_t x342 = -222780LL;
	int64_t t70 = -222LL;

	t70 = (((x341|x342)*x343)&x344);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x345 = 35;
	volatile int32_t x346 = -1;
	static uint32_t x347 = UINT32_MAX;
	int64_t x348 = -2563668155071400LL;
	int64_t t71 = -455969153820817LL;

	t71 = (((x345|x346)*x347)&x348);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x353 = -7LL;
	int16_t x354 = INT16_MAX;
	uint16_t x355 = 277U;
	int16_t x356 = 7;
	int64_t t72 = 95084156157295488LL;

	t72 = (((x353|x354)*x355)&x356);

	if (t72 != 3LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x357 = 612;
	int32_t x358 = INT32_MAX;
	uint64_t x359 = 313568LLU;
	uint16_t x360 = 620U;

	t73 = (((x357|x358)*x359)&x360);

	if (t73 != 544LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x361 = 3U;
	static volatile int16_t x362 = -3914;
	uint64_t x363 = 125326592LLU;
	int32_t x364 = INT32_MIN;
	static uint64_t t74 = 147716290LLU;

	t74 = (((x361|x362)*x363)&x364);

	if (t74 != 18446743581935796224LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x365 = INT8_MIN;
	uint16_t x366 = 327U;
	uint64_t x367 = UINT64_MAX;
	static uint64_t t75 = 1042902179LLU;

	t75 = (((x365|x366)*x367)&x368);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x369 = 22973;
	volatile int8_t x370 = INT8_MIN;
	volatile int8_t x371 = 1;
	int32_t t76 = 0;

	t76 = (((x369|x370)*x371)&x372);

	if (t76 != 2147483581) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x373 = UINT16_MAX;
	uint64_t x375 = 9930LLU;
	volatile int64_t x376 = INT64_MIN;
	uint64_t t77 = 0LLU;

	t77 = (((x373|x374)*x375)&x376);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x378 = 3833;
	volatile uint32_t x379 = 383008652U;
	int16_t x380 = -1;
	uint32_t t78 = 519972760U;

	t78 = (((x377|x378)*x379)&x380);

	if (t78 != 1398260060U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x381 = INT64_MIN;
	int8_t x382 = -1;
	uint16_t x384 = UINT16_MAX;
	int64_t t79 = 2028581825698988607LL;

	t79 = (((x381|x382)*x383)&x384);

	if (t79 != 128LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x385 = INT32_MIN;
	int16_t x386 = INT16_MIN;
	volatile int64_t x387 = -1LL;
	volatile int16_t x388 = -75;

	t80 = (((x385|x386)*x387)&x388);

	if (t80 != 32768LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x389 = INT32_MIN;
	int8_t x390 = -1;
	int64_t x391 = INT64_MAX;
	uint16_t x392 = UINT16_MAX;
	int64_t t81 = -8543998LL;

	t81 = (((x389|x390)*x391)&x392);

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x394 = UINT32_MAX;
	uint8_t x395 = 2U;
	static uint32_t x396 = 792U;

	t82 = (((x393|x394)*x395)&x396);

	if (t82 != 792LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x401 = INT16_MIN;
	uint64_t x402 = 948722LLU;
	uint32_t x403 = UINT32_MAX;

	t83 = (((x401|x402)*x403)&x404);

	if (t83 != 18446737416510244366LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x405 = INT32_MIN;
	int8_t x406 = 0;
	volatile int64_t x407 = -1LL;

	t84 = (((x405|x406)*x407)&x408);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x409 = 30557951U;
	static uint8_t x411 = 2U;
	int8_t x412 = INT8_MIN;
	uint32_t t85 = 301U;

	t85 = (((x409|x410)*x411)&x412);

	if (t85 != 4294967168U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x417 = 152;
	int16_t x418 = 0;
	int8_t x419 = INT8_MAX;
	int64_t x420 = INT64_MAX;

	t86 = (((x417|x418)*x419)&x420);

	if (t86 != 19304LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x425 = INT64_MIN;
	int32_t x426 = 721;
	uint64_t x427 = UINT64_MAX;
	volatile uint8_t x428 = 20U;
	uint64_t t87 = 80LLU;

	t87 = (((x425|x426)*x427)&x428);

	if (t87 != 4LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x429 = -1LL;
	static volatile int64_t x430 = INT64_MAX;
	static volatile uint32_t x431 = UINT32_MAX;
	int16_t x432 = 0;
	volatile int64_t t88 = 3588151074LL;

	t88 = (((x429|x430)*x431)&x432);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x433 = 0;
	int16_t x434 = -1;
	volatile uint16_t x435 = UINT16_MAX;
	uint16_t x436 = UINT16_MAX;
	volatile int32_t t89 = 142508;

	t89 = (((x433|x434)*x435)&x436);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x437 = -3590;
	uint16_t x438 = 1188U;
	int16_t x439 = INT16_MIN;
	uint8_t x440 = UINT8_MAX;
	volatile int32_t t90 = -3816819;

	t90 = (((x437|x438)*x439)&x440);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x441 = 148LL;
	int8_t x442 = -1;
	uint64_t x443 = 12956917361734LLU;
	int64_t x444 = 29600091LL;
	volatile uint64_t t91 = 4LLU;

	t91 = (((x441|x442)*x443)&x444);

	if (t91 != 25362714LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x446 = 1250LL;
	int16_t x447 = -857;
	volatile int64_t t92 = -68LL;

	t92 = (((x445|x446)*x447)&x448);

	if (t92 != 840LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x449 = UINT64_MAX;
	static int16_t x451 = -1;
	int32_t x452 = -3;

	t93 = (((x449|x450)*x451)&x452);

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x453 = INT32_MIN;
	uint64_t x454 = 7881799LLU;
	volatile uint64_t x455 = 19210LLU;
	uint8_t x456 = 2U;
	uint64_t t94 = 1531551599281399420LLU;

	t94 = (((x453|x454)*x455)&x456);

	if (t94 != 2LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x457 = 1U;
	uint64_t x458 = 150794675LLU;
	volatile uint64_t x459 = UINT64_MAX;
	volatile int32_t x460 = -17;
	uint64_t t95 = 12176938966834923LLU;

	t95 = (((x457|x458)*x459)&x460);

	if (t95 != 18446744073558756941LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x469 = 10747658793LLU;
	int16_t x470 = -827;
	int64_t x471 = INT64_MIN;
	volatile int16_t x472 = -3;
	uint64_t t96 = 4487834839428LLU;

	t96 = (((x469|x470)*x471)&x472);

	if (t96 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x473 = -1;
	volatile int16_t x474 = INT16_MAX;
	int64_t t97 = -545635096773860318LL;

	t97 = (((x473|x474)*x475)&x476);

	if (t97 != 32768LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x477 = INT16_MIN;
	static int64_t x478 = INT64_MIN;
	int16_t x479 = 10;
	static int16_t x480 = -1;
	static volatile int64_t t98 = 5312199662143LL;

	t98 = (((x477|x478)*x479)&x480);

	if (t98 != -327680LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x482 = -1;
	int8_t x483 = 4;
	uint32_t t99 = 157U;

	t99 = (((x481|x482)*x483)&x484);

	if (t99 != 0U) { NG(); } else { ; }
	
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

