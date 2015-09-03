#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x16 = INT8_MAX;
uint64_t x19 = 13841LLU;
uint8_t x24 = 0U;
int16_t x39 = -1;
volatile uint64_t x42 = 39006902LLU;
volatile uint32_t x43 = 2U;
int64_t x44 = -770291999603LL;
int8_t x45 = 0;
int8_t x51 = INT8_MIN;
uint8_t x53 = 0U;
uint16_t x54 = 947U;
volatile int32_t t12 = 56;
static int16_t x57 = INT16_MIN;
uint64_t x77 = 3LLU;
int16_t x78 = INT16_MAX;
volatile int32_t t17 = 198;
int64_t t18 = 3796749LL;
uint32_t x99 = 0U;
int64_t x105 = -1LL;
uint32_t x106 = 14U;
uint8_t x109 = 1U;
uint64_t x113 = 1808LLU;
int64_t x129 = INT64_MIN;
volatile int32_t x136 = INT32_MIN;
volatile uint32_t x144 = 5834U;
static int64_t x149 = -59181689LL;
volatile uint64_t t33 = 3214700305LLU;
int16_t x155 = 3245;
int8_t x158 = INT8_MIN;
volatile uint64_t t35 = 106082292LLU;
static volatile int32_t x162 = 9334251;
static uint64_t x175 = 95338877600LLU;
int8_t x176 = 6;
uint8_t x181 = 25U;
int32_t x183 = 151;
int64_t x192 = INT64_MIN;
uint16_t x208 = UINT16_MAX;
uint16_t x210 = 245U;
uint16_t x213 = 9446U;
int64_t x214 = INT64_MIN;
volatile uint32_t x224 = 0U;
int16_t x225 = INT16_MIN;
int16_t x226 = INT16_MAX;
int16_t x229 = -1;
int32_t x232 = 4370;
volatile int64_t x238 = -1LL;
uint64_t x241 = 1645363LLU;
int16_t x244 = -1;
static uint64_t x254 = 214LLU;
volatile uint64_t t54 = 30153771748046613LLU;
int16_t x264 = INT16_MIN;
uint64_t t58 = 132217271465LLU;
int64_t x286 = 4353431580921LL;
uint64_t x290 = 20726932LLU;
volatile uint32_t t64 = 1U;
int32_t t66 = 97046;
int64_t x332 = INT64_MIN;
uint64_t x333 = 1LLU;
uint8_t x334 = 1U;
volatile uint64_t t71 = 6963095790339LLU;
static volatile int32_t t73 = 19096;
int64_t x350 = -1LL;
int32_t x351 = INT32_MAX;
static volatile int64_t t74 = 879536726LL;
uint16_t x353 = 53U;
static uint8_t x355 = 2U;
int16_t x356 = INT16_MAX;
uint64_t x359 = UINT64_MAX;
uint8_t x362 = UINT8_MAX;
int16_t x363 = -1;
uint8_t x382 = UINT8_MAX;
uint64_t x389 = 112920826449237940LLU;
int32_t x404 = INT32_MIN;
volatile uint32_t t85 = 495079U;
uint8_t x414 = 1U;
volatile int32_t t88 = 15;
int16_t x422 = INT16_MAX;
uint64_t x423 = 9LLU;
int64_t x424 = -11098LL;
volatile uint64_t t89 = 21600LLU;
uint64_t x428 = UINT64_MAX;
volatile int64_t x432 = -1LL;
int8_t x433 = INT8_MAX;
int64_t x435 = 16070760LL;
int16_t x437 = INT16_MAX;
volatile uint64_t x438 = 64112432360455510LLU;
uint16_t x445 = UINT16_MAX;
int64_t x449 = -1LL;
static int32_t x451 = INT32_MIN;
int16_t x455 = INT16_MIN;
static int16_t x461 = INT16_MIN;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	static int16_t x2 = INT16_MAX;
	volatile int32_t x3 = INT32_MAX;
	uint16_t x4 = 3540U;
	volatile int64_t t0 = -372636322656939019LL;

	t0 = (((x1%x2)*x3)-x4);

	if (t0 != -17179872716LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1163746361095LLU;
	int64_t x6 = INT64_MIN;
	int32_t x7 = -1;
	uint64_t x8 = 862220LLU;
	volatile uint64_t t1 = 2651201055983LLU;

	t1 = (((x5%x6)*x7)-x8);

	if (t1 != 18446742909962328301LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	volatile uint32_t x10 = 24600731U;
	int8_t x11 = INT8_MIN;
	uint32_t x12 = 3223U;
	uint32_t t2 = 699266U;

	t2 = (((x9%x10)*x11)-x12);

	if (t2 != 2446631145U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MAX;
	static int64_t x15 = 1369463883488711LL;
	static volatile int64_t t3 = -346179087722LL;

	t3 = (((x13%x14)*x15)-x16);

	if (t3 != -2738927766977549LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -1;
	static volatile uint32_t x18 = 370324281U;
	int64_t x20 = -2508054561511489LL;
	volatile uint64_t t4 = 36538575516840800LLU;

	t4 = (((x17%x18)*x19)-x20);

	if (t4 != 2511118961735053LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = INT32_MIN;
	volatile uint16_t x22 = UINT16_MAX;
	int16_t x23 = -1;
	static int32_t t5 = 472104;

	t5 = (((x21%x22)*x23)-x24);

	if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = UINT64_MAX;
	int32_t x26 = INT32_MIN;
	int64_t x27 = -1LL;
	volatile int64_t x28 = 735816LL;
	volatile uint64_t t6 = 1715365951773606LLU;

	t6 = (((x25%x26)*x27)-x28);

	if (t6 != 18446744071561332153LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x33 = UINT64_MAX;
	int16_t x34 = INT16_MAX;
	int8_t x35 = -1;
	int8_t x36 = 3;
	static volatile uint64_t t7 = 118572202440108LLU;

	t7 = (((x33%x34)*x35)-x36);

	if (t7 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 1U;
	int32_t x38 = INT32_MAX;
	static int32_t x40 = INT32_MAX;
	volatile int32_t t8 = INT32_MIN;

	t8 = (((x37%x38)*x39)-x40);

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	volatile uint64_t t9 = 165LLU;

	t9 = (((x41%x42)*x43)-x44);

	if (t9 != 770328668627LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x46 = -1LL;
	uint8_t x47 = UINT8_MAX;
	int16_t x48 = INT16_MIN;
	volatile int64_t t10 = 524319440173879047LL;

	t10 = (((x45%x46)*x47)-x48);

	if (t10 != 32768LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	int32_t x50 = -1938;
	int32_t x52 = 3748;
	int32_t t11 = -38149;

	t11 = (((x49%x50)*x51)-x52);

	if (t11 != 12636) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x55 = UINT16_MAX;
	static int32_t x56 = -149;

	t12 = (((x53%x54)*x55)-x56);

	if (t12 != 149) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x58 = 59;
	int8_t x59 = -33;
	uint8_t x60 = 64U;
	volatile int32_t t13 = 0;

	t13 = (((x57%x58)*x59)-x60);

	if (t13 != 695) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x61 = UINT32_MAX;
	int64_t x62 = INT64_MIN;
	static int16_t x63 = -1;
	static int16_t x64 = -155;
	static int64_t t14 = 2LL;

	t14 = (((x61%x62)*x63)-x64);

	if (t14 != -4294967140LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -1;
	int16_t x70 = 76;
	uint16_t x71 = UINT16_MAX;
	int8_t x72 = INT8_MIN;
	volatile int32_t t15 = 196951760;

	t15 = (((x69%x70)*x71)-x72);

	if (t15 != -65407) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x79 = 5U;
	uint32_t x80 = UINT32_MAX;
	uint64_t t16 = 296358336LLU;

	t16 = (((x77%x78)*x79)-x80);

	if (t16 != 18446744069414584336LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x85 = 160;
	int8_t x86 = -1;
	int32_t x87 = 971795562;
	int32_t x88 = -52;

	t17 = (((x85%x86)*x87)-x88);

	if (t17 != 52) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x89 = 9U;
	uint8_t x90 = 2U;
	static int64_t x91 = INT64_MAX;
	int64_t x92 = 875841642732169113LL;

	t18 = (((x89%x90)*x91)-x92);

	if (t18 != 8347530394122606694LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x93 = 2;
	volatile int64_t x94 = -224096LL;
	volatile int16_t x95 = 127;
	int64_t x96 = -13274199002LL;
	static int64_t t19 = -22753453016305LL;

	t19 = (((x93%x94)*x95)-x96);

	if (t19 != 13274199256LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x97 = -612384824;
	volatile int64_t x98 = 4058LL;
	volatile int64_t x100 = -33648618434LL;
	static volatile int64_t t20 = -457816646482LL;

	t20 = (((x97%x98)*x99)-x100);

	if (t20 != 33648618434LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = INT16_MIN;
	uint32_t x102 = 233U;
	uint64_t x103 = 16158LLU;
	uint8_t x104 = UINT8_MAX;
	uint64_t t21 = 2154LLU;

	t21 = (((x101%x102)*x103)-x104);

	if (t21 != 1502439LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x107 = UINT32_MAX;
	uint32_t x108 = 28U;
	volatile int64_t t22 = 0LL;

	t22 = (((x105%x106)*x107)-x108);

	if (t22 != -4294967323LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x110 = UINT16_MAX;
	int32_t x111 = -1;
	int16_t x112 = -1;
	int32_t t23 = 215606692;

	t23 = (((x109%x110)*x111)-x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x114 = -437689424;
	int32_t x115 = INT32_MAX;
	int32_t x116 = INT32_MIN;
	static volatile uint64_t t24 = 16887795801864871LLU;

	t24 = (((x113%x114)*x115)-x116);

	if (t24 != 3884797917424LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x117 = INT32_MAX;
	int16_t x118 = INT16_MAX;
	static int8_t x119 = INT8_MIN;
	int8_t x120 = INT8_MIN;
	int32_t t25 = 698244382;

	t25 = (((x117%x118)*x119)-x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x121 = 28;
	int8_t x122 = INT8_MIN;
	int16_t x123 = 41;
	volatile uint32_t x124 = UINT32_MAX;
	volatile uint32_t t26 = 234U;

	t26 = (((x121%x122)*x123)-x124);

	if (t26 != 1149U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x125 = 58985485265LLU;
	uint16_t x126 = UINT16_MAX;
	int8_t x127 = -1;
	int8_t x128 = INT8_MAX;
	volatile uint64_t t27 = 21777815276614LLU;

	t27 = (((x125%x126)*x127)-x128);

	if (t27 != 18446744073709498324LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x130 = 2398U;
	int16_t x131 = INT16_MIN;
	uint16_t x132 = 7547U;
	int64_t t28 = -6707447499LL;

	t28 = (((x129%x130)*x131)-x132);

	if (t28 != 11788933LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x133 = 1U;
	volatile uint64_t x134 = 9062953746972024LLU;
	int64_t x135 = -117276717115LL;
	volatile uint64_t t29 = 16045276726242LLU;

	t29 = (((x133%x134)*x135)-x136);

	if (t29 != 18446743958580318149LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = -3;
	int64_t x138 = INT64_MIN;
	volatile int8_t x139 = INT8_MIN;
	static volatile uint64_t x140 = 45542LLU;
	static volatile uint64_t t30 = 1595142990408172LLU;

	t30 = (((x137%x138)*x139)-x140);

	if (t30 != 18446744073709506458LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = 1U;
	volatile int64_t x142 = -1LL;
	int16_t x143 = INT16_MIN;
	static volatile int64_t t31 = -50530LL;

	t31 = (((x141%x142)*x143)-x144);

	if (t31 != -5834LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x145 = 1848LLU;
	volatile int16_t x146 = 649;
	int64_t x147 = -239927661346404LL;
	uint32_t x148 = 416U;
	uint64_t t32 = 214190742022812016LLU;

	t32 = (((x145%x146)*x147)-x148);

	if (t32 != 18314783859969029000LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x150 = INT16_MAX;
	static uint64_t x151 = 705406333118LLU;
	volatile int64_t x152 = -1LL;

	t33 = (((x149%x150)*x151)-x152);

	if (t33 != 18443578915492851151LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = INT32_MIN;
	volatile int8_t x154 = INT8_MAX;
	uint64_t x156 = 86LLU;
	volatile uint64_t t34 = 18760850561LLU;

	t34 = (((x153%x154)*x155)-x156);

	if (t34 != 18446744073709525570LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x157 = -210;
	int64_t x159 = -1LL;
	static uint64_t x160 = UINT64_MAX;

	t35 = (((x157%x158)*x159)-x160);

	if (t35 != 83LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x161 = INT8_MIN;
	int32_t x163 = -1;
	uint8_t x164 = 6U;
	volatile int32_t t36 = 3686;

	t36 = (((x161%x162)*x163)-x164);

	if (t36 != 122) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = INT16_MAX;
	uint64_t x170 = 383743081479LLU;
	int8_t x171 = INT8_MIN;
	volatile int32_t x172 = -122;
	volatile uint64_t t37 = 118LLU;

	t37 = (((x169%x170)*x171)-x172);

	if (t37 != 18446744073705357562LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x173 = -14;
	int64_t x174 = -23612670681LL;
	volatile uint64_t t38 = 4963444319494858LLU;

	t38 = (((x173%x174)*x175)-x176);

	if (t38 != 18446742738965265210LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x177 = 14122U;
	volatile int16_t x178 = 1722;
	volatile int8_t x179 = INT8_MAX;
	int64_t x180 = -2196650117713LL;
	int64_t t39 = -27050970LL;

	t39 = (((x177%x178)*x179)-x180);

	if (t39 != 2196650161655LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x182 = -1;
	static volatile int64_t x184 = -1LL;
	volatile int64_t t40 = 1LL;

	t40 = (((x181%x182)*x183)-x184);

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = -104819296905943710LL;
	static int16_t x186 = 15;
	static int16_t x187 = INT16_MIN;
	uint8_t x188 = 74U;
	int64_t t41 = 29945143554038339LL;

	t41 = (((x185%x186)*x187)-x188);

	if (t41 != -74LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = -1;
	static volatile int64_t x190 = 3055352LL;
	static volatile int16_t x191 = INT16_MAX;
	int64_t t42 = 10543LL;

	t42 = (((x189%x190)*x191)-x192);

	if (t42 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = INT64_MIN;
	int32_t x202 = -1;
	int8_t x203 = -1;
	int16_t x204 = -3;
	int64_t t43 = 88175LL;

	t43 = (((x201%x202)*x203)-x204);

	if (t43 != 3LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x205 = UINT64_MAX;
	static uint64_t x206 = 51830009LLU;
	int32_t x207 = -1;
	uint64_t t44 = 0LLU;

	t44 = (((x205%x206)*x207)-x208);

	if (t44 != 18446744073690280187LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x209 = -1;
	int64_t x211 = -4026726172310333539LL;
	int32_t x212 = INT32_MIN;
	volatile int64_t t45 = 40487300887690093LL;

	t45 = (((x209%x210)*x211)-x212);

	if (t45 != 4026726174457817187LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x215 = 2054139582LLU;
	int64_t x216 = -3944LL;
	volatile uint64_t t46 = 333481470480691LLU;

	t46 = (((x213%x214)*x215)-x216);

	if (t46 != 19403402495516LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x217 = -13097;
	uint16_t x218 = 2U;
	volatile uint8_t x219 = 1U;
	int16_t x220 = INT16_MIN;
	int32_t t47 = 0;

	t47 = (((x217%x218)*x219)-x220);

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x221 = INT32_MIN;
	volatile int16_t x222 = INT16_MIN;
	int8_t x223 = INT8_MIN;
	volatile uint32_t t48 = 81712793U;

	t48 = (((x221%x222)*x223)-x224);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x227 = INT8_MIN;
	volatile uint64_t x228 = 2469042801681788LLU;
	volatile uint64_t t49 = 6598426651LLU;

	t49 = (((x225%x226)*x227)-x228);

	if (t49 != 18444275030907869956LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x230 = -20089070;
	int16_t x231 = INT16_MIN;
	volatile int32_t t50 = -517780877;

	t50 = (((x229%x230)*x231)-x232);

	if (t50 != 28398) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x237 = 23U;
	static uint32_t x239 = 125146085U;
	volatile uint32_t x240 = 2103550420U;
	static int64_t t51 = -82216974513LL;

	t51 = (((x237%x238)*x239)-x240);

	if (t51 != -2103550420LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x242 = INT16_MIN;
	volatile int64_t x243 = -1LL;
	static volatile uint64_t t52 = 144054166891217281LLU;

	t52 = (((x241%x242)*x243)-x244);

	if (t52 != 18446744073707906254LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x249 = 86538LL;
	uint32_t x250 = UINT32_MAX;
	int16_t x251 = -411;
	static uint32_t x252 = UINT32_MAX;
	volatile int64_t t53 = 1731447LL;

	t53 = (((x249%x250)*x251)-x252);

	if (t53 != -4330534413LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x253 = 62;
	volatile int16_t x255 = INT16_MIN;
	static uint32_t x256 = 49446U;

	t54 = (((x253%x254)*x255)-x256);

	if (t54 != 18446744073707470554LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x257 = INT64_MAX;
	volatile int8_t x258 = INT8_MIN;
	volatile uint8_t x259 = 0U;
	static int8_t x260 = -1;
	int64_t t55 = 2430940347721LL;

	t55 = (((x257%x258)*x259)-x260);

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x261 = 1U;
	uint16_t x262 = UINT16_MAX;
	static int16_t x263 = INT16_MAX;
	static int32_t t56 = -415;

	t56 = (((x261%x262)*x263)-x264);

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x269 = -1;
	int8_t x270 = 13;
	int16_t x271 = INT16_MAX;
	volatile int8_t x272 = INT8_MIN;
	int32_t t57 = 5;

	t57 = (((x269%x270)*x271)-x272);

	if (t57 != -32639) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x273 = UINT64_MAX;
	int8_t x274 = INT8_MAX;
	int16_t x275 = INT16_MIN;
	int16_t x276 = INT16_MAX;

	t58 = (((x273%x274)*x275)-x276);

	if (t58 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x277 = -1;
	uint32_t x278 = 39U;
	int8_t x279 = INT8_MIN;
	uint8_t x280 = 15U;
	volatile uint32_t t59 = 46U;

	t59 = (((x277%x278)*x279)-x280);

	if (t59 != 4294964593U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x281 = -1;
	int8_t x282 = -1;
	uint32_t x283 = UINT32_MAX;
	static int16_t x284 = -1;
	uint32_t t60 = 1009455189U;

	t60 = (((x281%x282)*x283)-x284);

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x285 = 9;
	int8_t x287 = -1;
	int32_t x288 = -1;
	int64_t t61 = 234807LL;

	t61 = (((x285%x286)*x287)-x288);

	if (t61 != -8LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = -1LL;
	uint8_t x291 = 96U;
	int8_t x292 = INT8_MAX;
	volatile uint64_t t62 = 3523517582291272555LLU;

	t62 = (((x289%x290)*x291)-x292);

	if (t62 != 675515681LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x293 = -364;
	static uint8_t x294 = UINT8_MAX;
	volatile uint16_t x295 = UINT16_MAX;
	uint32_t x296 = UINT32_MAX;
	static uint32_t t63 = 1705U;

	t63 = (((x293%x294)*x295)-x296);

	if (t63 != 4287823982U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x297 = INT8_MIN;
	int32_t x298 = INT32_MAX;
	int8_t x299 = -1;
	uint32_t x300 = 12U;

	t64 = (((x297%x298)*x299)-x300);

	if (t64 != 116U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x305 = -1LL;
	int16_t x306 = INT16_MIN;
	uint32_t x307 = UINT32_MAX;
	int16_t x308 = 21;
	static volatile int64_t t65 = -194403LL;

	t65 = (((x305%x306)*x307)-x308);

	if (t65 != -4294967316LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x309 = 3U;
	int16_t x310 = INT16_MAX;
	int32_t x311 = -1;
	volatile int16_t x312 = 151;

	t66 = (((x309%x310)*x311)-x312);

	if (t66 != -154) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x313 = UINT16_MAX;
	int32_t x314 = INT32_MIN;
	uint64_t x315 = UINT64_MAX;
	int64_t x316 = -145262074826193762LL;
	volatile uint64_t t67 = 509402991175535513LLU;

	t67 = (((x313%x314)*x315)-x316);

	if (t67 != 145262074826128227LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x317 = -1LL;
	uint16_t x318 = UINT16_MAX;
	static int32_t x319 = INT32_MAX;
	static int16_t x320 = -1;
	int64_t t68 = 1300LL;

	t68 = (((x317%x318)*x319)-x320);

	if (t68 != -2147483646LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x321 = INT16_MIN;
	int32_t x322 = INT32_MIN;
	int16_t x323 = 1;
	volatile uint8_t x324 = 4U;
	int32_t t69 = -493292;

	t69 = (((x321%x322)*x323)-x324);

	if (t69 != -32772) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x329 = INT16_MAX;
	int8_t x330 = INT8_MAX;
	static volatile int32_t x331 = INT32_MIN;
	int64_t t70 = -43209501225LL;

	t70 = (((x329%x330)*x331)-x332);

	if (t70 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x335 = INT16_MAX;
	uint16_t x336 = UINT16_MAX;

	t71 = (((x333%x334)*x335)-x336);

	if (t71 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x341 = INT16_MAX;
	int64_t x342 = 2328LL;
	volatile uint8_t x343 = 0U;
	volatile int32_t x344 = INT32_MIN;
	int64_t t72 = 43826783LL;

	t72 = (((x341%x342)*x343)-x344);

	if (t72 != 2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x345 = -6;
	static int16_t x346 = -34;
	int8_t x347 = INT8_MIN;
	int8_t x348 = -1;

	t73 = (((x345%x346)*x347)-x348);

	if (t73 != 769) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x349 = -1;
	static int64_t x352 = -1LL;

	t74 = (((x349%x350)*x351)-x352);

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x354 = INT16_MIN;
	int32_t t75 = -10939;

	t75 = (((x353%x354)*x355)-x356);

	if (t75 != -32661) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x357 = -28;
	static int16_t x358 = -1;
	volatile int8_t x360 = INT8_MIN;
	uint64_t t76 = 61203858146363LLU;

	t76 = (((x357%x358)*x359)-x360);

	if (t76 != 128LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x361 = INT32_MIN;
	uint8_t x364 = 62U;
	int32_t t77 = 16638182;

	t77 = (((x361%x362)*x363)-x364);

	if (t77 != 66) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x365 = 10861U;
	int16_t x366 = 913;
	volatile int8_t x367 = INT8_MAX;
	int32_t x368 = INT32_MIN;
	volatile uint32_t t78 = 1517332U;

	t78 = (((x365%x366)*x367)-x368);

	if (t78 != 2147587534U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x369 = -1LL;
	static int32_t x370 = INT32_MIN;
	static uint64_t x371 = UINT64_MAX;
	uint64_t x372 = 3431919183296245641LLU;
	uint64_t t79 = 2194397497049LLU;

	t79 = (((x369%x370)*x371)-x372);

	if (t79 != 15014824890413305976LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x377 = INT8_MIN;
	uint16_t x378 = 7305U;
	int32_t x379 = -270614;
	int32_t x380 = -1;
	static int32_t t80 = 61570;

	t80 = (((x377%x378)*x379)-x380);

	if (t80 != 34638593) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x381 = -12840717;
	int16_t x383 = 312;
	volatile int32_t x384 = 0;
	static volatile int32_t t81 = -19863748;

	t81 = (((x381%x382)*x383)-x384);

	if (t81 != -59904) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x385 = -1;
	int64_t x386 = -1213LL;
	int64_t x387 = INT64_MAX;
	int8_t x388 = 1;
	volatile int64_t t82 = INT64_MIN;

	t82 = (((x385%x386)*x387)-x388);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x390 = INT32_MIN;
	uint16_t x391 = UINT16_MAX;
	int64_t x392 = 31948575LL;
	volatile uint64_t t83 = 1LLU;

	t83 = (((x389%x390)*x391)-x392);

	if (t83 != 3121987793246251309LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x397 = 12LLU;
	int8_t x398 = -1;
	uint16_t x399 = 105U;
	static int8_t x400 = INT8_MIN;
	static uint64_t t84 = 8071877LLU;

	t84 = (((x397%x398)*x399)-x400);

	if (t84 != 1388LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x401 = INT32_MIN;
	uint32_t x402 = 1U;
	int16_t x403 = -512;

	t85 = (((x401%x402)*x403)-x404);

	if (t85 != 2147483648U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x409 = 2674U;
	static int64_t x410 = INT64_MIN;
	static int8_t x411 = -1;
	static int32_t x412 = INT32_MIN;
	static volatile int64_t t86 = 55LL;

	t86 = (((x409%x410)*x411)-x412);

	if (t86 != 2147480974LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x413 = UINT32_MAX;
	int32_t x415 = INT32_MAX;
	volatile int8_t x416 = 13;
	volatile uint32_t t87 = 2U;

	t87 = (((x413%x414)*x415)-x416);

	if (t87 != 4294967283U) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x417 = INT8_MIN;
	int8_t x418 = INT8_MIN;
	int16_t x419 = INT16_MAX;
	int8_t x420 = INT8_MAX;

	t88 = (((x417%x418)*x419)-x420);

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x421 = INT32_MIN;

	t89 = (((x421%x422)*x423)-x424);

	if (t89 != 11080LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x425 = 7U;
	int8_t x426 = -1;
	int64_t x427 = INT64_MIN;
	uint64_t t90 = 6714674494672LLU;

	t90 = (((x425%x426)*x427)-x428);

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x429 = 472U;
	int16_t x430 = -2;
	int32_t x431 = -1;
	volatile int64_t t91 = 89539603326LL;

	t91 = (((x429%x430)*x431)-x432);

	if (t91 != 4294966825LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x434 = INT16_MAX;
	uint8_t x436 = UINT8_MAX;
	volatile int64_t t92 = -1LL;

	t92 = (((x433%x434)*x435)-x436);

	if (t92 != 2040986265LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x439 = 4;
	uint16_t x440 = 2U;
	volatile uint64_t t93 = 9623217459950880LLU;

	t93 = (((x437%x438)*x439)-x440);

	if (t93 != 131066LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x441 = UINT32_MAX;
	volatile uint64_t x442 = UINT64_MAX;
	volatile uint32_t x443 = 3U;
	volatile int32_t x444 = INT32_MIN;
	uint64_t t94 = 14749LLU;

	t94 = (((x441%x442)*x443)-x444);

	if (t94 != 15032385533LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x446 = -58269551620LL;
	uint64_t x447 = 75967106700949LLU;
	int64_t x448 = INT64_MIN;
	uint64_t t95 = 559313959918LLU;

	t95 = (((x445%x446)*x447)-x448);

	if (t95 != 14201876374501468523LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x450 = UINT8_MAX;
	int32_t x452 = 27854;
	static volatile int64_t t96 = 457LL;

	t96 = (((x449%x450)*x451)-x452);

	if (t96 != 2147455794LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x453 = 2134513473069LLU;
	int32_t x454 = INT32_MIN;
	static int16_t x456 = 1606;
	uint64_t t97 = 51186735518LLU;

	t97 = (((x453%x454)*x455)-x456);

	if (t97 != 18376800336224025018LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x457 = INT16_MIN;
	int16_t x458 = 103;
	uint16_t x459 = 2U;
	int64_t x460 = 1322101LL;
	int64_t t98 = -2774600146284334LL;

	t98 = (((x457%x458)*x459)-x460);

	if (t98 != -1322129LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x462 = UINT8_MAX;
	static int8_t x463 = -54;
	static int32_t x464 = INT32_MAX;
	int32_t t99 = 47;

	t99 = (((x461%x462)*x463)-x464);

	if (t99 != -2147476735) { NG(); } else { ; }
	
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

