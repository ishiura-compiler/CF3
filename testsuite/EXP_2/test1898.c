#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = 7;
int64_t x8 = INT64_MAX;
volatile int64_t t2 = -63426802561344580LL;
static volatile uint64_t x31 = 54LLU;
int8_t x37 = INT8_MIN;
int16_t x42 = -150;
volatile uint64_t x44 = UINT64_MAX;
static uint32_t x46 = 2U;
uint64_t x47 = 657737155LLU;
static volatile uint32_t x55 = 167037384U;
int64_t x60 = INT64_MIN;
int8_t x61 = -1;
uint64_t t12 = 107478103629756402LLU;
int8_t x74 = -1;
int64_t t13 = 1LL;
int16_t x81 = INT16_MAX;
uint16_t x90 = 0U;
static uint64_t t18 = 14873229568463004LLU;
volatile int8_t x97 = INT8_MAX;
uint16_t x106 = 16U;
int32_t x107 = -4415;
uint64_t x111 = 107081304815LLU;
volatile int64_t x120 = 1579708LL;
static int32_t x127 = INT32_MAX;
int16_t x129 = -1;
int64_t x130 = -1LL;
int16_t x133 = -53;
volatile int16_t x135 = 77;
int32_t x136 = INT32_MAX;
static uint32_t x137 = 5270856U;
static uint64_t x138 = 984512394LLU;
int32_t x148 = INT32_MIN;
volatile int16_t x153 = 0;
uint16_t x161 = UINT16_MAX;
int16_t x162 = -1;
static int32_t x171 = INT32_MIN;
static int16_t x176 = -1;
int16_t x184 = 11373;
int32_t t38 = 11480;
int32_t x195 = -1;
int8_t x203 = INT8_MIN;
int8_t x204 = INT8_MAX;
uint32_t x223 = 5325470U;
uint64_t t45 = 1045517900363138636LLU;
volatile uint64_t t46 = 46434538LLU;
uint8_t x240 = 103U;
int64_t t49 = -1891452936163397LL;
int8_t x241 = 1;
int16_t x244 = INT16_MIN;
uint8_t x245 = UINT8_MAX;
uint32_t x257 = UINT32_MAX;
volatile int64_t t56 = 85814946179174LL;
static int8_t x282 = -1;
static uint32_t x283 = 57382U;
int8_t x285 = INT8_MAX;
int8_t x287 = 4;
static volatile int8_t x293 = INT8_MAX;
uint8_t x294 = 67U;
volatile int16_t x298 = -1;
int16_t x302 = -1;
volatile int8_t x313 = INT8_MAX;
uint16_t x316 = 5787U;
volatile int64_t t65 = 137559560087898LL;
uint64_t t67 = 8287002006483LLU;
uint32_t x343 = 177U;
uint16_t x344 = 3U;
int16_t x345 = -1;
int16_t x346 = INT16_MIN;
int64_t x351 = -1LL;
int64_t x353 = -126886773LL;
uint64_t x355 = 21LLU;
volatile uint64_t t75 = 64844707438042LLU;
static int32_t t77 = 180266;
int16_t x384 = -1;
volatile uint64_t t79 = 5256188426025716603LLU;
uint32_t x393 = UINT32_MAX;
static int64_t x403 = INT64_MIN;
volatile int64_t x415 = INT64_MIN;
uint64_t x416 = 246LLU;
int16_t x418 = INT16_MIN;
int32_t x422 = -4064;
volatile uint32_t t88 = 194U;
int8_t x439 = -1;
uint8_t x441 = 5U;
uint32_t x447 = UINT32_MAX;
volatile int64_t t93 = -202781162LL;
int16_t x457 = INT16_MAX;
volatile uint16_t x458 = 275U;
volatile int32_t t95 = 120605145;
static int64_t x466 = INT64_MIN;
uint64_t t96 = 1051622LLU;
int32_t x470 = -31815;
volatile int32_t x471 = INT32_MAX;
int32_t x473 = 9524;
int32_t x477 = -428348470;
uint64_t x479 = UINT64_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile uint16_t x2 = 417U;
	uint8_t x3 = UINT8_MAX;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -2163834;

	t0 = ((x1*(x2|x3))^x4);

	if (t0 != 16744320) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 154U;
	int16_t x6 = INT16_MIN;
	static int64_t t1 = 950270149151511473LL;

	t1 = ((x5*(x6|x7))^x8);

	if (t1 != -9223372036849730615LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int16_t x10 = 1;
	volatile int16_t x11 = INT16_MAX;
	static volatile uint8_t x12 = 0U;

	t2 = ((x9*(x10|x11))^x12);

	if (t2 != -32767LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 478853882LL;
	int16_t x14 = 246;
	static volatile int16_t x15 = -51;
	int8_t x16 = INT8_MAX;
	static int64_t t3 = 0LL;

	t3 = ((x13*(x14|x15))^x16);

	if (t3 != -478853767LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x29 = UINT16_MAX;
	int8_t x30 = 38;
	volatile int32_t x32 = 881401;
	static uint64_t t4 = 509727360LLU;

	t4 = ((x29*(x30|x31))^x32);

	if (t4 != 3706163LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x38 = 63;
	static int64_t x39 = -1LL;
	static int8_t x40 = INT8_MIN;
	static volatile int64_t t5 = 193011696809040LL;

	t5 = ((x37*(x38|x39))^x40);

	if (t5 != -256LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x41 = INT8_MIN;
	volatile int16_t x43 = -2590;
	volatile uint64_t t6 = 49003905222543LLU;

	t6 = ((x41*(x42|x43))^x44);

	if (t6 != 18446744073709548799LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x45 = -1LL;
	uint64_t x48 = 562931693LLU;
	static volatile uint64_t t7 = 5233950677363893LLU;

	t7 = ((x45*(x46|x47))^x48);

	if (t7 != 18446744073596706256LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = INT32_MIN;
	int16_t x50 = -8;
	uint64_t x51 = 19567049982LLU;
	int16_t x52 = 4;
	volatile uint64_t t8 = 16355436LLU;

	t8 = ((x49*(x50|x51))^x52);

	if (t8 != 4294967300LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x53 = 1202U;
	int8_t x54 = 2;
	uint8_t x56 = UINT8_MAX;
	uint32_t t9 = 6U;

	t9 = ((x53*(x54|x55))^x56);

	if (t9 != 3210442379U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x57 = 409707685U;
	volatile int64_t x58 = -1LL;
	int16_t x59 = INT16_MIN;
	int64_t t10 = -2477835278LL;

	t10 = ((x57*(x58|x59))^x60);

	if (t10 != 9223372036445068123LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x62 = 1139609660LL;
	uint8_t x63 = 7U;
	uint32_t x64 = UINT32_MAX;
	int64_t t11 = 1245LL;

	t11 = ((x61*(x62|x63))^x64);

	if (t11 != -3155357634LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x65 = UINT64_MAX;
	int16_t x66 = INT16_MIN;
	int8_t x67 = 0;
	uint64_t x68 = 53822765831614652LLU;

	t12 = ((x65*(x66|x67))^x68);

	if (t12 != 53822765831581884LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x73 = 151U;
	static int64_t x75 = -1943LL;
	uint32_t x76 = 1U;

	t13 = ((x73*(x74|x75))^x76);

	if (t13 != -152LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x77 = 219;
	int8_t x78 = INT8_MIN;
	int64_t x79 = 7349010561391LL;
	volatile int32_t x80 = INT32_MAX;
	static int64_t t14 = 49375LL;

	t14 = ((x77*(x78|x79))^x80);

	if (t14 != -2147479926LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x82 = -2021847292LL;
	int32_t x83 = -1;
	uint8_t x84 = 2U;
	static volatile int64_t t15 = -1415532LL;

	t15 = ((x81*(x82|x83))^x84);

	if (t15 != -32765LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x85 = -8203LL;
	volatile int8_t x86 = INT8_MIN;
	int8_t x87 = -1;
	static volatile uint16_t x88 = 2580U;
	volatile int64_t t16 = -13LL;

	t16 = ((x85*(x86|x87))^x88);

	if (t16 != 10783LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x89 = UINT16_MAX;
	static uint8_t x91 = 30U;
	int16_t x92 = -1;
	int32_t t17 = -220825412;

	t17 = ((x89*(x90|x91))^x92);

	if (t17 != -1966051) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x93 = UINT32_MAX;
	int32_t x94 = INT32_MIN;
	int32_t x95 = INT32_MIN;
	uint64_t x96 = 3633038LLU;

	t18 = ((x93*(x94|x95))^x96);

	if (t18 != 2151116686LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x98 = -1LL;
	static volatile int64_t x99 = -826486380016LL;
	int8_t x100 = INT8_MIN;
	int64_t t19 = 4609110979LL;

	t19 = ((x97*(x98|x99))^x100);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x105 = UINT16_MAX;
	int64_t x108 = INT64_MIN;
	int64_t t20 = 136763101355239380LL;

	t20 = ((x105*(x106|x107))^x108);

	if (t20 != 9223372036566487343LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x109 = -531172;
	int64_t x110 = INT64_MAX;
	uint8_t x112 = 20U;
	static uint64_t t21 = 4817098818779626819LLU;

	t21 = ((x109*(x110|x111))^x112);

	if (t21 != 531184LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = INT64_MIN;
	volatile uint64_t x114 = 173159399052LLU;
	int16_t x115 = -15137;
	int32_t x116 = 0;
	uint64_t t22 = 6680LLU;

	t22 = ((x113*(x114|x115))^x116);

	if (t22 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x117 = -1;
	int16_t x118 = 99;
	int32_t x119 = 197253511;
	static volatile int64_t t23 = 12LL;

	t23 = ((x117*(x118|x119))^x120);

	if (t23 != -198820699LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x125 = 83;
	static int16_t x126 = -165;
	int8_t x128 = 7;
	volatile int32_t t24 = -991906356;

	t24 = ((x125*(x126|x127))^x128);

	if (t24 != -86) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x131 = -1LL;
	int64_t x132 = INT64_MAX;
	int64_t t25 = 155743718829442LL;

	t25 = ((x129*(x130|x131))^x132);

	if (t25 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x134 = -1;
	int32_t t26 = 2876;

	t26 = ((x133*(x134|x135))^x136);

	if (t26 != 2147483594) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x139 = 61734491LLU;
	int8_t x140 = 61;
	static uint64_t t27 = 5436LLU;

	t27 = ((x137*(x138|x139))^x140);

	if (t27 != 5278182716486821LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x141 = 127568U;
	int64_t x142 = INT64_MIN;
	int16_t x143 = INT16_MIN;
	uint8_t x144 = UINT8_MAX;
	volatile int64_t t28 = 21LL;

	t28 = ((x141*(x142|x143))^x144);

	if (t28 != -4180147969LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = INT32_MIN;
	volatile uint32_t x146 = UINT32_MAX;
	int8_t x147 = -2;
	volatile uint32_t t29 = 45493U;

	t29 = ((x145*(x146|x147))^x148);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x149 = -1LL;
	int32_t x150 = INT32_MIN;
	int16_t x151 = -346;
	uint64_t x152 = 5532363771376608445LLU;
	uint64_t t30 = 2808621LLU;

	t30 = ((x149*(x150|x151))^x152);

	if (t30 != 5532363771376608743LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x154 = 5436310635364255143LLU;
	uint16_t x155 = 0U;
	volatile uint64_t x156 = UINT64_MAX;
	uint64_t t31 = UINT64_MAX;

	t31 = ((x153*(x154|x155))^x156);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x157 = UINT64_MAX;
	int16_t x158 = INT16_MIN;
	static uint16_t x159 = UINT16_MAX;
	volatile uint8_t x160 = 1U;
	volatile uint64_t t32 = 2180696526235LLU;

	t32 = ((x157*(x158|x159))^x160);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x163 = -1;
	uint64_t x164 = UINT64_MAX;
	static uint64_t t33 = 34712595LLU;

	t33 = ((x161*(x162|x163))^x164);

	if (t33 != 65534LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x169 = UINT32_MAX;
	static int8_t x170 = INT8_MIN;
	int32_t x172 = 81509;
	volatile uint32_t t34 = 496U;

	t34 = ((x169*(x170|x171))^x172);

	if (t34 != 81637U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x173 = UINT16_MAX;
	static int64_t x174 = 3LL;
	int8_t x175 = INT8_MAX;
	int64_t t35 = 40LL;

	t35 = ((x173*(x174|x175))^x176);

	if (t35 != -8322946LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x177 = INT8_MIN;
	static volatile int32_t x178 = -1991203;
	int16_t x179 = -10407;
	static int8_t x180 = INT8_MAX;
	int32_t t36 = -451842;

	t36 = ((x177*(x178|x179))^x180);

	if (t36 != 1053183) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x181 = UINT64_MAX;
	int64_t x182 = -1LL;
	volatile uint32_t x183 = 436U;
	uint64_t t37 = 1292LLU;

	t37 = ((x181*(x182|x183))^x184);

	if (t37 != 11372LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x185 = UINT16_MAX;
	int16_t x186 = -1;
	uint16_t x187 = 4940U;
	int16_t x188 = INT16_MAX;

	t38 = ((x185*(x186|x187))^x188);

	if (t38 != -32770) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x193 = 2U;
	int8_t x194 = INT8_MIN;
	uint16_t x196 = 17133U;
	int32_t t39 = 509;

	t39 = ((x193*(x194|x195))^x196);

	if (t39 != -17133) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x197 = -1;
	uint16_t x198 = 417U;
	uint8_t x199 = 0U;
	uint16_t x200 = 63U;
	volatile int32_t t40 = 1985;

	t40 = ((x197*(x198|x199))^x200);

	if (t40 != -416) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x201 = -1;
	int16_t x202 = 485;
	volatile int32_t t41 = -21478648;

	t41 = ((x201*(x202|x203))^x204);

	if (t41 != 100) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x205 = 92964U;
	static int8_t x206 = INT8_MIN;
	uint32_t x207 = UINT32_MAX;
	uint16_t x208 = UINT16_MAX;
	uint32_t t42 = 181159992U;

	t42 = ((x205*(x206|x207))^x208);

	if (t42 != 4294863651U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x213 = -13785;
	uint32_t x214 = 48663U;
	int64_t x215 = -523996LL;
	volatile int32_t x216 = 100110;
	static int64_t t43 = 256187805986LL;

	t43 = ((x213*(x214|x215))^x216);

	if (t43 != 6552420463LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x217 = 1;
	volatile int32_t x218 = 61;
	int16_t x219 = INT16_MIN;
	int32_t x220 = -65642471;
	volatile int32_t t44 = -23556;

	t44 = ((x217*(x218|x219))^x220);

	if (t44 != 65658916) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x221 = 50535LLU;
	int64_t x222 = INT64_MIN;
	uint16_t x224 = UINT16_MAX;

	t45 = ((x221*(x222|x223))^x224);

	if (t45 != 9223372305977416813LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x225 = 28239U;
	uint16_t x226 = UINT16_MAX;
	uint64_t x227 = UINT64_MAX;
	int8_t x228 = -1;

	t46 = ((x225*(x226|x227))^x228);

	if (t46 != 28238LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x229 = 626U;
	int64_t x230 = 1LL;
	static int64_t x231 = 165953654231326LL;
	uint8_t x232 = 1U;
	volatile int64_t t47 = -1255877LL;

	t47 = ((x229*(x230|x231))^x232);

	if (t47 != 103886987548810703LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x233 = -1;
	int8_t x234 = -1;
	static int8_t x235 = INT8_MIN;
	uint64_t x236 = 124749LLU;
	static volatile uint64_t t48 = 225818803LLU;

	t48 = ((x233*(x234|x235))^x236);

	if (t48 != 124748LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x237 = 44LL;
	static int64_t x238 = INT64_MIN;
	int32_t x239 = INT32_MIN;

	t49 = ((x237*(x238|x239))^x240);

	if (t49 != -94489280409LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x242 = 13496489074LL;
	int8_t x243 = INT8_MIN;
	volatile int64_t t50 = 191953185842181LL;

	t50 = ((x241*(x242|x243))^x244);

	if (t50 != 32754LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x246 = 0U;
	static uint32_t x247 = 1U;
	int16_t x248 = 7755;
	uint32_t t51 = 833044U;

	t51 = ((x245*(x246|x247))^x248);

	if (t51 != 7860U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x253 = UINT16_MAX;
	static uint64_t x254 = UINT64_MAX;
	int16_t x255 = INT16_MIN;
	int16_t x256 = INT16_MIN;
	uint64_t t52 = 776LLU;

	t52 = ((x253*(x254|x255))^x256);

	if (t52 != 32769LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x258 = 58260LLU;
	int16_t x259 = -1;
	static int32_t x260 = -1;
	uint64_t t53 = 24529740LLU;

	t53 = ((x257*(x258|x259))^x260);

	if (t53 != 4294967294LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x265 = 1988;
	static uint16_t x266 = UINT16_MAX;
	uint32_t x267 = 661U;
	int64_t x268 = INT64_MIN;
	static volatile int64_t t54 = -28798LL;

	t54 = ((x265*(x266|x267))^x268);

	if (t54 != -9223372036724492228LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x269 = INT32_MAX;
	uint8_t x270 = 22U;
	uint64_t x271 = 11383287791895LLU;
	int8_t x272 = INT8_MIN;
	uint64_t t55 = 28834LLU;

	t55 = ((x269*(x270|x271))^x272);

	if (t55 != 14958259549613801833LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x277 = 1;
	volatile int64_t x278 = INT64_MIN;
	int8_t x279 = -1;
	int32_t x280 = -164219767;

	t56 = ((x277*(x278|x279))^x280);

	if (t56 != 164219766LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x281 = -1LL;
	int64_t x284 = INT64_MAX;
	static int64_t t57 = -16430010LL;

	t57 = ((x281*(x282|x283))^x284);

	if (t57 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x286 = 7U;
	int32_t x288 = -1;
	volatile int32_t t58 = 826356148;

	t58 = ((x285*(x286|x287))^x288);

	if (t58 != -890) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x289 = INT16_MIN;
	uint16_t x290 = UINT16_MAX;
	int16_t x291 = 1;
	int32_t x292 = 3661;
	static int32_t t59 = 22101760;

	t59 = ((x289*(x290|x291))^x292);

	if (t59 != -2147447219) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x295 = -1;
	static uint8_t x296 = 6U;
	int32_t t60 = -35;

	t60 = ((x293*(x294|x295))^x296);

	if (t60 != -121) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x297 = UINT64_MAX;
	volatile int64_t x299 = INT64_MAX;
	volatile uint64_t x300 = UINT64_MAX;
	volatile uint64_t t61 = 22329100486841LLU;

	t61 = ((x297*(x298|x299))^x300);

	if (t61 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x301 = 352794;
	int16_t x303 = -1968;
	uint8_t x304 = 68U;
	volatile int32_t t62 = 0;

	t62 = ((x301*(x302|x303))^x304);

	if (t62 != -352862) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x305 = -1;
	static int64_t x306 = 1175077155894643927LL;
	volatile int16_t x307 = -1;
	int32_t x308 = -2019;
	static volatile int64_t t63 = 158046542443666LL;

	t63 = ((x305*(x306|x307))^x308);

	if (t63 != -2020LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x314 = -112754408LL;
	volatile int32_t x315 = INT32_MIN;
	volatile int64_t t64 = 135LL;

	t64 = ((x313*(x314|x315))^x316);

	if (t64 != -14319805325LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x317 = INT16_MAX;
	int64_t x318 = INT64_MIN;
	int64_t x319 = INT64_MAX;
	volatile uint8_t x320 = 5U;

	t65 = ((x317*(x318|x319))^x320);

	if (t65 != -32764LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x321 = INT8_MAX;
	uint64_t x322 = 908042160LLU;
	static volatile int32_t x323 = INT32_MIN;
	int16_t x324 = INT16_MAX;
	volatile uint64_t t66 = 2938348071748959249LLU;

	t66 = ((x321*(x322|x323))^x324);

	if (t66 != 18446743916300486575LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x325 = INT32_MIN;
	int16_t x326 = -1;
	volatile uint64_t x327 = UINT64_MAX;
	int16_t x328 = 195;

	t67 = ((x325*(x326|x327))^x328);

	if (t67 != 2147483843LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x329 = INT16_MIN;
	static uint16_t x330 = 3U;
	int8_t x331 = -1;
	volatile uint32_t x332 = 7U;
	volatile uint32_t t68 = 17129U;

	t68 = ((x329*(x330|x331))^x332);

	if (t68 != 32775U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x333 = 15U;
	uint8_t x334 = 1U;
	static volatile uint8_t x335 = UINT8_MAX;
	uint16_t x336 = 2647U;
	int32_t t69 = -99;

	t69 = ((x333*(x334|x335))^x336);

	if (t69 != 1190) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x341 = INT32_MIN;
	uint8_t x342 = 21U;
	volatile uint32_t t70 = 131603624U;

	t70 = ((x341*(x342|x343))^x344);

	if (t70 != 2147483651U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x347 = -1;
	uint32_t x348 = 144U;
	volatile uint32_t t71 = 267767959U;

	t71 = ((x345*(x346|x347))^x348);

	if (t71 != 145U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x349 = INT8_MAX;
	static int64_t x350 = INT64_MIN;
	int8_t x352 = -1;
	static volatile int64_t t72 = 1706529948709218LL;

	t72 = ((x349*(x350|x351))^x352);

	if (t72 != 126LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x354 = INT64_MAX;
	int8_t x356 = INT8_MIN;
	static uint64_t t73 = 11761031LLU;

	t73 = ((x353*(x354|x355))^x356);

	if (t73 != 9223372036727889141LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x357 = INT64_MIN;
	uint64_t x358 = 370840284LLU;
	uint64_t x359 = 3804LLU;
	volatile int64_t x360 = INT64_MIN;
	volatile uint64_t t74 = 2148893313847235546LLU;

	t74 = ((x357*(x358|x359))^x360);

	if (t74 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x361 = -14LL;
	static uint64_t x362 = 7639LLU;
	volatile int16_t x363 = INT16_MAX;
	int8_t x364 = 21;

	t75 = ((x361*(x362|x363))^x364);

	if (t75 != 18446744073709092891LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x369 = 0U;
	uint64_t x370 = UINT64_MAX;
	uint64_t x371 = 6888574LLU;
	int32_t x372 = INT32_MIN;
	volatile uint64_t t76 = 10217529558627LLU;

	t76 = ((x369*(x370|x371))^x372);

	if (t76 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x373 = INT8_MAX;
	static uint8_t x374 = UINT8_MAX;
	static int8_t x375 = -1;
	volatile int8_t x376 = INT8_MAX;

	t77 = ((x373*(x374|x375))^x376);

	if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x381 = INT8_MIN;
	uint16_t x382 = 4U;
	int8_t x383 = INT8_MIN;
	volatile int32_t t78 = -33599;

	t78 = ((x381*(x382|x383))^x384);

	if (t78 != -15873) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x385 = -1;
	uint64_t x386 = 6784LLU;
	uint8_t x387 = 0U;
	int32_t x388 = INT32_MIN;

	t79 = ((x385*(x386|x387))^x388);

	if (t79 != 2147476864LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x394 = 4995274955016LLU;
	int32_t x395 = INT32_MIN;
	uint32_t x396 = 54006U;
	volatile uint64_t t80 = 351LLU;

	t80 = ((x393*(x394|x395))^x396);

	if (t80 != 10202580636156949518LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x397 = -77887;
	uint16_t x398 = 8065U;
	int16_t x399 = 1903;
	uint8_t x400 = UINT8_MAX;
	int32_t t81 = 630;

	t81 = ((x397*(x398|x399))^x400);

	if (t81 != -636726064) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x401 = -702LL;
	static int32_t x402 = INT32_MIN;
	static int32_t x404 = INT32_MAX;
	volatile int64_t t82 = -5LL;

	t82 = ((x401*(x402|x403))^x404);

	if (t82 != 1509681004543LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x409 = 14533LLU;
	static int64_t x410 = -1296261751625742973LL;
	uint32_t x411 = 27U;
	static int16_t x412 = -1;
	uint64_t t83 = 4331397LLU;

	t83 = ((x409*(x410|x411))^x412);

	if (t83 != 4446337119470077880LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x413 = INT32_MIN;
	uint64_t x414 = UINT64_MAX;
	volatile uint64_t t84 = 1846644LLU;

	t84 = ((x413*(x414|x415))^x416);

	if (t84 != 2147483894LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x417 = -3;
	int16_t x419 = 7;
	static uint16_t x420 = 15978U;
	volatile int32_t t85 = -771;

	t85 = ((x417*(x418|x419))^x420);

	if (t85 != 82305) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x421 = 647618244175LLU;
	int32_t x423 = 318978307;
	uint16_t x424 = 4756U;
	volatile uint64_t t86 = 5016864075LLU;

	t86 = ((x421*(x422|x423))^x424);

	if (t86 != 18445606208454539609LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x425 = INT16_MIN;
	static volatile int32_t x426 = -2;
	static volatile int64_t x427 = INT64_MIN;
	volatile int32_t x428 = -10262756;
	int64_t t87 = 4064596LL;

	t87 = ((x425*(x426|x427))^x428);

	if (t87 != -10328292LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x429 = -1;
	int16_t x430 = -5878;
	int16_t x431 = -1;
	uint32_t x432 = UINT32_MAX;

	t88 = ((x429*(x430|x431))^x432);

	if (t88 != 4294967294U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x433 = -243382284700LL;
	int16_t x434 = 4763;
	volatile int8_t x435 = -1;
	int64_t x436 = -1LL;
	static int64_t t89 = 394LL;

	t89 = ((x433*(x434|x435))^x436);

	if (t89 != -243382284701LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x437 = 21078U;
	int16_t x438 = -6;
	int32_t x440 = 802280602;
	int32_t t90 = 7932793;

	t90 = ((x437*(x438|x439))^x440);

	if (t90 != -802260688) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x442 = -9;
	int16_t x443 = INT16_MIN;
	static uint32_t x444 = UINT32_MAX;
	volatile uint32_t t91 = 0U;

	t91 = ((x441*(x442|x443))^x444);

	if (t91 != 44U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x445 = UINT8_MAX;
	uint32_t x446 = UINT32_MAX;
	int64_t x448 = 976450532511269LL;
	volatile int64_t t92 = 93627LL;

	t92 = ((x445*(x446|x447))^x448);

	if (t92 != 976449622143268LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x449 = -1;
	static int64_t x450 = INT64_MAX;
	int16_t x451 = -8289;
	uint16_t x452 = UINT16_MAX;

	t93 = ((x449*(x450|x451))^x452);

	if (t93 != 65534LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x453 = -1;
	static volatile uint32_t x454 = 96396581U;
	int32_t x455 = INT32_MAX;
	static int32_t x456 = -1;
	volatile uint32_t t94 = 2334299U;

	t94 = ((x453*(x454|x455))^x456);

	if (t94 != 2147483646U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x459 = INT8_MIN;
	static int16_t x460 = 7208;

	t95 = ((x457*(x458|x459))^x460);

	if (t95 != -3564475) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x465 = INT8_MAX;
	uint64_t x467 = 1846LLU;
	int64_t x468 = -1011482LL;

	t96 = ((x465*(x466|x467))^x468);

	if (t96 != 9223372036853924652LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x469 = -240061429205238LL;
	uint64_t x472 = UINT64_MAX;
	volatile uint64_t t97 = 23LLU;

	t97 = ((x469*(x470|x471))^x472);

	if (t97 != 18446504012280346377LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x474 = INT32_MIN;
	volatile int32_t x475 = INT32_MAX;
	static int8_t x476 = INT8_MAX;
	int32_t t98 = 846;

	t98 = ((x473*(x474|x475))^x476);

	if (t98 != -9549) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x478 = INT16_MIN;
	int16_t x480 = 1;
	static volatile uint64_t t99 = 513LLU;

	t99 = ((x477*(x478|x479))^x480);

	if (t99 != 428348471LLU) { NG(); } else { ; }
	
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

