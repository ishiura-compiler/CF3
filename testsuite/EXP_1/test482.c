#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 108353052504LLU;
int64_t x4 = 1510753366855112021LL;
static int32_t x7 = INT32_MAX;
int8_t x25 = INT8_MIN;
int32_t t5 = 15;
int16_t x37 = -16;
uint64_t x40 = UINT64_MAX;
int8_t x46 = -55;
static volatile int64_t t9 = -27193935141347LL;
int16_t x49 = INT16_MIN;
uint8_t x51 = 3U;
int8_t x62 = -1;
uint8_t x65 = UINT8_MAX;
volatile uint16_t x73 = 3503U;
volatile int64_t x77 = 1096951785793LL;
uint64_t x82 = 9451LLU;
static uint64_t t18 = 25LLU;
int16_t x88 = INT16_MIN;
uint8_t x91 = UINT8_MAX;
volatile uint32_t x101 = UINT32_MAX;
int64_t x104 = 14570LL;
int32_t x106 = 324;
int64_t x123 = INT64_MIN;
uint32_t x126 = 427573U;
volatile uint32_t x127 = UINT32_MAX;
uint32_t t26 = 0U;
volatile int64_t x148 = -1LL;
int64_t x149 = 6309858118285LL;
static int16_t x159 = INT16_MIN;
volatile int16_t x162 = INT16_MIN;
static uint64_t x165 = 2586224848667555LLU;
uint16_t x167 = 3U;
uint32_t x178 = UINT32_MAX;
volatile int32_t x182 = 0;
int64_t t37 = 472125LL;
static int32_t x189 = 169;
volatile uint64_t x211 = 239535394912LLU;
static volatile uint64_t t41 = 275242LLU;
static int8_t x221 = -1;
int16_t x222 = INT16_MAX;
volatile int64_t t44 = 1071146286LL;
uint64_t x245 = 1305788360355LLU;
volatile uint64_t x250 = 2231LLU;
uint64_t t46 = 18770LLU;
static uint8_t x273 = 0U;
uint16_t x276 = UINT16_MAX;
static volatile int8_t x278 = 44;
static int32_t x285 = -1;
static volatile uint64_t x286 = UINT64_MAX;
volatile int32_t t51 = 5;
volatile int8_t x307 = 0;
int8_t x325 = -1;
volatile int8_t x326 = 1;
int8_t x331 = INT8_MIN;
uint32_t x339 = 1004539U;
static int64_t t57 = 37869LL;
int8_t x348 = -1;
uint64_t x363 = 2909395098033538LLU;
int8_t x365 = INT8_MAX;
int32_t x379 = INT32_MAX;
int64_t t63 = 5912LL;
static volatile int16_t x395 = 0;
volatile int32_t t66 = -141307;
int8_t x415 = INT8_MAX;
uint64_t x420 = 7172244LLU;
volatile uint64_t t72 = 1777126860340197LLU;
volatile int32_t x444 = INT32_MIN;
int64_t x452 = -8779330LL;
int16_t x458 = 14;
static int64_t t79 = -9544968410814LL;
volatile uint8_t x465 = 17U;
static uint64_t x468 = UINT64_MAX;
volatile uint64_t t80 = 52447811LLU;
int64_t x473 = -1LL;
int8_t x475 = INT8_MIN;
int16_t x500 = INT16_MIN;
uint32_t x505 = UINT32_MAX;
int64_t t84 = -852576LL;
int64_t t86 = -21620127565538289LL;
uint32_t x521 = 51939396U;
uint64_t x530 = 4370515120647530LLU;
int32_t x532 = -1;
volatile uint64_t t89 = 46LLU;
uint16_t x546 = UINT16_MAX;
volatile int32_t x550 = 87278786;
volatile uint32_t t91 = 5121U;
int16_t x566 = -21;
int8_t x569 = INT8_MAX;
uint8_t x570 = UINT8_MAX;
volatile int64_t t97 = 517031929105041LL;


void f0(void) {
	static int16_t x1 = 6;
	int32_t x3 = -13611119;
	volatile uint64_t t0 = 652278406435272688LLU;

	t0 = (((x1*x2)|x3)+x4);

	if (t0 != 1510753366841644262LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = UINT16_MAX;
	int16_t x6 = INT16_MIN;
	uint16_t x8 = UINT16_MAX;
	static volatile int32_t t1 = -1121;

	t1 = (((x5*x6)|x7)+x8);

	if (t1 != 65534) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x17 = -1;
	volatile int64_t x18 = -1LL;
	uint64_t x19 = 158444335179LLU;
	static int32_t x20 = INT32_MIN;
	volatile uint64_t t2 = 874900649143LLU;

	t2 = (((x17*x18)|x19)+x20);

	if (t2 != 156296851531LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x21 = INT16_MIN;
	int16_t x22 = -273;
	static int8_t x23 = INT8_MIN;
	int8_t x24 = INT8_MAX;
	volatile int32_t t3 = 1035000854;

	t3 = (((x21*x22)|x23)+x24);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x26 = 105744LLU;
	int64_t x27 = -1LL;
	volatile int16_t x28 = 0;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (((x25*x26)|x27)+x28);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = 0U;
	static volatile int8_t x30 = INT8_MIN;
	static int32_t x31 = INT32_MIN;
	volatile int16_t x32 = INT16_MAX;

	t5 = (((x29*x30)|x31)+x32);

	if (t5 != -2147450881) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x33 = 12U;
	static uint16_t x34 = 13U;
	static int32_t x35 = 5347439;
	uint64_t x36 = UINT64_MAX;
	uint64_t t6 = 66000146889770LLU;

	t6 = (((x33*x34)|x35)+x36);

	if (t6 != 5347582LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x38 = 1208350LL;
	int16_t x39 = INT16_MIN;
	uint64_t t7 = 28677227LLU;

	t7 = (((x37*x38)|x39)+x40);

	if (t7 != 18446744073709551135LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x41 = -7005757LL;
	int16_t x42 = 49;
	uint8_t x43 = 0U;
	uint16_t x44 = 16U;
	volatile int64_t t8 = 24LL;

	t8 = (((x41*x42)|x43)+x44);

	if (t8 != -343282077LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = 50604424150LL;
	volatile int64_t x47 = INT64_MIN;
	int32_t x48 = -255;

	t9 = (((x45*x46)|x47)+x48);

	if (t9 != -2783243328505LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x50 = -1;
	static int32_t x52 = INT32_MIN;
	volatile int32_t t10 = -698;

	t10 = (((x49*x50)|x51)+x52);

	if (t10 != -2147450877) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = 1899;
	uint8_t x54 = 1U;
	uint16_t x55 = UINT16_MAX;
	int32_t x56 = INT32_MIN;
	volatile int32_t t11 = 0;

	t11 = (((x53*x54)|x55)+x56);

	if (t11 != -2147418113) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = 200U;
	volatile int32_t x58 = 15991;
	uint16_t x59 = 7268U;
	volatile int32_t x60 = INT32_MIN;
	int32_t t12 = -863418463;

	t12 = (((x57*x58)|x59)+x60);

	if (t12 != -2144281348) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = 36U;
	volatile uint16_t x63 = 2772U;
	volatile uint8_t x64 = 59U;
	static volatile int32_t t13 = 9;

	t13 = (((x61*x62)|x63)+x64);

	if (t13 != 23) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x66 = 7U;
	uint32_t x67 = UINT32_MAX;
	uint64_t x68 = 4052760871LLU;
	static volatile uint64_t t14 = 64328709703866LLU;

	t14 = (((x65*x66)|x67)+x68);

	if (t14 != 8347728166LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MAX;
	int16_t x70 = -1;
	volatile uint32_t x71 = 152785U;
	volatile int64_t x72 = INT64_MIN;
	int64_t t15 = -3912614936184129150LL;

	t15 = (((x69*x70)|x71)+x72);

	if (t15 != -9223372032559819567LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x74 = INT16_MIN;
	volatile int16_t x75 = INT16_MIN;
	volatile uint16_t x76 = 15U;
	static int32_t t16 = -308668227;

	t16 = (((x73*x74)|x75)+x76);

	if (t16 != -32753) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x78 = INT8_MAX;
	static uint16_t x79 = UINT16_MAX;
	uint16_t x80 = 3066U;
	static volatile int64_t t17 = 706362083276873LL;

	t17 = (((x77*x78)|x79)+x80);

	if (t17 != 139312876817401LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = -1;
	int64_t x83 = INT64_MIN;
	int16_t x84 = INT16_MIN;

	t18 = (((x81*x82)|x83)+x84);

	if (t18 != 18446744073709509397LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -1;
	volatile uint16_t x86 = UINT16_MAX;
	volatile int32_t x87 = INT32_MAX;
	int32_t t19 = 1579566;

	t19 = (((x85*x86)|x87)+x88);

	if (t19 != -32769) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = -1LL;
	int64_t x90 = -18991203914283LL;
	static int32_t x92 = -949389615;
	static volatile int64_t t20 = 171598559467LL;

	t20 = (((x89*x90)|x91)+x92);

	if (t20 != 18990254524880LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MIN;
	int8_t x94 = 13;
	static int8_t x95 = INT8_MAX;
	volatile int8_t x96 = INT8_MIN;
	int32_t t21 = 449;

	t21 = (((x93*x94)|x95)+x96);

	if (t21 != -425985) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x102 = INT8_MIN;
	static volatile int8_t x103 = INT8_MIN;
	volatile int64_t t22 = -29494LL;

	t22 = (((x101*x102)|x103)+x104);

	if (t22 != 4294981738LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = -19;
	int16_t x107 = -3843;
	uint64_t x108 = 3869999548274025696LLU;
	volatile uint64_t t23 = 1098309192276623676LLU;

	t23 = (((x105*x106)|x107)+x108);

	if (t23 != 3869999548274023645LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x109 = 21620278986342LLU;
	static int16_t x110 = -1;
	int16_t x111 = 24;
	uint64_t x112 = 672122LLU;
	static uint64_t t24 = 3499911LLU;

	t24 = (((x109*x110)|x111)+x112);

	if (t24 != 18446722453431237396LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x121 = -1;
	int8_t x122 = 1;
	int32_t x124 = INT32_MAX;
	int64_t t25 = -122333495LL;

	t25 = (((x121*x122)|x123)+x124);

	if (t25 != 2147483646LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x125 = INT32_MAX;
	int32_t x128 = INT32_MAX;

	t26 = (((x125*x126)|x127)+x128);

	if (t26 != 2147483646U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x129 = 16313U;
	int8_t x130 = INT8_MIN;
	int16_t x131 = -1;
	volatile int8_t x132 = INT8_MAX;
	volatile int32_t t27 = 9;

	t27 = (((x129*x130)|x131)+x132);

	if (t27 != 126) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x133 = UINT16_MAX;
	static int8_t x134 = -1;
	uint8_t x135 = UINT8_MAX;
	int64_t x136 = -1LL;
	volatile int64_t t28 = 1052176538391077810LL;

	t28 = (((x133*x134)|x135)+x136);

	if (t28 != -65282LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x141 = UINT8_MAX;
	static volatile int64_t x142 = -1LL;
	uint8_t x143 = UINT8_MAX;
	int32_t x144 = 24;
	int64_t t29 = 6LL;

	t29 = (((x141*x142)|x143)+x144);

	if (t29 != 23LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x145 = INT16_MIN;
	uint32_t x146 = 924239U;
	int8_t x147 = INT8_MIN;
	volatile int64_t t30 = -4973884527256898LL;

	t30 = (((x145*x146)|x147)+x148);

	if (t30 != 4294967167LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x150 = 305U;
	static int64_t x151 = INT64_MIN;
	static int64_t x152 = -1LL;
	static volatile int64_t t31 = -91856LL;

	t31 = (((x149*x150)|x151)+x152);

	if (t31 != -9221447530128698884LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = -1;
	static int16_t x158 = 15232;
	static int16_t x160 = INT16_MIN;
	int32_t t32 = -1;

	t32 = (((x157*x158)|x159)+x160);

	if (t32 != -48000) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = 3;
	volatile int8_t x163 = INT8_MIN;
	int16_t x164 = INT16_MIN;
	int32_t t33 = 7235554;

	t33 = (((x161*x162)|x163)+x164);

	if (t33 != -32896) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x166 = 12566032LLU;
	int16_t x168 = -1;
	uint64_t t34 = 15LLU;

	t34 = (((x165*x166)|x167)+x168);

	if (t34 != 13867893749133095986LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x177 = -1;
	static int32_t x179 = INT32_MAX;
	static uint16_t x180 = 1U;
	volatile uint32_t t35 = 30062U;

	t35 = (((x177*x178)|x179)+x180);

	if (t35 != 2147483648U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x181 = 1834U;
	static int8_t x183 = 60;
	uint16_t x184 = 100U;
	volatile int32_t t36 = 24903533;

	t36 = (((x181*x182)|x183)+x184);

	if (t36 != 160) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x185 = 172302U;
	int64_t x186 = -1LL;
	static volatile int64_t x187 = INT64_MAX;
	int32_t x188 = INT32_MIN;

	t37 = (((x185*x186)|x187)+x188);

	if (t37 != -2147483649LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x190 = UINT64_MAX;
	uint32_t x191 = 208U;
	int64_t x192 = 538LL;
	volatile uint64_t t38 = 917575523201937897LLU;

	t38 = (((x189*x190)|x191)+x192);

	if (t38 != 497LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x201 = -1;
	uint8_t x202 = 7U;
	int64_t x203 = INT64_MAX;
	int8_t x204 = INT8_MIN;
	volatile int64_t t39 = -19035973167LL;

	t39 = (((x201*x202)|x203)+x204);

	if (t39 != -129LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x205 = -1;
	uint32_t x206 = 126264763U;
	int32_t x207 = INT32_MAX;
	uint64_t x208 = 884570358466792LLU;
	uint64_t t40 = 8695680826LLU;

	t40 = (((x205*x206)|x207)+x208);

	if (t40 != 884574653434087LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x209 = 15;
	int16_t x210 = -292;
	uint64_t x212 = 3050059742LLU;

	t41 = (((x209*x210)|x211)+x212);

	if (t41 != 3050059458LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x217 = -1;
	uint16_t x218 = UINT16_MAX;
	volatile int8_t x219 = INT8_MIN;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t42 = 1;

	t42 = (((x217*x218)|x219)+x220);

	if (t42 != 65408) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x223 = INT16_MAX;
	int16_t x224 = 1264;
	int32_t t43 = 473886578;

	t43 = (((x221*x222)|x223)+x224);

	if (t43 != 1263) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x225 = INT16_MIN;
	int8_t x226 = 1;
	static int64_t x227 = INT64_MIN;
	static int16_t x228 = -1;

	t44 = (((x225*x226)|x227)+x228);

	if (t44 != -32769LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x246 = UINT16_MAX;
	int32_t x247 = INT32_MAX;
	int8_t x248 = 3;
	uint64_t t45 = 1626216489502214874LLU;

	t45 = (((x245*x246)|x247)+x248);

	if (t45 != 85574841813434370LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x249 = INT64_MIN;
	static int16_t x251 = 408;
	uint32_t x252 = 7181U;

	t46 = (((x249*x250)|x251)+x252);

	if (t46 != 9223372036854783397LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x274 = INT8_MAX;
	uint64_t x275 = 7295369786204LLU;
	static volatile uint64_t t47 = 2034428172340LLU;

	t47 = (((x273*x274)|x275)+x276);

	if (t47 != 7295369851739LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x277 = UINT32_MAX;
	uint8_t x279 = 8U;
	int64_t x280 = INT64_MIN;
	volatile int64_t t48 = -13781165393LL;

	t48 = (((x277*x278)|x279)+x280);

	if (t48 != -9223372032559808548LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x281 = -1931920452463LL;
	uint8_t x282 = UINT8_MAX;
	uint64_t x283 = 12473743477254LLU;
	static uint64_t x284 = 253573375341LLU;
	uint64_t t49 = 60002383LLU;

	t49 = (((x281*x282)|x283)+x284);

	if (t49 != 18446251722011993052LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x287 = INT32_MIN;
	uint32_t x288 = 7U;
	volatile uint64_t t50 = 27059391725801LLU;

	t50 = (((x285*x286)|x287)+x288);

	if (t50 != 18446744071562067976LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x293 = 20U;
	volatile int8_t x294 = -1;
	static int32_t x295 = -1;
	uint8_t x296 = 1U;

	t51 = (((x293*x294)|x295)+x296);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x301 = 1U;
	int16_t x302 = 1040;
	int8_t x303 = -1;
	static int8_t x304 = 3;
	volatile int32_t t52 = -2004365;

	t52 = (((x301*x302)|x303)+x304);

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x305 = -1LL;
	volatile int16_t x306 = -1;
	int64_t x308 = INT64_MIN;
	volatile int64_t t53 = 12431150LL;

	t53 = (((x305*x306)|x307)+x308);

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x327 = -3LL;
	volatile uint32_t x328 = 13U;
	volatile int64_t t54 = -84788LL;

	t54 = (((x325*x326)|x327)+x328);

	if (t54 != 12LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x329 = -1;
	static int16_t x330 = 12;
	static uint32_t x332 = UINT32_MAX;
	uint32_t t55 = 1178100826U;

	t55 = (((x329*x330)|x331)+x332);

	if (t55 != 4294967283U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x333 = INT8_MIN;
	static uint32_t x334 = 908127U;
	int64_t x335 = INT64_MIN;
	uint8_t x336 = 7U;
	int64_t t56 = 235LL;

	t56 = (((x333*x334)|x335)+x336);

	if (t56 != -9223372032676048761LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x337 = 15038169LL;
	uint8_t x338 = UINT8_MAX;
	uint32_t x340 = 0U;

	t57 = (((x337*x338)|x339)+x340);

	if (t57 != 3835655167LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x341 = -1;
	int64_t x342 = 0LL;
	volatile uint64_t x343 = UINT64_MAX;
	int16_t x344 = -1;
	volatile uint64_t t58 = 3243LLU;

	t58 = (((x341*x342)|x343)+x344);

	if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x345 = 4;
	uint64_t x346 = UINT64_MAX;
	uint16_t x347 = UINT16_MAX;
	static uint64_t t59 = 614608617615362947LLU;

	t59 = (((x345*x346)|x347)+x348);

	if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x361 = INT16_MIN;
	uint64_t x362 = 329LLU;
	static uint32_t x364 = UINT32_MAX;
	volatile uint64_t t60 = 504411884172721575LLU;

	t60 = (((x361*x362)|x363)+x364);

	if (t60 != 4284472705LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x366 = 2LL;
	volatile int8_t x367 = INT8_MIN;
	uint64_t x368 = 879965685LLU;
	uint64_t t61 = 178569748240072LLU;

	t61 = (((x365*x366)|x367)+x368);

	if (t61 != 879965683LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x373 = INT8_MIN;
	static int16_t x374 = 6619;
	static volatile uint8_t x375 = 0U;
	int8_t x376 = INT8_MIN;
	static volatile int32_t t62 = 314;

	t62 = (((x373*x374)|x375)+x376);

	if (t62 != -847360) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x377 = -1;
	int8_t x378 = -1;
	int64_t x380 = INT64_MIN;

	t63 = (((x377*x378)|x379)+x380);

	if (t63 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x381 = INT64_MIN;
	int16_t x382 = 0;
	static int16_t x383 = INT16_MIN;
	static int64_t x384 = -227619076299906568LL;
	int64_t t64 = -26LL;

	t64 = (((x381*x382)|x383)+x384);

	if (t64 != -227619076299939336LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x389 = 78LLU;
	int64_t x390 = INT64_MIN;
	int16_t x391 = INT16_MIN;
	int32_t x392 = -1;
	uint64_t t65 = 3498566180955902697LLU;

	t65 = (((x389*x390)|x391)+x392);

	if (t65 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x393 = 0;
	int8_t x394 = -62;
	uint8_t x396 = 10U;

	t66 = (((x393*x394)|x395)+x396);

	if (t66 != 10) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x401 = INT8_MIN;
	static volatile uint64_t x402 = 20898846161575691LLU;
	volatile int8_t x403 = -1;
	static volatile int32_t x404 = 2342418;
	volatile uint64_t t67 = 3LLU;

	t67 = (((x401*x402)|x403)+x404);

	if (t67 != 2342417LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x405 = UINT64_MAX;
	uint32_t x406 = 28896015U;
	int8_t x407 = -47;
	static volatile int16_t x408 = -1283;
	uint64_t t68 = 57299251LLU;

	t68 = (((x405*x406)|x407)+x408);

	if (t68 != 18446744073709550318LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x409 = 969U;
	static uint32_t x410 = UINT32_MAX;
	volatile uint32_t x411 = 10U;
	uint32_t x412 = 407U;
	volatile uint32_t t69 = 14394327U;

	t69 = (((x409*x410)|x411)+x412);

	if (t69 != 4294966742U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x413 = 193096442815LLU;
	int64_t x414 = INT64_MAX;
	int16_t x416 = -1;
	static volatile uint64_t t70 = 7116458871480779788LLU;

	t70 = (((x413*x414)|x415)+x416);

	if (t70 != 9223371843758333054LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x417 = -1LL;
	int16_t x418 = INT16_MAX;
	static int32_t x419 = INT32_MIN;
	uint64_t t71 = 2808LLU;

	t71 = (((x417*x418)|x419)+x420);

	if (t71 != 7139477LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x425 = UINT64_MAX;
	static volatile int32_t x426 = 3;
	int64_t x427 = INT64_MIN;
	int16_t x428 = INT16_MIN;

	t72 = (((x425*x426)|x427)+x428);

	if (t72 != 18446744073709518845LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x429 = 5LL;
	uint32_t x430 = 58332U;
	static int16_t x431 = INT16_MAX;
	int32_t x432 = INT32_MIN;
	static volatile int64_t t73 = -42LL;

	t73 = (((x429*x430)|x431)+x432);

	if (t73 != -2147188737LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x437 = 1U;
	static int16_t x438 = 2126;
	uint64_t x439 = 115551455843912298LLU;
	static int16_t x440 = -214;
	uint64_t t74 = 3388596708566522859LLU;

	t74 = (((x437*x438)|x439)+x440);

	if (t74 != 115551455843912088LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x441 = 4;
	static int8_t x442 = 0;
	int32_t x443 = 753;
	int32_t t75 = 1019368331;

	t75 = (((x441*x442)|x443)+x444);

	if (t75 != -2147482895) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x445 = INT8_MIN;
	uint8_t x446 = 1U;
	int16_t x447 = -1;
	static int32_t x448 = INT32_MAX;
	int32_t t76 = -336;

	t76 = (((x445*x446)|x447)+x448);

	if (t76 != 2147483646) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x449 = -28153;
	volatile int16_t x450 = INT16_MAX;
	int64_t x451 = -4388437630980359560LL;
	int64_t t77 = -27236181984547LL;

	t77 = (((x449*x450)|x451)+x452);

	if (t77 != -17692233LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x457 = INT16_MAX;
	int16_t x459 = INT16_MAX;
	uint64_t x460 = UINT64_MAX;
	static uint64_t t78 = 108678LLU;

	t78 = (((x457*x458)|x459)+x460);

	if (t78 != 458750LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x461 = -485630LL;
	uint16_t x462 = UINT16_MAX;
	uint32_t x463 = 2896099U;
	int64_t x464 = -1LL;

	t79 = (((x461*x462)|x463)+x464);

	if (t79 != -31823398658LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x466 = UINT64_MAX;
	uint8_t x467 = UINT8_MAX;

	t80 = (((x465*x466)|x467)+x468);

	if (t80 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x474 = -6;
	volatile uint32_t x476 = 54085U;
	volatile int64_t t81 = 3641560LL;

	t81 = (((x473*x474)|x475)+x476);

	if (t81 != 53963LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x493 = 5U;
	static int16_t x494 = -1;
	uint32_t x495 = 64761264U;
	static int8_t x496 = 1;
	volatile uint32_t t82 = 31312U;

	t82 = (((x493*x494)|x495)+x496);

	if (t82 != 4294967292U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x497 = INT8_MIN;
	volatile int16_t x498 = INT16_MIN;
	int64_t x499 = INT64_MAX;
	int64_t t83 = 35LL;

	t83 = (((x497*x498)|x499)+x500);

	if (t83 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x506 = -853;
	int64_t x507 = -28689LL;
	int64_t x508 = -2644228LL;

	t84 = (((x505*x506)|x507)+x508);

	if (t84 != -2672901LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x509 = 128480U;
	int32_t x510 = -1;
	uint16_t x511 = UINT16_MAX;
	int8_t x512 = INT8_MAX;
	static uint32_t t85 = 4936213U;

	t85 = (((x509*x510)|x511)+x512);

	if (t85 != 4294901886U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x517 = -16LL;
	uint8_t x518 = UINT8_MAX;
	volatile int8_t x519 = -1;
	uint8_t x520 = UINT8_MAX;

	t86 = (((x517*x518)|x519)+x520);

	if (t86 != 254LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x522 = INT16_MIN;
	static int8_t x523 = INT8_MAX;
	int16_t x524 = INT16_MAX;
	volatile uint32_t t87 = 65U;

	t87 = (((x521*x522)|x523)+x524);

	if (t87 != 3151921278U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x525 = INT16_MIN;
	static volatile int16_t x526 = INT16_MIN;
	static volatile int16_t x527 = 1829;
	int8_t x528 = -1;
	int32_t t88 = 1845;

	t88 = (((x525*x526)|x527)+x528);

	if (t88 != 1073743652) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x529 = 83U;
	int8_t x531 = INT8_MIN;

	t89 = (((x529*x530)|x531)+x532);

	if (t89 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x545 = -208;
	volatile int64_t x547 = INT64_MIN;
	int8_t x548 = -1;
	volatile int64_t t90 = -8097383308LL;

	t90 = (((x545*x546)|x547)+x548);

	if (t90 != -13631281LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x549 = 6U;
	static uint32_t x551 = 87717078U;
	int16_t x552 = INT16_MIN;

	t91 = (((x549*x550)|x551)+x552);

	if (t91 != 524188894U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x553 = -1;
	int16_t x554 = -1;
	uint32_t x555 = UINT32_MAX;
	int64_t x556 = INT64_MIN;
	volatile int64_t t92 = 302532759539874LL;

	t92 = (((x553*x554)|x555)+x556);

	if (t92 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x557 = 103U;
	volatile uint16_t x558 = UINT16_MAX;
	uint8_t x559 = UINT8_MAX;
	int16_t x560 = -1;
	volatile uint32_t t93 = 2U;

	t93 = (((x557*x558)|x559)+x560);

	if (t93 != 6750206U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x565 = -7;
	int64_t x567 = 67182374785LL;
	int32_t x568 = INT32_MIN;
	int64_t t94 = -2432266092LL;

	t94 = (((x565*x566)|x567)+x568);

	if (t94 != 65034891155LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x571 = -1;
	uint8_t x572 = 0U;
	int32_t t95 = -2;

	t95 = (((x569*x570)|x571)+x572);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x577 = INT8_MIN;
	int64_t x578 = 81019LL;
	static uint16_t x579 = UINT16_MAX;
	int32_t x580 = INT32_MIN;
	int64_t t96 = -10605LL;

	t96 = (((x577*x578)|x579)+x580);

	if (t96 != -2157838337LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x581 = INT32_MIN;
	static volatile int64_t x582 = -1LL;
	int32_t x583 = 0;
	uint8_t x584 = 0U;

	t97 = (((x581*x582)|x583)+x584);

	if (t97 != 2147483648LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x589 = 49;
	uint64_t x590 = 395783400327436LLU;
	int64_t x591 = INT64_MIN;
	int8_t x592 = 4;
	volatile uint64_t t98 = 214125096775LLU;

	t98 = (((x589*x590)|x591)+x592);

	if (t98 != 9242765423470820176LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x593 = INT16_MIN;
	int32_t x594 = -1;
	static int32_t x595 = 181512;
	volatile int16_t x596 = 1562;
	static volatile int32_t t99 = -78692;

	t99 = (((x593*x594)|x595)+x596);

	if (t99 != 183074) { NG(); } else { ; }
	
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

