#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t2 = 2027;
static uint8_t x15 = 1U;
volatile int32_t t4 = -340285394;
static uint32_t x25 = 243400U;
volatile uint8_t x34 = 6U;
static uint64_t x35 = UINT64_MAX;
int32_t x36 = -251;
int32_t x37 = -613988069;
int32_t t7 = -249246732;
uint16_t x45 = 115U;
volatile uint32_t x47 = UINT32_MAX;
static volatile uint16_t x49 = UINT16_MAX;
volatile int64_t x55 = INT64_MIN;
int16_t x62 = INT16_MAX;
static int32_t t11 = 66867298;
uint16_t x68 = 5575U;
static uint16_t x73 = 12U;
int8_t x75 = -1;
int8_t x80 = INT8_MIN;
int32_t x87 = INT32_MIN;
static volatile uint8_t x93 = 2U;
static volatile int32_t t18 = -6951987;
volatile int32_t t19 = 7;
uint8_t x108 = UINT8_MAX;
volatile int32_t t21 = 352;
int32_t x121 = INT32_MIN;
int64_t x123 = -4287205528722783542LL;
volatile int16_t x131 = -3;
static int32_t t23 = 0;
uint16_t x138 = UINT16_MAX;
int64_t x142 = 118966315995LL;
volatile uint16_t x143 = 2U;
volatile int32_t t26 = -633122519;
int32_t x150 = INT32_MAX;
int64_t x152 = -171025900705657LL;
volatile int32_t t28 = 111033030;
static int8_t x164 = INT8_MIN;
volatile int32_t t30 = -2;
volatile int32_t x170 = 95;
uint32_t x172 = UINT32_MAX;
int32_t t31 = 22384211;
volatile int16_t x174 = INT16_MAX;
uint16_t x177 = UINT16_MAX;
static volatile uint32_t x179 = 104U;
int32_t t34 = 1;
volatile int8_t x190 = -1;
int8_t x197 = -46;
static uint32_t x204 = 352632U;
static volatile int8_t x217 = INT8_MIN;
int32_t t41 = 117;
volatile uint16_t x226 = UINT16_MAX;
uint32_t x229 = 516302397U;
int16_t x244 = INT16_MIN;
int32_t x253 = -24;
int8_t x267 = -5;
static uint8_t x276 = 20U;
int16_t x285 = -6;
int8_t x290 = INT8_MIN;
int32_t x301 = INT32_MAX;
int8_t x303 = -1;
int32_t t56 = -40119107;
static volatile int32_t t57 = 51;
int64_t x323 = -43556380946617664LL;
volatile int8_t x330 = 29;
int16_t x333 = -1;
int8_t x351 = INT8_MIN;
volatile int32_t t63 = -3934;
static int32_t x354 = INT32_MIN;
int8_t x365 = INT8_MIN;
volatile int64_t x370 = -1LL;
volatile int16_t x372 = -1;
volatile uint8_t x375 = 4U;
volatile int64_t x378 = 4867469276LL;
uint64_t x380 = UINT64_MAX;
int32_t t71 = -16;
int8_t x410 = INT8_MIN;
volatile uint8_t x414 = 119U;
volatile int64_t x417 = 21351417543754007LL;
int16_t x418 = INT16_MIN;
int32_t t76 = 592038437;
int32_t x423 = INT32_MAX;
uint8_t x429 = 7U;
uint16_t x430 = UINT16_MAX;
volatile int32_t t78 = 215;
int16_t x458 = -242;
int32_t x461 = INT32_MIN;
int32_t t84 = 4907;
static volatile int32_t x474 = INT32_MAX;
volatile uint16_t x481 = 1345U;
volatile int32_t t87 = 2200;
int8_t x485 = INT8_MAX;
int64_t x487 = 21537756LL;
uint16_t x488 = 212U;
volatile int32_t t89 = -1;
int32_t x498 = -396;
int32_t t90 = 298;
int16_t x502 = -159;
int16_t x504 = -1;
int32_t t91 = -1083;
uint8_t x507 = 59U;
static int64_t x517 = -1LL;
int32_t t96 = -1;
int32_t x540 = INT32_MIN;
static int32_t t97 = -4131061;
int8_t x542 = -3;
int32_t t98 = 86;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	volatile int16_t x2 = INT16_MIN;
	int8_t x3 = -7;
	uint32_t x4 = 913168125U;
	int32_t t0 = 160;

	t0 = (x1<(x2/(x3*x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 1U;
	int16_t x6 = -1;
	uint16_t x7 = UINT16_MAX;
	volatile int8_t x8 = -1;
	static int32_t t1 = -45329359;

	t1 = (x5<(x6/(x7*x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int16_t x10 = INT16_MIN;
	static int16_t x11 = INT16_MIN;
	uint32_t x12 = 684747729U;

	t2 = (x9<(x10/(x11*x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MAX;
	int32_t x14 = INT32_MIN;
	int64_t x16 = INT64_MIN;
	int32_t t3 = -11;

	t3 = (x13<(x14/(x15*x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 1U;
	volatile uint32_t x18 = 11548U;
	int8_t x19 = INT8_MIN;
	uint8_t x20 = UINT8_MAX;

	t4 = (x17<(x18/(x19*x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = 12;
	volatile int32_t x27 = -1583;
	volatile int8_t x28 = -3;
	int32_t t5 = 1;

	t5 = (x25<(x26/(x27*x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x33 = INT8_MAX;
	volatile int32_t t6 = 3090;

	t6 = (x33<(x34/(x35*x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x38 = 1;
	int8_t x39 = -22;
	int32_t x40 = -1;

	t7 = (x37<(x38/(x39*x40)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x46 = UINT16_MAX;
	volatile int32_t x48 = INT32_MIN;
	int32_t t8 = 945273;

	t8 = (x45<(x46/(x47*x48)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x50 = 7U;
	static int8_t x51 = 4;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t9 = 9496;

	t9 = (x49<(x50/(x51*x52)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = -3468;
	volatile uint16_t x54 = UINT16_MAX;
	static uint64_t x56 = UINT64_MAX;
	volatile int32_t t10 = 15215804;

	t10 = (x53<(x54/(x55*x56)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = 3;
	uint8_t x63 = 14U;
	volatile uint8_t x64 = 49U;

	t11 = (x61<(x62/(x63*x64)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x65 = -1674;
	int64_t x66 = INT64_MIN;
	volatile uint32_t x67 = UINT32_MAX;
	volatile int32_t t12 = -14016;

	t12 = (x65<(x66/(x67*x68)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x69 = -1;
	int32_t x70 = INT32_MIN;
	uint8_t x71 = UINT8_MAX;
	int16_t x72 = INT16_MIN;
	volatile int32_t t13 = -223823;

	t13 = (x69<(x70/(x71*x72)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x74 = 13808LLU;
	int32_t x76 = INT32_MAX;
	static volatile int32_t t14 = -9877911;

	t14 = (x73<(x74/(x75*x76)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = INT64_MIN;
	int8_t x78 = INT8_MIN;
	uint64_t x79 = UINT64_MAX;
	static int32_t t15 = 373;

	t15 = (x77<(x78/(x79*x80)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x81 = 4U;
	int32_t x82 = INT32_MAX;
	int16_t x83 = INT16_MIN;
	int16_t x84 = 1664;
	int32_t t16 = -258036;

	t16 = (x81<(x82/(x83*x84)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = -1;
	int64_t x86 = INT64_MAX;
	volatile uint64_t x88 = 228973572555833287LLU;
	volatile int32_t t17 = 30;

	t17 = (x85<(x86/(x87*x88)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x94 = INT32_MIN;
	uint64_t x95 = 183397963755483015LLU;
	int16_t x96 = 3747;

	t18 = (x93<(x94/(x95*x96)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = INT8_MIN;
	uint32_t x98 = UINT32_MAX;
	int8_t x99 = -1;
	static volatile uint32_t x100 = UINT32_MAX;

	t19 = (x97<(x98/(x99*x100)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x105 = INT32_MIN;
	volatile uint16_t x106 = UINT16_MAX;
	int32_t x107 = -100595;
	int32_t t20 = -112291801;

	t20 = (x105<(x106/(x107*x108)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x109 = 96U;
	static uint16_t x110 = 2089U;
	volatile int64_t x111 = 3802LL;
	int8_t x112 = INT8_MAX;

	t21 = (x109<(x110/(x111*x112)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x122 = -1;
	int8_t x124 = -1;
	int32_t t22 = -126;

	t22 = (x121<(x122/(x123*x124)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x129 = 2U;
	static int8_t x130 = INT8_MAX;
	int16_t x132 = INT16_MIN;

	t23 = (x129<(x130/(x131*x132)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x133 = 5;
	volatile uint32_t x134 = UINT32_MAX;
	static uint64_t x135 = 12641963771LLU;
	static volatile int32_t x136 = 7;
	int32_t t24 = 0;

	t24 = (x133<(x134/(x135*x136)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x137 = INT64_MIN;
	static uint64_t x139 = UINT64_MAX;
	int8_t x140 = 48;
	volatile int32_t t25 = 36492;

	t25 = (x137<(x138/(x139*x140)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x141 = 981LL;
	volatile int32_t x144 = -1;

	t26 = (x141<(x142/(x143*x144)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x145 = 80023266226596979LLU;
	static int16_t x146 = INT16_MAX;
	static uint64_t x147 = 40710114921534977LLU;
	static volatile uint8_t x148 = 3U;
	static int32_t t27 = 24;

	t27 = (x145<(x146/(x147*x148)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x149 = -4;
	static volatile int8_t x151 = -1;

	t28 = (x149<(x150/(x151*x152)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x161 = INT32_MIN;
	static int16_t x162 = INT16_MAX;
	int8_t x163 = INT8_MIN;
	static volatile int32_t t29 = -3;

	t29 = (x161<(x162/(x163*x164)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x165 = 6291LLU;
	int64_t x166 = INT64_MAX;
	int64_t x167 = -63335LL;
	volatile int32_t x168 = 10633071;

	t30 = (x165<(x166/(x167*x168)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x169 = INT16_MAX;
	volatile int8_t x171 = INT8_MAX;

	t31 = (x169<(x170/(x171*x172)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x173 = INT64_MAX;
	uint16_t x175 = 1U;
	uint8_t x176 = 1U;
	int32_t t32 = 4;

	t32 = (x173<(x174/(x175*x176)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x178 = INT32_MAX;
	uint16_t x180 = UINT16_MAX;
	int32_t t33 = 7270971;

	t33 = (x177<(x178/(x179*x180)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x181 = INT16_MIN;
	int16_t x182 = INT16_MIN;
	int32_t x183 = -61;
	uint32_t x184 = UINT32_MAX;

	t34 = (x181<(x182/(x183*x184)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x189 = 5U;
	uint32_t x191 = UINT32_MAX;
	int32_t x192 = INT32_MIN;
	volatile int32_t t35 = 51;

	t35 = (x189<(x190/(x191*x192)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x193 = 378U;
	uint64_t x194 = 410708734942LLU;
	static int16_t x195 = INT16_MAX;
	volatile int64_t x196 = 6398479284133LL;
	volatile int32_t t36 = -19812180;

	t36 = (x193<(x194/(x195*x196)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x198 = 28112LLU;
	int16_t x199 = INT16_MIN;
	static volatile uint16_t x200 = 91U;
	volatile int32_t t37 = -6638389;

	t37 = (x197<(x198/(x199*x200)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x201 = -1;
	int32_t x202 = 3;
	static volatile int32_t x203 = -1;
	volatile int32_t t38 = -3810;

	t38 = (x201<(x202/(x203*x204)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x209 = 76U;
	int64_t x210 = -52318407528LL;
	int64_t x211 = 329594571LL;
	int32_t x212 = -1;
	volatile int32_t t39 = 0;

	t39 = (x209<(x210/(x211*x212)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x213 = INT32_MAX;
	volatile int64_t x214 = -6067572472LL;
	uint8_t x215 = UINT8_MAX;
	int16_t x216 = INT16_MIN;
	int32_t t40 = 892;

	t40 = (x213<(x214/(x215*x216)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x218 = -1;
	int8_t x219 = 17;
	int16_t x220 = -288;

	t41 = (x217<(x218/(x219*x220)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x225 = -35;
	int16_t x227 = 5165;
	int8_t x228 = -29;
	static int32_t t42 = -1;

	t42 = (x225<(x226/(x227*x228)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x230 = INT32_MAX;
	int32_t x231 = -1;
	volatile int32_t x232 = 29058756;
	int32_t t43 = -662075;

	t43 = (x229<(x230/(x231*x232)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x241 = 974LLU;
	uint64_t x242 = 58LLU;
	volatile int8_t x243 = INT8_MIN;
	volatile int32_t t44 = 30536811;

	t44 = (x241<(x242/(x243*x244)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x245 = UINT16_MAX;
	volatile uint16_t x246 = 13U;
	uint16_t x247 = UINT16_MAX;
	int8_t x248 = INT8_MIN;
	volatile int32_t t45 = 20619;

	t45 = (x245<(x246/(x247*x248)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x249 = INT16_MAX;
	uint64_t x250 = 46LLU;
	static uint64_t x251 = UINT64_MAX;
	int16_t x252 = -2;
	int32_t t46 = 6661154;

	t46 = (x249<(x250/(x251*x252)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x254 = 1U;
	int32_t x255 = INT32_MAX;
	uint32_t x256 = UINT32_MAX;
	int32_t t47 = -8;

	t47 = (x253<(x254/(x255*x256)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x265 = INT64_MAX;
	int32_t x266 = INT32_MIN;
	uint64_t x268 = 12720239075810522LLU;
	static int32_t t48 = 145007;

	t48 = (x265<(x266/(x267*x268)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x269 = 28455U;
	uint8_t x270 = 3U;
	static uint64_t x271 = UINT64_MAX;
	static int8_t x272 = INT8_MIN;
	int32_t t49 = 17769;

	t49 = (x269<(x270/(x271*x272)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x273 = UINT32_MAX;
	int64_t x274 = 3866949218407030370LL;
	static uint64_t x275 = 3713LLU;
	volatile int32_t t50 = 362;

	t50 = (x273<(x274/(x275*x276)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x277 = UINT16_MAX;
	uint64_t x278 = UINT64_MAX;
	uint8_t x279 = UINT8_MAX;
	static int16_t x280 = INT16_MIN;
	int32_t t51 = -1489479;

	t51 = (x277<(x278/(x279*x280)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x286 = 114U;
	volatile int16_t x287 = INT16_MIN;
	uint32_t x288 = 489324137U;
	int32_t t52 = 24694561;

	t52 = (x285<(x286/(x287*x288)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x289 = INT32_MIN;
	int64_t x291 = -1LL;
	int16_t x292 = INT16_MAX;
	volatile int32_t t53 = -556;

	t53 = (x289<(x290/(x291*x292)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x297 = 528525;
	volatile uint32_t x298 = UINT32_MAX;
	uint16_t x299 = 125U;
	int32_t x300 = -7242313;
	static volatile int32_t t54 = 697750675;

	t54 = (x297<(x298/(x299*x300)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x302 = INT64_MAX;
	uint8_t x304 = 126U;
	int32_t t55 = -161918987;

	t55 = (x301<(x302/(x303*x304)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x305 = INT16_MIN;
	volatile uint8_t x306 = 0U;
	uint8_t x307 = 90U;
	int16_t x308 = INT16_MIN;

	t56 = (x305<(x306/(x307*x308)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x313 = -1LL;
	int16_t x314 = INT16_MIN;
	uint16_t x315 = 13413U;
	int16_t x316 = -4;

	t57 = (x313<(x314/(x315*x316)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x321 = 1U;
	uint32_t x322 = 2743115U;
	uint8_t x324 = 51U;
	int32_t t58 = -2337331;

	t58 = (x321<(x322/(x323*x324)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x325 = -22850468376672681LL;
	uint64_t x326 = UINT64_MAX;
	uint8_t x327 = UINT8_MAX;
	static int8_t x328 = INT8_MIN;
	volatile int32_t t59 = 8270228;

	t59 = (x325<(x326/(x327*x328)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x329 = 0U;
	uint32_t x331 = 257391U;
	uint32_t x332 = 36383088U;
	volatile int32_t t60 = -228147573;

	t60 = (x329<(x330/(x331*x332)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x334 = UINT32_MAX;
	int16_t x335 = INT16_MAX;
	static volatile int32_t x336 = -1;
	volatile int32_t t61 = 231;

	t61 = (x333<(x334/(x335*x336)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x337 = -1;
	int8_t x338 = INT8_MAX;
	int16_t x339 = INT16_MIN;
	int64_t x340 = -68049787146252LL;
	volatile int32_t t62 = -62793;

	t62 = (x337<(x338/(x339*x340)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x349 = 14U;
	static int32_t x350 = INT32_MAX;
	int16_t x352 = 8469;

	t63 = (x349<(x350/(x351*x352)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x353 = INT16_MIN;
	int32_t x355 = 77135459;
	volatile int32_t x356 = -1;
	int32_t t64 = 8405;

	t64 = (x353<(x354/(x355*x356)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x361 = 215758432813435277LLU;
	int16_t x362 = -1;
	uint8_t x363 = UINT8_MAX;
	int16_t x364 = INT16_MIN;
	volatile int32_t t65 = -458723;

	t65 = (x361<(x362/(x363*x364)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x366 = -1;
	int8_t x367 = -1;
	int32_t x368 = INT32_MAX;
	volatile int32_t t66 = 26;

	t66 = (x365<(x366/(x367*x368)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x369 = UINT8_MAX;
	int16_t x371 = INT16_MIN;
	int32_t t67 = 583024197;

	t67 = (x369<(x370/(x371*x372)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x373 = 481U;
	int16_t x374 = INT16_MAX;
	int8_t x376 = INT8_MAX;
	static int32_t t68 = 188109;

	t68 = (x373<(x374/(x375*x376)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x377 = -6730;
	static volatile uint8_t x379 = UINT8_MAX;
	volatile int32_t t69 = -481;

	t69 = (x377<(x378/(x379*x380)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x381 = UINT16_MAX;
	int16_t x382 = -1;
	volatile uint32_t x383 = 1882990145U;
	int8_t x384 = INT8_MIN;
	int32_t t70 = -1;

	t70 = (x381<(x382/(x383*x384)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x385 = 2407141660LLU;
	int64_t x386 = INT64_MAX;
	int16_t x387 = INT16_MAX;
	int16_t x388 = 282;

	t71 = (x385<(x386/(x387*x388)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x389 = 20U;
	int32_t x390 = INT32_MIN;
	volatile uint64_t x391 = UINT64_MAX;
	static int64_t x392 = -3LL;
	static volatile int32_t t72 = 3;

	t72 = (x389<(x390/(x391*x392)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x393 = UINT16_MAX;
	volatile int8_t x394 = INT8_MIN;
	int64_t x395 = -15991398850LL;
	int32_t x396 = -1;
	int32_t t73 = -23;

	t73 = (x393<(x394/(x395*x396)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x409 = 1;
	uint64_t x411 = 3LLU;
	volatile int64_t x412 = -52LL;
	volatile int32_t t74 = 19017331;

	t74 = (x409<(x410/(x411*x412)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x413 = INT32_MIN;
	uint32_t x415 = 22684U;
	volatile uint64_t x416 = 186287318669778LLU;
	int32_t t75 = 0;

	t75 = (x413<(x414/(x415*x416)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x419 = INT16_MIN;
	uint8_t x420 = 110U;

	t76 = (x417<(x418/(x419*x420)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x421 = -1LL;
	int16_t x422 = -86;
	static int64_t x424 = 153188LL;
	int32_t t77 = -8;

	t77 = (x421<(x422/(x423*x424)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x431 = INT8_MIN;
	static uint8_t x432 = 49U;

	t78 = (x429<(x430/(x431*x432)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x433 = UINT8_MAX;
	int16_t x434 = INT16_MIN;
	volatile int16_t x435 = INT16_MIN;
	int32_t x436 = -1;
	int32_t t79 = 13;

	t79 = (x433<(x434/(x435*x436)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x441 = 940U;
	static volatile uint16_t x442 = 6U;
	uint32_t x443 = 341802U;
	int16_t x444 = INT16_MAX;
	static volatile int32_t t80 = 4125001;

	t80 = (x441<(x442/(x443*x444)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x445 = INT8_MAX;
	static int16_t x446 = INT16_MAX;
	int16_t x447 = INT16_MIN;
	int8_t x448 = 1;
	int32_t t81 = 11755;

	t81 = (x445<(x446/(x447*x448)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x453 = INT32_MIN;
	static volatile int8_t x454 = 0;
	static uint8_t x455 = 58U;
	int16_t x456 = INT16_MIN;
	volatile int32_t t82 = -1;

	t82 = (x453<(x454/(x455*x456)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x457 = 0U;
	int8_t x459 = -1;
	static int8_t x460 = INT8_MIN;
	volatile int32_t t83 = 224974394;

	t83 = (x457<(x458/(x459*x460)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x462 = -1786;
	static uint32_t x463 = 11537U;
	static volatile int32_t x464 = INT32_MIN;

	t84 = (x461<(x462/(x463*x464)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x469 = -1;
	uint32_t x470 = 3413710U;
	int8_t x471 = INT8_MIN;
	int8_t x472 = -7;
	int32_t t85 = -198138;

	t85 = (x469<(x470/(x471*x472)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x473 = INT8_MAX;
	volatile int16_t x475 = INT16_MAX;
	volatile uint8_t x476 = 34U;
	int32_t t86 = -1445411;

	t86 = (x473<(x474/(x475*x476)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x482 = INT32_MIN;
	int8_t x483 = 1;
	int32_t x484 = -1137782;

	t87 = (x481<(x482/(x483*x484)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x486 = 24U;
	int32_t t88 = -116;

	t88 = (x485<(x486/(x487*x488)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x489 = 1438;
	static int8_t x490 = 0;
	int32_t x491 = -225515671;
	uint8_t x492 = 1U;

	t89 = (x489<(x490/(x491*x492)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x497 = INT32_MIN;
	uint64_t x499 = UINT64_MAX;
	uint16_t x500 = UINT16_MAX;

	t90 = (x497<(x498/(x499*x500)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x501 = 38U;
	int16_t x503 = 4421;

	t91 = (x501<(x502/(x503*x504)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x505 = UINT16_MAX;
	int8_t x506 = -1;
	static int8_t x508 = INT8_MAX;
	static volatile int32_t t92 = 876436729;

	t92 = (x505<(x506/(x507*x508)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x509 = 12427LLU;
	static uint8_t x510 = 13U;
	volatile int32_t x511 = -1;
	int16_t x512 = INT16_MIN;
	int32_t t93 = 1108;

	t93 = (x509<(x510/(x511*x512)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x518 = 1U;
	volatile int16_t x519 = -1;
	uint16_t x520 = UINT16_MAX;
	volatile int32_t t94 = 2877326;

	t94 = (x517<(x518/(x519*x520)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x521 = INT32_MAX;
	int16_t x522 = INT16_MAX;
	static int64_t x523 = 24553LL;
	static uint8_t x524 = 18U;
	volatile int32_t t95 = 96;

	t95 = (x521<(x522/(x523*x524)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x529 = 5;
	static int32_t x530 = INT32_MIN;
	static uint8_t x531 = 12U;
	uint16_t x532 = 31U;

	t96 = (x529<(x530/(x531*x532)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x537 = INT64_MAX;
	int32_t x538 = -1;
	uint64_t x539 = UINT64_MAX;

	t97 = (x537<(x538/(x539*x540)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x541 = INT32_MIN;
	int32_t x543 = -231;
	static int8_t x544 = -1;

	t98 = (x541<(x542/(x543*x544)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x549 = -1;
	int64_t x550 = -212445LL;
	volatile uint32_t x551 = 4U;
	uint8_t x552 = 1U;
	static int32_t t99 = 4;

	t99 = (x549<(x550/(x551*x552)));

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

