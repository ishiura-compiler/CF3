#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
uint64_t t2 = 247975025540226LLU;
volatile uint32_t t3 = 1022586U;
int8_t x26 = INT8_MAX;
int32_t x28 = -1;
int8_t x35 = INT8_MAX;
volatile int64_t x51 = INT64_MAX;
static int8_t x53 = INT8_MIN;
int32_t t13 = 8688;
int16_t x66 = -1;
int8_t x67 = INT8_MAX;
uint32_t t16 = 57341U;
uint16_t x79 = 31U;
int16_t x80 = -1;
int16_t x84 = 31;
int32_t x89 = -2294386;
int8_t x102 = INT8_MIN;
int64_t t24 = 5878118LL;
int32_t x113 = -5259;
int16_t x116 = 84;
int32_t t26 = 265199155;
uint8_t x119 = UINT8_MAX;
uint64_t x124 = UINT64_MAX;
volatile uint64_t t28 = 6920377567LLU;
int64_t x131 = INT64_MIN;
volatile int64_t t31 = -306LL;
volatile uint16_t x138 = UINT16_MAX;
uint64_t t32 = 13510149474290LLU;
int16_t x146 = -1300;
int32_t x155 = 291842967;
int16_t x158 = -10;
volatile uint64_t x160 = 3680514688LLU;
int64_t x162 = INT64_MAX;
uint64_t x165 = UINT64_MAX;
uint32_t x168 = 7U;
int16_t x171 = 16;
int16_t x175 = INT16_MIN;
int16_t x188 = INT16_MAX;
uint32_t x197 = UINT32_MAX;
int32_t x199 = INT32_MIN;
int64_t t46 = 94752960073591LL;
uint8_t x201 = 0U;
uint16_t x208 = 1061U;
volatile int32_t t49 = -458918454;
volatile uint32_t x220 = 47374U;
int64_t x223 = -6053002012439657LL;
uint32_t x226 = 6365831U;
int32_t x228 = INT32_MAX;
int8_t x231 = INT8_MIN;
uint64_t t54 = 2002433902LLU;
int64_t t55 = -1130369060695068LL;
int64_t x237 = INT64_MAX;
int8_t x239 = 1;
static volatile int64_t t56 = 4187LL;
uint64_t t58 = 13LLU;
static int32_t t59 = 1802309;
int16_t x253 = 0;
volatile uint8_t x255 = 1U;
uint64_t x257 = UINT64_MAX;
volatile int32_t t63 = -13;
uint64_t x269 = 25LLU;
uint8_t x270 = UINT8_MAX;
static int64_t t65 = 989491401645LL;
static volatile int64_t t69 = 12947411583LL;
static int64_t t70 = 3058895LL;
volatile uint64_t x297 = UINT64_MAX;
static volatile uint64_t t71 = 8117377796097LLU;
static int8_t x304 = INT8_MIN;
int64_t x305 = 49326LL;
int32_t x323 = INT32_MIN;
uint32_t x325 = UINT32_MAX;
int8_t x327 = -14;
static volatile uint64_t t77 = 5535127228660044521LLU;
int32_t x329 = INT32_MIN;
int8_t x332 = INT8_MAX;
volatile uint32_t x334 = UINT32_MAX;
volatile uint32_t t79 = 2050U;
int32_t x341 = INT32_MAX;
uint8_t x342 = 27U;
volatile int16_t x344 = -462;
volatile int8_t x351 = 7;
uint64_t x355 = 558LLU;
int32_t x358 = 9;
uint8_t x360 = UINT8_MAX;
volatile uint32_t x363 = UINT32_MAX;
volatile uint32_t x368 = 6811619U;
int64_t x369 = -1LL;
uint16_t x372 = 871U;
volatile int16_t x375 = INT16_MIN;
static uint16_t x376 = 13U;
int8_t x378 = -1;
uint8_t x390 = 0U;
int8_t x396 = INT8_MIN;
int16_t x400 = 0;
volatile uint64_t t93 = 14LLU;
int32_t x403 = INT32_MIN;
int64_t x404 = 10183007667LL;
int64_t t94 = -2321601456855864LL;
uint64_t x414 = 117317910928LLU;
uint64_t x417 = 391LLU;
uint32_t x419 = UINT32_MAX;


void f0(void) {
	int8_t x2 = INT8_MIN;
	volatile int16_t x3 = INT16_MIN;
	static uint16_t x4 = 6U;
	volatile int32_t t0 = -4;

	t0 = (((x1&x2)%x3)-x4);

	if (t0 != -134) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x13 = UINT8_MAX;
	uint16_t x14 = UINT16_MAX;
	int64_t x15 = INT64_MIN;
	static int32_t x16 = INT32_MAX;
	static int64_t t1 = -701LL;

	t1 = (((x13&x14)%x15)-x16);

	if (t1 != -2147483392LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x17 = INT64_MAX;
	volatile uint64_t x18 = UINT64_MAX;
	int8_t x19 = 4;
	int16_t x20 = -1;

	t2 = (((x17&x18)%x19)-x20);

	if (t2 != 4LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x21 = 404U;
	int32_t x22 = INT32_MAX;
	uint8_t x23 = 35U;
	uint32_t x24 = 815219247U;

	t3 = (((x21&x22)%x23)-x24);

	if (t3 != 3479748068U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = -1;
	static int16_t x27 = -1;
	volatile int32_t t4 = -26764505;

	t4 = (((x25&x26)%x27)-x28);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = 3;
	int64_t x30 = -1LL;
	static uint16_t x31 = 1U;
	volatile int8_t x32 = -1;
	int64_t t5 = 54759584LL;

	t5 = (((x29&x30)%x31)-x32);

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 2LLU;
	static uint8_t x34 = UINT8_MAX;
	int16_t x36 = -1;
	volatile uint64_t t6 = 305538188944606409LLU;

	t6 = (((x33&x34)%x35)-x36);

	if (t6 != 3LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x37 = INT32_MIN;
	int16_t x38 = INT16_MAX;
	static volatile uint32_t x39 = UINT32_MAX;
	int8_t x40 = 40;
	static volatile uint32_t t7 = 201653493U;

	t7 = (((x37&x38)%x39)-x40);

	if (t7 != 4294967256U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MIN;
	int64_t x42 = 59LL;
	uint64_t x43 = 889012637105032188LLU;
	int16_t x44 = 58;
	volatile uint64_t t8 = 33157712357LLU;

	t8 = (((x41&x42)%x43)-x44);

	if (t8 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x45 = UINT16_MAX;
	uint16_t x46 = 1981U;
	static int64_t x47 = -54927238143340031LL;
	int64_t x48 = -15083LL;
	int64_t t9 = -1673207195056LL;

	t9 = (((x45&x46)%x47)-x48);

	if (t9 != 17064LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x49 = UINT64_MAX;
	static uint64_t x50 = 29688270676893813LLU;
	uint8_t x52 = UINT8_MAX;
	uint64_t t10 = 157359LLU;

	t10 = (((x49&x50)%x51)-x52);

	if (t10 != 29688270676893558LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x54 = 4926;
	uint8_t x55 = 13U;
	int16_t x56 = -1;
	volatile int32_t t11 = -3654;

	t11 = (((x53&x54)%x55)-x56);

	if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = 408309275196LL;
	static volatile uint32_t x58 = UINT32_MAX;
	int32_t x59 = INT32_MIN;
	static uint16_t x60 = 5695U;
	static volatile int64_t t12 = -1355327992LL;

	t12 = (((x57&x58)%x59)-x60);

	if (t12 != 287376381LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = 2U;
	volatile int8_t x62 = INT8_MIN;
	int32_t x63 = INT32_MIN;
	uint16_t x64 = UINT16_MAX;

	t13 = (((x61&x62)%x63)-x64);

	if (t13 != -65535) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -1;
	static volatile int16_t x68 = 1;
	static volatile int32_t t14 = 0;

	t14 = (((x65&x66)%x67)-x68);

	if (t14 != -2) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MAX;
	volatile uint32_t x70 = 111U;
	int32_t x71 = INT32_MAX;
	uint32_t x72 = UINT32_MAX;
	static volatile uint32_t t15 = 18261U;

	t15 = (((x69&x70)%x71)-x72);

	if (t15 != 112U) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x73 = UINT8_MAX;
	int16_t x74 = 55;
	static uint32_t x75 = 5769176U;
	volatile int16_t x76 = INT16_MIN;

	t16 = (((x73&x74)%x75)-x76);

	if (t16 != 32823U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 8U;
	uint8_t x78 = UINT8_MAX;
	int32_t t17 = -593;

	t17 = (((x77&x78)%x79)-x80);

	if (t17 != 9) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = 102U;
	int16_t x82 = 7113;
	int8_t x83 = -31;
	static int32_t t18 = -1628;

	t18 = (((x81&x82)%x83)-x84);

	if (t18 != -29) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = UINT32_MAX;
	static volatile int32_t x86 = INT32_MIN;
	static int64_t x87 = -1LL;
	int64_t x88 = INT64_MAX;
	static volatile int64_t t19 = -1426709LL;

	t19 = (((x85&x86)%x87)-x88);

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x90 = 30U;
	uint16_t x91 = UINT16_MAX;
	static int64_t x92 = 306008319923313LL;
	static int64_t t20 = -841914178222997001LL;

	t20 = (((x89&x90)%x91)-x92);

	if (t20 != -306008319923299LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = 32370053871413149LL;
	int8_t x94 = -1;
	int64_t x95 = -1LL;
	uint32_t x96 = UINT32_MAX;
	volatile int64_t t21 = -162LL;

	t21 = (((x93&x94)%x95)-x96);

	if (t21 != -4294967295LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x97 = 6862U;
	uint64_t x98 = UINT64_MAX;
	static int16_t x99 = 116;
	static int8_t x100 = 7;
	volatile uint64_t t22 = 24507149820LLU;

	t22 = (((x97&x98)%x99)-x100);

	if (t22 != 11LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = UINT16_MAX;
	volatile uint64_t x103 = 3707172063LLU;
	int16_t x104 = INT16_MIN;
	volatile uint64_t t23 = 10729905172102LLU;

	t23 = (((x101&x102)%x103)-x104);

	if (t23 != 98176LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = 3375644912343810670LL;
	static uint32_t x106 = 17U;
	uint8_t x107 = 52U;
	volatile int64_t x108 = -1LL;

	t24 = (((x105&x106)%x107)-x108);

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = -12970681203LL;
	static uint32_t x110 = 240842940U;
	uint16_t x111 = 32U;
	int16_t x112 = -1;
	int64_t t25 = -1100170055053011LL;

	t25 = (((x109&x110)%x111)-x112);

	if (t25 != 13LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x114 = 0U;
	volatile int32_t x115 = INT32_MIN;

	t26 = (((x113&x114)%x115)-x116);

	if (t26 != -84) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = UINT8_MAX;
	static int64_t x118 = -1LL;
	uint64_t x120 = UINT64_MAX;
	uint64_t t27 = 35421714996544LLU;

	t27 = (((x117&x118)%x119)-x120);

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x121 = INT32_MAX;
	int8_t x122 = -1;
	static int32_t x123 = -6002;

	t28 = (((x121&x122)%x123)-x124);

	if (t28 != 4060LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = 45U;
	int32_t x126 = -708;
	int16_t x127 = -2314;
	static int8_t x128 = -1;
	static volatile int32_t t29 = -3050;

	t29 = (((x125&x126)%x127)-x128);

	if (t29 != 45) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x129 = -2;
	volatile int8_t x130 = INT8_MAX;
	int8_t x132 = INT8_MIN;
	int64_t t30 = -7461152447804807LL;

	t30 = (((x129&x130)%x131)-x132);

	if (t30 != 254LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MAX;
	int64_t x134 = 8158LL;
	static uint32_t x135 = 1U;
	int16_t x136 = -173;

	t31 = (((x133&x134)%x135)-x136);

	if (t31 != 173LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 120U;
	volatile uint64_t x139 = 5099929432401420LLU;
	static volatile int32_t x140 = INT32_MIN;

	t32 = (((x137&x138)%x139)-x140);

	if (t32 != 2147483768LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -137763;
	int64_t x142 = 178LL;
	uint32_t x143 = 28U;
	uint16_t x144 = UINT16_MAX;
	volatile int64_t t33 = 1117779122394386LL;

	t33 = (((x141&x142)%x143)-x144);

	if (t33 != -65531LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x145 = -1;
	int8_t x147 = -1;
	int8_t x148 = INT8_MAX;
	volatile int32_t t34 = -252541;

	t34 = (((x145&x146)%x147)-x148);

	if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint32_t x149 = UINT32_MAX;
	volatile int16_t x150 = 1;
	int8_t x151 = -1;
	static int16_t x152 = INT16_MAX;
	volatile uint32_t t35 = 18U;

	t35 = (((x149&x150)%x151)-x152);

	if (t35 != 4294934530U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = UINT32_MAX;
	volatile uint16_t x154 = 122U;
	volatile uint64_t x156 = 3783857LLU;
	uint64_t t36 = 11484LLU;

	t36 = (((x153&x154)%x155)-x156);

	if (t36 != 18446744073705767881LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = -1;
	volatile uint8_t x159 = UINT8_MAX;
	uint64_t t37 = 6894122776LLU;

	t37 = (((x157&x158)%x159)-x160);

	if (t37 != 18446744070029036918LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = -1;
	static int32_t x163 = INT32_MIN;
	volatile int16_t x164 = -29;
	volatile int64_t t38 = -604915LL;

	t38 = (((x161&x162)%x163)-x164);

	if (t38 != 2147483676LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x166 = 588071866451LLU;
	volatile int32_t x167 = -462639;
	uint64_t t39 = 0LLU;

	t39 = (((x165&x166)%x167)-x168);

	if (t39 != 588071866444LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x169 = INT8_MIN;
	static uint32_t x170 = UINT32_MAX;
	volatile int32_t x172 = INT32_MAX;
	static volatile uint32_t t40 = 7U;

	t40 = (((x169&x170)%x171)-x172);

	if (t40 != 2147483649U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x173 = 655LL;
	int64_t x174 = -1LL;
	uint8_t x176 = UINT8_MAX;
	int64_t t41 = 2543179170LL;

	t41 = (((x173&x174)%x175)-x176);

	if (t41 != 400LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = INT16_MIN;
	static int32_t x182 = 8255075;
	static volatile int8_t x183 = -1;
	volatile int16_t x184 = INT16_MIN;
	static volatile int32_t t42 = -4;

	t42 = (((x181&x182)%x183)-x184);

	if (t42 != 32768) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x185 = INT16_MAX;
	uint8_t x186 = 22U;
	static int8_t x187 = INT8_MIN;
	volatile int32_t t43 = -16023;

	t43 = (((x185&x186)%x187)-x188);

	if (t43 != -32745) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = 2;
	volatile int8_t x190 = INT8_MAX;
	uint64_t x191 = 3831153412280238522LLU;
	int8_t x192 = INT8_MAX;
	volatile uint64_t t44 = 886LLU;

	t44 = (((x189&x190)%x191)-x192);

	if (t44 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = INT32_MIN;
	int32_t x194 = -1;
	uint32_t x195 = UINT32_MAX;
	int64_t x196 = -1LL;
	int64_t t45 = -25678244374896211LL;

	t45 = (((x193&x194)%x195)-x196);

	if (t45 != 2147483649LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x198 = INT64_MAX;
	uint32_t x200 = UINT32_MAX;

	t46 = (((x197&x198)%x199)-x200);

	if (t46 != -2147483648LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x202 = UINT16_MAX;
	static uint64_t x203 = 37671332LLU;
	volatile int8_t x204 = 2;
	volatile uint64_t t47 = 4187LLU;

	t47 = (((x201&x202)%x203)-x204);

	if (t47 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = 20;
	volatile int8_t x206 = INT8_MAX;
	static int8_t x207 = -1;
	volatile int32_t t48 = 53680915;

	t48 = (((x205&x206)%x207)-x208);

	if (t48 != -1061) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = INT8_MIN;
	int32_t x210 = 6;
	int32_t x211 = -1;
	int8_t x212 = -6;

	t49 = (((x209&x210)%x211)-x212);

	if (t49 != 6) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x213 = 61;
	int64_t x214 = INT64_MIN;
	volatile int16_t x215 = INT16_MAX;
	uint8_t x216 = 0U;
	int64_t t50 = 3370876596841798LL;

	t50 = (((x213&x214)%x215)-x216);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x217 = INT32_MAX;
	volatile int64_t x218 = 44880857823LL;
	static uint8_t x219 = 7U;
	volatile int64_t t51 = -545085122846LL;

	t51 = (((x217&x218)%x219)-x220);

	if (t51 != -47368LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x221 = 2U;
	static uint8_t x222 = UINT8_MAX;
	volatile int8_t x224 = INT8_MIN;
	int64_t t52 = -42908750467069LL;

	t52 = (((x221&x222)%x223)-x224);

	if (t52 != 130LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x225 = 7581U;
	int16_t x227 = -1;
	volatile uint32_t t53 = 29U;

	t53 = (((x225&x226)%x227)-x228);

	if (t53 != 2147483782U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x229 = UINT64_MAX;
	volatile int32_t x230 = INT32_MIN;
	int16_t x232 = INT16_MAX;

	t54 = (((x229&x230)%x231)-x232);

	if (t54 != 18446744071562035201LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x233 = 390573414U;
	int64_t x234 = INT64_MAX;
	volatile int16_t x235 = -1;
	uint8_t x236 = UINT8_MAX;

	t55 = (((x233&x234)%x235)-x236);

	if (t55 != -255LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x238 = 515600912U;
	uint32_t x240 = UINT32_MAX;

	t56 = (((x237&x238)%x239)-x240);

	if (t56 != -4294967295LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x241 = -1;
	static uint64_t x242 = 8560063833117LLU;
	static int32_t x243 = INT32_MAX;
	int8_t x244 = -1;
	static uint64_t t57 = 2986761732LLU;

	t57 = (((x241&x242)%x243)-x244);

	if (t57 != 194016176LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x245 = UINT64_MAX;
	static uint8_t x246 = 1U;
	uint16_t x247 = 24U;
	int64_t x248 = 10573564258LL;

	t58 = (((x245&x246)%x247)-x248);

	if (t58 != 18446744063135987359LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = -1;
	int16_t x250 = INT16_MIN;
	uint16_t x251 = 2131U;
	int16_t x252 = 182;

	t59 = (((x249&x250)%x251)-x252);

	if (t59 != -985) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x254 = INT64_MIN;
	volatile int32_t x256 = -235641;
	int64_t t60 = -139228642716743056LL;

	t60 = (((x253&x254)%x255)-x256);

	if (t60 != 235641LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x258 = INT8_MIN;
	volatile uint32_t x259 = 43U;
	int32_t x260 = -17243403;
	static volatile uint64_t t61 = 20466397115103492LLU;

	t61 = (((x257&x258)%x259)-x260);

	if (t61 != 17243445LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x261 = 18U;
	int64_t x262 = INT64_MIN;
	uint16_t x263 = UINT16_MAX;
	volatile uint16_t x264 = 3U;
	int64_t t62 = -523136355728LL;

	t62 = (((x261&x262)%x263)-x264);

	if (t62 != -3LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x265 = -6;
	int8_t x266 = INT8_MAX;
	uint16_t x267 = UINT16_MAX;
	uint16_t x268 = UINT16_MAX;

	t63 = (((x265&x266)%x267)-x268);

	if (t63 != -65413) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x271 = INT32_MAX;
	static uint64_t x272 = UINT64_MAX;
	uint64_t t64 = 1LLU;

	t64 = (((x269&x270)%x271)-x272);

	if (t64 != 26LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x273 = INT32_MIN;
	volatile int64_t x274 = -1LL;
	static int32_t x275 = INT32_MIN;
	volatile uint8_t x276 = 29U;

	t65 = (((x273&x274)%x275)-x276);

	if (t65 != -29LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x277 = INT16_MAX;
	uint16_t x278 = 54U;
	volatile int32_t x279 = INT32_MIN;
	uint64_t x280 = 6LLU;
	uint64_t t66 = 1LLU;

	t66 = (((x277&x278)%x279)-x280);

	if (t66 != 48LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x281 = UINT16_MAX;
	volatile int32_t x282 = INT32_MAX;
	int64_t x283 = INT64_MIN;
	uint16_t x284 = 260U;
	int64_t t67 = 8508901487452184LL;

	t67 = (((x281&x282)%x283)-x284);

	if (t67 != 65275LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x285 = INT8_MAX;
	int8_t x286 = INT8_MIN;
	int64_t x287 = INT64_MAX;
	uint32_t x288 = UINT32_MAX;
	int64_t t68 = 778LL;

	t68 = (((x285&x286)%x287)-x288);

	if (t68 != -4294967295LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x289 = 2U;
	static int16_t x290 = 3;
	int64_t x291 = INT64_MIN;
	int64_t x292 = -1LL;

	t69 = (((x289&x290)%x291)-x292);

	if (t69 != 3LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x293 = 754190;
	int64_t x294 = 2212LL;
	volatile int64_t x295 = INT64_MIN;
	int64_t x296 = INT64_MAX;

	t70 = (((x293&x294)%x295)-x296);

	if (t70 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x298 = INT8_MIN;
	int16_t x299 = INT16_MAX;
	uint16_t x300 = 2U;

	t71 = (((x297&x298)%x299)-x300);

	if (t71 != 32653LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x301 = 55U;
	int64_t x302 = -1220639332822406546LL;
	volatile uint64_t x303 = UINT64_MAX;
	uint64_t t72 = 537054658LLU;

	t72 = (((x301&x302)%x303)-x304);

	if (t72 != 166LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x306 = -1;
	int8_t x307 = 5;
	static int32_t x308 = INT32_MAX;
	int64_t t73 = -1468531755741075LL;

	t73 = (((x305&x306)%x307)-x308);

	if (t73 != -2147483646LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = INT8_MIN;
	uint16_t x314 = 743U;
	static uint32_t x315 = 58U;
	uint32_t x316 = 8091166U;
	static uint32_t t74 = 53244U;

	t74 = (((x313&x314)%x315)-x316);

	if (t74 != 4286876132U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = INT8_MIN;
	int32_t x318 = INT32_MAX;
	uint8_t x319 = 101U;
	int8_t x320 = -1;
	static volatile int32_t t75 = 14662;

	t75 = (((x317&x318)%x319)-x320);

	if (t75 != 8) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x321 = -20;
	int32_t x322 = INT32_MAX;
	int32_t x324 = -1;
	volatile int32_t t76 = 40250;

	t76 = (((x321&x322)%x323)-x324);

	if (t76 != 2147483629) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x326 = UINT8_MAX;
	volatile uint64_t x328 = 220952474LLU;

	t77 = (((x325&x326)%x327)-x328);

	if (t77 != 18446744073488599397LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x330 = 1424371263046941384LLU;
	uint64_t x331 = UINT64_MAX;
	uint64_t t78 = 62886251LLU;

	t78 = (((x329&x330)%x331)-x332);

	if (t78 != 1424371260996976513LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = INT8_MIN;
	volatile uint8_t x335 = UINT8_MAX;
	uint8_t x336 = 8U;

	t79 = (((x333&x334)%x335)-x336);

	if (t79 != 120U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x343 = -1LL;
	volatile int64_t t80 = 797001853960LL;

	t80 = (((x341&x342)%x343)-x344);

	if (t80 != 462LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x345 = 9309U;
	static int64_t x346 = 274540999251LL;
	static volatile int64_t x347 = 103843461LL;
	static volatile int32_t x348 = 107;
	int64_t t81 = 4505LL;

	t81 = (((x345&x346)%x347)-x348);

	if (t81 != 8166LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x349 = -48;
	volatile uint16_t x350 = 5U;
	int8_t x352 = INT8_MAX;
	static volatile int32_t t82 = -647619;

	t82 = (((x349&x350)%x351)-x352);

	if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x353 = UINT16_MAX;
	int64_t x354 = -1402164LL;
	int16_t x356 = 4;
	uint64_t t83 = 50LLU;

	t83 = (((x353&x354)%x355)-x356);

	if (t83 != 6LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x357 = 15629U;
	int16_t x359 = -1;
	volatile uint32_t t84 = 83273995U;

	t84 = (((x357&x358)%x359)-x360);

	if (t84 != 4294967050U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x361 = -1LL;
	static int16_t x362 = INT16_MAX;
	int64_t x364 = -1LL;
	volatile int64_t t85 = -695052571469221LL;

	t85 = (((x361&x362)%x363)-x364);

	if (t85 != 32768LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x365 = 56144U;
	static int8_t x366 = INT8_MIN;
	static volatile int32_t x367 = INT32_MIN;
	volatile uint32_t t86 = 5177647U;

	t86 = (((x365&x366)%x367)-x368);

	if (t86 != 4288211741U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x370 = -28845042LL;
	int64_t x371 = INT64_MIN;
	volatile int64_t t87 = 31132430660LL;

	t87 = (((x369&x370)%x371)-x372);

	if (t87 != -28845913LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x373 = 4U;
	volatile int8_t x374 = -1;
	volatile int32_t t88 = -21;

	t88 = (((x373&x374)%x375)-x376);

	if (t88 != -9) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x377 = -1;
	int8_t x379 = INT8_MIN;
	static int8_t x380 = INT8_MIN;
	volatile int32_t t89 = 130224;

	t89 = (((x377&x378)%x379)-x380);

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x385 = 1;
	uint32_t x386 = 101092U;
	int8_t x387 = INT8_MIN;
	static uint16_t x388 = UINT16_MAX;
	uint32_t t90 = 2013U;

	t90 = (((x385&x386)%x387)-x388);

	if (t90 != 4294901761U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x389 = 10098843LL;
	int16_t x391 = INT16_MAX;
	static int16_t x392 = -193;
	volatile int64_t t91 = -541510200796590770LL;

	t91 = (((x389&x390)%x391)-x392);

	if (t91 != 193LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x393 = 1U;
	static int8_t x394 = -29;
	static int64_t x395 = -1LL;
	volatile int64_t t92 = -7665424740883LL;

	t92 = (((x393&x394)%x395)-x396);

	if (t92 != 128LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x397 = -94547677;
	uint64_t x398 = UINT64_MAX;
	int32_t x399 = -1;

	t93 = (((x397&x398)%x399)-x400);

	if (t93 != 18446744073615003939LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x401 = INT64_MIN;
	uint16_t x402 = UINT16_MAX;

	t94 = (((x401&x402)%x403)-x404);

	if (t94 != -10183007667LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x405 = 36U;
	uint8_t x406 = 2U;
	uint64_t x407 = 1461919LLU;
	uint8_t x408 = 41U;
	volatile uint64_t t95 = 3LLU;

	t95 = (((x405&x406)%x407)-x408);

	if (t95 != 18446744073709551575LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x409 = INT64_MIN;
	static int64_t x410 = INT64_MIN;
	int8_t x411 = INT8_MIN;
	uint64_t x412 = 189436LLU;
	uint64_t t96 = 168LLU;

	t96 = (((x409&x410)%x411)-x412);

	if (t96 != 18446744073709362180LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x413 = -8241349;
	static uint32_t x415 = 21882U;
	int64_t x416 = INT64_MIN;
	uint64_t t97 = 2662931622726477191LLU;

	t97 = (((x413&x414)%x415)-x416);

	if (t97 != 9223372036854783398LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x418 = -1;
	int16_t x420 = INT16_MIN;
	uint64_t t98 = 12530LLU;

	t98 = (((x417&x418)%x419)-x420);

	if (t98 != 33159LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x421 = 3U;
	uint8_t x422 = 0U;
	volatile uint32_t x423 = 1212651110U;
	int16_t x424 = -1;
	static uint32_t t99 = 0U;

	t99 = (((x421&x422)%x423)-x424);

	if (t99 != 1U) { NG(); } else { ; }
	
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

