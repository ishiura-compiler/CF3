#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = -186995376365716942LL;
uint32_t x4 = 1998U;
volatile int64_t x8 = -146592LL;
int8_t x13 = -1;
static int64_t x18 = INT64_MIN;
int32_t x24 = 3351438;
uint64_t x29 = UINT64_MAX;
static volatile uint16_t x30 = 6421U;
static uint64_t t7 = 11181887LLU;
int64_t x41 = -1LL;
static int8_t x42 = 0;
volatile int8_t x44 = 1;
int32_t x45 = -1;
int64_t x47 = INT64_MAX;
volatile uint8_t x49 = 24U;
static uint32_t x72 = 386869487U;
uint64_t t15 = 775585399703LLU;
uint16_t x84 = 3949U;
uint16_t x86 = 4U;
int64_t x89 = 388132319LL;
volatile int64_t x92 = -1LL;
static uint32_t x98 = 567U;
static uint32_t x104 = 89932314U;
int64_t t25 = -9691274520LL;
volatile uint64_t x114 = 76469LLU;
uint8_t x125 = 21U;
static uint8_t x127 = UINT8_MAX;
volatile int16_t x129 = INT16_MIN;
volatile int8_t x135 = INT8_MIN;
int64_t t31 = 1LL;
int64_t x148 = -1LL;
volatile uint64_t t34 = 182244013660LLU;
int32_t x159 = INT32_MIN;
uint8_t x167 = 5U;
int32_t x168 = INT32_MIN;
int32_t x169 = INT32_MIN;
int64_t x170 = 7211939960068011LL;
int8_t x173 = -22;
static uint8_t x175 = 47U;
int32_t x176 = -1;
volatile int32_t t40 = 658232306;
static volatile int64_t t42 = 125500094390LL;
static volatile int8_t x198 = INT8_MIN;
volatile uint32_t t45 = 19764U;
int16_t x202 = 0;
int16_t x209 = INT16_MAX;
uint16_t x210 = UINT16_MAX;
uint64_t x215 = 296398535LLU;
volatile int64_t t49 = 4247923208LL;
static volatile int16_t x221 = INT16_MIN;
uint32_t x224 = UINT32_MAX;
static uint8_t x227 = 22U;
volatile uint16_t x229 = 4886U;
uint8_t x236 = UINT8_MAX;
int8_t x237 = 12;
volatile int8_t x242 = -1;
int64_t x244 = 3020281LL;
static int64_t x245 = -3883491029429099502LL;
int16_t x250 = INT16_MAX;
uint8_t x251 = 0U;
static uint64_t x253 = 7181231689243LLU;
uint16_t x256 = 1U;
volatile uint64_t t58 = 312037280663499236LLU;
int16_t x259 = -15;
int16_t x276 = INT16_MIN;
uint16_t x277 = UINT16_MAX;
static int32_t t64 = -31;
int8_t x283 = -43;
int64_t x284 = INT64_MAX;
static uint8_t x295 = 6U;
int16_t x298 = INT16_MAX;
uint64_t t67 = 287406627062723LLU;
static int8_t x302 = INT8_MIN;
uint64_t x303 = UINT64_MAX;
volatile int64_t x305 = INT64_MIN;
volatile int16_t x313 = INT16_MAX;
int32_t x316 = INT32_MAX;
static int64_t x321 = 2145LL;
uint16_t x324 = UINT16_MAX;
volatile uint64_t t72 = 1540LLU;
uint64_t t73 = 643LLU;
int16_t x332 = INT16_MIN;
volatile int8_t x333 = -1;
static volatile int8_t x349 = INT8_MIN;
int32_t x351 = 1;
uint8_t x352 = UINT8_MAX;
static volatile int32_t t77 = -1005;
volatile int8_t x354 = -19;
uint64_t x360 = 6437531041718920632LLU;
uint64_t t79 = 1935453057982859LLU;
int16_t x376 = -1;
uint32_t x389 = UINT32_MAX;
uint32_t x395 = 5686U;
uint32_t x412 = 17564697U;
volatile int64_t t91 = 15142090LL;
static volatile int8_t x424 = 3;
static volatile int32_t t93 = -7;
int32_t x432 = INT32_MAX;
uint32_t x438 = UINT32_MAX;
int16_t x440 = INT16_MIN;
int64_t t99 = 20971800229LL;


void f0(void) {
	static volatile int16_t x1 = -1;
	int32_t x2 = 1;
	int64_t t0 = 1997709163555596615LL;

	t0 = (((x1|x2)+x3)/x4);

	if (t0 != -93591279462320LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 81U;
	volatile int16_t x6 = 12;
	uint32_t x7 = 203509243U;
	volatile int64_t t1 = 14158428295299LL;

	t1 = (((x5|x6)+x7)/x8);

	if (t1 != -1388LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	uint16_t x10 = 0U;
	volatile uint64_t x11 = UINT64_MAX;
	int16_t x12 = INT16_MIN;
	static volatile uint64_t t2 = 1452173967LLU;

	t2 = (((x9|x10)+x11)/x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x14 = 0U;
	int64_t x15 = -1LL;
	static int32_t x16 = 847266128;
	volatile int64_t t3 = -1046111309LL;

	t3 = (((x13|x14)+x15)/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	uint64_t x19 = UINT64_MAX;
	uint32_t x20 = 2660U;
	uint64_t t4 = 6655344003535068LLU;

	t4 = (((x17|x18)+x19)/x20);

	if (t4 != 6934866193123891LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 13994110116005LL;
	volatile int8_t x22 = INT8_MAX;
	int32_t x23 = -164303922;
	int64_t t5 = 7184LL;

	t5 = (((x21|x22)+x23)/x24);

	if (t5 != 4175504LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int16_t x26 = -48;
	int16_t x27 = -2;
	static int64_t x28 = INT64_MAX;
	int64_t t6 = 31674LL;

	t6 = (((x25|x26)+x27)/x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x31 = 74U;
	static int8_t x32 = INT8_MAX;

	t7 = (((x29|x30)+x31)/x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 24855U;
	int32_t x34 = -1;
	int64_t x35 = -1LL;
	static int32_t x36 = INT32_MIN;
	static int64_t t8 = -260265759608LL;

	t8 = (((x33|x34)+x35)/x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x43 = 62U;
	volatile int64_t t9 = 11000987109797LL;

	t9 = (((x41|x42)+x43)/x44);

	if (t9 != 61LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x46 = 0;
	static int16_t x48 = INT16_MAX;
	volatile int64_t t10 = -27740221215237LL;

	t10 = (((x45|x46)+x47)/x48);

	if (t10 != 281483566907400LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = -1;
	int32_t x51 = -1;
	uint16_t x52 = UINT16_MAX;
	static int32_t t11 = -267345442;

	t11 = (((x49|x50)+x51)/x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x53 = 871469704U;
	int64_t x54 = -288247LL;
	static uint64_t x55 = UINT64_MAX;
	int32_t x56 = INT32_MIN;
	volatile uint64_t t12 = 282733044625288694LLU;

	t12 = (((x53|x54)+x55)/x56);

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x57 = -1;
	static int8_t x58 = -1;
	static volatile int64_t x59 = INT64_MAX;
	uint16_t x60 = UINT16_MAX;
	volatile int64_t t13 = -25838885LL;

	t13 = (((x57|x58)+x59)/x60);

	if (t13 != 140739635871744LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 10U;
	volatile int32_t x62 = 57;
	uint8_t x63 = UINT8_MAX;
	int8_t x64 = -1;
	volatile int32_t t14 = 544480834;

	t14 = (((x61|x62)+x63)/x64);

	if (t14 != -314) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 62157LLU;
	int32_t x70 = INT32_MIN;
	static int16_t x71 = -25;

	t15 = (((x69|x70)+x71)/x72);

	if (t15 != 47682085797LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = 447591840217LL;
	int8_t x74 = -1;
	static uint16_t x75 = UINT16_MAX;
	int16_t x76 = INT16_MIN;
	volatile int64_t t16 = -7963218900LL;

	t16 = (((x73|x74)+x75)/x76);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = UINT16_MAX;
	uint8_t x78 = 1U;
	static int64_t x79 = -1LL;
	volatile int8_t x80 = INT8_MIN;
	static int64_t t17 = -1074409627388LL;

	t17 = (((x77|x78)+x79)/x80);

	if (t17 != -511LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = INT16_MIN;
	uint32_t x82 = 7401U;
	volatile int32_t x83 = INT32_MIN;
	uint32_t t18 = 3600540U;

	t18 = (((x81|x82)+x83)/x84);

	if (t18 != 543797U) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x85 = INT8_MAX;
	int8_t x87 = INT8_MAX;
	static uint8_t x88 = 16U;
	int32_t t19 = -82;

	t19 = (((x85|x86)+x87)/x88);

	if (t19 != 15) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x90 = INT64_MAX;
	uint64_t x91 = UINT64_MAX;
	volatile uint64_t t20 = 6680465513LLU;

	t20 = (((x89|x90)+x91)/x92);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = 0;
	uint32_t x94 = 855944266U;
	static uint32_t x95 = UINT32_MAX;
	int32_t x96 = 1890610;
	uint32_t t21 = 9773806U;

	t21 = (((x93|x94)+x95)/x96);

	if (t21 != 452U) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x97 = INT64_MAX;
	static int64_t x99 = -2045730398LL;
	int16_t x100 = INT16_MIN;
	volatile int64_t t22 = -408661602272042131LL;

	t22 = (((x97|x98)+x99)/x100);

	if (t22 != -281474976648225LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x101 = 43U;
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = INT16_MIN;
	volatile uint32_t t23 = 598968912U;

	t23 = (((x101|x102)+x103)/x104);

	if (t23 != 47U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x105 = -1;
	int8_t x106 = -1;
	uint16_t x107 = 1U;
	uint32_t x108 = UINT32_MAX;
	static uint32_t t24 = 30U;

	t24 = (((x105|x106)+x107)/x108);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	int64_t x110 = INT64_MIN;
	int32_t x111 = -7170171;
	int64_t x112 = INT64_MIN;

	t25 = (((x109|x110)+x111)/x112);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = 2507501;
	static int32_t x115 = -1;
	static volatile int16_t x116 = 239;
	volatile uint64_t t26 = 4364204818125138435LLU;

	t26 = (((x113|x114)+x115)/x116);

	if (t26 != 10808LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = -1483;
	static int32_t x118 = -3;
	int8_t x119 = 49;
	uint16_t x120 = 1U;
	volatile int32_t t27 = 825946;

	t27 = (((x117|x118)+x119)/x120);

	if (t27 != 46) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = -1LL;
	int64_t x122 = 15955565123001460LL;
	volatile int8_t x123 = -29;
	volatile int16_t x124 = INT16_MIN;
	static volatile int64_t t28 = -517286223487LL;

	t28 = (((x121|x122)+x123)/x124);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x126 = INT8_MAX;
	static int32_t x128 = INT32_MIN;
	static volatile int32_t t29 = -51;

	t29 = (((x125|x126)+x127)/x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x130 = 13U;
	int64_t x131 = -1LL;
	int32_t x132 = INT32_MAX;
	int64_t t30 = -632218226LL;

	t30 = (((x129|x130)+x131)/x132);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = 1762U;
	volatile int32_t x134 = INT32_MIN;
	int64_t x136 = INT64_MAX;

	t31 = (((x133|x134)+x135)/x136);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MIN;
	int32_t x138 = -50;
	volatile int64_t x139 = -1LL;
	int64_t x140 = INT64_MIN;
	volatile int64_t t32 = 8196625955LL;

	t32 = (((x137|x138)+x139)/x140);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = 88305380583352126LL;
	uint8_t x142 = UINT8_MAX;
	volatile uint64_t x143 = 567156494768254291LLU;
	int32_t x144 = INT32_MIN;
	uint64_t t33 = 977490704LLU;

	t33 = (((x141|x142)+x143)/x144);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x145 = UINT32_MAX;
	uint64_t x146 = 5LLU;
	static int64_t x147 = 600625LL;

	t34 = (((x145|x146)+x147)/x148);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = 39;
	uint32_t x150 = 67178511U;
	static uint32_t x151 = 83U;
	int16_t x152 = -1;
	uint32_t t35 = 429361729U;

	t35 = (((x149|x150)+x151)/x152);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = -1;
	static int8_t x154 = INT8_MAX;
	volatile int16_t x155 = INT16_MIN;
	uint16_t x156 = 4U;
	static int32_t t36 = 9692651;

	t36 = (((x153|x154)+x155)/x156);

	if (t36 != -8192) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = -93067LL;
	static volatile int8_t x158 = -8;
	uint32_t x160 = 2032753993U;
	volatile int64_t t37 = 309137068736370604LL;

	t37 = (((x157|x158)+x159)/x160);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x165 = -578;
	volatile uint64_t x166 = 16681LLU;
	volatile uint64_t t38 = 1697467573LLU;

	t38 = (((x165|x166)+x167)/x168);

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x171 = -7952;
	int32_t x172 = INT32_MAX;
	int64_t t39 = -198995064LL;

	t39 = (((x169|x170)+x171)/x172);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x174 = -1;

	t40 = (((x173|x174)+x175)/x176);

	if (t40 != -46) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = 88U;
	int16_t x178 = INT16_MIN;
	int8_t x179 = -51;
	int32_t x180 = -1;
	volatile int32_t t41 = 231061;

	t41 = (((x177|x178)+x179)/x180);

	if (t41 != 32731) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x181 = 3105;
	int8_t x182 = -25;
	volatile int32_t x183 = INT32_MAX;
	int64_t x184 = -1LL;

	t42 = (((x181|x182)+x183)/x184);

	if (t42 != -2147483622LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = -13;
	int8_t x186 = 0;
	static uint16_t x187 = UINT16_MAX;
	int64_t x188 = -57462756996969LL;
	int64_t t43 = -147LL;

	t43 = (((x185|x186)+x187)/x188);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x193 = -1;
	static volatile int16_t x194 = INT16_MAX;
	uint32_t x195 = UINT32_MAX;
	volatile int8_t x196 = INT8_MIN;
	static volatile uint32_t t44 = 2U;

	t44 = (((x193|x194)+x195)/x196);

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x197 = 143U;
	int32_t x199 = INT32_MIN;
	static volatile int8_t x200 = 54;

	t45 = (((x197|x198)+x199)/x200);

	if (t45 != 39768213U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = -63546461821LL;
	int64_t x203 = INT64_MAX;
	int32_t x204 = -1;
	int64_t t46 = 4301LL;

	t46 = (((x201|x202)+x203)/x204);

	if (t46 != -9223371973308313986LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x211 = 1U;
	volatile int64_t x212 = INT64_MIN;
	int64_t t47 = 4489419LL;

	t47 = (((x209|x210)+x211)/x212);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = INT16_MAX;
	int32_t x214 = INT32_MIN;
	volatile uint64_t x216 = 3118065LLU;
	uint64_t t48 = 788100853026674664LLU;

	t48 = (((x213|x214)+x215)/x216);

	if (t48 != 5916087083450LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x217 = 573757LL;
	volatile int64_t x218 = INT64_MAX;
	int64_t x219 = INT64_MIN;
	int16_t x220 = 14;

	t49 = (((x217|x218)+x219)/x220);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x222 = UINT32_MAX;
	int8_t x223 = 16;
	uint32_t t50 = 35U;

	t50 = (((x221|x222)+x223)/x224);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = INT8_MIN;
	int32_t x226 = -31;
	uint16_t x228 = 6U;
	static int32_t t51 = -2;

	t51 = (((x225|x226)+x227)/x228);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x230 = 144309347;
	volatile int64_t x231 = INT64_MIN;
	static int8_t x232 = INT8_MIN;
	int64_t t52 = 48728327101734287LL;

	t52 = (((x229|x230)+x231)/x232);

	if (t52 != 72057594036800513LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = INT64_MIN;
	static int8_t x234 = INT8_MIN;
	static int8_t x235 = 8;
	int64_t t53 = -1LL;

	t53 = (((x233|x234)+x235)/x236);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x238 = -1LL;
	int32_t x239 = 1259;
	volatile uint8_t x240 = UINT8_MAX;
	volatile int64_t t54 = 0LL;

	t54 = (((x237|x238)+x239)/x240);

	if (t54 != 4LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = -58509689;
	int64_t x243 = 2982529849589076126LL;
	volatile int64_t t55 = 4391940585710674147LL;

	t55 = (((x241|x242)+x243)/x244);

	if (t55 != 987500782075LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x246 = -58079824205LL;
	int32_t x247 = -2342;
	volatile int32_t x248 = -1;
	static volatile int64_t t56 = 12644924818515LL;

	t56 = (((x245|x246)+x247)/x248);

	if (t56 != 17205138035LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x249 = UINT32_MAX;
	uint8_t x252 = UINT8_MAX;
	volatile uint32_t t57 = 25U;

	t57 = (((x249|x250)+x251)/x252);

	if (t57 != 16843009U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x254 = INT8_MIN;
	int64_t x255 = 198734399140LL;

	t58 = (((x253|x254)+x255)/x256);

	if (t58 != 198734399039LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x257 = 3U;
	static int32_t x258 = -158199134;
	int16_t x260 = -1;
	int32_t t59 = -204676453;

	t59 = (((x257|x258)+x259)/x260);

	if (t59 != 158199148) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = INT8_MIN;
	int64_t x262 = INT64_MIN;
	int8_t x263 = INT8_MAX;
	int16_t x264 = 4786;
	int64_t t60 = 922702LL;

	t60 = (((x261|x262)+x263)/x264);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = INT16_MIN;
	int32_t x266 = INT32_MAX;
	int64_t x267 = -1LL;
	static uint32_t x268 = UINT32_MAX;
	volatile int64_t t61 = 2625536380871920847LL;

	t61 = (((x265|x266)+x267)/x268);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x269 = -61857261830634609LL;
	static int8_t x270 = INT8_MIN;
	uint16_t x271 = UINT16_MAX;
	uint64_t x272 = 412250643675LLU;
	static volatile uint64_t t62 = 1245032394165LLU;

	t62 = (((x269|x270)+x271)/x272);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x273 = 54U;
	int16_t x274 = INT16_MIN;
	volatile uint32_t x275 = 904U;
	uint32_t t63 = 30652U;

	t63 = (((x273|x274)+x275)/x276);

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x278 = INT32_MIN;
	int8_t x279 = INT8_MIN;
	static uint16_t x280 = 1602U;

	t64 = (((x277|x278)+x279)/x280);

	if (t64 != -1340460) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x281 = 219709718U;
	int64_t x282 = INT64_MIN;
	int64_t t65 = 69589723LL;

	t65 = (((x281|x282)+x283)/x284);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x293 = 15U;
	volatile int16_t x294 = -260;
	static uint16_t x296 = 4U;
	volatile int32_t t66 = -2594918;

	t66 = (((x293|x294)+x295)/x296);

	if (t66 != -62) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x297 = 1257061U;
	uint64_t x299 = 270526LLU;
	static int8_t x300 = INT8_MIN;

	t67 = (((x297|x298)+x299)/x300);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x301 = 7940957650LLU;
	uint16_t x304 = 426U;
	uint64_t t68 = 3126462871621LLU;

	t68 = (((x301|x302)+x303)/x304);

	if (t68 != 43302216135468430LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x306 = INT32_MIN;
	volatile int8_t x307 = -1;
	int16_t x308 = INT16_MIN;
	int64_t t69 = 56971620LL;

	t69 = (((x305|x306)+x307)/x308);

	if (t69 != 65536LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x314 = INT8_MAX;
	int8_t x315 = INT8_MAX;
	static volatile int32_t t70 = 4023;

	t70 = (((x313|x314)+x315)/x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = INT8_MIN;
	uint16_t x318 = UINT16_MAX;
	int16_t x319 = INT16_MIN;
	int32_t x320 = 974;
	int32_t t71 = -2756030;

	t71 = (((x317|x318)+x319)/x320);

	if (t71 != -33) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x322 = UINT64_MAX;
	volatile uint32_t x323 = UINT32_MAX;

	t72 = (((x321|x322)+x323)/x324);

	if (t72 != 65536LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x325 = 43;
	uint8_t x326 = 2U;
	static volatile uint64_t x327 = 32847445545LLU;
	int64_t x328 = INT64_MAX;

	t73 = (((x325|x326)+x327)/x328);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x329 = INT8_MAX;
	static int64_t x330 = 14LL;
	int32_t x331 = 2395;
	int64_t t74 = -991066LL;

	t74 = (((x329|x330)+x331)/x332);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x334 = 3U;
	int32_t x335 = -549168579;
	volatile int8_t x336 = INT8_MAX;
	volatile int32_t t75 = -12670;

	t75 = (((x333|x334)+x335)/x336);

	if (t75 != -4324162) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x345 = INT32_MAX;
	volatile int64_t x346 = INT64_MIN;
	volatile int64_t x347 = INT64_MAX;
	int32_t x348 = -1;
	int64_t t76 = -2LL;

	t76 = (((x345|x346)+x347)/x348);

	if (t76 != -2147483646LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x350 = INT32_MIN;

	t77 = (((x349|x350)+x351)/x352);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x353 = INT64_MIN;
	uint16_t x355 = 324U;
	int32_t x356 = 46345;
	int64_t t78 = 11LL;

	t78 = (((x353|x354)+x355)/x356);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x357 = UINT32_MAX;
	int16_t x358 = -1;
	uint32_t x359 = 407242700U;

	t79 = (((x357|x358)+x359)/x360);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x361 = INT32_MAX;
	static uint32_t x362 = 10238U;
	static volatile uint16_t x363 = 132U;
	volatile uint16_t x364 = 12U;
	volatile uint32_t t80 = 255056172U;

	t80 = (((x361|x362)+x363)/x364);

	if (t80 != 178956981U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x365 = INT8_MAX;
	int8_t x366 = -1;
	volatile int64_t x367 = 1073LL;
	uint64_t x368 = UINT64_MAX;
	uint64_t t81 = 5761235410898LLU;

	t81 = (((x365|x366)+x367)/x368);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x369 = 61U;
	uint16_t x370 = UINT16_MAX;
	int64_t x371 = -101699000962LL;
	static int8_t x372 = -1;
	volatile int64_t t82 = 105479845842039LL;

	t82 = (((x369|x370)+x371)/x372);

	if (t82 != 101698935427LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x373 = UINT16_MAX;
	uint32_t x374 = 8620U;
	int32_t x375 = -3;
	volatile uint32_t t83 = 9658441U;

	t83 = (((x373|x374)+x375)/x376);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x381 = -3;
	static volatile int64_t x382 = INT64_MAX;
	int32_t x383 = INT32_MAX;
	uint64_t x384 = UINT64_MAX;
	uint64_t t84 = 69721739571691035LLU;

	t84 = (((x381|x382)+x383)/x384);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x385 = INT32_MAX;
	int8_t x386 = INT8_MIN;
	static int8_t x387 = INT8_MIN;
	uint32_t x388 = 34202404U;
	uint32_t t85 = 1001862U;

	t85 = (((x385|x386)+x387)/x388);

	if (t85 != 125U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x390 = 6U;
	int16_t x391 = INT16_MIN;
	volatile int32_t x392 = -1;
	volatile uint32_t t86 = 842U;

	t86 = (((x389|x390)+x391)/x392);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x393 = -1;
	int16_t x394 = INT16_MIN;
	volatile uint32_t x396 = UINT32_MAX;
	uint32_t t87 = 2383743U;

	t87 = (((x393|x394)+x395)/x396);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x397 = -1LL;
	static int8_t x398 = 51;
	volatile int64_t x399 = -1LL;
	uint32_t x400 = 186U;
	static volatile int64_t t88 = 633526LL;

	t88 = (((x397|x398)+x399)/x400);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x401 = -1;
	int32_t x402 = INT32_MIN;
	int32_t x403 = -1;
	volatile uint16_t x404 = 1563U;
	volatile int32_t t89 = 255268252;

	t89 = (((x401|x402)+x403)/x404);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x405 = -1;
	static int8_t x406 = -14;
	static int64_t x407 = -1857251LL;
	int16_t x408 = 1;
	volatile int64_t t90 = -6LL;

	t90 = (((x405|x406)+x407)/x408);

	if (t90 != -1857252LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x409 = INT32_MAX;
	static int8_t x410 = INT8_MIN;
	int64_t x411 = INT64_MAX;

	t91 = (((x409|x410)+x411)/x412);

	if (t91 != 525108519483LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x413 = -1;
	int8_t x414 = -1;
	int16_t x415 = INT16_MAX;
	int16_t x416 = -1;
	int32_t t92 = 224281154;

	t92 = (((x413|x414)+x415)/x416);

	if (t92 != -32766) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x421 = INT32_MAX;
	int8_t x422 = 2;
	int8_t x423 = INT8_MIN;

	t93 = (((x421|x422)+x423)/x424);

	if (t93 != 715827839) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x429 = INT8_MAX;
	volatile uint32_t x430 = UINT32_MAX;
	static uint8_t x431 = 20U;
	volatile uint32_t t94 = 621U;

	t94 = (((x429|x430)+x431)/x432);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x433 = -62;
	int32_t x434 = -1;
	int32_t x435 = 223138;
	int8_t x436 = INT8_MIN;
	int32_t t95 = 0;

	t95 = (((x433|x434)+x435)/x436);

	if (t95 != -1743) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x437 = 4U;
	uint64_t x439 = UINT64_MAX;
	volatile uint64_t t96 = 84449687LLU;

	t96 = (((x437|x438)+x439)/x440);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x441 = INT16_MIN;
	int8_t x442 = 6;
	volatile int8_t x443 = 0;
	static uint32_t x444 = 1574178U;
	uint32_t t97 = 1219U;

	t97 = (((x441|x442)+x443)/x444);

	if (t97 != 2728U) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x445 = INT64_MIN;
	int32_t x446 = INT32_MAX;
	static int32_t x447 = -1;
	static int16_t x448 = INT16_MIN;
	volatile int64_t t98 = 40092761430505LL;

	t98 = (((x445|x446)+x447)/x448);

	if (t98 != 281474976645120LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x449 = INT64_MIN;
	static uint32_t x450 = UINT32_MAX;
	int16_t x451 = INT16_MAX;
	int32_t x452 = 226260769;

	t99 = (((x449|x450)+x451)/x452);

	if (t99 != -40764344934LL) { NG(); } else { ; }
	
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

