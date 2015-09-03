#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
int16_t x4 = -6366;
volatile int32_t x12 = -1;
int8_t x13 = 12;
static int32_t x25 = INT32_MAX;
int64_t x27 = INT64_MIN;
volatile int16_t x28 = -1;
int16_t x29 = 3;
uint64_t x41 = UINT64_MAX;
int16_t x45 = -1;
int32_t x48 = INT32_MIN;
uint8_t x53 = 8U;
static uint8_t x60 = UINT8_MAX;
volatile int16_t x61 = INT16_MIN;
int8_t x62 = INT8_MIN;
volatile int32_t t14 = -27;
volatile uint64_t t15 = 431170LLU;
volatile int32_t x85 = INT32_MIN;
uint64_t x86 = 389866404684083LLU;
static int8_t x87 = INT8_MIN;
int16_t x90 = INT16_MIN;
volatile uint16_t x106 = 1874U;
static int64_t x108 = INT64_MIN;
uint64_t x116 = 886944307LLU;
int64_t x124 = -1LL;
int16_t x127 = INT16_MAX;
uint32_t t26 = 1915327U;
int16_t x129 = INT16_MIN;
uint32_t x135 = 31084415U;
int16_t x141 = INT16_MAX;
int8_t x143 = 1;
volatile uint16_t x153 = 30U;
int16_t x159 = INT16_MIN;
static uint64_t x164 = UINT64_MAX;
int64_t t33 = -1407624051835080043LL;
static int16_t x171 = -1;
int32_t x176 = -15343;
volatile int8_t x189 = INT8_MAX;
uint32_t x191 = 14657059U;
int16_t x194 = -1;
int32_t x205 = -1;
static int16_t x207 = -1;
int16_t x210 = -1;
uint32_t t42 = 7569351U;
volatile uint8_t x222 = 2U;
static volatile uint64_t t45 = 11967168LLU;
int32_t x229 = -1;
uint8_t x230 = UINT8_MAX;
static uint16_t x231 = 7U;
int64_t x233 = -5788107896738LL;
int32_t x234 = -1;
volatile int16_t x237 = INT16_MIN;
int8_t x238 = INT8_MIN;
volatile int32_t t48 = -1;
int32_t x245 = -3884;
uint32_t x246 = 161087U;
uint64_t t50 = 297LLU;
static uint64_t x257 = UINT64_MAX;
static volatile int32_t x259 = 668383844;
uint32_t x264 = UINT32_MAX;
static int16_t x272 = INT16_MAX;
volatile int64_t x279 = -14458567432229040LL;
uint8_t x280 = 4U;
static int8_t x292 = -1;
uint64_t x293 = 6817322LLU;
volatile uint8_t x298 = UINT8_MAX;
volatile int16_t x299 = 357;
uint64_t x300 = UINT64_MAX;
uint8_t x309 = UINT8_MAX;
int8_t x310 = 0;
int8_t x320 = -1;
int16_t x321 = INT16_MAX;
uint32_t x324 = 125051U;
uint32_t x326 = 324070347U;
int32_t x331 = -15641;
int8_t x337 = 1;
volatile uint8_t x340 = 1U;
int32_t t67 = -39225;
int64_t x358 = -7539565LL;
int16_t x364 = 15925;
volatile int32_t x370 = -1;
int16_t x382 = INT16_MIN;
int64_t t73 = -1630687031LL;
uint64_t x390 = UINT64_MAX;
uint64_t t74 = 1279320020004LLU;
static int64_t t75 = 1LL;
volatile int64_t t76 = -24LL;
static uint64_t x414 = 890LLU;
static uint64_t x421 = 37719325110008LLU;
int8_t x422 = INT8_MAX;
static uint64_t x424 = 1763582727472951LLU;
static volatile int32_t t80 = 361;
int64_t x438 = -1LL;
volatile uint32_t t83 = 189U;
static uint16_t x459 = 10U;
static volatile int32_t t88 = -11794;
volatile uint32_t t90 = 7947U;
uint64_t x495 = 0LLU;
int64_t t91 = 21398530691LL;
uint32_t x514 = 98U;
volatile int64_t x515 = 127LL;
volatile int32_t x519 = 277;
uint32_t x520 = 12749U;
volatile int32_t t94 = 343249714;
static int32_t x523 = -4;
static int8_t x528 = INT8_MIN;


void f0(void) {
	int32_t x1 = -854;
	volatile uint32_t x3 = 6228046U;
	volatile uint64_t t0 = 351509893849LLU;

	t0 = ((x1*x2)^(x3<=x4));

	if (t0 != 855LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	uint16_t x6 = 645U;
	volatile int8_t x7 = INT8_MIN;
	volatile uint64_t x8 = UINT64_MAX;
	int32_t t1 = -181941343;

	t1 = ((x5*x6)^(x7<=x8));

	if (t1 != 21134714) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = 0;
	volatile uint32_t x10 = 79U;
	uint64_t x11 = UINT64_MAX;
	static volatile uint32_t t2 = 119145600U;

	t2 = ((x9*x10)^(x11<=x12));

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x14 = 430173067692658084LL;
	int16_t x15 = INT16_MAX;
	static uint32_t x16 = 13410U;
	volatile int64_t t3 = -5076544339753320LL;

	t3 = ((x13*x14)^(x15<=x16));

	if (t3 != 5162076812311897008LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	int64_t x18 = -2296LL;
	int16_t x19 = INT16_MIN;
	int32_t x20 = INT32_MIN;
	int64_t t4 = 16260033LL;

	t4 = ((x17*x18)^(x19<=x20));

	if (t4 != -150468360LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = -1;
	int32_t t5 = INT32_MIN;

	t5 = ((x25*x26)^(x27<=x28));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x30 = -7;
	volatile uint8_t x31 = 24U;
	int8_t x32 = -21;
	volatile int32_t t6 = -3656;

	t6 = ((x29*x30)^(x31<=x32));

	if (t6 != -21) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x37 = 9956389653LLU;
	static uint16_t x38 = 6961U;
	volatile int16_t x39 = INT16_MIN;
	int64_t x40 = INT64_MIN;
	uint64_t t7 = 2294114LLU;

	t7 = ((x37*x38)^(x39<=x40));

	if (t7 != 69306428374533LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x42 = 1321603U;
	volatile uint8_t x43 = UINT8_MAX;
	int16_t x44 = -1;
	static volatile uint64_t t8 = 24LLU;

	t8 = ((x41*x42)^(x43<=x44));

	if (t8 != 18446744073708230013LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x46 = 126U;
	uint64_t x47 = 564804LLU;
	volatile int32_t t9 = 2324070;

	t9 = ((x45*x46)^(x47<=x48));

	if (t9 != -125) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x54 = 45U;
	uint8_t x55 = UINT8_MAX;
	volatile uint32_t x56 = 1654U;
	volatile int32_t t10 = 3766127;

	t10 = ((x53*x54)^(x55<=x56));

	if (t10 != 361) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = 63U;
	int8_t x58 = -43;
	uint32_t x59 = 40084533U;
	volatile uint32_t t11 = 19U;

	t11 = ((x57*x58)^(x59<=x60));

	if (t11 != 4294964587U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x63 = 0U;
	static int32_t x64 = 2850;
	int32_t t12 = -7983733;

	t12 = ((x61*x62)^(x63<=x64));

	if (t12 != 4194305) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = 108U;
	volatile int16_t x66 = INT16_MIN;
	int64_t x67 = INT64_MIN;
	static uint64_t x68 = UINT64_MAX;
	static int32_t t13 = -1708;

	t13 = ((x65*x66)^(x67<=x68));

	if (t13 != -3538943) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = -1;
	int32_t x70 = -1;
	int8_t x71 = INT8_MIN;
	uint8_t x72 = 1U;

	t14 = ((x69*x70)^(x71<=x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = UINT64_MAX;
	int64_t x74 = -1LL;
	uint8_t x75 = UINT8_MAX;
	int8_t x76 = INT8_MAX;

	t15 = ((x73*x74)^(x75<=x76));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = INT32_MIN;
	uint64_t x78 = UINT64_MAX;
	static int64_t x79 = -932163965234423LL;
	int8_t x80 = -2;
	static uint64_t t16 = 3432049352104741LLU;

	t16 = ((x77*x78)^(x79<=x80));

	if (t16 != 2147483649LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x81 = UINT32_MAX;
	volatile uint8_t x82 = 45U;
	int8_t x83 = -1;
	static int64_t x84 = INT64_MIN;
	uint32_t t17 = 54U;

	t17 = ((x81*x82)^(x83<=x84));

	if (t17 != 4294967251U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x88 = INT64_MIN;
	uint64_t t18 = 8780453974046LLU;

	t18 = ((x85*x86)^(x87<=x88));

	if (t18 != 10644309836570820608LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x89 = INT8_MAX;
	static int64_t x91 = INT64_MIN;
	int64_t x92 = INT64_MIN;
	static int32_t t19 = 3654304;

	t19 = ((x89*x90)^(x91<=x92));

	if (t19 != -4161535) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = -1;
	volatile int64_t x102 = -1LL;
	int8_t x103 = INT8_MIN;
	int16_t x104 = -1;
	static int64_t t20 = 331347160202LL;

	t20 = ((x101*x102)^(x103<=x104));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x105 = -1;
	static int32_t x107 = INT32_MAX;
	volatile int32_t t21 = 10637;

	t21 = ((x105*x106)^(x107<=x108));

	if (t21 != -1874) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = -1;
	static int64_t x110 = 48191950630LL;
	static int8_t x111 = INT8_MIN;
	uint64_t x112 = UINT64_MAX;
	volatile int64_t t22 = 449075090270LL;

	t22 = ((x109*x110)^(x111<=x112));

	if (t22 != -48191950629LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x113 = INT64_MIN;
	uint64_t x114 = 4949196703LLU;
	volatile int8_t x115 = 11;
	volatile uint64_t t23 = 923159LLU;

	t23 = ((x113*x114)^(x115<=x116));

	if (t23 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x117 = 423266387217361LLU;
	int32_t x118 = INT32_MAX;
	static uint32_t x119 = 74547848U;
	uint64_t x120 = UINT64_MAX;
	uint64_t t24 = 755180LLU;

	t24 = ((x117*x118)^(x119<=x120));

	if (t24 != 12777386088135668782LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x121 = INT8_MIN;
	static uint8_t x122 = 56U;
	static volatile int16_t x123 = 0;
	static volatile int32_t t25 = 44490;

	t25 = ((x121*x122)^(x123<=x124));

	if (t25 != -7168) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x125 = 31444U;
	int16_t x126 = -1;
	int32_t x128 = INT32_MAX;

	t26 = ((x125*x126)^(x127<=x128));

	if (t26 != 4294935853U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x130 = INT8_MAX;
	uint32_t x131 = 7U;
	static int32_t x132 = -525572047;
	static int32_t t27 = 8097832;

	t27 = ((x129*x130)^(x131<=x132));

	if (t27 != -4161535) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x133 = INT16_MIN;
	volatile int32_t x134 = 1;
	uint32_t x136 = UINT32_MAX;
	volatile int32_t t28 = 1013245607;

	t28 = ((x133*x134)^(x135<=x136));

	if (t28 != -32767) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x142 = -1;
	int64_t x144 = INT64_MIN;
	volatile int32_t t29 = -3858156;

	t29 = ((x141*x142)^(x143<=x144));

	if (t29 != -32767) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x149 = INT8_MIN;
	int16_t x150 = -1;
	volatile uint64_t x151 = UINT64_MAX;
	uint64_t x152 = UINT64_MAX;
	volatile int32_t t30 = -230845485;

	t30 = ((x149*x150)^(x151<=x152));

	if (t30 != 129) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x154 = 135255833056914295LL;
	uint64_t x155 = UINT64_MAX;
	int8_t x156 = 1;
	int64_t t31 = 7999346186821471LL;

	t31 = ((x153*x154)^(x155<=x156));

	if (t31 != 4057674991707428850LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x157 = 551U;
	volatile uint64_t x158 = UINT64_MAX;
	uint32_t x160 = 131U;
	volatile uint64_t t32 = 747848LLU;

	t32 = ((x157*x158)^(x159<=x160));

	if (t32 != 18446744073709551065LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x161 = 31349U;
	int64_t x162 = -1LL;
	static volatile uint8_t x163 = 2U;

	t33 = ((x161*x162)^(x163<=x164));

	if (t33 != -31350LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x169 = UINT32_MAX;
	static int64_t x170 = -1LL;
	uint16_t x172 = 26U;
	volatile int64_t t34 = -8857023093576114LL;

	t34 = ((x169*x170)^(x171<=x172));

	if (t34 != -4294967296LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x173 = 0;
	volatile int8_t x174 = 0;
	uint64_t x175 = 364LLU;
	int32_t t35 = -881214;

	t35 = ((x173*x174)^(x175<=x176));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x185 = UINT16_MAX;
	volatile int16_t x186 = -7;
	volatile uint16_t x187 = 13U;
	int16_t x188 = INT16_MIN;
	volatile int32_t t36 = 226701453;

	t36 = ((x185*x186)^(x187<=x188));

	if (t36 != -458745) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x190 = INT8_MAX;
	int32_t x192 = INT32_MIN;
	static int32_t t37 = 165;

	t37 = ((x189*x190)^(x191<=x192));

	if (t37 != 16128) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x193 = 160665761;
	volatile int16_t x195 = 9;
	int64_t x196 = -320138LL;
	int32_t t38 = -51012547;

	t38 = ((x193*x194)^(x195<=x196));

	if (t38 != -160665761) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x197 = -26;
	volatile uint8_t x198 = 43U;
	int32_t x199 = -14;
	int16_t x200 = INT16_MAX;
	volatile int32_t t39 = -83;

	t39 = ((x197*x198)^(x199<=x200));

	if (t39 != -1117) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x201 = 11057U;
	int16_t x202 = -1;
	int64_t x203 = INT64_MIN;
	volatile int8_t x204 = INT8_MIN;
	volatile int32_t t40 = -74994;

	t40 = ((x201*x202)^(x203<=x204));

	if (t40 != -11058) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x206 = 1669U;
	volatile int64_t x208 = INT64_MIN;
	uint32_t t41 = 9264U;

	t41 = ((x205*x206)^(x207<=x208));

	if (t41 != 4294965627U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x209 = UINT32_MAX;
	int8_t x211 = -19;
	int16_t x212 = INT16_MIN;

	t42 = ((x209*x210)^(x211<=x212));

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x217 = 471U;
	uint32_t x218 = UINT32_MAX;
	int16_t x219 = -996;
	volatile uint64_t x220 = 7209362063586LLU;
	volatile uint32_t t43 = 3U;

	t43 = ((x217*x218)^(x219<=x220));

	if (t43 != 4294966825U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x221 = 1U;
	static int64_t x223 = INT64_MAX;
	static int64_t x224 = INT64_MIN;
	static volatile int32_t t44 = -7344395;

	t44 = ((x221*x222)^(x223<=x224));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x225 = 5576663552152LLU;
	volatile int16_t x226 = 0;
	int8_t x227 = INT8_MAX;
	volatile int64_t x228 = 27LL;

	t45 = ((x225*x226)^(x227<=x228));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x232 = -1LL;
	int32_t t46 = -3;

	t46 = ((x229*x230)^(x231<=x232));

	if (t46 != -255) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x235 = 14U;
	uint16_t x236 = UINT16_MAX;
	volatile int64_t t47 = 211LL;

	t47 = ((x233*x234)^(x235<=x236));

	if (t47 != 5788107896739LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x239 = UINT8_MAX;
	int64_t x240 = -20641512753395576LL;

	t48 = ((x237*x238)^(x239<=x240));

	if (t48 != 4194304) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x247 = INT8_MAX;
	int8_t x248 = 0;
	static uint32_t t49 = 144049U;

	t49 = ((x245*x246)^(x247<=x248));

	if (t49 != 3669305388U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x253 = INT64_MIN;
	uint64_t x254 = 2113506592228453LLU;
	int8_t x255 = INT8_MAX;
	int64_t x256 = INT64_MIN;

	t50 = ((x253*x254)^(x255<=x256));

	if (t50 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x258 = INT8_MAX;
	uint16_t x260 = UINT16_MAX;
	volatile uint64_t t51 = 0LLU;

	t51 = ((x257*x258)^(x259<=x260));

	if (t51 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x261 = INT16_MAX;
	int16_t x262 = INT16_MIN;
	static volatile uint64_t x263 = UINT64_MAX;
	static volatile int32_t t52 = -800;

	t52 = ((x261*x262)^(x263<=x264));

	if (t52 != -1073709056) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x269 = 0U;
	uint16_t x270 = 14450U;
	uint16_t x271 = 9109U;
	volatile int32_t t53 = 898983784;

	t53 = ((x269*x270)^(x271<=x272));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x277 = -2724139736LL;
	uint64_t x278 = UINT64_MAX;
	uint64_t t54 = 78370749324LLU;

	t54 = ((x277*x278)^(x279<=x280));

	if (t54 != 2724139737LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x285 = 4037392075865278259LLU;
	volatile int16_t x286 = INT16_MIN;
	volatile int16_t x287 = -1;
	uint16_t x288 = UINT16_MAX;
	uint64_t t55 = 507891647082806862LLU;

	t55 = ((x285*x286)^(x287<=x288));

	if (t55 != 2784954691466199041LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x289 = 1808980U;
	int32_t x290 = INT32_MAX;
	volatile int16_t x291 = -1;
	uint32_t t56 = 4U;

	t56 = ((x289*x290)^(x291<=x292));

	if (t56 != 4293158317U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x294 = UINT16_MAX;
	int64_t x295 = INT64_MIN;
	int32_t x296 = -178688841;
	static uint64_t t57 = 399209277LLU;

	t57 = ((x293*x294)^(x295<=x296));

	if (t57 != 446773197271LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x297 = -103605LL;
	volatile int64_t t58 = -3264973947094958890LL;

	t58 = ((x297*x298)^(x299<=x300));

	if (t58 != -26419276LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x301 = INT8_MAX;
	volatile int16_t x302 = INT16_MIN;
	volatile uint64_t x303 = UINT64_MAX;
	uint32_t x304 = UINT32_MAX;
	volatile int32_t t59 = -30381123;

	t59 = ((x301*x302)^(x303<=x304));

	if (t59 != -4161536) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x305 = 1;
	volatile int8_t x306 = INT8_MAX;
	volatile uint16_t x307 = UINT16_MAX;
	static volatile int32_t x308 = INT32_MAX;
	int32_t t60 = 46934033;

	t60 = ((x305*x306)^(x307<=x308));

	if (t60 != 126) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x311 = 979330LLU;
	int16_t x312 = -1;
	int32_t t61 = -1644;

	t61 = ((x309*x310)^(x311<=x312));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x317 = -1;
	int32_t x318 = 8;
	static uint64_t x319 = UINT64_MAX;
	int32_t t62 = 4983664;

	t62 = ((x317*x318)^(x319<=x320));

	if (t62 != -7) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x322 = INT8_MIN;
	static int32_t x323 = INT32_MIN;
	static int32_t t63 = 110557;

	t63 = ((x321*x322)^(x323<=x324));

	if (t63 != -4194176) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x325 = 155706476;
	int16_t x327 = INT16_MIN;
	int16_t x328 = -10833;
	static volatile uint32_t t64 = 933883U;

	t64 = ((x325*x326)^(x327<=x328));

	if (t64 != 3228648869U) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x329 = -1;
	int16_t x330 = INT16_MIN;
	int64_t x332 = INT64_MAX;
	volatile int32_t t65 = 1003107548;

	t65 = ((x329*x330)^(x331<=x332));

	if (t65 != 32769) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x338 = UINT32_MAX;
	int32_t x339 = -1;
	uint32_t t66 = 60U;

	t66 = ((x337*x338)^(x339<=x340));

	if (t66 != 4294967294U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x349 = 179U;
	uint8_t x350 = 2U;
	int8_t x351 = INT8_MIN;
	int32_t x352 = INT32_MAX;

	t67 = ((x349*x350)^(x351<=x352));

	if (t67 != 359) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x353 = INT16_MIN;
	volatile uint16_t x354 = UINT16_MAX;
	volatile int16_t x355 = 0;
	int16_t x356 = INT16_MIN;
	int32_t t68 = -653;

	t68 = ((x353*x354)^(x355<=x356));

	if (t68 != -2147450880) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x357 = INT8_MAX;
	volatile int64_t x359 = 189LL;
	uint64_t x360 = 64363LLU;
	int64_t t69 = 480942142207717287LL;

	t69 = ((x357*x358)^(x359<=x360));

	if (t69 != -957524756LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x361 = UINT64_MAX;
	int64_t x362 = INT64_MIN;
	static uint16_t x363 = 86U;
	static uint64_t t70 = 110932511214LLU;

	t70 = ((x361*x362)^(x363<=x364));

	if (t70 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x369 = -9;
	int8_t x371 = -1;
	int32_t x372 = -18236811;
	static volatile int32_t t71 = 12;

	t71 = ((x369*x370)^(x371<=x372));

	if (t71 != 9) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x381 = -196576302886567LL;
	uint16_t x383 = UINT16_MAX;
	int64_t x384 = 3087159825350LL;
	volatile int64_t t72 = -8158810LL;

	t72 = ((x381*x382)^(x383<=x384));

	if (t72 != 6441412292987027457LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x385 = -1LL;
	int32_t x386 = INT32_MIN;
	static uint16_t x387 = 0U;
	uint32_t x388 = UINT32_MAX;

	t73 = ((x385*x386)^(x387<=x388));

	if (t73 != 2147483649LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x389 = INT64_MAX;
	uint16_t x391 = 694U;
	int32_t x392 = 32108012;

	t74 = ((x389*x390)^(x391<=x392));

	if (t74 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x397 = -1;
	int64_t x398 = 17981811695LL;
	volatile int64_t x399 = INT64_MIN;
	int32_t x400 = -1;

	t75 = ((x397*x398)^(x399<=x400));

	if (t75 != -17981811696LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x401 = -1;
	int64_t x402 = -1LL;
	volatile uint32_t x403 = UINT32_MAX;
	int32_t x404 = INT32_MIN;

	t76 = ((x401*x402)^(x403<=x404));

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x413 = UINT16_MAX;
	static int16_t x415 = -1;
	uint16_t x416 = UINT16_MAX;
	volatile uint64_t t77 = 62LLU;

	t77 = ((x413*x414)^(x415<=x416));

	if (t77 != 58326151LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x423 = -1;
	uint64_t t78 = 202523221941148LLU;

	t78 = ((x421*x422)^(x423<=x424));

	if (t78 != 4790354288971016LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x425 = 25443;
	int64_t x426 = 31189349LL;
	uint8_t x427 = 0U;
	int16_t x428 = INT16_MAX;
	int64_t t79 = -530092256329350LL;

	t79 = ((x425*x426)^(x427<=x428));

	if (t79 != 793550606606LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x433 = 1;
	int16_t x434 = 1168;
	static volatile int64_t x435 = INT64_MAX;
	static int32_t x436 = -10226582;

	t80 = ((x433*x434)^(x435<=x436));

	if (t80 != 1168) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x437 = 3;
	static volatile uint32_t x439 = 24436159U;
	static volatile int16_t x440 = -1;
	volatile int64_t t81 = -7254809478LL;

	t81 = ((x437*x438)^(x439<=x440));

	if (t81 != -4LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x445 = -188175718LL;
	int8_t x446 = INT8_MIN;
	int8_t x447 = 0;
	uint16_t x448 = 1691U;
	volatile int64_t t82 = -4523LL;

	t82 = ((x445*x446)^(x447<=x448));

	if (t82 != 24086491905LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x449 = 1;
	static uint32_t x450 = 935131892U;
	uint64_t x451 = UINT64_MAX;
	int8_t x452 = INT8_MIN;

	t83 = ((x449*x450)^(x451<=x452));

	if (t83 != 935131892U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x457 = -930471;
	static uint64_t x458 = 1LLU;
	int16_t x460 = INT16_MAX;
	uint64_t t84 = 392962935466347575LLU;

	t84 = ((x457*x458)^(x459<=x460));

	if (t84 != 18446744073708621144LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x461 = 13070002923LLU;
	int8_t x462 = -2;
	uint8_t x463 = 0U;
	static int8_t x464 = -1;
	volatile uint64_t t85 = 3054092531643695770LLU;

	t85 = ((x461*x462)^(x463<=x464));

	if (t85 != 18446744047569545770LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x469 = INT16_MIN;
	volatile uint64_t x470 = 24581326LLU;
	int32_t x471 = INT32_MAX;
	volatile uint16_t x472 = 30U;
	static uint64_t t86 = 10645165815LLU;

	t86 = ((x469*x470)^(x471<=x472));

	if (t86 != 18446743268228661248LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x473 = 44;
	volatile int16_t x474 = -1;
	int32_t x475 = 783;
	int8_t x476 = INT8_MIN;
	volatile int32_t t87 = -982804461;

	t87 = ((x473*x474)^(x475<=x476));

	if (t87 != -44) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x477 = INT8_MAX;
	static uint8_t x478 = UINT8_MAX;
	int64_t x479 = INT64_MAX;
	int32_t x480 = 68150969;

	t88 = ((x477*x478)^(x479<=x480));

	if (t88 != 32385) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x485 = -1007;
	static int8_t x486 = INT8_MAX;
	static int32_t x487 = INT32_MIN;
	static uint64_t x488 = 25668141988949LLU;
	volatile int32_t t89 = 1539580;

	t89 = ((x485*x486)^(x487<=x488));

	if (t89 != -127889) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x489 = -1;
	uint32_t x490 = 14803U;
	uint32_t x491 = UINT32_MAX;
	int64_t x492 = INT64_MIN;

	t90 = ((x489*x490)^(x491<=x492));

	if (t90 != 4294952493U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x493 = 24U;
	static int64_t x494 = 23LL;
	uint64_t x496 = 977096319LLU;

	t91 = ((x493*x494)^(x495<=x496));

	if (t91 != 553LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x497 = INT16_MAX;
	volatile int8_t x498 = -1;
	static uint32_t x499 = 722118U;
	uint16_t x500 = 54U;
	int32_t t92 = -65152912;

	t92 = ((x497*x498)^(x499<=x500));

	if (t92 != -32767) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x513 = -1;
	uint64_t x516 = 200786502603LLU;
	static uint32_t t93 = 58224U;

	t93 = ((x513*x514)^(x515<=x516));

	if (t93 != 4294967199U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x517 = INT8_MIN;
	volatile int8_t x518 = INT8_MAX;

	t94 = ((x517*x518)^(x519<=x520));

	if (t94 != -16255) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x521 = -1;
	uint8_t x522 = 7U;
	int16_t x524 = INT16_MIN;
	volatile int32_t t95 = -7;

	t95 = ((x521*x522)^(x523<=x524));

	if (t95 != -7) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x525 = 12U;
	static uint8_t x526 = 99U;
	volatile int32_t x527 = -47;
	volatile int32_t t96 = 5441119;

	t96 = ((x525*x526)^(x527<=x528));

	if (t96 != 1188) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x529 = INT8_MIN;
	int64_t x530 = -1LL;
	int64_t x531 = INT64_MAX;
	volatile uint16_t x532 = 20487U;
	int64_t t97 = 3372LL;

	t97 = ((x529*x530)^(x531<=x532));

	if (t97 != 128LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x533 = 38;
	static int16_t x534 = INT16_MAX;
	static volatile uint8_t x535 = 2U;
	volatile uint64_t x536 = UINT64_MAX;
	volatile int32_t t98 = 726368;

	t98 = ((x533*x534)^(x535<=x536));

	if (t98 != 1245147) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x545 = 459509844561178332LLU;
	int64_t x546 = -115LL;
	static int8_t x547 = -1;
	int16_t x548 = -1;
	volatile uint64_t t99 = 139057419153LLU;

	t99 = ((x545*x546)^(x547<=x548));

	if (t99 != 2496600096593146669LLU) { NG(); } else { ; }
	
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

