#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = -4;
volatile int64_t t0 = 694939611064481LL;
int8_t x14 = -1;
int32_t t2 = -116820;
int64_t x21 = INT64_MAX;
uint16_t x22 = 0U;
int32_t x26 = INT32_MAX;
volatile int64_t t6 = 658045LL;
volatile uint64_t x41 = 3LLU;
static volatile int64_t t10 = -28495694LL;
static uint16_t x62 = UINT16_MAX;
uint64_t x65 = UINT64_MAX;
int8_t x69 = INT8_MIN;
int8_t x73 = INT8_MIN;
uint32_t x78 = 7183U;
int16_t x79 = -1;
int32_t t19 = 203092;
int64_t x88 = -107LL;
uint64_t x92 = 608415175LLU;
int32_t x94 = -1;
volatile int32_t t22 = 5;
int32_t x97 = -1;
static int8_t x99 = 9;
int8_t x101 = INT8_MIN;
int64_t x103 = -1LL;
int32_t x126 = INT32_MIN;
volatile uint32_t x128 = UINT32_MAX;
static uint16_t x135 = 414U;
static int16_t x136 = INT16_MIN;
int16_t x147 = 246;
int64_t x149 = 1LL;
uint8_t x153 = UINT8_MAX;
int16_t x154 = 17;
int64_t t36 = -1582942LL;
uint8_t x165 = 58U;
int64_t x166 = 1505571LL;
uint32_t x167 = 22420U;
static int64_t t39 = -16906186570LL;
int8_t x171 = -1;
uint64_t t40 = 105674048501853952LLU;
uint32_t x175 = 32205927U;
volatile int32_t x177 = 2;
uint8_t x184 = UINT8_MAX;
int32_t t43 = 655;
uint64_t x187 = 2638052186995514LLU;
volatile int32_t t45 = 101270198;
int32_t x194 = 6;
volatile uint8_t x195 = 5U;
volatile int32_t x197 = INT32_MIN;
volatile int32_t t47 = -2566776;
uint8_t x206 = 43U;
static int8_t x216 = INT8_MIN;
static int64_t x218 = 435920LL;
static int16_t x226 = INT16_MIN;
uint64_t x227 = 233LLU;
int32_t x228 = INT32_MAX;
int16_t x237 = -3;
static uint32_t t58 = 23U;
int32_t x247 = INT32_MAX;
uint32_t x249 = 96U;
static int16_t x251 = INT16_MIN;
static int32_t x259 = INT32_MIN;
volatile uint8_t x260 = 54U;
uint8_t x262 = 3U;
uint8_t x266 = 10U;
uint16_t x269 = 311U;
int64_t x291 = INT64_MIN;
int64_t x294 = INT64_MAX;
uint64_t t71 = 30712402LLU;
volatile int8_t x301 = 1;
int8_t x302 = INT8_MAX;
uint32_t x306 = 106U;
volatile int32_t t74 = 35;
uint8_t x309 = 16U;
static uint8_t x311 = 2U;
int32_t x314 = INT32_MIN;
volatile uint16_t x317 = 20249U;
int32_t x319 = INT32_MIN;
uint32_t t77 = 92U;
int64_t x321 = INT64_MIN;
int64_t t78 = -26675LL;
uint64_t x326 = 52458269LLU;
volatile uint64_t x328 = 3950LLU;
static uint64_t t79 = 37852LLU;
int32_t x330 = INT32_MAX;
volatile int8_t x331 = INT8_MAX;
volatile uint64_t x337 = 39501LLU;
int8_t x339 = -1;
uint64_t t82 = 29767017LLU;
volatile uint32_t x343 = 859U;
volatile int32_t t83 = -507;
int16_t x347 = INT16_MIN;
volatile int32_t x350 = -571;
static int64_t t85 = 14352537489213920LL;
uint16_t x354 = 15U;
volatile int32_t t86 = -126;
uint16_t x357 = 13762U;
volatile uint16_t x358 = UINT16_MAX;
int32_t t87 = 1935;
uint8_t x361 = UINT8_MAX;
static int64_t x362 = -1LL;
volatile int16_t x368 = INT16_MIN;
int32_t t89 = -3245;
volatile int64_t t92 = -16878396489617LL;
volatile uint64_t t93 = 1LLU;
uint64_t t95 = 389939516986950544LLU;
uint16_t x405 = 4U;
static int32_t t99 = 1;


void f0(void) {
	int64_t x5 = INT64_MIN;
	static int64_t x6 = 2942525685347119LL;
	volatile int32_t x7 = -1;

	t0 = ((x5*(x6==x7))%x8);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x9 = UINT16_MAX;
	volatile int64_t x10 = 162113486LL;
	int32_t x11 = -37;
	uint32_t x12 = 3U;
	uint32_t t1 = 56214U;

	t1 = ((x9*(x10==x11))%x12);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -201;
	uint16_t x15 = 57U;
	uint8_t x16 = 1U;

	t2 = ((x13*(x14==x15))%x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x17 = UINT16_MAX;
	int64_t x18 = -1LL;
	uint16_t x19 = UINT16_MAX;
	static uint32_t x20 = 114726U;
	volatile uint32_t t3 = 119U;

	t3 = ((x17*(x18==x19))%x20);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x23 = INT8_MIN;
	static uint64_t x24 = 2163LLU;
	uint64_t t4 = 65083259LLU;

	t4 = ((x21*(x22==x23))%x24);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x25 = 12369718395064LLU;
	uint64_t x27 = UINT64_MAX;
	volatile int64_t x28 = INT64_MIN;
	volatile uint64_t t5 = 2102407759461LLU;

	t5 = ((x25*(x26==x27))%x28);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	static int32_t x30 = INT32_MIN;
	uint16_t x31 = UINT16_MAX;
	int64_t x32 = -1LL;

	t6 = ((x29*(x30==x31))%x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint8_t x33 = 14U;
	uint16_t x34 = 409U;
	volatile int64_t x35 = INT64_MAX;
	static uint32_t x36 = 148U;
	volatile uint32_t t7 = 199665U;

	t7 = ((x33*(x34==x35))%x36);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x37 = -13LL;
	static int16_t x38 = INT16_MAX;
	static volatile int32_t x39 = -7;
	uint8_t x40 = UINT8_MAX;
	volatile int64_t t8 = -520888196988070LL;

	t8 = ((x37*(x38==x39))%x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x42 = -1;
	volatile int32_t x43 = INT32_MIN;
	int16_t x44 = INT16_MIN;
	static uint64_t t9 = 858903089LLU;

	t9 = ((x41*(x42==x43))%x44);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -2041LL;
	int8_t x46 = INT8_MIN;
	int32_t x47 = -1;
	int16_t x48 = INT16_MIN;

	t10 = ((x45*(x46==x47))%x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = 9902;
	static uint32_t x50 = 136948U;
	static int8_t x51 = -1;
	int32_t x52 = INT32_MIN;
	int32_t t11 = 4415;

	t11 = ((x49*(x50==x51))%x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 966933154291856LLU;
	int64_t x54 = -648283353194503581LL;
	static int64_t x55 = 3728835871177LL;
	uint8_t x56 = 3U;
	volatile uint64_t t12 = 766210LLU;

	t12 = ((x53*(x54==x55))%x56);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x57 = UINT64_MAX;
	static volatile int64_t x58 = -1LL;
	static uint16_t x59 = 7U;
	int8_t x60 = INT8_MIN;
	uint64_t t13 = 387005429362LLU;

	t13 = ((x57*(x58==x59))%x60);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 1184U;
	uint16_t x63 = 1U;
	int32_t x64 = -12545185;
	volatile int32_t t14 = 52451773;

	t14 = ((x61*(x62==x63))%x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x66 = INT8_MIN;
	uint64_t x67 = 25469280018LLU;
	int32_t x68 = -164162;
	volatile uint64_t t15 = 397688463LLU;

	t15 = ((x65*(x66==x67))%x68);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = INT64_MIN;
	static uint8_t x71 = 28U;
	int16_t x72 = -1;
	static int32_t t16 = -176;

	t16 = ((x69*(x70==x71))%x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x74 = 120U;
	static int16_t x75 = 15181;
	static int16_t x76 = INT16_MIN;
	volatile int32_t t17 = 153;

	t17 = ((x73*(x74==x75))%x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = -3;
	volatile uint16_t x80 = UINT16_MAX;
	static volatile int32_t t18 = 1;

	t18 = ((x77*(x78==x79))%x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x81 = -3;
	uint64_t x82 = UINT64_MAX;
	uint64_t x83 = 71201512186187758LLU;
	uint8_t x84 = UINT8_MAX;

	t19 = ((x81*(x82==x83))%x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = INT16_MAX;
	int32_t x86 = 99;
	volatile int32_t x87 = -2;
	static volatile int64_t t20 = -27523682LL;

	t20 = ((x85*(x86==x87))%x88);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x89 = UINT64_MAX;
	static uint16_t x90 = 140U;
	volatile int32_t x91 = INT32_MIN;
	uint64_t t21 = 400340498668235LLU;

	t21 = ((x89*(x90==x91))%x92);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x93 = -1;
	int32_t x95 = 27;
	static volatile int16_t x96 = INT16_MIN;

	t22 = ((x93*(x94==x95))%x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x98 = INT8_MIN;
	int16_t x100 = INT16_MIN;
	volatile int32_t t23 = -4343557;

	t23 = ((x97*(x98==x99))%x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x102 = INT32_MAX;
	uint64_t x104 = 35117392745427642LLU;
	static uint64_t t24 = 61602371430986LLU;

	t24 = ((x101*(x102==x103))%x104);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x109 = 0;
	static int32_t x110 = 3197311;
	volatile uint64_t x111 = 1LLU;
	int8_t x112 = 1;
	volatile int32_t t25 = 1518655;

	t25 = ((x109*(x110==x111))%x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x113 = 28284U;
	int16_t x114 = INT16_MAX;
	uint64_t x115 = 57105248189950LLU;
	int32_t x116 = INT32_MIN;
	volatile uint32_t t26 = 10U;

	t26 = ((x113*(x114==x115))%x116);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = 2686861U;
	volatile uint32_t x118 = 6632U;
	volatile int32_t x119 = INT32_MAX;
	static int32_t x120 = -1;
	volatile uint32_t t27 = 296017U;

	t27 = ((x117*(x118==x119))%x120);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x121 = 218160697U;
	static int64_t x122 = INT64_MIN;
	int8_t x123 = 1;
	int8_t x124 = 10;
	uint32_t t28 = 160U;

	t28 = ((x121*(x122==x123))%x124);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = 1U;
	static uint8_t x127 = 2U;
	volatile uint32_t t29 = 181998456U;

	t29 = ((x125*(x126==x127))%x128);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x129 = -1969209221808924399LL;
	volatile uint32_t x130 = 180U;
	uint64_t x131 = 2894494928LLU;
	int8_t x132 = -1;
	int64_t t30 = 177429640LL;

	t30 = ((x129*(x130==x131))%x132);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x133 = 7U;
	volatile int32_t x134 = INT32_MAX;
	static int32_t t31 = -31299;

	t31 = ((x133*(x134==x135))%x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x137 = 8143LLU;
	static int8_t x138 = 37;
	int8_t x139 = -1;
	static uint64_t x140 = UINT64_MAX;
	uint64_t t32 = 141626091256785015LLU;

	t32 = ((x137*(x138==x139))%x140);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x141 = 10U;
	static int8_t x142 = INT8_MIN;
	uint16_t x143 = 2U;
	uint16_t x144 = 465U;
	int32_t t33 = -1381;

	t33 = ((x141*(x142==x143))%x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = -7LL;
	int8_t x146 = 0;
	int32_t x148 = INT32_MIN;
	volatile int64_t t34 = -8195LL;

	t34 = ((x145*(x146==x147))%x148);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x150 = 1343170U;
	int64_t x151 = 2023460290LL;
	int64_t x152 = -186093084339390LL;
	volatile int64_t t35 = -357311LL;

	t35 = ((x149*(x150==x151))%x152);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x155 = 97588666181619384LLU;
	int64_t x156 = INT64_MIN;

	t36 = ((x153*(x154==x155))%x156);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = INT64_MAX;
	uint64_t x158 = 1270LLU;
	uint8_t x159 = 2U;
	static int8_t x160 = INT8_MIN;
	int64_t t37 = 152391LL;

	t37 = ((x157*(x158==x159))%x160);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x161 = 13U;
	int64_t x162 = INT64_MIN;
	int32_t x163 = -1;
	int8_t x164 = INT8_MIN;
	volatile int32_t t38 = -1;

	t38 = ((x161*(x162==x163))%x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x168 = -1LL;

	t39 = ((x165*(x166==x167))%x168);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x169 = 4267270040864442259LLU;
	static volatile int64_t x170 = 774295LL;
	int32_t x172 = INT32_MIN;

	t40 = ((x169*(x170==x171))%x172);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x173 = INT32_MAX;
	static int32_t x174 = INT32_MIN;
	static volatile int8_t x176 = 1;
	volatile int32_t t41 = 11765;

	t41 = ((x173*(x174==x175))%x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x178 = -6667676LL;
	int64_t x179 = INT64_MIN;
	uint32_t x180 = 18321775U;
	uint32_t t42 = 19U;

	t42 = ((x177*(x178==x179))%x180);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x181 = 2;
	int16_t x182 = -3;
	volatile uint64_t x183 = UINT64_MAX;

	t43 = ((x181*(x182==x183))%x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = 1919514U;
	int8_t x186 = INT8_MIN;
	uint8_t x188 = 101U;
	uint32_t t44 = 148359U;

	t44 = ((x185*(x186==x187))%x188);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MAX;
	volatile int8_t x190 = INT8_MAX;
	volatile int8_t x191 = INT8_MAX;
	volatile uint16_t x192 = 23847U;

	t45 = ((x189*(x190==x191))%x192);

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x193 = UINT16_MAX;
	static int64_t x196 = INT64_MIN;
	int64_t t46 = 2LL;

	t46 = ((x193*(x194==x195))%x196);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x198 = 1357475774U;
	volatile uint64_t x199 = 25735683032565834LLU;
	static volatile int32_t x200 = INT32_MIN;

	t47 = ((x197*(x198==x199))%x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x201 = INT8_MIN;
	int16_t x202 = INT16_MIN;
	int16_t x203 = -11390;
	int64_t x204 = INT64_MIN;
	volatile int64_t t48 = -268084324119445LL;

	t48 = ((x201*(x202==x203))%x204);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x205 = 1LLU;
	volatile uint64_t x207 = 51510LLU;
	static volatile int8_t x208 = INT8_MIN;
	static volatile uint64_t t49 = 4153713639311024651LLU;

	t49 = ((x205*(x206==x207))%x208);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x209 = -1;
	static int32_t x210 = INT32_MIN;
	int64_t x211 = INT64_MAX;
	uint64_t x212 = 24624631LLU;
	uint64_t t50 = 419685171LLU;

	t50 = ((x209*(x210==x211))%x212);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x213 = 11572U;
	volatile int16_t x214 = -1;
	static volatile uint16_t x215 = UINT16_MAX;
	int32_t t51 = 175907;

	t51 = ((x213*(x214==x215))%x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = -1;
	uint64_t x219 = UINT64_MAX;
	uint32_t x220 = UINT32_MAX;
	volatile uint32_t t52 = 1U;

	t52 = ((x217*(x218==x219))%x220);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x221 = INT64_MAX;
	volatile int32_t x222 = INT32_MAX;
	int16_t x223 = 1;
	int64_t x224 = 505LL;
	volatile int64_t t53 = 156903LL;

	t53 = ((x221*(x222==x223))%x224);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = 421930840;
	volatile int32_t t54 = 1619038;

	t54 = ((x225*(x226==x227))%x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x229 = 22U;
	int32_t x230 = INT32_MAX;
	volatile uint8_t x231 = UINT8_MAX;
	uint64_t x232 = 1LLU;
	volatile uint64_t t55 = 791281119526LLU;

	t55 = ((x229*(x230==x231))%x232);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x233 = UINT8_MAX;
	volatile uint64_t x234 = 62825508457691206LLU;
	int8_t x235 = INT8_MIN;
	volatile uint32_t x236 = 4U;
	uint32_t t56 = 9984480U;

	t56 = ((x233*(x234==x235))%x236);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x238 = 2734851221302698926LL;
	int64_t x239 = INT64_MAX;
	int16_t x240 = INT16_MIN;
	int32_t t57 = -584094656;

	t57 = ((x237*(x238==x239))%x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = -1;
	static volatile int8_t x242 = -1;
	uint16_t x243 = UINT16_MAX;
	uint32_t x244 = 21580504U;

	t58 = ((x241*(x242==x243))%x244);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x245 = 6;
	uint32_t x246 = UINT32_MAX;
	int16_t x248 = 5;
	static volatile int32_t t59 = 128595;

	t59 = ((x245*(x246==x247))%x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x250 = 1U;
	int16_t x252 = INT16_MIN;
	uint32_t t60 = 56U;

	t60 = ((x249*(x250==x251))%x252);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 52U;
	uint32_t x254 = 951658U;
	int8_t x255 = 32;
	int8_t x256 = INT8_MAX;
	volatile int32_t t61 = 1;

	t61 = ((x253*(x254==x255))%x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = -2313;
	uint16_t x258 = 450U;
	static volatile int32_t t62 = 11;

	t62 = ((x257*(x258==x259))%x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x261 = INT64_MAX;
	static int32_t x263 = -1;
	static volatile int32_t x264 = INT32_MIN;
	static volatile int64_t t63 = -1LL;

	t63 = ((x261*(x262==x263))%x264);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = -7;
	static int32_t x267 = INT32_MIN;
	int16_t x268 = 1396;
	static volatile int32_t t64 = 21146366;

	t64 = ((x265*(x266==x267))%x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x270 = INT8_MIN;
	int32_t x271 = INT32_MAX;
	volatile int16_t x272 = -849;
	static int32_t t65 = 1;

	t65 = ((x269*(x270==x271))%x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x273 = 12;
	uint64_t x274 = 543013525150124397LLU;
	int16_t x275 = INT16_MAX;
	int64_t x276 = -31419401371LL;
	volatile int64_t t66 = -255023520397149LL;

	t66 = ((x273*(x274==x275))%x276);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x277 = 22381894U;
	static int8_t x278 = INT8_MAX;
	int64_t x279 = -7946960168212756LL;
	int32_t x280 = -13;
	uint32_t t67 = 16795U;

	t67 = ((x277*(x278==x279))%x280);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x281 = UINT8_MAX;
	int8_t x282 = 0;
	int64_t x283 = -253666LL;
	uint32_t x284 = 669U;
	uint32_t t68 = 3U;

	t68 = ((x281*(x282==x283))%x284);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = -19;
	uint32_t x286 = 1827739831U;
	static volatile uint64_t x287 = UINT64_MAX;
	static int64_t x288 = INT64_MIN;
	static volatile int64_t t69 = -1010343224LL;

	t69 = ((x285*(x286==x287))%x288);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = INT64_MIN;
	int16_t x290 = -1;
	int8_t x292 = INT8_MAX;
	int64_t t70 = 69571855267823LL;

	t70 = ((x289*(x290==x291))%x292);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = INT8_MIN;
	int16_t x295 = INT16_MIN;
	uint64_t x296 = 40090447477553087LLU;

	t71 = ((x293*(x294==x295))%x296);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x297 = INT64_MIN;
	volatile int64_t x298 = INT64_MAX;
	static int8_t x299 = INT8_MIN;
	int32_t x300 = INT32_MAX;
	static int64_t t72 = 54418LL;

	t72 = ((x297*(x298==x299))%x300);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x303 = 602662U;
	int64_t x304 = 1176095057LL;
	volatile int64_t t73 = -46391529464LL;

	t73 = ((x301*(x302==x303))%x304);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x305 = INT8_MIN;
	static int32_t x307 = INT32_MIN;
	int8_t x308 = INT8_MIN;

	t74 = ((x305*(x306==x307))%x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x310 = 103253851524648464LLU;
	int16_t x312 = -5;
	volatile int32_t t75 = -22;

	t75 = ((x309*(x310==x311))%x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x313 = 983U;
	int32_t x315 = -6779;
	uint8_t x316 = 57U;
	int32_t t76 = 89;

	t76 = ((x313*(x314==x315))%x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x318 = UINT64_MAX;
	uint32_t x320 = 413U;

	t77 = ((x317*(x318==x319))%x320);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x322 = INT16_MIN;
	static int32_t x323 = INT32_MIN;
	int16_t x324 = INT16_MIN;

	t78 = ((x321*(x322==x323))%x324);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = INT64_MAX;
	static volatile uint16_t x327 = 1024U;

	t79 = ((x325*(x326==x327))%x328);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = -1;
	uint8_t x332 = 28U;
	int32_t t80 = -82;

	t80 = ((x329*(x330==x331))%x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = -2561;
	int64_t x334 = -2533154190LL;
	int32_t x335 = -1;
	int64_t x336 = INT64_MIN;
	volatile int64_t t81 = 55780LL;

	t81 = ((x333*(x334==x335))%x336);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x338 = UINT16_MAX;
	static int8_t x340 = INT8_MIN;

	t82 = ((x337*(x338==x339))%x340);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = -805;
	int16_t x342 = -1;
	int32_t x344 = -41;

	t83 = ((x341*(x342==x343))%x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x345 = 4U;
	volatile int64_t x346 = INT64_MIN;
	uint32_t x348 = 1546U;
	uint32_t t84 = 251149409U;

	t84 = ((x345*(x346==x347))%x348);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = INT64_MIN;
	volatile uint64_t x351 = UINT64_MAX;
	int8_t x352 = -13;

	t85 = ((x349*(x350==x351))%x352);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x353 = 44U;
	int8_t x355 = INT8_MIN;
	int8_t x356 = -1;

	t86 = ((x353*(x354==x355))%x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x359 = INT32_MIN;
	uint16_t x360 = UINT16_MAX;

	t87 = ((x357*(x358==x359))%x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x363 = 11377U;
	int64_t x364 = -55407459480103LL;
	volatile int64_t t88 = -12261774114548302LL;

	t88 = ((x361*(x362==x363))%x364);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x365 = -14;
	uint64_t x366 = 27658932LLU;
	volatile int8_t x367 = INT8_MIN;

	t89 = ((x365*(x366==x367))%x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x369 = UINT32_MAX;
	uint32_t x370 = UINT32_MAX;
	uint8_t x371 = 26U;
	volatile uint16_t x372 = 9U;
	uint32_t t90 = 13691U;

	t90 = ((x369*(x370==x371))%x372);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x373 = -1810386358215706731LL;
	uint8_t x374 = 76U;
	int8_t x375 = INT8_MAX;
	volatile int16_t x376 = -1;
	static int64_t t91 = -2229LL;

	t91 = ((x373*(x374==x375))%x376);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x377 = INT16_MIN;
	static int16_t x378 = INT16_MAX;
	static int16_t x379 = 0;
	int64_t x380 = INT64_MIN;

	t92 = ((x377*(x378==x379))%x380);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x381 = 17278120LLU;
	int32_t x382 = INT32_MAX;
	static int8_t x383 = INT8_MIN;
	volatile int8_t x384 = INT8_MAX;

	t93 = ((x381*(x382==x383))%x384);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x385 = -3211098653377005104LL;
	volatile uint64_t x386 = UINT64_MAX;
	volatile int64_t x387 = INT64_MIN;
	static volatile uint16_t x388 = UINT16_MAX;
	volatile int64_t t94 = 56030568LL;

	t94 = ((x385*(x386==x387))%x388);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x389 = UINT64_MAX;
	static int8_t x390 = INT8_MIN;
	volatile uint64_t x391 = 209267417597785740LLU;
	static int16_t x392 = INT16_MIN;

	t95 = ((x389*(x390==x391))%x392);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x393 = -13;
	int32_t x394 = -121;
	volatile int16_t x395 = INT16_MAX;
	static int32_t x396 = -1;
	static int32_t t96 = -359;

	t96 = ((x393*(x394==x395))%x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x397 = -1;
	uint64_t x398 = 3752470707702LLU;
	int32_t x399 = INT32_MIN;
	volatile uint8_t x400 = UINT8_MAX;
	static int32_t t97 = 3;

	t97 = ((x397*(x398==x399))%x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x401 = 410;
	volatile int32_t x402 = -1;
	uint16_t x403 = 29411U;
	static uint16_t x404 = UINT16_MAX;
	int32_t t98 = 31419;

	t98 = ((x401*(x402==x403))%x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x406 = -264337055464429LL;
	int16_t x407 = 3;
	int16_t x408 = INT16_MAX;

	t99 = ((x405*(x406==x407))%x408);

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

