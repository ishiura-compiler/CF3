#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x19 = -2489LL;
int32_t x27 = -41210;
volatile int32_t x28 = INT32_MIN;
int64_t x45 = INT64_MAX;
static uint64_t x47 = UINT64_MAX;
uint32_t x52 = 12513U;
int64_t x53 = 325683759214319LL;
static volatile int16_t x54 = 15;
int64_t x66 = INT64_MIN;
int64_t x67 = 17295812850LL;
uint32_t x70 = UINT32_MAX;
int64_t x87 = INT64_MAX;
volatile int64_t t19 = -1LL;
static int32_t x113 = INT32_MIN;
int8_t x114 = INT8_MIN;
volatile int16_t x117 = INT16_MAX;
uint8_t x131 = 8U;
int32_t x132 = INT32_MAX;
int32_t x134 = INT32_MAX;
volatile uint64_t x144 = 33600583696085672LLU;
uint16_t x149 = 10800U;
static volatile uint8_t x151 = 1U;
volatile uint8_t x153 = 107U;
int32_t t37 = 5270801;
uint32_t x164 = 13529602U;
int8_t x169 = 0;
int64_t t41 = 133460323542139025LL;
int16_t x185 = INT16_MAX;
uint64_t x189 = 14LLU;
volatile uint8_t x195 = 50U;
static uint8_t x206 = UINT8_MAX;
uint64_t x228 = 8699005357484517LLU;
int8_t x237 = INT8_MIN;
volatile uint8_t x240 = 7U;
int16_t x244 = INT16_MIN;
uint8_t x251 = UINT8_MAX;
int64_t t60 = 134569LL;
volatile int32_t t61 = 26582;
volatile int64_t x268 = -1LL;
uint16_t x271 = 475U;
int32_t t63 = INT32_MIN;
int32_t x280 = INT32_MIN;
int16_t x282 = 0;
uint8_t x286 = UINT8_MAX;
int64_t x288 = INT64_MAX;
volatile int32_t t68 = -828;
static uint64_t x295 = UINT64_MAX;
static int16_t x302 = 8073;
uint16_t x303 = 3U;
volatile int8_t x304 = INT8_MIN;
volatile int32_t t70 = 366233;
int8_t x306 = -57;
int32_t x318 = INT32_MAX;
uint64_t x319 = UINT64_MAX;
volatile int8_t x321 = INT8_MIN;
uint32_t x322 = 423545855U;
uint32_t x330 = 428037U;
int8_t x331 = 1;
int8_t x338 = 5;
volatile int32_t x349 = 2850028;
int8_t x359 = -1;
uint32_t x361 = UINT32_MAX;
int32_t x363 = INT32_MIN;
uint64_t x366 = 590LLU;
int16_t x381 = 2;
volatile uint64_t x382 = UINT64_MAX;
volatile int8_t x383 = 19;
static volatile uint64_t x388 = 6631078039699054LLU;
int64_t x399 = -38551LL;
int32_t x402 = INT32_MIN;
static int32_t x405 = INT32_MIN;
volatile uint64_t t96 = UINT64_MAX;
static int16_t x415 = 19;
volatile int32_t t97 = 0;


void f0(void) {
	int32_t x5 = INT32_MIN;
	int16_t x6 = INT16_MAX;
	int64_t x7 = -1720488810094147LL;
	int8_t x8 = INT8_MIN;
	int64_t t0 = 262132269026511LL;

	t0 = (((x5<=x6)/x7)+x8);

	if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 2039824;
	int16_t x10 = -11258;
	volatile int16_t x11 = INT16_MIN;
	volatile uint32_t x12 = 321866U;
	uint32_t t1 = 6U;

	t1 = (((x9<=x10)/x11)+x12);

	if (t1 != 321866U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1;
	static int8_t x14 = INT8_MIN;
	static uint8_t x15 = 26U;
	uint64_t x16 = 101219280LLU;
	uint64_t t2 = 25536257046943LLU;

	t2 = (((x13<=x14)/x15)+x16);

	if (t2 != 101219280LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = UINT64_MAX;
	static uint16_t x18 = 1144U;
	uint8_t x20 = 15U;
	volatile int64_t t3 = -828593LL;

	t3 = (((x17<=x18)/x19)+x20);

	if (t3 != 15LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 7600LLU;
	static uint32_t x22 = 633U;
	uint8_t x23 = 43U;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t4 = -6473;

	t4 = (((x21<=x22)/x23)+x24);

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	static volatile uint64_t x26 = 8806286621LLU;
	static volatile int32_t t5 = INT32_MIN;

	t5 = (((x25<=x26)/x27)+x28);

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	uint16_t x30 = 9U;
	int32_t x31 = INT32_MAX;
	volatile int64_t x32 = INT64_MIN;
	volatile int64_t t6 = INT64_MIN;

	t6 = (((x29<=x30)/x31)+x32);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = INT8_MIN;
	int32_t x34 = INT32_MAX;
	int16_t x35 = INT16_MIN;
	int8_t x36 = 2;
	int32_t t7 = -193192;

	t7 = (((x33<=x34)/x35)+x36);

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 1U;
	static uint16_t x38 = 124U;
	int32_t x39 = 6;
	static int32_t x40 = INT32_MIN;
	volatile int32_t t8 = INT32_MIN;

	t8 = (((x37<=x38)/x39)+x40);

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x46 = 9977U;
	int8_t x48 = INT8_MAX;
	volatile uint64_t t9 = 2635LLU;

	t9 = (((x45<=x46)/x47)+x48);

	if (t9 != 127LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = 112995454;
	int64_t x50 = -203LL;
	static int64_t x51 = 413048167181968LL;
	volatile int64_t t10 = -56376507748658916LL;

	t10 = (((x49<=x50)/x51)+x52);

	if (t10 != 12513LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x55 = 52366564032LLU;
	uint64_t x56 = 123983273697LLU;
	volatile uint64_t t11 = 4116573744805931LLU;

	t11 = (((x53<=x54)/x55)+x56);

	if (t11 != 123983273697LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x57 = INT64_MIN;
	int32_t x58 = 16034;
	uint64_t x59 = 1229LLU;
	static int32_t x60 = INT32_MIN;
	uint64_t t12 = 652742LLU;

	t12 = (((x57<=x58)/x59)+x60);

	if (t12 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x61 = -1;
	volatile uint64_t x62 = 5673104148126590392LLU;
	int16_t x63 = -1;
	int16_t x64 = -535;
	int32_t t13 = 3;

	t13 = (((x61<=x62)/x63)+x64);

	if (t13 != -535) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = -7903;
	uint64_t x68 = 131LLU;
	static volatile uint64_t t14 = 728576052099LLU;

	t14 = (((x65<=x66)/x67)+x68);

	if (t14 != 131LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -22;
	uint64_t x71 = 1LLU;
	int64_t x72 = 4084304LL;
	uint64_t t15 = 100LLU;

	t15 = (((x69<=x70)/x71)+x72);

	if (t15 != 4084305LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x73 = INT8_MIN;
	uint8_t x74 = 13U;
	int32_t x75 = INT32_MIN;
	uint32_t x76 = 3U;
	uint32_t t16 = 92646U;

	t16 = (((x73<=x74)/x75)+x76);

	if (t16 != 3U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MAX;
	volatile int16_t x78 = INT16_MIN;
	int8_t x79 = -1;
	volatile int32_t x80 = 15;
	int32_t t17 = -32;

	t17 = (((x77<=x78)/x79)+x80);

	if (t17 != 15) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MAX;
	uint16_t x82 = 155U;
	volatile int16_t x83 = -24;
	static volatile int32_t x84 = -115689428;
	volatile int32_t t18 = -3849;

	t18 = (((x81<=x82)/x83)+x84);

	if (t18 != -115689428) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MIN;
	int64_t x86 = -1LL;
	int16_t x88 = INT16_MIN;

	t19 = (((x85<=x86)/x87)+x88);

	if (t19 != -32768LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x89 = 1120309LLU;
	int32_t x90 = INT32_MIN;
	volatile int64_t x91 = INT64_MIN;
	static int64_t x92 = INT64_MIN;
	static volatile int64_t t20 = INT64_MIN;

	t20 = (((x89<=x90)/x91)+x92);

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 17U;
	int8_t x94 = INT8_MAX;
	uint16_t x95 = 239U;
	int64_t x96 = INT64_MIN;
	int64_t t21 = INT64_MIN;

	t21 = (((x93<=x94)/x95)+x96);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x97 = 1631770264U;
	int64_t x98 = -1LL;
	int8_t x99 = -1;
	volatile int8_t x100 = 11;
	static int32_t t22 = 2033088;

	t22 = (((x97<=x98)/x99)+x100);

	if (t22 != 11) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -124573129LL;
	static int32_t x102 = -683703073;
	int8_t x103 = -1;
	volatile int16_t x104 = -428;
	volatile int32_t t23 = 8667706;

	t23 = (((x101<=x102)/x103)+x104);

	if (t23 != -428) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MIN;
	static int32_t x106 = INT32_MIN;
	uint16_t x107 = 21U;
	static int32_t x108 = INT32_MAX;
	int32_t t24 = INT32_MAX;

	t24 = (((x105<=x106)/x107)+x108);

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x109 = INT8_MAX;
	int32_t x110 = INT32_MIN;
	int16_t x111 = -88;
	volatile int16_t x112 = -1;
	int32_t t25 = -23575752;

	t25 = (((x109<=x110)/x111)+x112);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x115 = 58U;
	static int64_t x116 = INT64_MAX;
	static volatile int64_t t26 = INT64_MAX;

	t26 = (((x113<=x114)/x115)+x116);

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x118 = -1LL;
	int32_t x119 = INT32_MIN;
	int8_t x120 = 2;
	volatile int32_t t27 = -8;

	t27 = (((x117<=x118)/x119)+x120);

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 76437700069954LLU;
	int16_t x122 = -1;
	uint8_t x123 = 6U;
	int32_t x124 = INT32_MIN;
	volatile int32_t t28 = INT32_MIN;

	t28 = (((x121<=x122)/x123)+x124);

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = 87U;
	int8_t x126 = -3;
	static int32_t x127 = INT32_MIN;
	static uint32_t x128 = 1667688350U;
	static uint32_t t29 = 27198U;

	t29 = (((x125<=x126)/x127)+x128);

	if (t29 != 1667688350U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x129 = INT16_MIN;
	uint16_t x130 = UINT16_MAX;
	volatile int32_t t30 = INT32_MAX;

	t30 = (((x129<=x130)/x131)+x132);

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 26346LLU;
	int32_t x135 = INT32_MAX;
	volatile uint32_t x136 = 99081294U;
	volatile uint32_t t31 = 223U;

	t31 = (((x133<=x134)/x135)+x136);

	if (t31 != 99081294U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x137 = UINT16_MAX;
	static int64_t x138 = 164776LL;
	int64_t x139 = -739621LL;
	volatile uint32_t x140 = UINT32_MAX;
	int64_t t32 = -1770611321256517LL;

	t32 = (((x137<=x138)/x139)+x140);

	if (t32 != 4294967295LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x141 = UINT16_MAX;
	static int16_t x142 = INT16_MAX;
	uint16_t x143 = UINT16_MAX;
	uint64_t t33 = 6682728016628593964LLU;

	t33 = (((x141<=x142)/x143)+x144);

	if (t33 != 33600583696085672LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x145 = 1423U;
	uint16_t x146 = 5U;
	static volatile uint8_t x147 = 24U;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t34 = -2437;

	t34 = (((x145<=x146)/x147)+x148);

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x150 = 44096786;
	int16_t x152 = INT16_MAX;
	volatile int32_t t35 = -1079656;

	t35 = (((x149<=x150)/x151)+x152);

	if (t35 != 32768) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x154 = 122672122U;
	int64_t x155 = -3152775153418LL;
	int64_t x156 = INT64_MIN;
	int64_t t36 = INT64_MIN;

	t36 = (((x153<=x154)/x155)+x156);

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x157 = 481263U;
	static int64_t x158 = INT64_MAX;
	int32_t x159 = INT32_MIN;
	uint16_t x160 = 24U;

	t37 = (((x157<=x158)/x159)+x160);

	if (t37 != 24) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = 396396LLU;
	static uint16_t x162 = 177U;
	static int64_t x163 = INT64_MIN;
	volatile int64_t t38 = 85976566313LL;

	t38 = (((x161<=x162)/x163)+x164);

	if (t38 != 13529602LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x170 = UINT16_MAX;
	volatile int16_t x171 = -1;
	int64_t x172 = -1LL;
	static int64_t t39 = 2752863118039938LL;

	t39 = (((x169<=x170)/x171)+x172);

	if (t39 != -2LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x173 = INT8_MIN;
	static int8_t x174 = INT8_MIN;
	uint64_t x175 = 605LLU;
	static volatile int8_t x176 = 36;
	volatile uint64_t t40 = 1054728335552739LLU;

	t40 = (((x173<=x174)/x175)+x176);

	if (t40 != 36LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x177 = UINT32_MAX;
	static volatile int32_t x178 = INT32_MIN;
	volatile int8_t x179 = INT8_MAX;
	int64_t x180 = -61409265451LL;

	t41 = (((x177<=x178)/x179)+x180);

	if (t41 != -61409265451LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x181 = 10U;
	volatile int16_t x182 = INT16_MAX;
	uint16_t x183 = 21U;
	uint8_t x184 = 3U;
	int32_t t42 = -12598431;

	t42 = (((x181<=x182)/x183)+x184);

	if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x186 = -1LL;
	volatile int32_t x187 = INT32_MIN;
	int64_t x188 = -13258950LL;
	volatile int64_t t43 = 120803944LL;

	t43 = (((x185<=x186)/x187)+x188);

	if (t43 != -13258950LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x190 = -1;
	int64_t x191 = 9LL;
	volatile uint8_t x192 = 20U;
	static int64_t t44 = -9449028147LL;

	t44 = (((x189<=x190)/x191)+x192);

	if (t44 != 20LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = INT64_MAX;
	int64_t x194 = INT64_MAX;
	uint64_t x196 = 213LLU;
	uint64_t t45 = 884367989LLU;

	t45 = (((x193<=x194)/x195)+x196);

	if (t45 != 213LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x197 = INT8_MIN;
	static uint64_t x198 = 1462966749404214994LLU;
	static int8_t x199 = 13;
	int8_t x200 = -1;
	volatile int32_t t46 = 1;

	t46 = (((x197<=x198)/x199)+x200);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x201 = UINT64_MAX;
	uint8_t x202 = UINT8_MAX;
	int32_t x203 = INT32_MIN;
	int8_t x204 = 1;
	volatile int32_t t47 = 1;

	t47 = (((x201<=x202)/x203)+x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x205 = UINT16_MAX;
	static volatile int16_t x207 = INT16_MAX;
	int16_t x208 = -3;
	static volatile int32_t t48 = -51;

	t48 = (((x205<=x206)/x207)+x208);

	if (t48 != -3) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = INT64_MIN;
	uint8_t x210 = UINT8_MAX;
	static int64_t x211 = INT64_MIN;
	uint16_t x212 = 31469U;
	int64_t t49 = 1LL;

	t49 = (((x209<=x210)/x211)+x212);

	if (t49 != 31469LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = 1272;
	static int16_t x218 = INT16_MIN;
	volatile int32_t x219 = INT32_MIN;
	int16_t x220 = -1;
	volatile int32_t t50 = 0;

	t50 = (((x217<=x218)/x219)+x220);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x221 = 10LL;
	volatile uint8_t x222 = 127U;
	volatile int8_t x223 = -1;
	int8_t x224 = INT8_MIN;
	volatile int32_t t51 = 68240512;

	t51 = (((x221<=x222)/x223)+x224);

	if (t51 != -129) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x225 = -1;
	int8_t x226 = INT8_MAX;
	static volatile int32_t x227 = INT32_MAX;
	volatile uint64_t t52 = 614448LLU;

	t52 = (((x225<=x226)/x227)+x228);

	if (t52 != 8699005357484517LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = -1550465169LL;
	uint32_t x230 = 26489U;
	static uint8_t x231 = 5U;
	static uint16_t x232 = 1U;
	int32_t t53 = -2;

	t53 = (((x229<=x230)/x231)+x232);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x233 = UINT8_MAX;
	static volatile int16_t x234 = -1;
	int64_t x235 = -1LL;
	static int8_t x236 = 0;
	int64_t t54 = 10954358518873052LL;

	t54 = (((x233<=x234)/x235)+x236);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x238 = 17;
	volatile int32_t x239 = INT32_MAX;
	volatile int32_t t55 = -2038;

	t55 = (((x237<=x238)/x239)+x240);

	if (t55 != 7) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x241 = 20LLU;
	uint32_t x242 = 913678016U;
	int64_t x243 = 17949146LL;
	volatile int64_t t56 = 22058LL;

	t56 = (((x241<=x242)/x243)+x244);

	if (t56 != -32768LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = -1;
	uint16_t x246 = 0U;
	int64_t x247 = INT64_MIN;
	int16_t x248 = 19;
	static int64_t t57 = -37522860783172LL;

	t57 = (((x245<=x246)/x247)+x248);

	if (t57 != 19LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x249 = 652LLU;
	int8_t x250 = 2;
	uint16_t x252 = 11302U;
	volatile int32_t t58 = 332073;

	t58 = (((x249<=x250)/x251)+x252);

	if (t58 != 11302) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = INT8_MIN;
	uint8_t x254 = 117U;
	uint8_t x255 = UINT8_MAX;
	static int32_t x256 = INT32_MIN;
	int32_t t59 = INT32_MIN;

	t59 = (((x253<=x254)/x255)+x256);

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x257 = INT8_MIN;
	int32_t x258 = -22281;
	int64_t x259 = INT64_MIN;
	volatile int8_t x260 = INT8_MIN;

	t60 = (((x257<=x258)/x259)+x260);

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x261 = 0U;
	static int32_t x262 = INT32_MAX;
	uint8_t x263 = 38U;
	uint8_t x264 = UINT8_MAX;

	t61 = (((x261<=x262)/x263)+x264);

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x265 = 103009096U;
	int16_t x266 = INT16_MAX;
	volatile int64_t x267 = INT64_MIN;
	volatile int64_t t62 = -3329504799900LL;

	t62 = (((x265<=x266)/x267)+x268);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = -758244763;
	volatile uint32_t x270 = 176914U;
	int32_t x272 = INT32_MIN;

	t63 = (((x269<=x270)/x271)+x272);

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x273 = UINT64_MAX;
	uint8_t x274 = 61U;
	int8_t x275 = INT8_MAX;
	int16_t x276 = 25;
	volatile int32_t t64 = -93029;

	t64 = (((x273<=x274)/x275)+x276);

	if (t64 != 25) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = INT64_MIN;
	uint64_t x278 = 86863964340018905LLU;
	uint64_t x279 = 3545LLU;
	uint64_t t65 = 1556637848366LLU;

	t65 = (((x277<=x278)/x279)+x280);

	if (t65 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x281 = -1;
	uint8_t x283 = 14U;
	int64_t x284 = 1797LL;
	int64_t t66 = -353543335302LL;

	t66 = (((x281<=x282)/x283)+x284);

	if (t66 != 1797LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x285 = INT16_MAX;
	int8_t x287 = INT8_MAX;
	int64_t t67 = INT64_MAX;

	t67 = (((x285<=x286)/x287)+x288);

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = INT16_MIN;
	int8_t x290 = -1;
	static volatile int32_t x291 = -1;
	int16_t x292 = -1;

	t68 = (((x289<=x290)/x291)+x292);

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x293 = -1;
	int8_t x294 = -4;
	volatile uint16_t x296 = 144U;
	volatile uint64_t t69 = 291169854LLU;

	t69 = (((x293<=x294)/x295)+x296);

	if (t69 != 144LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x301 = 7748563508323LLU;

	t70 = (((x301<=x302)/x303)+x304);

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x305 = INT16_MIN;
	volatile uint16_t x307 = UINT16_MAX;
	static uint64_t x308 = 7590LLU;
	static uint64_t t71 = 2303633489346322786LLU;

	t71 = (((x305<=x306)/x307)+x308);

	if (t71 != 7590LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x309 = -1;
	int32_t x310 = -316779428;
	static volatile int16_t x311 = INT16_MIN;
	int16_t x312 = -1;
	int32_t t72 = -1195848;

	t72 = (((x309<=x310)/x311)+x312);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = -1;
	uint16_t x314 = 121U;
	static uint16_t x315 = UINT16_MAX;
	volatile int32_t x316 = INT32_MIN;
	static volatile int32_t t73 = INT32_MIN;

	t73 = (((x313<=x314)/x315)+x316);

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x317 = 2;
	int64_t x320 = -56849LL;
	volatile uint64_t t74 = 11LLU;

	t74 = (((x317<=x318)/x319)+x320);

	if (t74 != 18446744073709494767LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x323 = -124;
	volatile uint16_t x324 = 5U;
	int32_t t75 = 1;

	t75 = (((x321<=x322)/x323)+x324);

	if (t75 != 5) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x325 = UINT16_MAX;
	int8_t x326 = INT8_MAX;
	static int16_t x327 = 15278;
	int8_t x328 = -40;
	static volatile int32_t t76 = -16205723;

	t76 = (((x325<=x326)/x327)+x328);

	if (t76 != -40) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x329 = 262907002LL;
	int16_t x332 = 582;
	volatile int32_t t77 = 55130955;

	t77 = (((x329<=x330)/x331)+x332);

	if (t77 != 582) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x333 = INT8_MAX;
	int16_t x334 = 813;
	static int64_t x335 = 79LL;
	int8_t x336 = -5;
	int64_t t78 = -35531699LL;

	t78 = (((x333<=x334)/x335)+x336);

	if (t78 != -5LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = INT16_MIN;
	static volatile int16_t x339 = -11156;
	volatile uint8_t x340 = 37U;
	int32_t t79 = 4;

	t79 = (((x337<=x338)/x339)+x340);

	if (t79 != 37) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x341 = UINT64_MAX;
	int8_t x342 = -1;
	static int32_t x343 = 63916306;
	volatile int16_t x344 = INT16_MIN;
	volatile int32_t t80 = -43;

	t80 = (((x341<=x342)/x343)+x344);

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x345 = INT64_MIN;
	uint8_t x346 = 6U;
	volatile uint32_t x347 = UINT32_MAX;
	volatile int8_t x348 = 5;
	volatile uint32_t t81 = 208418U;

	t81 = (((x345<=x346)/x347)+x348);

	if (t81 != 5U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x350 = 1278U;
	uint16_t x351 = 5U;
	static int64_t x352 = INT64_MIN;
	int64_t t82 = INT64_MIN;

	t82 = (((x349<=x350)/x351)+x352);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x353 = 21U;
	volatile int32_t x354 = INT32_MAX;
	static int8_t x355 = INT8_MAX;
	uint32_t x356 = 143U;
	uint32_t t83 = 467289U;

	t83 = (((x353<=x354)/x355)+x356);

	if (t83 != 143U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x357 = -51825612956650LL;
	int32_t x358 = INT32_MIN;
	static int64_t x360 = 230746183331LL;
	volatile int64_t t84 = 6LL;

	t84 = (((x357<=x358)/x359)+x360);

	if (t84 != 230746183330LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x362 = INT8_MIN;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t85 = -2807379;

	t85 = (((x361<=x362)/x363)+x364);

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x365 = -63085293666694194LL;
	uint32_t x367 = 743784743U;
	static uint16_t x368 = 5395U;
	static uint32_t t86 = 826889547U;

	t86 = (((x365<=x366)/x367)+x368);

	if (t86 != 5395U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x369 = INT16_MAX;
	uint8_t x370 = 35U;
	uint16_t x371 = 1099U;
	static int16_t x372 = INT16_MAX;
	int32_t t87 = -14758727;

	t87 = (((x369<=x370)/x371)+x372);

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x373 = -1;
	uint16_t x374 = 266U;
	uint32_t x375 = 30305U;
	volatile int8_t x376 = INT8_MIN;
	volatile uint32_t t88 = 28U;

	t88 = (((x373<=x374)/x375)+x376);

	if (t88 != 4294967168U) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x377 = INT16_MIN;
	uint8_t x378 = 1U;
	int16_t x379 = -1;
	int8_t x380 = -1;
	int32_t t89 = 129015;

	t89 = (((x377<=x378)/x379)+x380);

	if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x384 = INT8_MIN;
	int32_t t90 = 2199;

	t90 = (((x381<=x382)/x383)+x384);

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x385 = 0U;
	int64_t x386 = INT64_MAX;
	int8_t x387 = -1;
	uint64_t t91 = 145484447LLU;

	t91 = (((x385<=x386)/x387)+x388);

	if (t91 != 6631078039699053LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x393 = UINT32_MAX;
	uint16_t x394 = 7U;
	static uint16_t x395 = 250U;
	int32_t x396 = -1;
	int32_t t92 = -397868647;

	t92 = (((x393<=x394)/x395)+x396);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x397 = INT16_MIN;
	static int32_t x398 = 56875312;
	uint32_t x400 = 7647841U;
	volatile int64_t t93 = 761787LL;

	t93 = (((x397<=x398)/x399)+x400);

	if (t93 != 7647841LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x401 = -980673426585315908LL;
	uint8_t x403 = 4U;
	int32_t x404 = 6;
	volatile int32_t t94 = -1;

	t94 = (((x401<=x402)/x403)+x404);

	if (t94 != 6) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x406 = INT64_MAX;
	int16_t x407 = -7166;
	uint32_t x408 = 28621322U;
	uint32_t t95 = 748293U;

	t95 = (((x405<=x406)/x407)+x408);

	if (t95 != 28621322U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = -1LL;
	volatile uint32_t x410 = 6U;
	int8_t x411 = 32;
	uint64_t x412 = UINT64_MAX;

	t96 = (((x409<=x410)/x411)+x412);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x413 = INT32_MIN;
	uint32_t x414 = 154U;
	uint8_t x416 = UINT8_MAX;

	t97 = (((x413<=x414)/x415)+x416);

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x417 = 754U;
	uint64_t x418 = 105244819645355LLU;
	int8_t x419 = INT8_MIN;
	static uint16_t x420 = 0U;
	volatile int32_t t98 = -195251184;

	t98 = (((x417<=x418)/x419)+x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x421 = INT8_MAX;
	static int32_t x422 = -1;
	volatile int8_t x423 = -1;
	int16_t x424 = INT16_MIN;
	volatile int32_t t99 = 218948;

	t99 = (((x421<=x422)/x423)+x424);

	if (t99 != -32768) { NG(); } else { ; }
	
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

